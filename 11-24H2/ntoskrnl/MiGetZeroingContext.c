/*
 * XREFs of MiGetZeroingContext @ 0x14042DCB0
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020A480 (MiBackgroundZeroLocalPages.c)
 *     MiTryZeroMemory @ 0x14020BD20 (MiTryZeroMemory.c)
 *     MiZeroVaToActiveEntry @ 0x14042DC28 (MiZeroVaToActiveEntry.c)
 *     MiMirrorDiscardTreePageContents @ 0x1404F54BC (MiMirrorDiscardTreePageContents.c)
 *     MiFailInProgressZeroing @ 0x14068F7F0 (MiFailInProgressZeroing.c)
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
