/*
 * XREFs of MiConsumeOverCommit @ 0x1404AA12C
 * Callers:
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiConsumeOverCommit(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  _DWORD *v7; // rsi
  volatile LONG *v8; // rcx
  KIRQL v9; // bp
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx

  v6 = 0;
  v7 = a1 + 2111;
  v8 = (volatile LONG *)(a1 + 2111);
  if ( KeGetCurrentIrql() == 2 )
  {
    v9 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v8);
  }
  else
  {
    v9 = ExAcquireSpinLockExclusive(v8);
  }
  v10 = a1[2408];
  v11 = v10 + a2;
  if ( v10 + a2 <= v10 || v11 + a3 < v11 || v11 + a3 > a1[2451] )
  {
    a1[2113] += a2;
    v6 = 1;
  }
  MiReleaseSpinLockExclusive(v7, v9);
  return v6;
}
