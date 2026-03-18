/*
 * XREFs of VfIrpDatabaseEntryReleaseLock @ 0x140BA3FE4
 * Callers:
 *     IovCancelIrp @ 0x140B826F0 (IovCancelIrp.c)
 *     IovpCallDriver1 @ 0x140B8CCB4 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x140B8D280 (IovpCallDriver2.c)
 *     IovpCheckIrpForCriticalTracking @ 0x140B8D534 (IovpCheckIrpForCriticalTracking.c)
 *     VfIoAllocateIrp1 @ 0x140B8DDA4 (VfIoAllocateIrp1.c)
 *     VfIoAllocateIrp2 @ 0x140B8DE1C (VfIoAllocateIrp2.c)
 *     VfIrpWatermark @ 0x140B8E080 (VfIrpWatermark.c)
 *     ViPendingCompleteAfterWait @ 0x140B91D28 (ViPendingCompleteAfterWait.c)
 *     VfPacketReleaseLock @ 0x140B9B510 (VfPacketReleaseLock.c)
 *     VfIoInitializeIrp @ 0x140BA66E4 (VfIoInitializeIrp.c)
 *     IovpCompleteRequest1 @ 0x140BA69E8 (IovpCompleteRequest1.c)
 *     IovpLocalCompletionRoutine @ 0x140BA6B70 (IovpLocalCompletionRoutine.c)
 *     IovpCompleteRequest2 @ 0x140BA6DE4 (IovpCompleteRequest2.c)
 *     IovpCompleteRequest5 @ 0x140BA6E50 (IovpCompleteRequest5.c)
 *     IovpCompleteRequest3 @ 0x140BA6E9C (IovpCompleteRequest3.c)
 *     IovFreeIrpPrivate @ 0x140BA6F30 (IovFreeIrpPrivate.c)
 *     VfPendingMoreProcessingRequired @ 0x140BA7000 (VfPendingMoreProcessingRequired.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140BA7084 (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x1406156C8 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x140615710 (ViIrpDatabaseReleaseLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140B831B8 (VfUtilAddressRangeRemoveCheckEmpty.c)
 */

void __fastcall VfIrpDatabaseEntryReleaseLock(_QWORD *a1)
{
  __int64 v2; // r9
  unsigned __int64 v3; // rbx
  char *v4; // rcx
  char *v5; // rax
  char **v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // r9
  KIRQL v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0;
  if ( !*((_DWORD *)a1 + 6) )
  {
    ViIrpDatabaseAcquireLockExclusive(&v10);
    v3 = *a1;
    if ( *a1 )
    {
      guard_dispatch_icall_no_overrides(a1, *a1, 1LL, v2);
      *a1 = 0LL;
      VfUtilAddressRangeRemoveCheckEmpty(
        (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v3 >> 12))),
        v3);
    }
    ViIrpDatabaseReleaseLockExclusive(v10);
  }
  if ( !*((_DWORD *)a1 + 5) )
  {
    ViIrpDatabaseAcquireLockExclusive(&v10);
    if ( !*((_DWORD *)a1 + 5) )
    {
      v4 = (char *)(a1 + 4);
      v5 = (char *)a1[4];
      if ( *((_QWORD **)v5 + 1) != a1 + 4 || (v6 = (char **)a1[5], *v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      *((_QWORD *)v5 + 1) = v6;
      a1[5] = a1 + 4;
      *(_QWORD *)v4 = v4;
      if ( *(char **)v5 == v5 )
      {
        v7 = (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned int)((v5 - (_BYTE *)ViIrpDatabase) >> 4));
        *v7 = 0LL;
        v7[1] = 0LL;
      }
    }
    ViIrpDatabaseReleaseLockExclusive(v10);
  }
  v8 = (_QWORD *)a1[4];
  KeReleaseSpinLock(a1 + 1, *((_BYTE *)a1 + 16));
  if ( v8 == a1 + 4 )
  {
    *((_DWORD *)a1 + 7) |= 0x80000000;
    guard_dispatch_icall_no_overrides(a1, *a1, 2LL, v9);
  }
}
