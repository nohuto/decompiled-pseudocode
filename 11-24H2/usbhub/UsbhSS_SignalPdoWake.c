/*
 * XREFs of UsbhSS_SignalPdoWake @ 0x14001CA90
 * Callers:
 *     UsbhPortResumeFailed @ 0x140057C90 (UsbhPortResumeFailed.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhLatchPdo @ 0x14000ABA0 (UsbhLatchPdo.c)
 *     UsbhQueueWorkItemWithRetry @ 0x14001CB60 (UsbhQueueWorkItemWithRetry.c)
 */

__int64 __fastcall UsbhSS_SignalPdoWake(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx

  v4 = PdoExt(a2);
  v5 = (int)v4;
  UsbhLatchPdo(a1, *((_WORD *)v4 + 714), 0LL, 0x73737057u);
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
        *(_DWORD *)v7 = 1262573427;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = a2;
        *(_QWORD *)(v7 + 24) = 0LL;
      }
    }
  }
  return UsbhQueueWorkItemWithRetry(a1, v5 + 1624, (unsigned int)UsbhSS_PdoWakeWorker, 0, a2, 0, 2001752915);
}
