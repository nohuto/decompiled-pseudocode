/*
 * XREFs of ExDeleteFastResource @ 0x1403C39D0
 * Callers:
 *     <none>
 * Callees:
 *     ExpIsFastResourceOwned @ 0x1403C3A60 (ExpIsFastResourceOwned.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall ExDeleteFastResource(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v3; // rcx
  __int64 result; // rax

  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( (unsigned __int8)ExpIsFastResourceOwned(BugCheckParameter2, a2) )
    KeBugCheckEx(0x1C6u, 4uLL, v3, 0LL, 0LL);
  result = 65470LL;
  *(_WORD *)(v3 + 26) &= 0xFFBEu;
  return result;
}
