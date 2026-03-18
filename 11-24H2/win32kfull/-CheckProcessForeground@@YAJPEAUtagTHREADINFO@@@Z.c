/*
 * XREFs of ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1401BB8BC
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x140063D90 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxGetInputEvent @ 0x140064510 (xxxGetInputEvent.c)
 *     xxxDesktopThreadWaiter @ 0x140066AC4 (xxxDesktopThreadWaiter.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x14023D790 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckProcessForeground(struct tagTHREADINFO *a1)
{
  *(_QWORD *)(*((_QWORD *)a1 + 65) + 8LL) = 0LL;
  *(_DWORD *)(*((_QWORD *)a1 + 65) + 28LL) = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 132, 0, 0) & 0xFFFFFBFF;
  _InterlockedAnd((volatile signed __int32 *)a1 + 132, 0xFFFFFBFF);
  ForegroundBoost::UpdateProcessPriorityForSpinning(a1, a1);
  return 0LL;
}
