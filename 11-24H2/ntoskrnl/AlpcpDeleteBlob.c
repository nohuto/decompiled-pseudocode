/*
 * XREFs of AlpcpDeleteBlob @ 0x14089CCE0
 * Callers:
 *     AlpcpFlushResourcesPort @ 0x14088ECFC (AlpcpFlushResourcesPort.c)
 *     NtAlpcCreatePortSection @ 0x1408931C0 (NtAlpcCreatePortSection.c)
 *     NtAlpcDeleteResourceReserve @ 0x140895430 (NtAlpcDeleteResourceReserve.c)
 *     NtAlpcDeleteSecurityContext @ 0x140896480 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpDeleteView @ 0x14089CE2C (AlpcpDeleteView.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14089CE60 (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcCreateSecurityContext @ 0x14089D0F0 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttribute @ 0x1409C12C0 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpMapLegacyPortView @ 0x1409E98D0 (AlpcpMapLegacyPortView.c)
 *     NtAlpcDeletePortSection @ 0x140A0E420 (NtAlpcDeletePortSection.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     AlpcSectionDeleteProcedure @ 0x14089CDC0 (AlpcSectionDeleteProcedure.c)
 */

char __fastcall AlpcpDeleteBlob(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 *v1; // rbx
  char *v3; // rax
  char *v4; // rsi
  char v5; // al
  __int64 v6; // rdx

  v1 = (unsigned __int64 *)(BugCheckParameter2 - 16);
  v3 = (char *)KeAbPreAcquire(BugCheckParameter2 - 16, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v3, (__int64)v1);
  if ( v4 )
    v4[10] = 1;
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
      guard_dispatch_icall_no_overrides(BugCheckParameter2, v6);
    return 1;
  }
}
