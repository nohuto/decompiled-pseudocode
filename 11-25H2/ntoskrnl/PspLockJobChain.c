/*
 * XREFs of PspLockJobChain @ 0x1408D83E8
 * Callers:
 *     PspLockJobsAndProcessExclusive @ 0x1408D7E24 (PspLockJobsAndProcessExclusive.c)
 *     PspImplicitAssignProcessToJob @ 0x1408D7F4C (PspImplicitAssignProcessToJob.c)
 *     PspGetMemoryPartitionImplicit @ 0x1408D81A0 (PspGetMemoryPartitionImplicit.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     PspUnlockJobAssignment @ 0x1408D84CC (PspUnlockJobAssignment.c)
 *     PspLockJobAssignment @ 0x1408D8530 (PspLockJobAssignment.c)
 */

BOOLEAN __fastcall PspLockJobChain(__int64 a1, __int64 a2, char a3)
{
  char v5; // bp
  unsigned __int64 v6; // rax
  BOOLEAN result; // al
  unsigned __int64 v8; // rsi
  unsigned __int64 i; // rsi

  if ( a2 )
    --*(_WORD *)(a2 + 486);
  if ( (a3 & 1) != 0 )
  {
    v5 = 1;
  }
  else
  {
    v5 = 0;
    PspLockJobAssignment(a2);
  }
  v6 = *(_QWORD *)(a1 + 1336);
  if ( v6 )
  {
    if ( v6 > 1 )
    {
      ExAcquireResourceExclusiveLite((PERESOURCE)(*(_QWORD *)(a1 + 1312) + 56LL), 1u);
      v8 = *(_QWORD *)(a1 + 1336);
      if ( v8 > 2 )
      {
        for ( i = v8 - 2; i; --i )
          ExAcquireResourceExclusiveLite((PERESOURCE)(*(_QWORD *)(*(_QWORD *)(a1 + 1344) + 8 * i - 8) + 56LL), 1u);
      }
    }
    ExAcquireResourceExclusiveLite((PERESOURCE)(*(_QWORD *)(a1 + 1304) + 56LL), 1u);
  }
  result = ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
  if ( !v5 )
    return PspUnlockJobAssignment(a2);
  return result;
}
