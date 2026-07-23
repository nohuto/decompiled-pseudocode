/*
 * XREFs of MiUnlockSystemVa @ 0x1402FC650
 * Callers:
 *     MiSystemFault @ 0x1402FC7E0 (MiSystemFault.c)
 *     MiSynchronizeSystemVa @ 0x1402FDFC8 (MiSynchronizeSystemVa.c)
 *     MmCopyMemory @ 0x1403F3930 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x1403F3CE0 (MiTranslatePageForCopy.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockFaultPageTable @ 0x140241ED0 (MiUnlockFaultPageTable.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
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
