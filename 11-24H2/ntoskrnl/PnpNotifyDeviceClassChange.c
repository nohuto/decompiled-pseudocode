/*
 * XREFs of PnpNotifyDeviceClassChange @ 0x1409EC16C
 * Callers:
 *     PnpDeviceEventWorker @ 0x1409ED430 (PnpDeviceEventWorker.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x14044B690 (PsGetServerSiloServiceSessionId.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     IopGetSessionIdFromSymbolicName @ 0x1406F6DC4 (IopGetSessionIdFromSymbolicName.c)
 *     PnpDereferenceNotify @ 0x1409EC754 (PnpDereferenceNotify.c)
 *     PnpNotifyDriverCallback @ 0x1409EC7F0 (PnpNotifyDriverCallback.c)
 */

__int64 __fastcall PnpNotifyDeviceClassChange(__int128 *a1, _DWORD *a2, __int64 a3)
{
  __int128 v3; // xmm1
  int SessionIdFromSymbolicName; // edi
  __int128 v6; // xmm0
  _QWORD *v7; // r14
  _QWORD *v8; // rbx
  void *v9; // rbp
  unsigned __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rcx
  _BYTE v13[8]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v14[40]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v15; // [rsp+50h] [rbp-48h]

  v3 = *(_OWORD *)a2;
  SessionIdFromSymbolicName = -1;
  memset(v14, 0, sizeof(v14));
  *(_DWORD *)v14 = 3145729;
  v15 = a3;
  v6 = *a1;
  *(_OWORD *)&v14[20] = v3;
  *(_OWORD *)&v14[4] = v6;
  ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
  v7 = (_QWORD *)((char *)&PnpDeviceClassNotifyList + 16 * ((*a2 + a2[1] + a2[2] + a2[3]) % 0xDu));
  v8 = (_QWORD *)*v7;
  while ( v8 != v7 )
  {
    v9 = v8;
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( *((_DWORD *)v8 + 5) != (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo) )
      SessionIdFromSymbolicName = IopGetSessionIdFromSymbolicName();
    ++*((_WORD *)v8 + 28);
    KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)v8[9], 1u);
    if ( (SessionIdFromSymbolicName == -1 || *((_DWORD *)v8 + 5) == SessionIdFromSymbolicName)
      && !*((_BYTE *)v8 + 58)
      && (v8 + 10 == (_QWORD *)a2 || RtlCompareMemory(v8 + 10, a2, 0x10uLL) == 16) )
    {
      PnpNotifyDriverCallback(v8, v14, v13);
    }
    ExReleaseResourceLite((PERESOURCE)v8[9]);
    KeLeaveCriticalRegion();
    ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
    v8 = (_QWORD *)*v8;
    PnpDereferenceNotify(v9);
  }
  KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
  return 0LL;
}
