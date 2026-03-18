/*
 * XREFs of ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1400607D0
 * Callers:
 *     UserKSTWait @ 0x1400BB4AC (UserKSTWait.c)
 * Callees:
 *     ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x140060938 (-HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     CreateKernelIocpWcp @ 0x140060AF0 (CreateKernelIocpWcp.c)
 *     AssociateKernelIocpWcp @ 0x140060B50 (AssociateKernelIocpWcp.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1400626B8 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall IOCPDispatcher::Dispatch(__int64 a1, int a2, unsigned int a3)
{
  __int64 v4; // rsi
  __int64 KernelIocpWcp; // rax
  __int64 v7; // r14
  void (__fastcall *v8)(_QWORD); // rax
  __int64 v9; // rbx
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  if ( a2 == 0x80000000 )
  {
    IOCPDispatcher::HandleSensorDispatcherSignal((IOCPDispatcher *)a1, a3);
  }
  else if ( a2 == -2147483647 )
  {
    if ( a3 < *(_DWORD *)(a1 + 2896) )
    {
      v4 = 32LL * a3;
      if ( *(_QWORD *)(v4 + a1 + 2584) )
      {
        InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
          (InputTraceLogging::ThreadLockedPerfRegion *)&v10,
          "HandleInputThreadSignal",
          0LL);
        KernelIocpWcp = *(_QWORD *)(v4 + a1 + 2584);
        v7 = *(_QWORD *)(v4 + a1 + 2576);
        if ( !KernelIocpWcp && (KernelIocpWcp = CreateKernelIocpWcp()) == 0
          || (int)AssociateKernelIocpWcp(KernelIocpWcp, *(_QWORD *)(a1 + 2904), v7, a3, -2147483647LL, 0, 0LL) < 0 )
        {
          KeBugCheck(0x164u);
        }
        v8 = *(void (__fastcall **)(_QWORD))(v4 + a1 + 2592);
        if ( v8 )
          v8(*(_QWORD *)(v4 + a1 + 2600));
        v9 = v10;
        if ( v10 )
        {
          *((_QWORD *)PtiCurrent() + 48) = *(_QWORD *)(v9 + 48);
          InputTraceLogging::ThreadLockedPerfRegion::Cleanup((InputTraceLogging::ThreadLockedPerfRegion *)&v10);
        }
      }
    }
  }
  else
  {
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, a2, a3, 0LL, 0LL, 0LL, 0LL, 0);
  }
}
