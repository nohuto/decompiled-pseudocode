/*
 * XREFs of ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x1802CF164
 * Callers:
 *     ?AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z @ 0x1802CE7FC (-AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AA30 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x18020DD20 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1802126E4 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?Instance@CompositorTracing@@KAPEAV1@XZ @ 0x18021279C (-Instance@CompositorTracing@@KAPEAV1@XZ.c)
 *     ?HolographicClientCreated_@CompositorTracing@@QEAAXXZ @ 0x1802CF66C (-HolographicClientCreated_@CompositorTracing@@QEAAXXZ.c)
 *     ?Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z @ 0x1802D3EE8 (-Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x1802D44EC (-Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHolographicManager::EnsureHolographicClient(CHolographicManager *this)
{
  struct CHolographicClient *v1; // rsi
  struct CHolographicInteropTaskQueue *v2; // r14
  struct CHolographicInteropTaskQueue *v3; // rdi
  unsigned int v4; // ebx
  int v6; // eax
  int v7; // eax
  CompositorTracing *v8; // rcx
  struct CHolographicClient *v10; // [rsp+60h] [rbp+30h] BYREF
  struct CHolographicInteropTaskQueue *v11; // [rsp+68h] [rbp+38h] BYREF
  struct CHolographicInteropTaskQueue *v12; // [rsp+70h] [rbp+40h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v10 = 0LL;
  v4 = 0;
  v11 = 0LL;
  v12 = 0LL;
  if ( !*((_QWORD *)this + 5) )
  {
    v6 = CHolographicInteropTaskQueue::Create(&v12);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x2E1u, 0LL);
      v3 = v12;
    }
    else
    {
      v3 = v12;
      v7 = CHolographicClient::Create(v12, &v11, &v10);
      v4 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x2E2u, 0LL);
        v1 = v10;
        v2 = v11;
      }
      else
      {
        v1 = v10;
        *((_QWORD *)this + 5) = v10;
        CMILRefCountImpl::AddReference((struct CHolographicClient *)((char *)v1 + 8));
        *((_QWORD *)this + 6) = v3;
        (**(void (__fastcall ***)(struct CHolographicInteropTaskQueue *))v3)(v3);
        v2 = v11;
        *((_QWORD *)this + 7) = v11;
        (**(void (__fastcall ***)(struct CHolographicInteropTaskQueue *))v2)(v2);
        if ( CompositorTracing::IsEnabled() )
        {
          CompositorTracing::Instance();
          CompositorTracing::HolographicClientCreated_(v8);
        }
      }
    }
  }
  ReleaseInterfaceNoNULL<CPolygon>((__int64)v2);
  ReleaseInterfaceNoNULL<CPolygon>((__int64)v3);
  if ( v1 )
    CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v1);
  return v4;
}
