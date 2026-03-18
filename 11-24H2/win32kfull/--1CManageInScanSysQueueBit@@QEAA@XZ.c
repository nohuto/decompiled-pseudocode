/*
 * XREFs of ??1CManageInScanSysQueueBit@@QEAA@XZ @ 0x14016DCF4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall CManageInScanSysQueueBit::~CManageInScanSysQueueBit(CManageInScanSysQueueBit *this, __int64 a2)
{
  __int64 v2; // rbx
  __int64 *CurrentThreadNonPaged; // rax

  v2 = 0LL;
  if ( *(_BYTE *)this )
  {
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(this, a2);
    if ( CurrentThreadNonPaged )
      v2 = *CurrentThreadNonPaged;
    *(_QWORD *)(v2 + 1360) &= ~0x1000000000uLL;
  }
}
