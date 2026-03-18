/*
 * XREFs of HalpLeaveDmaDomain @ 0x14054E85C
 * Callers:
 *     HalpDmaFreeChildAdapter @ 0x14054CC00 (HalpDmaFreeChildAdapter.c)
 *     HalLeaveDmaDomain @ 0x14054D990 (HalLeaveDmaDomain.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404118D8 (HalpDmaDereferenceDomainObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpLeaveDmaDomain(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int64 *v3; // rbx
  __int64 *v4; // rax
  __int64 *v5; // rsi
  int v6; // esi

  v1 = *(_QWORD *)(a1 + 512);
  if ( !*(_DWORD *)(v1 + 48) )
  {
LABEL_16:
    HalpDmaDereferenceDomainObject((__int64 *)v1);
    *(_QWORD *)(a1 + 512) = 0LL;
    return 0;
  }
  v3 = (unsigned __int64 *)(a1 + 320);
  v4 = KeAbPreAcquire(a1 + 320, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v4, (__int64)v3);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  if ( *(_BYTE *)(a1 + 346) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease((ULONG_PTR)v3);
    goto LABEL_14;
  }
  v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 544));
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  if ( v6 >= 0 )
  {
LABEL_14:
    if ( *(_DWORD *)(v1 + 48) == 3 )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 560));
    goto LABEL_16;
  }
  return (unsigned int)v6;
}
