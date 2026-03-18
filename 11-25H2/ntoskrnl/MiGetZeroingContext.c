/*
 * XREFs of MiGetZeroingContext @ 0x140433E30
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020F1F0 (MiBackgroundZeroLocalPages.c)
 *     MiTryZeroMemory @ 0x140210860 (MiTryZeroMemory.c)
 *     MiZeroVaToActiveEntry @ 0x140433DA8 (MiZeroVaToActiveEntry.c)
 *     MiMirrorDiscardTreePageContents @ 0x1404F2BB8 (MiMirrorDiscardTreePageContents.c)
 *     MiFailInProgressZeroing @ 0x140683FC0 (MiFailInProgressZeroing.c)
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
