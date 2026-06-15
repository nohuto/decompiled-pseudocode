/*
 * XREFs of std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_d6992668c4bfc33c09c8caf2c3b97d3f__0_ @ 0x1800F8578
 * Callers:
 *     ?ScanForInstalledEffectPacks@EffectPackConfigurationManager@@AEAAJXZ @ 0x1800F90A4 (-ScanForInstalledEffectPacks@EffectPackConfigurationManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::function_void___cdecl_void__::function_void___cdecl_void____lambda_d6992668c4bfc33c09c8caf2c3b97d3f__0_(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)a1 = off_1801732E8;
  v2 = *a2;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 8) = v2;
  result = a1;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 1);
  *(_QWORD *)(a1 + 56) = a1;
  return result;
}
