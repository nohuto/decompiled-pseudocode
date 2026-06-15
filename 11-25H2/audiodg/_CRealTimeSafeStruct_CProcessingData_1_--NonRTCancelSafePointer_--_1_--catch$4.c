/*
 * XREFs of _CRealTimeSafeStruct_CProcessingData_1_::NonRTCancelSafePointer_::_1_::catch$4 @ 0x14009717B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRealTimeSafeStruct_CProcessingData_1_::NonRTCancelSafePointer_::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 32);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 216) = *v3;
  return 0LL;
}
