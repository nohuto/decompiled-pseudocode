/*
 * XREFs of ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x1802D44EC
 * Callers:
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x1802CF164 (-EnsureHolographicClient@CHolographicManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AA30 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x18020DD20 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ?Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z @ 0x1802D3EE8 (-Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z.c)
 *     ??0CHolographicClient@@IEAA@PEAVCHolographicInteropTaskQueue@@0@Z @ 0x1802D41F0 (--0CHolographicClient@@IEAA@PEAVCHolographicInteropTaskQueue@@0@Z.c)
 *     ?Initialize@CHolographicClient@@AEAAJXZ @ 0x1802D4AC4 (-Initialize@CHolographicClient@@AEAAJXZ.c)
 */

__int64 __fastcall CHolographicClient::Create(
        struct CHolographicInteropTaskQueue *a1,
        struct CHolographicInteropTaskQueue **a2,
        struct CHolographicClient **a3)
{
  CHolographicClient *v4; // rdi
  int v7; // eax
  struct CHolographicInteropTaskQueue *v8; // rsi
  int v9; // ebx
  CHolographicClient *v10; // rax
  CHolographicClient *v11; // rax
  unsigned int v12; // eax
  struct CHolographicInteropTaskQueue *v14; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  v14 = 0LL;
  v7 = CHolographicInteropTaskQueue::Create((union _SLIST_HEADER **)&v14);
  v8 = v14;
  v9 = v7;
  if ( v7 < 0 )
  {
    v12 = 20;
  }
  else
  {
    v10 = (CHolographicClient *)operator new(0x120uLL);
    if ( !v10 || (v11 = CHolographicClient::CHolographicClient(v10, a1, v8), (v4 = v11) == 0LL) )
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x17u, 0LL);
      goto LABEL_11;
    }
    CMILRefCountImpl::AddReference((CHolographicClient *)((char *)v11 + 8));
    v9 = CHolographicClient::Initialize(v4);
    if ( v9 >= 0 )
    {
      *a2 = v8;
      v8 = 0LL;
      *a3 = v4;
      goto LABEL_11;
    }
    v12 = 26;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v12, 0LL);
  if ( v4 )
    CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v4);
LABEL_11:
  ReleaseInterfaceNoNULL<CPolygon>((__int64)v8);
  return (unsigned int)v9;
}
