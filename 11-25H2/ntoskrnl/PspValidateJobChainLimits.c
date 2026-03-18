/*
 * XREFs of PspValidateJobChainLimits @ 0x1408D872C
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x1408D7F4C (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140A0E960 (PspAssignProcessToJob.c)
 * Callees:
 *     PspValidateJobAssignmentProcessLimits @ 0x1408D8794 (PspValidateJobAssignmentProcessLimits.c)
 */

__int64 __fastcall PspValidateJobChainLimits(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  BOOL v7; // edi
  __int64 result; // rax

  v7 = (a4 & 0x8000) == 0;
  while ( a1 != a2 )
  {
    result = PspValidateJobAssignmentProcessLimits(a1, a3, v7);
    if ( (int)result < 0 )
      return result;
    a1 = *(_QWORD *)(a1 + 1304);
  }
  return 0LL;
}
