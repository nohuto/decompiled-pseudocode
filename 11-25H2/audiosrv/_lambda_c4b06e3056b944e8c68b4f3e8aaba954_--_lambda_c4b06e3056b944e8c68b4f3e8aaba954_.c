/*
 * XREFs of _lambda_c4b06e3056b944e8c68b4f3e8aaba954_::_lambda_c4b06e3056b944e8c68b4f3e8aaba954_ @ 0x1801280EC
 * Callers:
 *     ?DecideVssEffectUsage@EffectPack@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003AA30 (-DecideVssEffectUsage@EffectPack@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescript.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_c4b06e3056b944e8c68b4f3e8aaba954_::_lambda_c4b06e3056b944e8c68b4f3e8aaba954_(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = *a3;
  result = a1;
  *(_QWORD *)a1 = a2;
  return result;
}
