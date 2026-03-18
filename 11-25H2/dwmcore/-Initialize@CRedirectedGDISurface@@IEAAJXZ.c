/*
 * XREFs of ?Initialize@CRedirectedGDISurface@@IEAAJXZ @ 0x180102A80
 * Callers:
 *     ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x18010291C (-Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@.c)
 * Callees:
 *     McTemplateU0xx_EventWriteTransfer @ 0x1801009B4 (McTemplateU0xx_EventWriteTransfer.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180142B50 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 */

__int64 __fastcall CRedirectedGDISurface::Initialize(CRedirectedGDISurface *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rcx
  signed int LastError; // eax
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)this + 3);
  v7 = 0;
  if ( (unsigned int)DwmHLSurfOpenCompositorRef(v3) )
  {
    *((_BYTE *)this + 40) = 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0xx_EventWriteTransfer(
        v4,
        &EVTDESC_PROCESS_GDISPRITE_LOGICALSURFACE_ASSOCIATION,
        *((_QWORD *)this + 4),
        *((_QWORD *)this + 3));
  }
  else
  {
    LastError = GetLastError();
    if ( LastError <= 0 )
    {
      v2 = LastError;
      v7 = LastError;
    }
    else
    {
      v2 = (unsigned __int16)LastError | 0x80070000;
      v7 = v2;
    }
  }
  TranslateDXGIorD3DErrorInContext(v2, 10LL, &v7);
  return v7;
}
