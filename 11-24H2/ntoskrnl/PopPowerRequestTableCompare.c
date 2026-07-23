/*
 * XREFs of PopPowerRequestTableCompare @ 0x140A35630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPowerRequestTableCompare(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax
  int v5; // edx

  v3 = *(_DWORD *)(a2 + 8);
  result = 0LL;
  v5 = *(_DWORD *)(a3 + 8);
  if ( v3 >= v5 )
  {
    LOBYTE(result) = v3 <= v5;
    return (unsigned int)(result + 1);
  }
  return result;
}
