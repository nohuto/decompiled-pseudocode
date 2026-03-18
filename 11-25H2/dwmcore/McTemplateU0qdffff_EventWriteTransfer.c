/*
 * XREFs of McTemplateU0qdffff_EventWriteTransfer @ 0x1800C6660
 * Callers:
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800C7D98 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1802D9AF4 (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@IIPEAVIRender.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0qdffff_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  int v9; // [rsp+30h] [rbp-59h] BYREF
  int v10; // [rsp+38h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-49h] BYREF
  int *v12; // [rsp+50h] [rbp-39h]
  __int64 v13; // [rsp+58h] [rbp-31h]
  int *v14; // [rsp+60h] [rbp-29h]
  __int64 v15; // [rsp+68h] [rbp-21h]
  char *v16; // [rsp+70h] [rbp-19h]
  __int64 v17; // [rsp+78h] [rbp-11h]
  char *v18; // [rsp+80h] [rbp-9h]
  __int64 v19; // [rsp+88h] [rbp-1h]
  char *v20; // [rsp+90h] [rbp+7h]
  __int64 v21; // [rsp+98h] [rbp+Fh]
  char *v22; // [rsp+A0h] [rbp+17h]
  __int64 v23; // [rsp+A8h] [rbp+1Fh]

  v13 = 4LL;
  v10 = 0;
  v12 = &v9;
  v9 = 0;
  v14 = &v10;
  v15 = 4LL;
  v16 = &a5;
  v17 = 4LL;
  v18 = &a6;
  v20 = &a7;
  v22 = &a8;
  v19 = 4LL;
  v21 = 4LL;
  v23 = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_ETWGUID_DIRTYREGIONEVENT,
           a3,
           7u,
           &v11);
}
