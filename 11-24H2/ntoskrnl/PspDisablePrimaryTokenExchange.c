/*
 * XREFs of PspDisablePrimaryTokenExchange @ 0x1409213E0
 * Callers:
 *     PspSystemThreadStartup @ 0x1404820D0 (PspSystemThreadStartup.c)
 *     PspUserThreadStartup @ 0x1409212E0 (PspUserThreadStartup.c)
 *     PspSecureThreadStartup @ 0x140A90820 (PspSecureThreadStartup.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     PspSynchronizeThreadIsolationDomains @ 0x14032C988 (PspSynchronizeThreadIsolationDomains.c)
 *     PspLockUnlockProcessExclusive @ 0x140408728 (PspLockUnlockProcessExclusive.c)
 *     KeSynchronizeAddressPolicy @ 0x140487534 (KeSynchronizeAddressPolicy.c)
 *     KeKvaShadowingActive @ 0x1404A367C (KeKvaShadowingActive.c)
 *     SeTokenIsAdmin @ 0x14085AA10 (SeTokenIsAdmin.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1408F2544 (PspOneDirectionSecurityDomainCombine.c)
 *     MmSynchronizeAddressPolicy @ 0x140A84ED8 (MmSynchronizeAddressPolicy.c)
 */

void __fastcall PspDisablePrimaryTokenExchange(__int64 a1)
{
  __int64 v1; // rsi
  void *v2; // rbx
  BOOLEAN IsAdmin; // di
  BOOL v4; // ecx
  BOOL v5; // ebx
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(v1 + 496) & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(v1 + 496), 0xFu);
    PspLockUnlockProcessExclusive(v1, a1);
  }
  if ( (*(_DWORD *)(v1 + 1532) & 0x400000) == 0 )
  {
    v2 = (void *)PsReferencePrimaryTokenWithTag(v1, 0x746C6644u);
    IsAdmin = SeTokenIsAdmin(v2);
    ObfDereferenceObject(v2);
    v4 = IsAdmin != 0;
    if ( (*(_BYTE *)(v1 + 368) & 1) != 0 )
      v4 = 1;
    v5 = 0;
    if ( (*(_DWORD *)(v1 + 1532) & 0x800000) == 0 )
      v5 = v4;
    if ( v5 )
    {
      *(_QWORD *)(v1 + 1888) = 0LL;
      *(_QWORD *)(v1 + 1896) = 0LL;
      PspSynchronizeThreadIsolationDomains(v1);
    }
    if ( !(unsigned int)KeKvaShadowingActive() || (*(_DWORD *)(v1 + 1532) & 0x4000) != 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)(v1 + 1532), 0xEu);
    }
    else
    {
      if ( v5 )
      {
        *(_BYTE *)(v1 + 352) = 1;
        _InterlockedOr(v6, 0);
      }
      KeSynchronizeAddressPolicy(v1);
      if ( !_interlockedbittestandset((volatile signed __int32 *)(v1 + 1532), 0xEu) && *(_BYTE *)(v1 + 352) == 1 )
        MmSynchronizeAddressPolicy(v1);
    }
    if ( !_interlockedbittestandset((volatile signed __int32 *)(v1 + 1532), 0x16u) )
      PspOneDirectionSecurityDomainCombine(v1);
  }
  _InterlockedOr(v6, 0);
}
