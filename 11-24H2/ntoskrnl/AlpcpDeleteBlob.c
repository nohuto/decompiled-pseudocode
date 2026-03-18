/*
 * XREFs of AlpcpDeleteBlob @ 0x140893140
 * Callers:
 *     AlpcpFlushResourcesPort @ 0x14088BD0C (AlpcpFlushResourcesPort.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14088DE30 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpDeleteView @ 0x14089310C (AlpcpDeleteView.c)
 *     NtAlpcDeleteSecurityContext @ 0x1408937D0 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1408949C0 (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcCreateSecurityContext @ 0x140894C50 (NtAlpcCreateSecurityContext.c)
 *     AlpcpMapLegacyPortView @ 0x14093C1C0 (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreatePortSection @ 0x14093EB80 (NtAlpcCreatePortSection.c)
 *     NtAlpcDeleteResourceReserve @ 0x140A14C20 (NtAlpcDeleteResourceReserve.c)
 *     NtAlpcDeletePortSection @ 0x140A15600 (NtAlpcDeletePortSection.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     AlpcSectionDeleteProcedure @ 0x140893220 (AlpcSectionDeleteProcedure.c)
 */

char __fastcall AlpcpDeleteBlob(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 *v1; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rsi
  char v5; // al
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  v1 = (unsigned __int64 *)(BugCheckParameter2 - 16);
  v3 = KeAbPreAcquire(BugCheckParameter2 - 16, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, (__int64)v3, (__int64)v1);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  v5 = *(_BYTE *)(BugCheckParameter2 - 32);
  if ( (v5 & 8) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v1);
    KeAbPostRelease((ULONG_PTR)v1);
    return 0;
  }
  else
  {
    *(_BYTE *)(BugCheckParameter2 - 32) = v5 | 8;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v1);
    KeAbPostRelease((ULONG_PTR)v1);
    if ( *(__int64 (__fastcall **)(ULONG_PTR))(AlpcpRegisteredTypes[*(unsigned __int8 *)(BugCheckParameter2 - 31)] + 32) == AlpcSectionDeleteProcedure )
      AlpcSectionDeleteProcedure(BugCheckParameter2);
    else
      guard_dispatch_icall_no_overrides(BugCheckParameter2, v6, v7, v8);
    return 1;
  }
}
