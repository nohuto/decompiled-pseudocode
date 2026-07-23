/*
 * XREFs of VfIrpDatabaseEntryReleaseLock @ 0x140BA5FE4
 * Callers:
 *     IovCancelIrp @ 0x140B846F0 (IovCancelIrp.c)
 *     IovpCallDriver1 @ 0x140B8ECB4 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x140B8F280 (IovpCallDriver2.c)
 *     IovpCheckIrpForCriticalTracking @ 0x140B8F534 (IovpCheckIrpForCriticalTracking.c)
 *     VfIoAllocateIrp1 @ 0x140B8FDA4 (VfIoAllocateIrp1.c)
 *     VfIoAllocateIrp2 @ 0x140B8FE1C (VfIoAllocateIrp2.c)
 *     VfIrpWatermark @ 0x140B90080 (VfIrpWatermark.c)
 *     ViPendingCompleteAfterWait @ 0x140B93D28 (ViPendingCompleteAfterWait.c)
 *     VfPacketReleaseLock @ 0x140B9D510 (VfPacketReleaseLock.c)
 *     VfIoInitializeIrp @ 0x140BA86E4 (VfIoInitializeIrp.c)
 *     IovpCompleteRequest1 @ 0x140BA89E8 (IovpCompleteRequest1.c)
 *     IovpLocalCompletionRoutine @ 0x140BA8B70 (IovpLocalCompletionRoutine.c)
 *     IovpCompleteRequest2 @ 0x140BA8DE4 (IovpCompleteRequest2.c)
 *     IovpCompleteRequest5 @ 0x140BA8E50 (IovpCompleteRequest5.c)
 *     IovpCompleteRequest3 @ 0x140BA8E9C (IovpCompleteRequest3.c)
 *     IovFreeIrpPrivate @ 0x140BA8F30 (IovFreeIrpPrivate.c)
 *     VfPendingMoreProcessingRequired @ 0x140BA9000 (VfPendingMoreProcessingRequired.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140BA9084 (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x140613C88 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x140613CD0 (ViIrpDatabaseReleaseLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140B851B8 (VfUtilAddressRangeRemoveCheckEmpty.c)
 */

void __fastcall VfIrpDatabaseEntryReleaseLock(_QWORD *a1)
{
  unsigned __int64 v2; // rbx
  char *v3; // rcx
  char *v4; // rax
  char **v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  KIRQL v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  if ( !*((_DWORD *)a1 + 6) )
  {
    ViIrpDatabaseAcquireLockExclusive(&v8);
    v2 = *a1;
    if ( *a1 )
    {
      guard_dispatch_icall_no_overrides(a1, *a1);
      *a1 = 0LL;
      VfUtilAddressRangeRemoveCheckEmpty(
        (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v2 >> 12))),
        v2);
    }
    ViIrpDatabaseReleaseLockExclusive(v8);
  }
  if ( !*((_DWORD *)a1 + 5) )
  {
    ViIrpDatabaseAcquireLockExclusive(&v8);
    if ( !*((_DWORD *)a1 + 5) )
    {
      v3 = (char *)(a1 + 4);
      v4 = (char *)a1[4];
      if ( *((_QWORD **)v4 + 1) != a1 + 4 || (v5 = (char **)a1[5], *v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      *((_QWORD *)v4 + 1) = v5;
      a1[5] = a1 + 4;
      *(_QWORD *)v3 = v3;
      if ( *(char **)v4 == v4 )
      {
        v6 = (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned int)((v4 - (_BYTE *)ViIrpDatabase) >> 4));
        *v6 = 0LL;
        v6[1] = 0LL;
      }
    }
    ViIrpDatabaseReleaseLockExclusive(v8);
  }
  v7 = (_QWORD *)a1[4];
  KeReleaseSpinLock(a1 + 1, *((_BYTE *)a1 + 16));
  if ( v7 == a1 + 4 )
  {
    *((_DWORD *)a1 + 7) |= 0x80000000;
    guard_dispatch_icall_no_overrides(a1, *a1);
  }
}
