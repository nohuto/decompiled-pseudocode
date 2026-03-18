/*
 * XREFs of MiFreeUnusedPfnPages @ 0x140661270
 * Callers:
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 * Callees:
 *     KeGenericCallDpcEx @ 0x140417AB0 (KeGenericCallDpcEx.c)
 *     MiLockDynamicMemoryExclusive @ 0x1406622A4 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x140662E08 (MiUnlockDynamicMemoryExclusive.c)
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
