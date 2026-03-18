/*
 * XREFs of PsReturnProcessPagedPoolQuota @ 0x1404066F0
 * Callers:
 *     FsRtlCancelNotify @ 0x1403DB210 (FsRtlCancelNotify.c)
 *     MiPerformVadSplitting @ 0x140405FC8 (MiPerformVadSplitting.c)
 *     ExpFreeTablePagedPool @ 0x14084D4E4 (ExpFreeTablePagedPool.c)
 *     AlpcpReleasePagedPoolQuota @ 0x14088DADC (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x14088DB20 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpSendMessage @ 0x14088E810 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x140892480 (AlpcpCaptureMessageDataSafe.c)
 *     LpcExitProcess @ 0x1408A9738 (LpcExitProcess.c)
 *     MiReturnVadCharges @ 0x1408E2F98 (MiReturnVadCharges.c)
 *     ExpAllocateHandleTable @ 0x14093BFFC (ExpAllocateHandleTable.c)
 *     AlpcpCaptureMessageData @ 0x14093FCA0 (AlpcpCaptureMessageData.c)
 *     AlpcMessageDestroyProcedure @ 0x1409B08F0 (AlpcMessageDestroyProcedure.c)
 *     ExpFreeHandleTable @ 0x1409E5244 (ExpFreeHandleTable.c)
 *     AlpcSecurityDestroyProcedure @ 0x1409E54D0 (AlpcSecurityDestroyProcedure.c)
 *     FsRtlNotifyFilterReportChange @ 0x140A007F0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140A01520 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x140A01FF8 (FsRtlNotifyCleanupOneEntry.c)
 *     FsRtlNotifyCompleteIrp @ 0x140A021B0 (FsRtlNotifyCompleteIrp.c)
 *     MiReturnVadQuota @ 0x140A0C0A4 (MiReturnVadQuota.c)
 * Callees:
 *     PspReturnResourceQuota @ 0x14024B468 (PspReturnResourceQuota.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall PsReturnProcessPagedPoolQuota(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter3)
{
  __int64 *v4; // r15
  char v5; // bp
  volatile signed __int64 *v6; // r14
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdx
  ULONG_PTR BugCheckParameter4; // r8
  unsigned __int64 v11; // r9
  signed __int64 v12; // rdx
  bool v13; // zf
  unsigned __int64 result; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // r8

  if ( (PEPROCESS)BugCheckParameter1 != PsInitialSystemProcess )
  {
    v4 = *(__int64 **)(BugCheckParameter1 + 760);
    v5 = byte_140FC6348;
    v6 = v4 + 16;
    _m_prefetchw(v4 + 16);
    v7 = v4[16];
    v8 = v4[24];
    if ( v4[26] )
    {
      if ( v8 > v7 )
      {
        v9 = qword_140F05880;
        if ( v8 - v7 > qword_140F05880 )
        {
          if ( qword_140F05880 > BugCheckParameter3 )
            v9 = BugCheckParameter3;
          if ( v8 == _InterlockedCompareExchange64(v4 + 24, v8 - v9, v8) )
          {
            v15 = _InterlockedExchangeAdd64(v4 + 25, v9) + v9;
            if ( v15 > qword_140F05880 )
            {
              v16 = _InterlockedExchange64(v4 + 25, 0LL);
              if ( v16 )
                PspReturnResourceQuota(1u, (__int64)(v4 + 16), v16, 0);
            }
          }
        }
      }
    }
    BugCheckParameter4 = BugCheckParameter3;
    while ( 1 )
    {
      do
      {
        v11 = v7;
        if ( BugCheckParameter4 < v7 )
          v11 = BugCheckParameter4;
        v12 = 0LL;
        if ( BugCheckParameter4 < v7 )
          v12 = v7 - BugCheckParameter4;
        result = _InterlockedCompareExchange64(v6, v12, v7);
        v13 = v7 == result;
        v7 = result;
      }
      while ( !v13 );
      BugCheckParameter4 -= v11;
      if ( !BugCheckParameter4 )
        break;
      if ( v4 == &PspSystemQuotaBlock )
        KeBugCheckEx(0x21u, BugCheckParameter1, 1uLL, BugCheckParameter3, BugCheckParameter4);
      v4 = &PspSystemQuotaBlock;
      v6 = &qword_140E27F00;
      _m_prefetchw(&qword_140E27F00);
      v7 = qword_140E27F00;
    }
    if ( BugCheckParameter1 )
    {
      if ( (v5 & 4) != 0 )
        _InterlockedAdd64((volatile signed __int64 *)(BugCheckParameter1 + 520), -(__int64)BugCheckParameter3);
    }
  }
  return result;
}
