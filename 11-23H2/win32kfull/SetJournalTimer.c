/*
 * XREFs of SetJournalTimer @ 0x1C01C0008
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012BAE0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     InternalSetTimer @ 0x1C00EFF30 (InternalSetTimer.c)
 */

__int64 __fastcall SetJournalTimer(unsigned int a1, int a2)
{
  __int64 result; // rax

  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 404LL) = a2;
  result = InternalSetTimer(0LL, qword_1C035F858, a1, (__int64)JournalTimer, 32, 276);
  qword_1C035F858 = result;
  return result;
}
