/*
 * XREFs of AlpcpDeleteBlob @ 0x1408AF738
 * Callers:
 *     NtAlpcCreatePortSection @ 0x1408AD370 (NtAlpcCreatePortSection.c)
 *     NtAlpcDeleteResourceReserve @ 0x1408AD540 (NtAlpcDeleteResourceReserve.c)
 *     NtAlpcDeleteSecurityContext @ 0x1408AF4B0 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpDeleteView @ 0x1408AF704 (AlpcpDeleteView.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1408AFA20 (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcCreateSecurityContext @ 0x1408AFCC0 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttribute @ 0x1408B0460 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpMapLegacyPortView @ 0x1408B62D4 (AlpcpMapLegacyPortView.c)
 *     AlpcpFlushResourcesPort @ 0x14098BDD4 (AlpcpFlushResourcesPort.c)
 *     NtAlpcDeletePortSection @ 0x140A0BDA0 (NtAlpcDeletePortSection.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     AlpcSectionDeleteProcedure @ 0x1408AF820 (AlpcSectionDeleteProcedure.c)
 */

char __fastcall AlpcpDeleteBlob(ULONG_PTR a1)
{
  unsigned __int64 *v1; // rbx
  __int64 *v3; // rax
  __int64 *v4; // rsi
  char v5; // al

  v1 = (unsigned __int64 *)(a1 - 16);
  v3 = KeAbPreAcquire(a1 - 16, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v3, (__int64)v1);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  v5 = *(_BYTE *)(a1 - 32);
  if ( (v5 & 8) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v1);
    KeAbPostRelease((ULONG_PTR)v1);
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 - 32) = v5 | 8;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v1);
    KeAbPostRelease((ULONG_PTR)v1);
    if ( *(__int64 (__fastcall **)(ULONG_PTR))(AlpcpRegisteredTypes[*(unsigned __int8 *)(a1 - 31)] + 32) == AlpcSectionDeleteProcedure )
      AlpcSectionDeleteProcedure(a1);
    else
      guard_dispatch_icall_no_overrides(a1);
    return 1;
  }
}
