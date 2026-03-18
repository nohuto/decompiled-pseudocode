/*
 * XREFs of HUBHSM_CheckingUsb4DromStatus @ 0x140008D30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall HUBHSM_CheckingUsb4DromStatus(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(int *)(v1 + 2720) >= 0 )
    return 2053LL;
  if ( (__int64)(MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v1 + 2728)) <= 50000000 )
    return 2065LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(v1 + 2536), 2, 3, 52, (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids);
  return 2045LL;
}
