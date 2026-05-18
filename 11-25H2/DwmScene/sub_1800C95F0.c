/*
 * XREFs of sub_1800C95F0 @ 0x1800C95F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800C95F0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = &std::_Func_impl_no_alloc<_lambda_5efd0f16faa6f6439fdb99826dc3e8ab_,void,std::shared_ptr<Spectre::Engine::Texture>,enum Spectre::Engine::Format,unsigned int>::`vftable';
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 24);
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 40);
  return result;
}
