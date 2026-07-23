/*
 * XREFs of ExReleaseFastResourceExclusive @ 0x140655050
 * Callers:
 *     DifExReleaseFastResourceExclusiveWrapper @ 0x14061ECB0 (DifExReleaseFastResourceExclusiveWrapper.c)
 * Callees:
 *     ExpReleaseFastResourceExclusive @ 0x14028DCE0 (ExpReleaseFastResourceExclusive.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseFastResourceExclusive(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r10
  __int64 v4; // r11
  unsigned __int64 v5; // r9
  __int64 v6; // rax

  v1 = BugCheckParameter2 + 64;
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v4 = *(_QWORD *)(BugCheckParameter2 + 80);
  v5 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (struct _KTHREAD *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) != CurrentThread )
    KeBugCheckEx(0x1C6u, 9uLL, v1, v5, 0LL);
  LOBYTE(v5) = *(_BYTE *)(BugCheckParameter2 + 101) & 2;
  if ( !(_BYTE)v5 )
  {
    v6 = *(_QWORD *)(BugCheckParameter2 + 88);
    if ( v6 != BugCheckParameter2 )
    {
      if ( v6 )
        KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, BugCheckParameter2 + 64, *(_QWORD *)(BugCheckParameter2 + 88));
    }
  }
  if ( (v4 & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, v1, 0LL, 0LL);
  if ( !(_BYTE)v5 )
    KeBugCheckEx(0x1C6u, 0xBuLL, v1, ((unsigned __int64)(*(_BYTE *)(BugCheckParameter2 + 101) & 2) << 15) | 1, 0LL);
  return ExpReleaseFastResourceExclusive((__int64 *)BugCheckParameter2, 0LL, v1, v5);
}
