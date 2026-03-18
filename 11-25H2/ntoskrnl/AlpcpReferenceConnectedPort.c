/*
 * XREFs of AlpcpReferenceConnectedPort @ 0x1408A6120
 * Callers:
 *     NtAlpcImpersonateClientOfPort @ 0x140859580 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpExposeHandleAttribute @ 0x1408A8710 (AlpcpExposeHandleAttribute.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1409C2254 (AlpcpPortQueryConnectedSidInfo.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x1409C255C (AlpcpPortQueryServerSessionInfo.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x140420490 (ObReferenceObjectSafe.c)
 */

__int64 __fastcall AlpcpReferenceConnectedPort(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 *v4; // r14
  int v5; // eax

  v2 = 0LL;
  if ( (*(_DWORD *)(a1 + 416) & 6) != 2 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( !v3 )
      return v2;
    v4 = KeAbPreAcquire(v3 - 16, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v3 - 16), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(v3 - 16), 0, v4, v3 - 16);
    if ( v4 )
      *((_BYTE *)v4 + 10) = 1;
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
  PsReferenceSiloContext((void *)a1);
  return a1;
}
