/*
 * XREFs of MiGetZeroingContext @ 0x14041F9E0
 * Callers:
 *     MiTryZeroMemory @ 0x140331A60 (MiTryZeroMemory.c)
 *     MiBackgroundZeroLocalPages @ 0x140332260 (MiBackgroundZeroLocalPages.c)
 *     MiZeroVaToActiveEntry @ 0x14041F958 (MiZeroVaToActiveEntry.c)
 *     MiMirrorDiscardTreePageContents @ 0x1404F2DBC (MiMirrorDiscardTreePageContents.c)
 *     MiFailInProgressZeroing @ 0x1406908C0 (MiFailInProgressZeroing.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetZeroingContext(__int64 a1)
{
  __int64 v2; // rax

  if ( !*(_DWORD *)(a1 + 320) && !*(_BYTE *)(a1 + 326) )
  {
    v2 = a1;
    if ( !*(_BYTE *)(a1 + 324) )
      v2 = *(_QWORD *)(a1 + 584);
    if ( v2 )
      return v2;
  }
  return a1;
}
