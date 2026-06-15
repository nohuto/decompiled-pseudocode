/*
 * XREFs of _lambda_918e4e49d297a413fd0aa649d8f0eebd_::_lambda_918e4e49d297a413fd0aa649d8f0eebd_ @ 0x1800B6F88
 * Callers:
 *     ?OnMfxDiscoveryEffectsChanged@CAudioResourceManager@@UEAAJPEBGU_GUID@@@Z @ 0x1800BF3B0 (-OnMfxDiscoveryEffectsChanged@CAudioResourceManager@@UEAAJPEBGU_GUID@@@Z.c)
 * Callees:
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180060820 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 */

__int64 __fastcall lambda_918e4e49d297a413fd0aa649d8f0eebd_::_lambda_918e4e49d297a413fd0aa649d8f0eebd_(
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
