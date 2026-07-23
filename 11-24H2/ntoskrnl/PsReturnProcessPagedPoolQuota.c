/*
 * XREFs of PsReturnProcessPagedPoolQuota @ 0x1403C8EA0
 * Callers:
 *     MiPerformVadSplitting @ 0x1403C877C (MiPerformVadSplitting.c)
 *     FsRtlCancelNotify @ 0x1403CC4E0 (FsRtlCancelNotify.c)
 *     ExpFreeTablePagedPool @ 0x1408497A4 (ExpFreeTablePagedPool.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x140892140 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1408923C8 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpCaptureMessageData @ 0x1408942E0 (AlpcpCaptureMessageData.c)
 *     AlpcSecurityDestroyProcedure @ 0x140897A40 (AlpcSecurityDestroyProcedure.c)
 *     AlpcMessageDestroyProcedure @ 0x140897C10 (AlpcMessageDestroyProcedure.c)
 *     AlpcpSendMessage @ 0x140898440 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14089BA70 (AlpcpCaptureMessageDataSafe.c)
 *     LpcExitProcess @ 0x1408FF998 (LpcExitProcess.c)
 *     MiReturnVadCharges @ 0x140919B48 (MiReturnVadCharges.c)
 *     ExpAllocateHandleTable @ 0x14094D2D4 (ExpAllocateHandleTable.c)
 *     ExpFreeHandleTable @ 0x1409DFCA4 (ExpFreeHandleTable.c)
 *     FsRtlNotifyFilterReportChange @ 0x1409FD7C0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1409FE4F0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1409FEFC8 (FsRtlNotifyCleanupOneEntry.c)
 *     FsRtlNotifyCompleteIrp @ 0x1409FF180 (FsRtlNotifyCompleteIrp.c)
 *     MiReturnVadQuota @ 0x140A0B2E4 (MiReturnVadQuota.c)
 * Callees:
 *     PspReturnResourceQuota @ 0x14027BA78 (PspReturnResourceQuota.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
    v5 = byte_140FC7398;
    v6 = v4 + 16;
    _m_prefetchw(v4 + 16);
    v7 = v4[16];
    v8 = v4[24];
    if ( v4[26] )
    {
      if ( v8 > v7 )
      {
        v9 = qword_140F05B60;
        if ( v8 - v7 > qword_140F05B60 )
        {
          if ( qword_140F05B60 > BugCheckParameter3 )
            v9 = BugCheckParameter3;
          if ( v8 == _InterlockedCompareExchange64(v4 + 24, v8 - v9, v8) )
          {
            v15 = _InterlockedExchangeAdd64(v4 + 25, v9) + v9;
            if ( v15 > qword_140F05B60 )
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
      v6 = &qword_140E28040;
      _m_prefetchw(&qword_140E28040);
      v7 = qword_140E28040;
    }
    if ( BugCheckParameter1 )
    {
      if ( (v5 & 4) != 0 )
        _InterlockedAdd64((volatile signed __int64 *)(BugCheckParameter1 + 520), -(__int64)BugCheckParameter3);
    }
  }
  return result;
}
