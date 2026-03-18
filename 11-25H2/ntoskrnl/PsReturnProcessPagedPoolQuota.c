/*
 * XREFs of PsReturnProcessPagedPoolQuota @ 0x1403C5AE0
 * Callers:
 *     MiPerformVadSplitting @ 0x1402A3F44 (MiPerformVadSplitting.c)
 *     FsRtlCancelNotify @ 0x1403EE140 (FsRtlCancelNotify.c)
 *     ExpFreeTablePagedPool @ 0x1408517C0 (ExpFreeTablePagedPool.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1408AA5A0 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpCaptureMessageData @ 0x1408AE9B0 (AlpcpCaptureMessageData.c)
 *     AlpcpSendMessage @ 0x1408B0BA0 (AlpcpSendMessage.c)
 *     AlpcSecurityDestroyProcedure @ 0x1408B3330 (AlpcSecurityDestroyProcedure.c)
 *     AlpcMessageDestroyProcedure @ 0x1408B3500 (AlpcMessageDestroyProcedure.c)
 *     LpcExitProcess @ 0x1408E109C (LpcExitProcess.c)
 *     MiReturnVadCharges @ 0x140901270 (MiReturnVadCharges.c)
 *     ExpAllocateHandleTable @ 0x1409719B0 (ExpAllocateHandleTable.c)
 *     ExpFreeHandleTable @ 0x1409729AC (ExpFreeHandleTable.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x14098E380 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpReleasePagedPoolQuota @ 0x14098E608 (AlpcpReleasePagedPoolQuota.c)
 *     FsRtlNotifyFilterReportChange @ 0x140A02350 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140A03080 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x140A03B68 (FsRtlNotifyCleanupOneEntry.c)
 *     FsRtlNotifyCompleteIrp @ 0x140A03D20 (FsRtlNotifyCompleteIrp.c)
 *     MiReturnVadQuota @ 0x140A0A8D0 (MiReturnVadQuota.c)
 * Callees:
 *     PspReturnResourceQuota @ 0x1403C651C (PspReturnResourceQuota.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
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
    v5 = byte_140FC6358;
    v6 = v4 + 16;
    _m_prefetchw(v4 + 16);
    v7 = v4[16];
    v8 = v4[24];
    if ( v4[26] )
    {
      if ( v8 > v7 )
      {
        v9 = qword_140F054A0;
        if ( v8 - v7 > qword_140F054A0 )
        {
          if ( qword_140F054A0 > BugCheckParameter3 )
            v9 = BugCheckParameter3;
          if ( v8 == _InterlockedCompareExchange64(v4 + 24, v8 - v9, v8) )
          {
            v15 = _InterlockedExchangeAdd64(v4 + 25, v9) + v9;
            if ( v15 > qword_140F054A0 )
            {
              v16 = _InterlockedExchange64(v4 + 25, 0LL);
              if ( v16 )
                PspReturnResourceQuota(1LL, v4 + 16, v16, 0LL);
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
      v6 = &qword_140E27CC0;
      _m_prefetchw(&qword_140E27CC0);
      v7 = qword_140E27CC0;
    }
    if ( BugCheckParameter1 )
    {
      if ( (v5 & 4) != 0 )
        _InterlockedAdd64((volatile signed __int64 *)(BugCheckParameter1 + 520), -(__int64)BugCheckParameter3);
    }
  }
  return result;
}
