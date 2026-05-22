/*
 * XREFs of _Microsoft::WRL::Details::Make_InputSite_gsl::span_InputSiteId__1__&_unsigned_long_&_InputSiteManager____::_1_::dtor$3 @ 0x1801D1778
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VInputSiteManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800746F0 (--1-$ComPtr@VInputSiteManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_InputSite_gsl::span_InputSiteId__1____unsigned_long___InputSiteManager____::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 32) & 2);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    return Microsoft::WRL::ComPtr<InputSiteManager>::~ComPtr<InputSiteManager>((_QWORD *)(a2 + 64));
  }
  return result;
}
