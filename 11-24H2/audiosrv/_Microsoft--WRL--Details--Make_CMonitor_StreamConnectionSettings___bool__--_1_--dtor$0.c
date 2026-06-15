/*
 * XREFs of _Microsoft::WRL::Details::Make_CMonitor_StreamConnectionSettings___bool__::_1_::dtor$0 @ 0x180170BBC
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCMonitor@@@WRL@Microsoft@@QEAA@XZ @ 0x180117380 (--1-$ComPtr@VCMonitor@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_CMonitor_StreamConnectionSettings___bool__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<CMonitor>::~ComPtr<CMonitor>(*(_QWORD **)(a2 + 80));
  }
  return result;
}
