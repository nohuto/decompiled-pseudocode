/*
 * XREFs of MiRemoveSecureEntry @ 0x1402A34A0
 * Callers:
 *     MmUnsecureVirtualMemory @ 0x1408B48C0 (MmUnsecureVirtualMemory.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140A5FDD0 (MiUnmapLockedPagesInUserSpace.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     MiSetVadFlags @ 0x1402A3618 (MiSetVadFlags.c)
 *     MiUnlockVadCore @ 0x1402A3820 (MiUnlockVadCore.c)
 *     MiLockVadCore @ 0x1402A3860 (MiLockVadCore.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x140A14A8C (MiUnsecureVirtualMemoryAgainstWrites.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiRemoveSecureEntry(ULONG_PTR BugCheckParameter2, _QWORD *BugCheckParameter3)
{
  unsigned int v2; // esi
  int v3; // r15d
  _QWORD *v4; // r14
  _KPROCESS *Process; // rbp
  char v8; // al
  unsigned __int64 v9; // rdx
  unsigned __int64 i; // rcx

  v2 = 0;
  v3 = 0;
  v4 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( MmVadEventBlockFixEnabled )
    v8 = MiLockVadCore(BugCheckParameter2, 0LL);
  else
    v8 = MiLockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink);
  for ( i = *(_QWORD *)(BugCheckParameter2 + 56) & 0xFFFFFFFFFFFFFFF0uLL; i; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 80) == 2 && v2 <= 1 )
      ++v2;
    if ( (_QWORD *)i == BugCheckParameter3 )
    {
      v9 = *(_QWORD *)i;
      v3 = 1;
      if ( v4 )
        *v4 = v9;
      else
        *(_QWORD *)(BugCheckParameter2 + 56) = v9 | *(_QWORD *)(BugCheckParameter2 + 56) & 0xFLL;
    }
    if ( v2 > 1 && v3 )
      break;
    v4 = (_QWORD *)i;
  }
  LOBYTE(v9) = v8;
  if ( MmVadEventBlockFixEnabled )
    MiUnlockVadCore(BugCheckParameter2, v9);
  else
    MiUnlockWorkingSetExclusive(&Process[2].ReadyListHead.Blink, v9);
  if ( !v3 )
    KeBugCheckEx(0x1Au, 0x15001uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
  if ( (BugCheckParameter3[1] & 0x10) != 0 )
    MiUnsecureVirtualMemoryAgainstWrites(BugCheckParameter2, BugCheckParameter3[1], BugCheckParameter3[2]);
  if ( v2 == 1 )
    MiSetVadFlags(BugCheckParameter2, 1LL, 0LL);
  ExFreePoolWithTag(BugCheckParameter3, 0);
}
