/*
 * XREFs of HUBHSM_CheckingIfAllUsb4DromDataRead @ 0x140008A40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     FWUPDATE_ParseUsb4DromForVidPid @ 0x1400422A0 (FWUPDATE_ParseUsb4DromForVidPid.c)
 */

__int64 __fastcall HUBHSM_CheckingIfAllUsb4DromDataRead(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_DWORD *)(v1 + 2712) < *(_DWORD *)(v1 + 2696) )
  {
    return 2061;
  }
  else
  {
    v2 = 2053;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(v1 + 2536), 4, 3, 53, (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids);
    FWUPDATE_ParseUsb4DromForVidPid(v1);
  }
  return v2;
}
