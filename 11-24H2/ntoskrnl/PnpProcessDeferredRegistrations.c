/*
 * XREFs of PnpProcessDeferredRegistrations @ 0x1409EC30C
 * Callers:
 *     PnpDeviceEventWorker @ 0x1409ED430 (PnpDeviceEventWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x14071E464 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PnpDereferenceNotify @ 0x1409EC754 (PnpDereferenceNotify.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 **PnpProcessDeferredRegistrations()
{
  _QWORD *v0; // rbx
  __int64 *v1; // rbx
  __int64 **result; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  struct _FAST_MUTEX *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rcx
  __int64 ***v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 **v12; // [rsp+28h] [rbp-38h]
  int v13; // [rsp+30h] [rbp-30h] BYREF
  int v14; // [rsp+34h] [rbp-2Ch] BYREF
  _OWORD v15[2]; // [rsp+38h] [rbp-28h] BYREF

  v13 = 0;
  v12 = &v11;
  v11 = (__int64 *)&v11;
  memset(v15, 0, sizeof(v15));
  ExAcquireFastMutex(&PnpDeferredRegistrationLock);
  while ( 1 )
  {
    v0 = PnpDeferredRegistrationList;
    if ( PnpDeferredRegistrationList == &PnpDeferredRegistrationList )
      break;
    if ( *((PVOID **)PnpDeferredRegistrationList + 1) != &PnpDeferredRegistrationList
      || (v3 = *(_QWORD *)PnpDeferredRegistrationList,
          *(PVOID *)(*(_QWORD *)PnpDeferredRegistrationList + 8LL) != PnpDeferredRegistrationList) )
    {
LABEL_17:
      __fastfail(3u);
    }
    PnpDeferredRegistrationList = *(PVOID *)PnpDeferredRegistrationList;
    *(_QWORD *)(v3 + 8) = &PnpDeferredRegistrationList;
    v4 = v0[2];
    v5 = *(struct _FAST_MUTEX **)(v4 + 64);
    if ( v5 )
      ExAcquireFastMutex(*(PKGUARDED_MUTEX *)(v4 + 64));
    *(_BYTE *)(v0[2] + 58LL) = 0;
    ExFreePoolWithTag(v0, 0x37706E50u);
    if ( *(_DWORD *)(v4 + 16) == 3 )
    {
      v6 = *(_QWORD *)(v4 + 88);
      if ( v6 )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
        if ( v7 )
        {
          if ( (*(_DWORD *)(v7 + 704) & 0x4000) != 0 )
          {
            v8 = v12;
            v9 = (__int64 ***)(v4 + 96);
            if ( *v12 != (__int64 *)&v11 )
              goto LABEL_17;
            *(_QWORD *)(v4 + 104) = v12;
            *v9 = &v11;
            *v8 = v9;
            v12 = (__int64 **)(v4 + 96);
            ++*(_WORD *)(v4 + 56);
          }
        }
      }
    }
    if ( v5 )
      KeReleaseGuardedMutex(v5);
    PnpDereferenceNotify((PVOID)v4);
  }
  KeReleaseGuardedMutex(&PnpDeferredRegistrationLock);
  while ( 1 )
  {
    v1 = v11;
    result = &v11;
    if ( v11 == (__int64 *)&v11 )
      return result;
    if ( (__int64 **)v11[1] != &v11 )
      goto LABEL_17;
    v10 = (__int64 *)*v11;
    if ( *(__int64 **)(*v11 + 8) != v11 )
      goto LABEL_17;
    v11 = (__int64 *)*v11;
    v10[1] = (__int64)&v11;
    LODWORD(v15[0]) = 2097153;
    *(GUID *)((char *)v15 + 4) = GUID_TARGET_DEVICE_REMOVE_COMPLETE;
    PnpNotifyTargetDeviceChangeNotifyEntry((__int64)(v1 - 12), (__int64)v15, &v13, &v14);
    ObfDereferenceObject((PVOID)*(v1 - 1));
    *(v1 - 1) = 0LL;
    PnpDereferenceNotify(v1 - 12);
  }
}
