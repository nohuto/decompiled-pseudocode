/*
 * XREFs of ExReleaseDisownedFastResource @ 0x1402F19C0
 * Callers:
 *     DifExReleaseDisownedFastResourceWrapper @ 0x14061E880 (DifExReleaseDisownedFastResourceWrapper.c)
 * Callees:
 *     ExpReleaseDisownedFastResourceShared @ 0x1402F1AC8 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1402F1C00 (ExpReleaseDisownedFastResourceExclusive.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseDisownedFastResource(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r8

  if ( (*(_QWORD *)BugCheckParameter2 & 1) != 0 )
    BugCheckParameter3 = BugCheckParameter2 + 64;
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter3 + 37) & 2) == 0 && *(_QWORD *)(BugCheckParameter3 + 24) != BugCheckParameter2 )
    KeBugCheckEx(0x1C6u, 0xCuLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 24));
  if ( (*(_BYTE *)(BugCheckParameter3 + 16) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 0xDuLL, BugCheckParameter3, 0LL, 0LL);
  if ( (*(_QWORD *)BugCheckParameter2 & 1) != 0 )
    return ExpReleaseDisownedFastResourceExclusive(BugCheckParameter2, BugCheckParameter3, CurrentThread);
  else
    return ExpReleaseDisownedFastResourceShared(BugCheckParameter2, BugCheckParameter3, CurrentThread);
}
