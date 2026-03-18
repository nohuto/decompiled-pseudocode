/*
 * XREFs of HalpReadExtendedMcaRegistersIntel @ 0x140543A7C
 * Callers:
 *     HalpMcaPopulateErrorData @ 0x14053FB8C (HalpMcaPopulateErrorData.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpReadExtendedMcaRegistersIntel(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v5; // ebx^2
  __int64 result; // rax
  __int64 v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // r9
  unsigned int v11; // esi
  __int64 *v12; // r14

  v5 = BYTE2(a1);
  result = guard_dispatch_icall_no_overrides(a3, 378LL, 0LL, a4);
  if ( (result & 4) != 0 )
  {
    result = 24LL;
    v9 = v5;
    if ( v9 > 0x18 )
      v9 = 24;
    *(_DWORD *)(a4 + 64) = v9;
    if ( v9 > 8 )
    {
      result = guard_dispatch_icall_no_overrides(a3, 392LL, 0LL, v8);
      v11 = 0;
      if ( result )
      {
        v12 = (__int64 *)(a4 + 72);
        do
        {
          result = guard_dispatch_icall_no_overrides(a3, v11 + 384, 0LL, v10);
          ++v11;
          *v12++ = result;
        }
        while ( v11 < v9 );
      }
    }
  }
  return result;
}
