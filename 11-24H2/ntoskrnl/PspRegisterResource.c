/*
 * XREFs of PspRegisterResource @ 0x1405E2784
 * Callers:
 *     PsInitializeQuotaSystem @ 0x140C37CA8 (PsInitializeQuotaSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspRegisterResource(int a1, char a2, int a3)
{
  __int64 result; // rax

  PspResourceFlags[8 * a1] = a2;
  dword_140FC7394[2 * a1] = a3;
  if ( (a2 & 2) != 0 )
    result = PspDefaultResourceLimits[a1] & 0xFFFFFF80 | 0x64;
  else
    result = 0xFFFFFFFFLL;
  PspDefaultResourceLimits[a1] = result;
  return result;
}
