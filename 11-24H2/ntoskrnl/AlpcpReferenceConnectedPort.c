/*
 * XREFs of AlpcpReferenceConnectedPort @ 0x1408E89B0
 * Callers:
 *     NtAlpcImpersonateClientOfPort @ 0x14089F010 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpExposeHandleAttribute @ 0x1408A0E00 (AlpcpExposeHandleAttribute.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1409950F4 (AlpcpPortQueryConnectedSidInfo.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x1409953FC (AlpcpPortQueryServerSessionInfo.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x140411C00 (ObReferenceObjectSafe.c)
 */

__int64 __fastcall AlpcpReferenceConnectedPort(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  char *v4; // rbp
  int v5; // eax

  v2 = 0LL;
  if ( (*(_DWORD *)(a1 + 416) & 6) == 2 )
  {
    PsReferenceSiloContext((void *)a1);
    return a1;
  }
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    v4 = (char *)KeAbPreAcquire(v3 - 16, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 - 16), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(v3 - 16), 0, v4, v3 - 16);
    if ( v4 )
      v4[10] = 1;
    v5 = *(_DWORD *)(a1 + 416) & 6;
    if ( v5 == 4 )
    {
      v2 = *(_QWORD *)(v3 + 8);
    }
    else
    {
      if ( v5 != 6 )
      {
LABEL_13:
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 - 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v3 - 16));
        KeAbPostRelease(v3 - 16);
        return v2;
      }
      v2 = *(_QWORD *)(v3 + 16);
    }
    if ( v2 && !ObReferenceObjectSafe(v2) )
      v2 = 0LL;
    goto LABEL_13;
  }
  return v2;
}
