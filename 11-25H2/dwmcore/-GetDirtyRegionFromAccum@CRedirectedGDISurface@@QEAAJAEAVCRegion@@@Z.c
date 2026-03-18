/*
 * XREFs of ?GetDirtyRegionFromAccum@CRedirectedGDISurface@@QEAAJAEAVCRegion@@@Z @ 0x1800614F4
 * Callers:
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ @ 0x180104FD0 (-DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ.c)
 * Callees:
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x1800615B8 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRedirectedGDISurface::GetDirtyRegionFromAccum(CRedirectedGDISurface *this, struct CRegion *a2)
{
  signed int v3; // edi
  signed int LastError; // eax
  HGDIOBJ ho; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  ho = 0LL;
  SetLastError(0);
  if ( !(unsigned int)DwmHLSurfGetDirtyRgn(*((_QWORD *)this + 3), 0LL, 0LL, &ho, 0LL, 0LL, 0LL, 0LL, 0LL) )
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    if ( v3 >= 0 )
      v3 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1803D12E8, 4u, v3, 0xD6u, 0LL);
  }
  if ( ho )
  {
    CRegion::SetHRGN(a2, (HRGN)ho);
    DeleteObject(ho);
  }
  return (unsigned int)v3;
}
