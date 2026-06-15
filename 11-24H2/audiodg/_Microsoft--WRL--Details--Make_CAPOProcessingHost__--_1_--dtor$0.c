/*
 * XREFs of _Microsoft::WRL::Details::Make_CAPOProcessingHost__::_1_::dtor$0 @ 0x1400938C7
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCAPOProcessingHost@@@WRL@Microsoft@@QEAA@XZ @ 0x14004A014 (--1-$ComPtr@VCAPOProcessingHost@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_CAPOProcessingHost__::_1_::dtor_0(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<CAPOProcessingHost>::~ComPtr<CAPOProcessingHost>(*(_QWORD **)(a2 + 80));
  }
  return result;
}
