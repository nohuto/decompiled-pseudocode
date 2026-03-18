/*
 * XREFs of HUBHSM_CheckingIfUsb4DromShouldBeRead @ 0x140008C00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall HUBHSM_CheckingIfUsb4DromShouldBeRead(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  if ( !*(_BYTE *)(v1 + 240) || *(_DWORD *)(v1 + 160) != 1 )
    return 2041LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(v1 + 2536), 4, 3, 51, (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids);
  *(_DWORD *)(v1 + 2716) = 0;
  *(_DWORD *)(v1 + 2712) = 0;
  *(_QWORD *)(v1 + 2704) = v1 + 2680;
  result = 2057LL;
  *(_DWORD *)(v1 + 2696) = 4;
  return result;
}
