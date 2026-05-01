/*
 * XREFs of ??$make_unique_nothrow@$$BY0A@G@wil@@YA?AV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@wistd@@@wistd@@_K@Z @ 0x18031A4F8
 * Callers:
 *     ?GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVString@Internal@Windows@@@Z @ 0x1800A8DE4 (-GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVS.c)
 *     ?GetGlobalStringFromGameConfigStore@IsGameManager@@AEAAJW4GlobalProperty_t@ExecutionModel@@PEAVString@Internal@Windows@@@Z @ 0x1800A9774 (-GetGlobalStringFromGameConfigStore@IsGameManager@@AEAAJW4GlobalProperty_t@ExecutionModel@@PEAVS.c)
 * Callees:
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D50F8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall wil::make_unique_nothrow<unsigned short [0]>(_QWORD *a1, unsigned __int64 a2)
{
  size_t v3; // rsi
  void *v4; // rax
  void *v5; // rbx
  _QWORD *result; // rax

  v3 = 2 * a2;
  if ( !is_mul_ok(a2, 2uLL) )
    v3 = -1LL;
  v4 = operator new[](v3, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
    memset_0(v4, 0, v3);
  else
    v5 = 0LL;
  result = a1;
  *a1 = v5;
  return result;
}
