/*
 * XREFs of PspDisablePrimaryTokenExchange @ 0x1408FEB00
 * Callers:
 *     PspSystemThreadStartup @ 0x140487060 (PspSystemThreadStartup.c)
 *     PspUserThreadStartup @ 0x1408FEA00 (PspUserThreadStartup.c)
 *     PspSecureThreadStartup @ 0x140A94070 (PspSecureThreadStartup.c)
 * Callees:
 *     PspSynchronizeThreadIsolationDomains @ 0x1402053A8 (PspSynchronizeThreadIsolationDomains.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     PspLockUnlockProcessExclusive @ 0x140418978 (PspLockUnlockProcessExclusive.c)
 *     KeSynchronizeAddressPolicy @ 0x14048C814 (KeSynchronizeAddressPolicy.c)
 *     KeKvaShadowingActive @ 0x1404A925C (KeKvaShadowingActive.c)
 *     SeTokenIsAdmin @ 0x1408E91E0 (SeTokenIsAdmin.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x14094DFD4 (PspOneDirectionSecurityDomainCombine.c)
 *     MmSynchronizeAddressPolicy @ 0x140A88AD8 (MmSynchronizeAddressPolicy.c)
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
