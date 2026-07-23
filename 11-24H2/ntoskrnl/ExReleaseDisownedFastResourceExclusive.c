/*
 * XREFs of ExReleaseDisownedFastResourceExclusive @ 0x140654E30
 * Callers:
 *     DifExReleaseDisownedFastResourceExclusiveWrapper @ 0x14061E5A0 (DifExReleaseDisownedFastResourceExclusiveWrapper.c)
 * Callees:
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1402F1C00 (ExpReleaseDisownedFastResourceExclusive.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

LONG_PTR __fastcall ExReleaseDisownedFastResourceExclusive(_BYTE *BugCheckParameter2)
{
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r8
  char v3; // al

  if ( (BugCheckParameter2[26] & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v3 = BugCheckParameter2[101];
  if ( (v3 & 2) == 0 )
    KeBugCheckEx(0x1C6u, 0xBuLL, (ULONG_PTR)(BugCheckParameter2 + 64), ((unsigned __int64)(v3 & 2) << 15) | 1, 0LL);
  if ( (BugCheckParameter2[80] & 1) == 0 )
    KeBugCheckEx(0x1C6u, 0xDuLL, (ULONG_PTR)(BugCheckParameter2 + 64), 0LL, 0LL);
  return ExpReleaseDisownedFastResourceExclusive((__int64)BugCheckParameter2, (__int64)(BugCheckParameter2 + 64));
}
