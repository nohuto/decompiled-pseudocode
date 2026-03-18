/*
 * XREFs of ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1400642B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1400626B8 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1400643F0 (RIMDirectStartDeviceClassNotifications.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x140092CF0 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall CBaseInput::OnDirectStartDeviceClassNotification(CBaseInput *this)
{
  unsigned int Count; // eax
  __int64 v3; // rcx
  int started; // edi
  bool v5; // bl
  bool v6; // si
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  __int64 *v10; // rbx
  __int64 *v12; // [rsp+68h] [rbp+10h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v12, "OnDirectStartDeviceClassNotification", 0LL);
  Count = AtomicExecutionCheck::GetCount();
  if ( Count )
    KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
  started = RIMDirectStartDeviceClassNotifications(*((_QWORD *)this + 1), gpWin32kDriverObject);
  if ( started < 0 )
  {
    v5 = 0;
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
    {
      v3 = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (v3 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        v5 = 1;
    }
    v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(v3);
      LOBYTE(v8) = v6;
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v8,
        *(_QWORD *)(UserSessionState + 69400),
        2,
        2,
        16,
        (__int64)&WPP_a07c44b8f26832a02b5dbe6dbb74dde0_Traceguids,
        started);
    }
  }
  v10 = v12;
  if ( v12 )
  {
    *((_QWORD *)PtiCurrent() + 48) = v10[6];
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup((char **)&v12);
  }
  return (unsigned int)started;
}
