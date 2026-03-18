/*
 * XREFs of ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x18028F00C
 * Callers:
 *     ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x1801AA110 (-EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x1800781CC (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x1800C3F90 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180142B50 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18028F1B0 (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 */

__int64 __fastcall CMagnifierRenderTarget::EnsureSharedRenderTargets(CMagnifierRenderTarget *this)
{
  unsigned int v1; // ebx
  int v2; // edi
  unsigned int i; // r14d
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // r8d
  int v8; // eax
  int v9; // r9d
  unsigned int v10; // eax
  unsigned int v12; // [rsp+50h] [rbp+20h] BYREF
  struct IRenderTargetBitmap *v13; // [rsp+58h] [rbp+28h] BYREF

  v1 = 0;
  v2 = 0;
  v13 = 0LL;
  v12 = 0;
  if ( *((_DWORD *)this + 684) )
  {
    for ( i = 0; i < *((_DWORD *)this + 684); ++i )
    {
      v5 = CMagnifierRenderTarget::OpenSharedSurfaceRenderTarget(
             this,
             *((void **)this + 4 * i + 344),
             *(struct _LUID *)((char *)this + 32 * i + 2760),
             *((HMONITOR *)this + 4 * i + 346),
             &v13);
      v12 = v5;
      v1 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ECF8, 2u, v5, 0x16Eu, 0LL);
        v2 = v1;
        goto LABEL_15;
      }
      v6 = *((_DWORD *)this + 666);
      v7 = v6 + 1;
      if ( v6 + 1 < v6 )
      {
        v2 = -2147024362;
        v10 = 181;
        v1 = -2147024362;
        v9 = -2147024362;
        goto LABEL_12;
      }
      v2 = 0;
      if ( v7 > *((_DWORD *)this + 665) )
      {
        v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 2640, 8, 1, &v13);
        v2 = v8;
        v1 = v8;
        if ( v8 < 0 )
        {
          v9 = v8;
          v10 = 192;
LABEL_12:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v10, 0LL);
          v12 = v1;
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ECF8, 2u, v2, 0x171u, 0LL);
          goto LABEL_15;
        }
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 330) + 8LL * v6) = v13;
        *((_DWORD *)this + 666) = v7;
      }
      v13 = 0LL;
      v1 = v2;
      v12 = v2;
    }
    CTargetDirtyBase<8>::SetFullDirty((__int64)this + 320);
  }
LABEL_15:
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v13);
  if ( v2 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v1, 7, &v12);
    return v12;
  }
  return v1;
}
