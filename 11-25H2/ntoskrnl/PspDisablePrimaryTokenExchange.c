/*
 * XREFs of PspDisablePrimaryTokenExchange @ 0x14090B050
 * Callers:
 *     PspSystemThreadStartup @ 0x140487BD0 (PspSystemThreadStartup.c)
 *     PspUserThreadStartup @ 0x14090AF50 (PspUserThreadStartup.c)
 *     PspSecureThreadStartup @ 0x140A8FEA0 (PspSecureThreadStartup.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PspLockUnlockProcessExclusive @ 0x14041D224 (PspLockUnlockProcessExclusive.c)
 *     PspSynchronizeThreadIsolationDomains @ 0x140489530 (PspSynchronizeThreadIsolationDomains.c)
 *     KeSynchronizeAddressPolicy @ 0x14048D178 (KeSynchronizeAddressPolicy.c)
 *     KeKvaShadowingActive @ 0x1404A82EC (KeKvaShadowingActive.c)
 *     SeTokenIsAdmin @ 0x1408D9E10 (SeTokenIsAdmin.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x140920D58 (PspOneDirectionSecurityDomainCombine.c)
 *     MmSynchronizeAddressPolicy @ 0x140A849C4 (MmSynchronizeAddressPolicy.c)
 */

void __fastcall PspDisablePrimaryTokenExchange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  void *v5; // rbx
  BOOLEAN IsAdmin; // di
  BOOL v7; // ecx
  BOOL v8; // ebx
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 184);
  if ( (*(_DWORD *)(v4 + 496) & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(v4 + 496), 0xFu);
    PspLockUnlockProcessExclusive(v4, a1, a3, a4);
  }
  if ( (*(_DWORD *)(v4 + 1532) & 0x400000) == 0 )
  {
    v5 = (void *)PsReferencePrimaryTokenWithTag(v4, 0x746C6644u);
    IsAdmin = SeTokenIsAdmin(v5);
    ObfDereferenceObject(v5);
    v7 = IsAdmin != 0;
    if ( (*(_BYTE *)(v4 + 368) & 1) != 0 )
      v7 = 1;
    v8 = 0;
    if ( (*(_DWORD *)(v4 + 1532) & 0x800000) == 0 )
      v8 = v7;
    if ( v8 )
    {
      *(_QWORD *)(v4 + 1888) = 0LL;
      *(_QWORD *)(v4 + 1896) = 0LL;
      PspSynchronizeThreadIsolationDomains(v4);
    }
    if ( !(unsigned int)KeKvaShadowingActive() || (*(_DWORD *)(v4 + 1532) & 0x4000) != 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)(v4 + 1532), 0xEu);
    }
    else
    {
      if ( v8 )
      {
        *(_BYTE *)(v4 + 352) = 1;
        _InterlockedOr(v9, 0);
      }
      KeSynchronizeAddressPolicy(v4);
      if ( !_interlockedbittestandset((volatile signed __int32 *)(v4 + 1532), 0xEu) && *(_BYTE *)(v4 + 352) == 1 )
        MmSynchronizeAddressPolicy(v4);
    }
    if ( !_interlockedbittestandset((volatile signed __int32 *)(v4 + 1532), 0x16u) )
      PspOneDirectionSecurityDomainCombine((PVOID)v4);
  }
  _InterlockedOr(v9, 0);
}
