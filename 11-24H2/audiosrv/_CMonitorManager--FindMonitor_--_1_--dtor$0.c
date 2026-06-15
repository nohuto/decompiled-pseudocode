/*
 * XREFs of _CMonitorManager::FindMonitor_::_1_::dtor$0 @ 0x180170E69
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtr@UICompositeSystemEffect@@@ATL@@QEAA@XZ @ 0x18005A2AC (--1-$CComPtr@UICompositeSystemEffect@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CMonitorManager::FindMonitor_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return ATL::CComPtr<ICompositeSystemEffect>::~CComPtr<ICompositeSystemEffect>(*(__int64 **)(a2 + 120));
  }
  return result;
}
