/*
 * XREFs of PsUnregisterSiloMonitor @ 0x1407795B0
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x14047F700 (PdcCreateWatchdogAroundClientCall.c)
 *     PspGetServerSiloStatePointer @ 0x1404F8AA0 (PspGetServerSiloStatePointer.c)
 *     PspGetHostSiloStorage @ 0x1405E22EC (PspGetHostSiloStorage.c)
 *     PspAcquirePushLockExclusive @ 0x1405E367C (PspAcquirePushLockExclusive.c)
 *     PspReleasePushLockExclusive @ 0x1405E36E0 (PspReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PspStorageFreeSlot @ 0x14077C394 (PspStorageFreeSlot.c)
 *     PspStorageRemoveObject @ 0x14077C498 (PspStorageRemoveObject.c)
 *     PspGetNextSilo @ 0x14085D264 (PspGetNextSilo.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PsUnregisterSiloMonitor(_BYTE *P)
{
  __int64 v2; // rdx
  __int64 i; // rcx
  __int64 NextSilo; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rax
  PVOID *v11; // rcx
  __int64 HostSiloStorage; // rax
  __int64 v13; // r8
  int v14; // edi
  __int64 v15; // r8
  __int64 v16; // r9
  _OWORD v17[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v17, 0, sizeof(v17));
  PspAcquirePushLockExclusive();
  if ( *(_OWORD *)P != 0LL )
  {
    if ( *((_QWORD *)P + 4) )
    {
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v17);
      for ( i = 0LL; ; i = v7 )
      {
        LOBYTE(v2) = 1;
        NextSilo = PspGetNextSilo(i, v2);
        v7 = NextSilo;
        if ( !NextSilo )
          break;
        if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer(NextSilo) - 1) <= 2 )
          guard_dispatch_icall_no_overrides(v7, v2);
      }
      if ( P[16] )
      {
        v8 = PdcCreateWatchdogAroundClientCall();
        guard_dispatch_icall_no_overrides(v8, v9);
      }
      KiUnstackDetachProcess((__int64)v17, 0, v5, v6);
    }
    v10 = *(_QWORD **)P;
    if ( *(_BYTE **)(*(_QWORD *)P + 8LL) != P || (v11 = (PVOID *)*((_QWORD *)P + 1), *v11 != P) )
      __fastfail(3u);
    *v11 = v10;
    v10[1] = v11;
    *(_QWORD *)P = 0LL;
    *((_QWORD *)P + 1) = 0LL;
  }
  PspReleasePushLockExclusive();
  if ( P[16] )
  {
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v17);
    HostSiloStorage = PspGetHostSiloStorage();
    LOBYTE(v13) = 1;
    v14 = PspStorageRemoveObject(HostSiloStorage, *((unsigned int *)P + 5), v13, 0LL);
    KiUnstackDetachProcess((__int64)v17, 0, v15, v16);
    if ( v14 )
    {
      if ( v14 != -1073741275 )
        NT_ASSERT("Status == ((NTSTATUS)0x00000000L) || Status == ((NTSTATUS)0xC0000225L)");
    }
  }
  PspStorageFreeSlot(*((unsigned int *)P + 5));
  ExFreePoolWithTag(P, 0x4D6C6953u);
}
