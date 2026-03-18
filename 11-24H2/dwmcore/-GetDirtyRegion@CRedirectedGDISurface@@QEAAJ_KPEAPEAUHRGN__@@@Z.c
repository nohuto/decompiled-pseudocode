/*
 * XREFs of ?GetDirtyRegion@CRedirectedGDISurface@@QEAAJ_KPEAPEAUHRGN__@@@Z @ 0x180027530
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18002F5A0 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRedirectedGDISurface::GetDirtyRegion(CRedirectedGDISurface *this, __int64 a2, HRGN *a3)
{
  signed int v6; // ebp
  signed int LastError; // eax

  v6 = 0;
  SetLastError(0);
  if ( !(unsigned int)DwmHLSurfGetDirtyRgn(*((_QWORD *)this + 3), a2, a3, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL) )
  {
    LastError = GetLastError();
    v6 = LastError;
    if ( LastError > 0 )
      v6 = (unsigned __int16)LastError | 0x80070000;
    if ( v6 >= 0 )
      v6 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1803C6568, 4u, v6, 0xBDu, 0LL);
  }
  return (unsigned int)v6;
}
