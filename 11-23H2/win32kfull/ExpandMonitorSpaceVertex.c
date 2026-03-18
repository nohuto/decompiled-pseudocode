/*
 * XREFs of ExpandMonitorSpaceVertex @ 0x1C00AF3A8
 * Callers:
 *     GetMonitorWorkRectForDpi @ 0x1C0088B84 (GetMonitorWorkRectForDpi.c)
 *     GetMonitorRectForDpi @ 0x1C00AE4CC (GetMonitorRectForDpi.c)
 *     _MonitorFromRect @ 0x1C00AE960 (_MonitorFromRect.c)
 *     CalculateLogicalMonitorRect @ 0x1C00AF334 (CalculateLogicalMonitorRect.c)
 *     InitializeMonitorInfo @ 0x1C00B44FC (InitializeMonitorInfo.c)
 *     ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C00E82C4 (-GetMonitorMaxArea@@YA-AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00EA700 (xxxInitSendValidateMinMaxInfoEx.c)
 *     InternalGetRealClientRect @ 0x1C00ECAE8 (InternalGetRealClientRect.c)
 *     ExpandedMonitorSpace @ 0x1C01B8890 (ExpandedMonitorSpace.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C024B2FC (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpandMonitorSpaceVertex(unsigned __int16 a1, unsigned __int16 a2, __int64 a3)
{
  INT v3; // ebx
  INT v4; // edi
  INT v6; // [rsp+44h] [rbp+1Ch]
  __int64 v7; // [rsp+48h] [rbp+20h]

  v6 = HIDWORD(a3);
  v3 = a2;
  v4 = a1;
  LODWORD(v7) = EngMulDiv(a3, a1, a2);
  HIDWORD(v7) = EngMulDiv(v6, v4, v3);
  return v7;
}
