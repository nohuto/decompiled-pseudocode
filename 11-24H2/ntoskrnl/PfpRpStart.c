/*
 * XREFs of PfpRpStart @ 0x1407471A8
 * Callers:
 *     PfInitializeSuperfetch @ 0x140C2C91C (PfInitializeSuperfetch.c)
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
