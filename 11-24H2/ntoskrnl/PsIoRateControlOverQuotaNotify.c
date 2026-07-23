/*
 * XREFs of PsIoRateControlOverQuotaNotify @ 0x14049148C
 * Callers:
 *     IoNotifyQuotaState @ 0x1404913C0 (IoNotifyQuotaState.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall PsIoRateControlOverQuotaNotify(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int64 v9; // rdi
  KIRQL v10; // dl
  __int64 v11; // rcx

  if ( a5 )
    v9 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  else
    v9 = 0LL;
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1688));
  if ( a4 != *(_DWORD *)(a1 + 1732) )
  {
    v11 = *(_QWORD *)(a1 + 1712);
    ++*(_DWORD *)(a1 + 1720);
    *(_QWORD *)(a1 + 1712) = 2 * v11;
  }
  *(_DWORD *)(a1 + 1728) = a3;
  *(_QWORD *)(a1 + 1712) |= a2 != 0;
  if ( a5 )
    *(_QWORD *)(a1 + 1736) = v9;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1688), v10);
}
