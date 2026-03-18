/*
 * XREFs of ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C008DD78
 * Callers:
 *     xxxDesktopThreadWaiter @ 0x1C002B130 (xxxDesktopThreadWaiter.c)
 *     xxxGetInputEvent @ 0x1C011E130 (xxxGetInputEvent.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C01266D0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x1C012AFD0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012BAE0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckProcessForeground(struct tagTHREADINFO *a1)
{
  struct tagTHREADINFO *v1; // rdx

  *(_QWORD *)(*((_QWORD *)a1 + 60) + 8LL) = 0LL;
  v1 = (struct tagTHREADINFO *)*((unsigned int *)a1 + 122);
  LODWORD(v1) = (unsigned int)v1 & 0xFFFFFBFF;
  *(_DWORD *)(*((_QWORD *)a1 + 60) + 28LL) = (_DWORD)v1;
  *((_DWORD *)a1 + 122) &= ~0x400u;
  ForegroundBoost::UpdateProcessPriorityForSpinning(a1, v1);
  return 0LL;
}
