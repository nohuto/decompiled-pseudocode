/*
 * XREFs of ?StartSignaling@CRedirectedGDISurface@@QEAAJPEAXAEBU_LUID@@@Z @ 0x1802072EC
 * Callers:
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ @ 0x180026420 (-RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRedirectedGDISurface::StartSignaling(CRedirectedGDISurface *this, void *a2, const struct _LUID *a3)
{
  signed int v6; // ebp
  signed int LastError; // eax

  v6 = 0;
  SetLastError(0);
  if ( !(unsigned int)DwmHLSurfSetSignalOnDirty(*((_QWORD *)this + 3), a2, *a3, 1LL) )
  {
    LastError = GetLastError();
    v6 = LastError;
    if ( LastError > 0 )
      v6 = (unsigned __int16)LastError | 0x80070000;
    if ( v6 >= 0 )
      v6 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803C6578, 2u, v6, 0x100u, 0LL);
  }
  return (unsigned int)v6;
}
