/*
 * XREFs of HalpReadExtendedMcaRegistersIntel @ 0x1405413CC
 * Callers:
 *     HalpMcaPopulateErrorData @ 0x14053D48C (HalpMcaPopulateErrorData.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpReadExtendedMcaRegistersIntel(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v5; // ebx^2
  __int64 result; // rax
  unsigned int v8; // ebx
  unsigned int v9; // esi
  __int64 *v10; // r14

  v5 = BYTE2(a1);
  result = guard_dispatch_icall_no_overrides(a3, 378LL);
  if ( (result & 4) != 0 )
  {
    result = 24LL;
    v8 = v5;
    if ( v8 > 0x18 )
      v8 = 24;
    *(_DWORD *)(a4 + 64) = v8;
    if ( v8 > 8 )
    {
      result = guard_dispatch_icall_no_overrides(a3, 392LL);
      v9 = 0;
      if ( result )
      {
        v10 = (__int64 *)(a4 + 72);
        do
        {
          result = guard_dispatch_icall_no_overrides(a3, v9 + 384);
          ++v9;
          *v10++ = result;
        }
        while ( v9 < v8 );
      }
    }
  }
  return result;
}
