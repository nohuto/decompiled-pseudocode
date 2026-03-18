/*
 * XREFs of ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x1801A4240
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180106F10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x1801A43A8 (-SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?GetSurfaceManager@@YAPEAVCSurfaceManager@@XZ @ 0x1801A4510 (-GetSurfaceManager@@YAPEAVCSurfaceManager@@XZ.c)
 *     ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1801A4530 (-GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfa.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::ProcessUpdate(
        CCompositionSurfaceBitmap *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSURFACEBITMAP *a3)
{
  void *v3; // r14
  int v4; // edi
  struct CCompositionSurfaceInfo *v5; // rbx
  __int64 v8; // r8
  struct CSurfaceManager *SurfaceManager; // rax
  int v11; // eax
  unsigned int v12; // [rsp+30h] [rbp-48h] BYREF
  struct CCompositionSurfaceInfo *v13; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+40h] [rbp-38h] BYREF

  v3 = (void *)*((_QWORD *)a3 + 1);
  v4 = 0;
  v5 = 0LL;
  v12 = 0;
  v13 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &PROCESS_COMPOSITION_SURFACE_UPDATE_EVENT_Start,
      (__int64)a3,
      1u,
      &v14);
  if ( !v3 )
    goto LABEL_4;
  SurfaceManager = GetSurfaceManager();
  v11 = CCompositionSurfaceManager::GetOrCreateCompositionSurfaceInfo(
          (struct CSurfaceManager *)((char *)SurfaceManager + 16),
          v3,
          &v13);
  v12 = v11;
  v4 = v11;
  if ( v11 >= 0 )
  {
    v5 = v13;
LABEL_4:
    *((_BYTE *)this + 112) = *((_BYTE *)a3 + 16) != 0;
    *((_BYTE *)this + 113) = *((_BYTE *)a3 + 17) != 0;
    CCompositionSurfaceBitmap::SetSurfaceInfo(this, v5);
    goto LABEL_5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x3Du, 0LL);
  v5 = v13;
LABEL_5:
  TranslateDXGIorD3DErrorInContext(v4, 10, &v12);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &PROCESS_COMPOSITION_SURFACE_UPDATE_EVENT_Stop,
      v8,
      1u,
      &v14);
  if ( v5 )
    (*(void (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)v5 + 16LL))(v5);
  return v12;
}
