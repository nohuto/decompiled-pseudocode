/*
 * XREFs of _lambda_02f5f1fbcf15b576b00898c5b7a1de2a_::_lambda_02f5f1fbcf15b576b00898c5b7a1de2a_ @ 0x1800B6384
 * Callers:
 *     ?OnMfxDiscoveryEffectsChanged@CAudioResourceManager@@UEAAJPEBGU_GUID@@@Z @ 0x1800BE4C0 (-OnMfxDiscoveryEffectsChanged@CAudioResourceManager@@UEAAJPEBGU_GUID@@@Z.c)
 * Callees:
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180052E14 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 */

__int64 __fastcall lambda_02f5f1fbcf15b576b00898c5b7a1de2a_::_lambda_02f5f1fbcf15b576b00898c5b7a1de2a_(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  _OWORD *v3; // r9
  __int64 v4; // r10
  __int64 result; // rax

  *a1 = a2;
  std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(a1 + 1, a3);
  result = v4;
  *(_OWORD *)(v4 + 24) = *v3;
  return result;
}
