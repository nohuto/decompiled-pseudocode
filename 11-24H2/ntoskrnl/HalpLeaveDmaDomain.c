/*
 * XREFs of HalpLeaveDmaDomain @ 0x14054EAFC
 * Callers:
 *     HalpDmaFreeChildAdapter @ 0x14054CEA0 (HalpDmaFreeChildAdapter.c)
 *     HalLeaveDmaDomain @ 0x14054DC30 (HalLeaveDmaDomain.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     HalpDmaDereferenceDomainObject @ 0x140397F8C (HalpDmaDereferenceDomainObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpLeaveDmaDomain(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int64 *v3; // rbx
  char *v4; // rax
  __int64 v5; // rdx
  char *v6; // rsi
  int v7; // esi
  __int64 v8; // rdx

  v1 = *(_QWORD *)(a1 + 512);
  if ( !*(_DWORD *)(v1 + 48) )
  {
LABEL_16:
    HalpDmaDereferenceDomainObject((__int64 *)v1);
    *(_QWORD *)(a1 + 512) = 0LL;
    return 0;
  }
  v3 = (unsigned __int64 *)(a1 + 320);
  v4 = (char *)KeAbPreAcquire(a1 + 320, 0LL);
  v6 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v4, (__int64)v3);
  if ( v6 )
    v6[10] = 1;
  if ( *(_BYTE *)(a1 + 346) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease((ULONG_PTR)v3);
    goto LABEL_14;
  }
  v7 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 544), v5);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  if ( v7 >= 0 )
  {
LABEL_14:
    if ( *(_DWORD *)(v1 + 48) == 3 )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 560), v8);
    goto LABEL_16;
  }
  return (unsigned int)v7;
}
