/*
 * XREFs of _wil::com_weak_query_CAudioSystemEffectsPropertyChangeNotificationsHandler___&__::_1_::dtor$0 @ 0x140095497
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall wil::com_weak_query_CAudioSystemEffectsPropertyChangeNotificationsHandler______::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(*(__int64 **)(a2 + 64));
  }
  return result;
}
