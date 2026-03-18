/*
 * XREFs of MiUnlockSystemVa @ 0x1402BB200
 * Callers:
 *     MiSynchronizeSystemVa @ 0x1402197A8 (MiSynchronizeSystemVa.c)
 *     MmCopyMemory @ 0x140378030 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x1403783E0 (MiTranslatePageForCopy.c)
 *     MiSystemFault @ 0x1403E1EBC (MiSystemFault.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiUnlockFaultPageTable @ 0x1402B9F30 (MiUnlockFaultPageTable.c)
 */

void __fastcall MiUnlockSystemVa(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  unsigned __int8 v3; // dl

  v1 = *(_QWORD *)(a1 + 24);
  v2 = a1 + 24;
  if ( v1 )
  {
    MiUnlockFaultPageTable((__int64 *)(a1 + 24));
    v3 = *(_BYTE *)(v2 + 12);
    if ( (*(_BYTE *)(v2 + 13) & 1) != 0 )
    {
      MiUnlockWorkingSetExclusive(v1, v3);
      *(_QWORD *)v2 = 0LL;
    }
    else
    {
      MiUnlockWorkingSetShared(v1, v3);
      *(_QWORD *)v2 = 0LL;
    }
  }
}
