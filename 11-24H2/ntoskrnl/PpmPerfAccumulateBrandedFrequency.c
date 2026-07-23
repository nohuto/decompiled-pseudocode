/*
 * XREFs of PpmPerfAccumulateBrandedFrequency @ 0x14074DDE8
 * Callers:
 *     PpmPerfGetBrandedFrequency @ 0x140AB6C38 (PpmPerfGetBrandedFrequency.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfAccumulateBrandedFrequency(unsigned int a1, _DWORD *a2)
{
  __int64 Prcb; // rax
  __int64 v4; // rcx
  __int64 result; // rax

  Prcb = KeGetPrcb(a1);
  v4 = *(_QWORD *)(Prcb + 35248);
  if ( v4 )
    result = *(unsigned int *)(v4 + 448);
  else
    result = *(unsigned int *)(Prcb + 68);
  if ( a2[1] < (unsigned int)result )
    a2[1] = result;
  *a2 = 1;
  return result;
}
