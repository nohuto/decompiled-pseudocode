/*
 * XREFs of ??1?$ComPtr@VCMonitor@@@WRL@Microsoft@@QEAA@XZ @ 0x18010F4B4
 * Callers:
 *     _Microsoft::WRL::Details::Make_CMonitor_StreamConnectionSettings___bool__::_1_::dtor$0 @ 0x18016761A (_Microsoft--WRL--Details--Make_CMonitor_StreamConnectionSettings___bool__--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<CMonitor>::~ComPtr<CMonitor>(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
