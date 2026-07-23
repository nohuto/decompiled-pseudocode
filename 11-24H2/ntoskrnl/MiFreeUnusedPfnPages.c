/*
 * XREFs of MiFreeUnusedPfnPages @ 0x14066DF80
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     KeGenericCallDpcEx @ 0x140270AE8 (KeGenericCallDpcEx.c)
 *     MiLockDynamicMemoryExclusive @ 0x14066EFB8 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14066FB1C (MiUnlockDynamicMemoryExclusive.c)
 */

__int64 __fastcall MiFreeUnusedPfnPages(ULONG *a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  ULONG *v2; // rsi
  _BYTE *v4; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  if ( !a1 )
    v2 = &MiSystemPartition;
  MiLockDynamicMemoryExclusive(v2, CurrentThread);
  v4 = v2 + 51;
  if ( a1 )
    goto LABEL_6;
  if ( !*v4 )
  {
    *v4 = 1;
LABEL_6:
    KeGenericCallDpcEx((__int64)MiFreeUnusedPfnPagesDpc, 0LL);
    *((_QWORD *)v2 + 9) = 0LL;
    *v4 = 0;
  }
  return MiUnlockDynamicMemoryExclusive(v2, CurrentThread);
}
