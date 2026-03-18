/*
 * XREFs of HalpLeaveDmaDomain @ 0x1405511BC
 * Callers:
 *     HalpDmaFreeChildAdapter @ 0x14054F560 (HalpDmaFreeChildAdapter.c)
 *     HalLeaveDmaDomain @ 0x1405502F0 (HalLeaveDmaDomain.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     HalpDmaDereferenceDomainObject @ 0x1403A92FC (HalpDmaDereferenceDomainObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpLeaveDmaDomain(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int64 *v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rsi
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

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
  v8 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, (__int64)v4, (__int64)v3);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  if ( *(_BYTE *)(a1 + 346) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease((ULONG_PTR)v3);
    goto LABEL_14;
  }
  v9 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 544), v5, v6, v7);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  if ( v9 >= 0 )
  {
LABEL_14:
    if ( *(_DWORD *)(v1 + 48) == 3 )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 560), v10, v11, v12);
    goto LABEL_16;
  }
  return (unsigned int)v9;
}
