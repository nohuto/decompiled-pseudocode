/*
 * XREFs of MiUnlockSystemVa @ 0x1402E1BA0
 * Callers:
 *     MiSystemFault @ 0x140229570 (MiSystemFault.c)
 *     MiSynchronizeSystemVa @ 0x14022AD58 (MiSynchronizeSystemVa.c)
 *     MmCopyMemory @ 0x140395E40 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x1403961F0 (MiTranslatePageForCopy.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlockFaultPageTable @ 0x1402E05F0 (MiUnlockFaultPageTable.c)
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
