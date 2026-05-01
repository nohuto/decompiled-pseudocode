/*
 * XREFs of ??1CDetectSwitchReentrancy@CSwitchController@@QEAA@XZ @ 0x1802CF520
 * Callers:
 *     _CSwitchController::SwitchToApp_::_1_::dtor$0 @ 0x1806CDD27 (_CSwitchController--SwitchToApp_--_1_--dtor$0.c)
 *     _CSwitchController::SwitchToAppByIdWithArguments_::_1_::dtor$0 @ 0x1806D78A4 (_CSwitchController--SwitchToAppByIdWithArguments_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CSwitchController::CDetectSwitchReentrancy::~CDetectSwitchReentrancy(
        CSwitchController::CDetectSwitchReentrancy *this)
{
  if ( *(_QWORD *)this )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)this + 104LL), 0xFFFFFFFF) == 1 )
      *(_DWORD *)(*(_QWORD *)this + 108LL) = 0;
  }
}
