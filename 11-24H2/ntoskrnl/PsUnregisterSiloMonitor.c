/*
 * XREFs of PsUnregisterSiloMonitor @ 0x1407794B0
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140484160 (PdcCreateWatchdogAroundClientCall.c)
 *     PspGetServerSiloStatePointer @ 0x1404FB1C0 (PspGetServerSiloStatePointer.c)
 *     PspGetHostSiloStorage @ 0x1405E4DC4 (PspGetHostSiloStorage.c)
 *     PspAcquirePushLockExclusive @ 0x1405E607C (PspAcquirePushLockExclusive.c)
 *     PspReleasePushLockExclusive @ 0x1405E60E0 (PspReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PspStorageFreeSlot @ 0x14077C4E4 (PspStorageFreeSlot.c)
 *     PspStorageRemoveObject @ 0x14077C5E8 (PspStorageRemoveObject.c)
 *     PspGetNextSilo @ 0x1408EBA34 (PspGetNextSilo.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PsUnregisterSiloMonitor(_BYTE *P)
{
  __int64 v2; // rdx
  __int64 i; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 NextSilo; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  PVOID *v13; // rcx
  __int64 HostSiloStorage; // rax
  __int64 v15; // r8
  int v16; // edi
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
          guard_dispatch_icall_no_overrides(v7, v2, v4, v5);
      }
      if ( P[16] )
      {
        v8 = PdcCreateWatchdogAroundClientCall();
        guard_dispatch_icall_no_overrides(v8, v9, v10, v11);
      }
      KiUnstackDetachProcess((__int64)v17, 0);
    }
    v12 = *(_QWORD **)P;
    if ( *(_BYTE **)(*(_QWORD *)P + 8LL) != P || (v13 = (PVOID *)*((_QWORD *)P + 1), *v13 != P) )
      __fastfail(3u);
    *v13 = v12;
    v12[1] = v13;
    *(_QWORD *)P = 0LL;
    *((_QWORD *)P + 1) = 0LL;
  }
  PspReleasePushLockExclusive();
  if ( P[16] )
  {
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v17);
    HostSiloStorage = PspGetHostSiloStorage();
    LOBYTE(v15) = 1;
    v16 = PspStorageRemoveObject(HostSiloStorage, *((unsigned int *)P + 5), v15, 0LL);
    KiUnstackDetachProcess((__int64)v17, 0);
    if ( v16 )
    {
      if ( v16 != -1073741275 )
        NT_ASSERT("Status == ((NTSTATUS)0x00000000L) || Status == ((NTSTATUS)0xC0000225L)");
    }
  }
  PspStorageFreeSlot(*((unsigned int *)P + 5));
  ExFreePoolWithTag(P, 0x4D6C6953u);
}
