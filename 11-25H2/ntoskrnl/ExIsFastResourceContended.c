/*
 * XREFs of ExIsFastResourceContended @ 0x14064A7C0
 * Callers:
 *     DifExIsFastResourceContendedWrapper @ 0x140613260 (DifExIsFastResourceContendedWrapper.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

bool __fastcall ExIsFastResourceContended(ULONG_PTR BugCheckParameter2)
{
  unsigned __int8 CurrentIrql; // al

  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  return *(_DWORD *)(BugCheckParameter2 + 56) || *(_QWORD *)(BugCheckParameter2 + 16);
}
