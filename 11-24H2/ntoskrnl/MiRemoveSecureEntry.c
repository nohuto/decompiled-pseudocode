/*
 * XREFs of MiRemoveSecureEntry @ 0x1404EF6FC
 * Callers:
 *     MmUnsecureVirtualMemory @ 0x140896BF0 (MmUnsecureVirtualMemory.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140A59F24 (MiUnmapLockedPagesInUserSpace.c)
 * Callees:
 *     MiSetVadFlags @ 0x14036049C (MiSetVadFlags.c)
 *     MiLockVadCore @ 0x1403DAE20 (MiLockVadCore.c)
 *     MiUnlockVadCore @ 0x14041D7C0 (MiUnlockVadCore.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x140A133BC (MiUnsecureVirtualMemoryAgainstWrites.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiRemoveSecureEntry(ULONG_PTR BugCheckParameter2, _QWORD *BugCheckParameter3)
{
  unsigned int v4; // esi
  int v5; // ebp
  _QWORD *v6; // r14
  unsigned __int8 v7; // dl
  unsigned __int64 i; // r8
  unsigned __int64 v9; // rcx
  __int64 v10; // r9

  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  v7 = MiLockVadCore(BugCheckParameter2, 0);
  for ( i = *(_QWORD *)(BugCheckParameter2 + 56) & 0xFFFFFFFFFFFFFFF0uLL; i; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 80) == 2 && v4 <= 1 )
      ++v4;
    if ( (_QWORD *)i == BugCheckParameter3 )
    {
      v9 = *(_QWORD *)i;
      v5 = 1;
      if ( v6 )
        *v6 = v9;
      else
        *(_QWORD *)(BugCheckParameter2 + 56) = v9 | *(_QWORD *)(BugCheckParameter2 + 56) & 0xFLL;
    }
    if ( v4 > 1 && v5 )
      break;
    v6 = (_QWORD *)i;
  }
  MiUnlockVadCore(BugCheckParameter2, v7);
  if ( !v5 )
    KeBugCheckEx(0x1Au, 0x15001uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
  if ( (BugCheckParameter3[1] & 0x10) != 0 )
    MiUnsecureVirtualMemoryAgainstWrites(BugCheckParameter2, BugCheckParameter3[1], BugCheckParameter3[2]);
  if ( v4 == 1 )
    MiSetVadFlags(BugCheckParameter2, 1LL, 0LL, v10);
  ExFreePoolWithTag(BugCheckParameter3, 0);
}
