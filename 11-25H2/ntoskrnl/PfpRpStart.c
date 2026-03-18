/*
 * XREFs of PfpRpStart @ 0x14073B188
 * Callers:
 *     PfInitializeSuperfetch @ 0x140C1B81C (PfInitializeSuperfetch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpRpStart(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedExchange64((volatile __int64 *)(a1 + 136), 0LL);
  *(_DWORD *)(a1 + 152) |= 1u;
  return result;
}
