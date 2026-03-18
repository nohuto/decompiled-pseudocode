/*
 * XREFs of rimPTPPolicyUpdateState @ 0x1401EE420
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x140180E58 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     RIMCmRemoveContactSuppressionReasons @ 0x1400EFB70 (RIMCmRemoveContactSuppressionReasons.c)
 */

__int64 __fastcall rimPTPPolicyUpdateState(__int64 a1, __int64 a2)
{
  char v3; // dl
  __int64 result; // rax

  v3 = 0;
  if ( (*(_DWORD *)(a2 + 8) & 0x200) != 0 )
  {
    result = RIMCmRemoveContactSuppressionReasons(a1, (unsigned int *)a2, 0x200u);
    v3 = 1;
  }
  if ( (*(_DWORD *)(a2 + 8) & 0x800) != 0 )
  {
    RIMCmRemoveContactSuppressionReasons(a1, (unsigned int *)a2, 0x800u);
  }
  else if ( !v3 )
  {
    return result;
  }
  *(_DWORD *)(a2 + 2496) = *(_DWORD *)(a2 + 64);
  *(_QWORD *)(a2 + 2512) = *(_QWORD *)(a2 + 72);
  result = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 2472) = result;
  *(_QWORD *)(a2 + 2488) = result;
  return result;
}
