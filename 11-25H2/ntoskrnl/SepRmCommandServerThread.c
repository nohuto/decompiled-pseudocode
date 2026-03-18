/*
 * XREFs of SepRmCommandServerThread @ 0x140A4F080
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     PsAttachSiloToCurrentThread @ 0x14043C9E0 (PsAttachSiloToCurrentThread.c)
 *     PsIsHostSilo @ 0x14043DF70 (PsIsHostSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x140443110 (PsDetachSiloFromCurrentThread.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     SepAdtInitLsaDeadEventForNonPagedList @ 0x1405FBEB8 (SepAdtInitLsaDeadEventForNonPagedList.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14069C300 (ZwAlpcSendWaitReceivePort.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SepAuditFailed @ 0x140854DA0 (SepAuditFailed.c)
 *     NtAlpcCancelMessage @ 0x140A29A50 (NtAlpcCancelMessage.c)
 *     SepRmLsaConnectRequest @ 0x140A4F304 (SepRmLsaConnectRequest.c)
 *     PopRequestShutdownWait @ 0x140A4F5E4 (PopRequestShutdownWait.c)
 *     SepRmCleanupRmLsaState @ 0x140A4F698 (SepRmCleanupRmLsaState.c)
 */

void __fastcall SepRmCommandServerThread(PVOID StartContext)
{
  signed int v1; // ebx
  int v2; // eax
  int *v3; // rsi
  struct _LIST_ENTRY *v4; // rdi
  struct _LIST_ENTRY *v5; // rbx
  bool IsHostSilo; // r14
  char *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rax
  bool v9; // bl
  char inited; // al
  struct _KTHREAD *v11; // rcx
  char v12; // r15
  bool v13; // r12
  struct _KEVENT Event; // [rsp+50h] [rbp-B8h] BYREF
  struct _KEVENT v15; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v16[56]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v17; // [rsp+B8h] [rbp-50h]
  LARGE_INTEGER v18; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v19; // [rsp+D0h] [rbp-38h]
  int v20; // [rsp+E0h] [rbp-28h]
  int v21; // [rsp+F0h] [rbp-18h]
  int v22; // [rsp+2C8h] [rbp+1C0h] BYREF
  __int128 v23; // [rsp+2D0h] [rbp+1C8h]
  int v24; // [rsp+2E0h] [rbp+1D8h]

  memset_0(&v18, 0, 0x200uLL);
  memset_0(&v22, 0, 0x200uLL);
  SepRmLsaCallProcess = KeGetCurrentThread()->ApcState.Process;
  PsReferenceSiloContext(SepRmLsaCallProcess);
  v1 = PopRequestShutdownWait(KeGetCurrentThread());
  if ( v1 >= 0 )
  {
    v3 = 0LL;
    while ( 1 )
    {
      do
      {
        v17 = 0LL;
        memset(&v16[24], 0, 32);
        *(_DWORD *)&v16[24] = 0x20000000;
        v2 = ZwAlpcSendWaitReceivePort((__int64)Handle, v3 != 0LL ? 0x10000 : 0);
        v3 = 0LL;
      }
      while ( v2 < 0 );
      v4 = *(struct _LIST_ENTRY **)&v16[32];
      if ( *(_QWORD *)&v16[32] == -8LL )
        v4 = (struct _LIST_ENTRY *)PdcCreateWatchdogAroundClientCall();
      switch ( BYTE4(v18.QuadPart) )
      {
        case 1u:
          if ( (unsigned int)(v21 - 1) > 0xB )
          {
LABEL_18:
            NtAlpcCancelMessage(Handle, 0, (__int64)&v16[32]);
          }
          else
          {
            memset_0(&v22, 0, 0x200uLL);
            v22 = 33554904;
            v23 = v19;
            v24 = v20;
            v5 = PsAttachSiloToCurrentThread(v4);
            guard_dispatch_icall_no_overrides(&v18);
            PsDetachSiloFromCurrentThread(v5);
            v3 = &v22;
          }
          break;
        case 5u:
          IsHostSilo = PsIsHostSilo((__int64)v4);
          if ( IsHostSilo )
          {
            SepRmAuditingEnabled = 0;
            memset(&Event, 0, sizeof(Event));
            memset(v16, 0, 24);
            memset(&v15, 0, sizeof(v15));
            KeInitializeEvent(&Event, NotificationEvent, 0);
            KeInitializeEvent((PRKEVENT)v16, NotificationEvent, 0);
            KeInitializeEvent(&v15, NotificationEvent, 0);
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&stru_140E67890, 1u);
            qword_140E67930 = (__int64)&Event;
            v9 = SepLsaAuditQueueInfo == (_QWORD)&SepLsaAuditQueueInfo;
            ExReleaseResourceLite(&stru_140E67890);
            KeLeaveCriticalRegion();
            inited = SepAdtInitLsaDeadEventForNonPagedList((__int64)&v15);
            v11 = KeGetCurrentThread();
            v12 = inited;
            --v11->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&stru_140E676D0, 1u);
            qword_140E67770 = (__int64)v16;
            v13 = SepLsaDeletedLogonQueueInfo == (_QWORD)&SepLsaDeletedLogonQueueInfo;
            ExReleaseResourceLite(&stru_140E676D0);
            KeLeaveCriticalRegion();
            if ( !v9 )
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            if ( v12 )
              KeWaitForSingleObject(&v15, Executive, 0, 0, 0LL);
            if ( !v13 )
              KeWaitForSingleObject(v16, Executive, 0, 0, 0LL);
            ZwClose(Handle);
            Handle = 0LL;
          }
          ServerSiloGlobals = (char *)PsGetServerSiloGlobals((__int64)v4);
          SepRmCleanupRmLsaState(ServerSiloGlobals + 784);
          if ( IsHostSilo )
            return;
          ObfDereferenceObjectWithTag(v4, 0x74536553u);
          break;
        case 0xAu:
          SepRmLsaConnectRequest(&v18);
          break;
        default:
          if ( (v18.QuadPart & 0x200000000000LL) != 0 )
            goto LABEL_18;
          break;
      }
    }
  }
  ZwClose(Handle);
  Handle = 0LL;
  SepAuditFailed(v1);
}
