/*
 * XREFs of _lambda_8dedf90f1f70af288e66d072af95fd4f_::_lambda_8dedf90f1f70af288e66d072af95fd4f_ @ 0x1801301B0
 * Callers:
 *     ?DecideVssEffectUsage@EffectPack@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003B694 (-DecideVssEffectUsage@EffectPack@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescript.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_8dedf90f1f70af288e66d072af95fd4f_::_lambda_8dedf90f1f70af288e66d072af95fd4f_(
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
