/*
 * XREFs of PsUnregisterSiloMonitor @ 0x140769800
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     PspGetServerSiloStatePointer @ 0x1404F8B40 (PspGetServerSiloStatePointer.c)
 *     PspGetHostSiloStorage @ 0x1405D8E28 (PspGetHostSiloStorage.c)
 *     PspAcquirePushLockExclusive @ 0x1405D9EAC (PspAcquirePushLockExclusive.c)
 *     PspReleasePushLockExclusive @ 0x1405D9F10 (PspReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PspStorageFreeSlot @ 0x14076C944 (PspStorageFreeSlot.c)
 *     PspStorageRemoveObject @ 0x14076CA48 (PspStorageRemoveObject.c)
 *     PspGetNextSilo @ 0x1408DC664 (PspGetNextSilo.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PsUnregisterSiloMonitor(_BYTE *P)
{
  __int64 v2; // rdx
  __int64 i; // rcx
  __int64 NextSilo; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  _QWORD *v7; // rax
  PVOID *v8; // rcx
  __int64 HostSiloStorage; // rax
  __int64 v10; // r8
  int v11; // edi
  _OWORD v12[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v12, 0, sizeof(v12));
  PspAcquirePushLockExclusive();
  if ( *(_OWORD *)P != 0LL )
  {
    if ( *((_QWORD *)P + 4) )
    {
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v12);
      for ( i = 0LL; ; i = v5 )
      {
        LOBYTE(v2) = 1;
        NextSilo = PspGetNextSilo(i, v2);
        v5 = NextSilo;
        if ( !NextSilo )
          break;
        if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer(NextSilo) - 1) <= 2 )
          guard_dispatch_icall_no_overrides(v5);
      }
      if ( P[16] )
      {
        v6 = PdcCreateWatchdogAroundClientCall();
        guard_dispatch_icall_no_overrides(v6);
      }
      KiUnstackDetachProcess((__int64)v12, 0LL);
    }
    v7 = *(_QWORD **)P;
    if ( *(_BYTE **)(*(_QWORD *)P + 8LL) != P || (v8 = (PVOID *)*((_QWORD *)P + 1), *v8 != P) )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = v8;
    *(_QWORD *)P = 0LL;
    *((_QWORD *)P + 1) = 0LL;
  }
  PspReleasePushLockExclusive();
  if ( P[16] )
  {
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v12);
    HostSiloStorage = PspGetHostSiloStorage();
    LOBYTE(v10) = 1;
    v11 = PspStorageRemoveObject(HostSiloStorage, *((unsigned int *)P + 5), v10, 0LL);
    KiUnstackDetachProcess((__int64)v12, 0LL);
    if ( v11 )
    {
      if ( v11 != -1073741275 )
        NT_ASSERT("Status == ((NTSTATUS)0x00000000L) || Status == ((NTSTATUS)0xC0000225L)");
    }
  }
  PspStorageFreeSlot(*((unsigned int *)P + 5));
  ExFreePoolWithTag(P, 0x4D6C6953u);
}
