/*
 * XREFs of SepRmCommandServerThread @ 0x140A52820
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     PsGetServerSiloGlobals @ 0x140349380 (PsGetServerSiloGlobals.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     PsAttachSiloToCurrentThread @ 0x14043CF50 (PsAttachSiloToCurrentThread.c)
 *     PsIsHostSilo @ 0x14043E2E0 (PsIsHostSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x140444750 (PsDetachSiloFromCurrentThread.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140484160 (PdcCreateWatchdogAroundClientCall.c)
 *     SepAdtInitLsaDeadEventForNonPagedList @ 0x14060816C (SepAdtInitLsaDeadEventForNonPagedList.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1406A75D0 (ZwAlpcSendWaitReceivePort.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SepAuditFailed @ 0x140850F60 (SepAuditFailed.c)
 *     NtAlpcCancelMessage @ 0x14093CEA0 (NtAlpcCancelMessage.c)
 *     SepRmLsaConnectRequest @ 0x140A52AA4 (SepRmLsaConnectRequest.c)
 *     PopRequestShutdownWait @ 0x140A52D84 (PopRequestShutdownWait.c)
 *     SepRmCleanupRmLsaState @ 0x140A52E38 (SepRmCleanupRmLsaState.c)
 */

void __fastcall SepRmCommandServerThread(PVOID StartContext)
{
  signed int v1; // ebx
  int v2; // eax
  int *v3; // rsi
  struct _LIST_ENTRY *v4; // rdi
  struct _LIST_ENTRY *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  bool IsHostSilo; // r14
  char *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rax
  bool v11; // bl
  char inited; // al
  struct _KTHREAD *v13; // rcx
  char v14; // r15
  bool v15; // r12
  struct _KEVENT Event; // [rsp+50h] [rbp-B8h] BYREF
  struct _KEVENT v17; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v18[56]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v19; // [rsp+B8h] [rbp-50h]
  LARGE_INTEGER v20; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v21; // [rsp+D0h] [rbp-38h]
  int v22; // [rsp+E0h] [rbp-28h]
  int v23; // [rsp+F0h] [rbp-18h]
  int v24; // [rsp+2C8h] [rbp+1C0h] BYREF
  __int128 v25; // [rsp+2D0h] [rbp+1C8h]
  int v26; // [rsp+2E0h] [rbp+1D8h]

  memset_0(&v20, 0, 0x200uLL);
  memset_0(&v24, 0, 0x200uLL);
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
        v19 = 0LL;
        memset(&v18[24], 0, 32);
        *(_DWORD *)&v18[24] = 0x20000000;
        v2 = ZwAlpcSendWaitReceivePort((__int64)Handle, v3 != 0LL ? 0x10000 : 0);
        v3 = 0LL;
      }
      while ( v2 < 0 );
      v4 = *(struct _LIST_ENTRY **)&v18[32];
      if ( *(_QWORD *)&v18[32] == -8LL )
        v4 = (struct _LIST_ENTRY *)PdcCreateWatchdogAroundClientCall();
      switch ( BYTE4(v20.QuadPart) )
      {
        case 1u:
          if ( (unsigned int)(v23 - 1) > 0xB )
          {
LABEL_18:
            NtAlpcCancelMessage(Handle, 0, (__int64)&v18[32]);
          }
          else
          {
            memset_0(&v24, 0, 0x200uLL);
            v24 = 33554904;
            v25 = v21;
            v26 = v22;
            v5 = PsAttachSiloToCurrentThread(v4);
            guard_dispatch_icall_no_overrides(&v20, &v24, v6, v7);
            PsDetachSiloFromCurrentThread(v5);
            v3 = &v24;
          }
          break;
        case 5u:
          IsHostSilo = PsIsHostSilo((__int64)v4);
          if ( IsHostSilo )
          {
            SepRmAuditingEnabled = 0;
            memset(&Event, 0, sizeof(Event));
            memset(v18, 0, 24);
            memset(&v17, 0, sizeof(v17));
            KeInitializeEvent(&Event, NotificationEvent, 0);
            KeInitializeEvent((PRKEVENT)v18, NotificationEvent, 0);
            KeInitializeEvent(&v17, NotificationEvent, 0);
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&stru_140E67B90, 1u);
            qword_140E67C30 = (__int64)&Event;
            v11 = SepLsaAuditQueueInfo == (_QWORD)&SepLsaAuditQueueInfo;
            ExReleaseResourceLite(&stru_140E67B90);
            KeLeaveCriticalRegion();
            inited = SepAdtInitLsaDeadEventForNonPagedList((__int64)&v17);
            v13 = KeGetCurrentThread();
            v14 = inited;
            --v13->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&stru_140E679C0, 1u);
            qword_140E67A60 = (__int64)v18;
            v15 = SepLsaDeletedLogonQueueInfo == (_QWORD)&SepLsaDeletedLogonQueueInfo;
            ExReleaseResourceLite(&stru_140E679C0);
            KeLeaveCriticalRegion();
            if ( !v11 )
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            if ( v14 )
              KeWaitForSingleObject(&v17, Executive, 0, 0, 0LL);
            if ( !v15 )
              KeWaitForSingleObject(v18, Executive, 0, 0, 0LL);
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
          SepRmLsaConnectRequest(&v20);
          break;
        default:
          if ( (v20.QuadPart & 0x200000000000LL) != 0 )
            goto LABEL_18;
          break;
      }
    }
  }
  ZwClose(Handle);
  Handle = 0LL;
  SepAuditFailed(v1);
}
