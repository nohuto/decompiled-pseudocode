/*
 * XREFs of KeSetQuantumProcess @ 0x140447788
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x1404470CC (KeSetPriorityAndQuantumProcess.c)
 *     PspApplyJobLimitsToProcess @ 0x1408D873C (PspApplyJobLimitsToProcess.c)
 *     PsChangeQuantumTable @ 0x140A261A0 (PsChangeQuantumTable.c)
 * Callees:
 *     KiReleaseProcessLockExclusive @ 0x1403A2318 (KiReleaseProcessLockExclusive.c)
 *     KiAcquireProcessLockExclusive @ 0x1403A2370 (KiAcquireProcessLockExclusive.c)
 */

void __fastcall KeSetQuantumProcess(__int64 a1, char a2)
{
  __int64 v4; // rdx
  _QWORD *i; // rax
  unsigned __int8 v6; // [rsp+38h] [rbp+10h] BYREF

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
