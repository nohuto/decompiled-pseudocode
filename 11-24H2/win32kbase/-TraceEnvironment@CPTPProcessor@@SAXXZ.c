/*
 * XREFs of ?TraceEnvironment@CPTPProcessor@@SAXXZ @ 0x1401443F8
 * Callers:
 *     _lambda_f6639040149d830ab05feaa79928b51c_::operator() @ 0x1401443C4 (_lambda_f6639040149d830ab05feaa79928b51c_--operator().c)
 * Callees:
 *     ?TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z @ 0x140053F38 (-TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x140105780 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     ??9?$SGHIDgpHidInput@PEAVCHidInput@@@@QEBA_NAEBQEAVCHidInput@@@Z @ 0x140149F08 (--9-$SGHIDgpHidInput@PEAVCHidInput@@@@QEBA_NAEBQEAVCHidInput@@@Z.c)
 */

void __fastcall CPTPProcessor::TraceEnvironment(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  struct W32_PUSH_LOCK *v3; // rbx
  __int64 v4; // rcx
  __int64 i; // rdi
  struct CPTPProcessor *Processor; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( (unsigned __int8)SGHIDgpHidInput<CHidInput *>::operator!=(a1, &v7)
    && *(_BYTE *)(W32GetUserSessionState(v1) + 3088)
    && dword_14029AE68
    && tlgKeywordOn((__int64)&dword_14029AE68, 1LL) )
  {
    v3 = *(struct W32_PUSH_LOCK **)(*(_QWORD *)(W32GetUserSessionState(v2) + 16840) + 1232LL);
    W32AcquirePushLockSharedEx(v3, 0);
    for ( i = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v4) + 16840) + 1240LL); i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(i + 184) & 0x80u) != 0 && *(_DWORD *)(*(_QWORD *)(i + 456) + 24LL) == 7 )
      {
        Processor = CPTPProcessorFactory::GetProcessor((struct DEVICEINFO *)i);
        PTPEngineTraceProducer::TraceEnvironment(
          *((PTPEngineTraceProducer **)Processor + 69),
          (const struct PTPEnvironment *)(*((_QWORD *)Processor + 69) + 40LL));
      }
    }
    ExReleasePushLockSharedEx(v3, 0LL);
    KeLeaveCriticalRegion();
  }
}
