/*
 * XREFs of CarGetDriverInfoFromDriverName @ 0x140609E80
 * Callers:
 *     CarInitializeTelemetryData @ 0x14060ABE0 (CarInitializeTelemetryData.c)
 * Callees:
 *     wcsncmp @ 0x1404FD850 (wcsncmp.c)
 *     CarEtwCopyDriverName @ 0x14060D8EC (CarEtwCopyDriverName.c)
 */

void __fastcall CarGetDriverInfoFromDriverName(wchar_t *Str2, __int64 a2)
{
  __int64 i; // rbx

  if ( Str2 && a2 )
  {
    CarEtwCopyDriverName(a2 + 4, Str2, 32LL);
    for ( i = CarDriverInfo; i; i = *(_QWORD *)i )
    {
      if ( !wcsncmp((const wchar_t *)(i + 8), Str2, 0x20uLL) )
      {
        *(_QWORD *)(a2 + 72) = *(_QWORD *)(i + 72);
        *(_DWORD *)(a2 + 80) = *(_DWORD *)(i + 80);
        *(_DWORD *)(a2 + 68) = *(_DWORD *)(i + 88);
        return;
      }
    }
  }
}
