/*
 * XREFs of ExReleaseDisownedFastResource @ 0x1403D7EE0
 * Callers:
 *     DifExReleaseDisownedFastResourceWrapper @ 0x1406202C0 (DifExReleaseDisownedFastResourceWrapper.c)
 * Callees:
 *     ExpReleaseDisownedFastResourceShared @ 0x1403D7FE8 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1403D8120 (ExpReleaseDisownedFastResourceExclusive.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
