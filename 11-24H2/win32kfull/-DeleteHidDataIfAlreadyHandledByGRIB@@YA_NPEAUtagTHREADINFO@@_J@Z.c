/*
 * XREFs of ?DeleteHidDataIfAlreadyHandledByGRIB@@YA_NPEAUtagTHREADINFO@@_J@Z @ 0x14018D704
 * Callers:
 *     ?CleanOutOldInputMessages@@YAXPEAUtagTHREADINFO@@@Z @ 0x14018D594 (-CleanOutOldInputMessages@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     FreeHidData @ 0x140082EF0 (FreeHidData.c)
 */

char __fastcall DeleteHidDataIfAlreadyHandledByGRIB(struct tagTHREADINFO *a1, __int64 a2)
{
  _QWORD *v3; // rcx

  v3 = (_QWORD *)*((_QWORD *)a1 + 147);
  if ( !v3 || *v3 != a2 )
    return 0;
  *((_QWORD *)a1 + 147) = v3[4];
  v3[4] = 0LL;
  --*((_DWORD *)a1 + 296);
  FreeHidData((__int64)v3);
  return 1;
}
