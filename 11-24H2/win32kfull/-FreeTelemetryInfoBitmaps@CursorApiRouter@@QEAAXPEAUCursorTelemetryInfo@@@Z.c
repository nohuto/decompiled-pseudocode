/*
 * XREFs of ?FreeTelemetryInfoBitmaps@CursorApiRouter@@QEAAXPEAUCursorTelemetryInfo@@@Z @ 0x1402D9ED8
 * Callers:
 *     NtUserGetDwmCursorShape @ 0x140295E40 (NtUserGetDwmCursorShape.c)
 * Callees:
 *     <none>
 */

void __fastcall CursorApiRouter::FreeTelemetryInfoBitmaps(CursorApiRouter *this, struct CursorTelemetryInfo *a2)
{
  void *v2; // rcx
  void *v4; // rcx

  v2 = (void *)*((_QWORD *)a2 + 27);
  if ( v2 )
  {
    Win32FreePool(v2);
    *((_QWORD *)a2 + 27) = 0LL;
    *((_DWORD *)a2 + 56) = 0;
  }
  v4 = (void *)*((_QWORD *)a2 + 21);
  if ( v4 )
  {
    Win32FreePool(v4);
    *((_QWORD *)a2 + 21) = 0LL;
    *((_DWORD *)a2 + 44) = 0;
  }
}
