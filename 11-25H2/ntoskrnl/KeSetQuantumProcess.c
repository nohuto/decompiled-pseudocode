/*
 * XREFs of KeSetQuantumProcess @ 0x14026A954
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x1402691AC (KeSetPriorityAndQuantumProcess.c)
 *     PspApplyJobLimitsToProcess @ 0x1408D8CC0 (PspApplyJobLimitsToProcess.c)
 *     PsChangeQuantumTable @ 0x1409C0FF8 (PsChangeQuantumTable.c)
 * Callees:
 *     KiAcquireProcessLockExclusive @ 0x14026B2B4 (KiAcquireProcessLockExclusive.c)
 *     KiReleaseProcessLockExclusive @ 0x1403AE69C (KiReleaseProcessLockExclusive.c)
 */

void __fastcall KeSetQuantumProcess(__int64 a1, char a2)
{
  __int64 v4; // rdx
  _QWORD *i; // rax
  char v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  if ( *(_BYTE *)(a1 + 145) != a2 )
  {
    KiAcquireProcessLockExclusive(a1, &v6);
    *(_BYTE *)(a1 + 145) = a2;
    for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
      *((_BYTE *)i - 109) = a2;
    LOBYTE(v4) = v6;
    KiReleaseProcessLockExclusive(a1, v4);
  }
}
