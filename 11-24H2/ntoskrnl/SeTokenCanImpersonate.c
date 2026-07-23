/*
 * XREFs of SeTokenCanImpersonate @ 0x1408E8180
 * Callers:
 *     PsImpersonateClient @ 0x1408E7A20 (PsImpersonateClient.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     SepAcquireOrderedReadLocks @ 0x1403232E0 (SepAcquireOrderedReadLocks.c)
 *     SepSidInTokenSidHash @ 0x1403BEFB0 (SepSidInTokenSidHash.c)
 *     SepSidInToken @ 0x1403CB430 (SepSidInToken.c)
 *     RtlSidDominatesForTrust @ 0x1403E3BC0 (RtlSidDominatesForTrust.c)
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     RtlSidDominates @ 0x1403EFBC0 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x140409240 (SepCopyTokenIntegrity.c)
 *     SeTokenIsRestricted @ 0x140424A30 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x14044F500 (SeTokenIsWriteRestricted.c)
 *     SepLogUnmatchedSessionFlagImpersonationAttempt @ 0x1404C7CB0 (SepLogUnmatchedSessionFlagImpersonationAttempt.c)
 *     RtlIsParentOfChildAppContainer @ 0x1406F8F00 (RtlIsParentOfChildAppContainer.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     RtlQueryElevationFlags @ 0x1408E8AB0 (RtlQueryElevationFlags.c)
 *     RtlIsMultiSessionSku @ 0x1408E8B20 (RtlIsMultiSessionSku.c)
 *     SeTokenIsElevated @ 0x140A0E3B0 (SeTokenIsElevated.c)
 *     SepCheckCapabilities @ 0x140A8926C (SepCheckCapabilities.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall SeTokenCanImpersonate(__int64 Token, __int64 a2, int a3, _BYTE *a4)
{
  NTSTATUS result; // eax
  unsigned __int64 v7; // r8
  _BYTE *v8; // r11
  NTSTATUS InformationToken; // esi
  char v10; // r14
  bool v11; // zf
  int v12; // eax
  void *v13; // r14
  void *v14; // r15
  void *v15; // rbx
  void *v16; // rdi
  unsigned __int8 *v17; // r14
  bool v18; // si
  unsigned __int8 *v19; // r14
  unsigned __int8 *v20; // r14
  bool v21; // sf
  BOOLEAN v22; // al
  PSID Sid2[2]; // [rsp+30h] [rbp-28h] BYREF
  PSID Sid1[2]; // [rsp+40h] [rbp-18h] BYREF
  _DWORD *Dominates; // [rsp+80h] [rbp+28h] BYREF
  _RTL_ELEVATION_FLAGS Flags; // [rsp+88h] [rbp+30h] BYREF
  BOOLEAN DominatesTrust; // [rsp+90h] [rbp+38h] BYREF

  LOBYTE(Dominates) = 0;
  DominatesTrust = 0;
  Flags.Flags = 0;
  *a4 = 0;
  *(_OWORD *)Sid1 = 0LL;
  *(_OWORD *)Sid2 = 0LL;
  if ( a3 < 2 )
    return 0;
  if ( *(_DWORD *)(a2 + 24) != 998 || *(_DWORD *)(a2 + 28) )
  {
    result = RtlSidDominatesForTrust(*(PSID *)(Token + 1104), *(PSID *)(a2 + 1104), &DominatesTrust);
    if ( result < 0 )
      return result;
    if ( !DominatesTrust )
      *v8 = 1;
    if ( (*(_DWORD *)(Token + 64) & *(_DWORD *)(Token + 72) & 0x20000000) != 0 )
      return 0;
    SepAcquireOrderedReadLocks(Token, a2, v7);
    SepCopyTokenIntegrity(Token, (__int64)Sid1);
    SepCopyTokenIntegrity(a2, (__int64)Sid2);
    InformationToken = RtlSidDominates(Sid1[0], Sid2[0], (PBOOLEAN)&Dominates);
    if ( InformationToken < 0 )
    {
LABEL_30:
      ExReleaseResourceLite(*(PERESOURCE *)(Token + 48));
      KeLeaveCriticalRegionThread();
      ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
      KeLeaveCriticalRegionThread();
      return InformationToken;
    }
    if ( (_BYTE)Dominates )
    {
      if ( *(_DWORD *)(a2 + 120) == *(_DWORD *)(Token + 120)
        && (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 40LL) & 0x10) == 0
        && !RtlIsMultiSessionSku() )
      {
        v17 = (unsigned __int8 *)SeDefaultAccountAliasSid;
        v18 = SepSidInToken(Token, 0LL, (unsigned __int8 *)SeDefaultAccountAliasSid, 0, 0, 0);
        if ( v18 && SeTokenIsRestricted((PACCESS_TOKEN)Token) )
          v18 = SepSidInToken(Token, 0LL, v17, 0, 1, 0);
        if ( SepAllowSessionImpersonationCap && (*(_DWORD *)(Token + 200) & 0x4000) == 0 )
        {
          v19 = (unsigned __int8 *)SeSessionImpersonationCapabilityGroupSid;
          if ( SepSidInToken(Token, 0LL, (unsigned __int8 *)SeSessionImpersonationCapabilityGroupSid, 0, 0, 0)
            && (!SeTokenIsRestricted((PACCESS_TOKEN)Token) || SepSidInToken(Token, 0LL, v19, 0, 1, 0)) )
          {
            goto LABEL_35;
          }
          if ( v18 )
            goto LABEL_35;
        }
        if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
        {
          v20 = (unsigned __int8 *)SeConstrainedImpersonationCapabilityGroupSid;
          if ( (SepSidInToken(Token, 0LL, (unsigned __int8 *)SeConstrainedImpersonationCapabilityGroupSid, 0, 0, 0)
             && (!SeTokenIsRestricted((PACCESS_TOKEN)Token) || SepSidInToken(Token, 0LL, v20, 0, 1, 0))
             || v18)
            && (*(_DWORD *)(Token + 200) & 0x4000) == 0 )
          {
            goto LABEL_35;
          }
          DominatesTrust = SepSidInTokenSidHash(
                             Token + 808,
                             0LL,
                             (unsigned __int8 *)SeConstrainedImpersonationCapabilitySid,
                             0,
                             1,
                             0);
          if ( DominatesTrust )
          {
            v21 = (int)SepCheckCapabilities((PACCESS_TOKEN)Token, (__int64)&DominatesTrust) < 0;
            v22 = DominatesTrust;
            if ( !v21 )
            {
              if ( DominatesTrust )
              {
LABEL_35:
                InformationToken = 0;
                goto LABEL_30;
              }
              v22 = RtlEqualSid(*(PSID *)(Token + 784), *(PSID *)(a2 + 784));
            }
            if ( v22 )
              goto LABEL_35;
          }
        }
      }
      if ( *(_DWORD *)(Token + 24) == *(_DWORD *)(a2 + 224) && *(_DWORD *)(Token + 28) == *(_DWORD *)(a2 + 228) )
        goto LABEL_35;
      if ( RtlEqualSid(**(PSID **)(Token + 152), **(PSID **)(a2 + 152)) )
      {
        if ( RtlQueryElevationFlags(&Flags) < 0 || (Flags.Flags & 1) == 0 )
          goto LABEL_27;
        v10 = 0;
        Dominates = 0LL;
        v11 = *(_DWORD *)(a2 + 192) == 2;
        DominatesTrust = 0;
        if ( !v11 || *(int *)(a2 + 196) >= 2 )
        {
          InformationToken = SeQueryInformationToken((PACCESS_TOKEN)a2, TokenElevation, (PVOID *)&Dominates);
          if ( InformationToken >= 0 && *Dominates )
          {
            v10 = 1;
            DominatesTrust = 1;
          }
          if ( Dominates )
            ExFreePoolWithTag(Dominates, 0);
          if ( InformationToken < 0 )
            goto LABEL_30;
        }
        if ( v10 )
        {
          InformationToken = SeTokenIsElevated(Token, &DominatesTrust);
          if ( InformationToken < 0 )
            goto LABEL_30;
          if ( !DominatesTrust && (*(_DWORD *)(*(_QWORD *)(Token + 216) + 40LL) & 4) != 0 )
            goto LABEL_33;
        }
        if ( (*(_DWORD *)(*(_QWORD *)(Token + 216) + 40LL) & 4) != 0
          && (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 40LL) & 4) == 0 )
        {
          SepLogUnmatchedSessionFlagImpersonationAttempt(Token, a2);
        }
        else
        {
LABEL_27:
          InformationToken = 0;
          if ( (*(_DWORD *)(Token + 200) & 0x4000) == 0
            || (*(_DWORD *)(a2 + 200) & 0x4000) != 0
            && ((v13 = *(void **)(a2 + 784), v14 = *(void **)(Token + 784), RtlEqualSid(v14, v13))
             || RtlIsParentOfChildAppContainer(v14, v13)) )
          {
            if ( !SeTokenIsRestricted((PACCESS_TOKEN)Token)
              || SeTokenIsRestricted((PACCESS_TOKEN)a2)
              && (SeTokenIsWriteRestricted((PACCESS_TOKEN)Token) || !SeTokenIsWriteRestricted((PACCESS_TOKEN)a2)) )
            {
              v12 = *(_DWORD *)(a2 + 120);
              if ( *(_DWORD *)(Token + 120) == v12 || v12 )
                goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_33:
    InformationToken = -1073741727;
    goto LABEL_30;
  }
  if ( (*(_DWORD *)(Token + 200) & 0x4000) == 0 )
    return 0;
  if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
  {
    v15 = *(void **)(a2 + 784);
    v16 = *(void **)(Token + 784);
    if ( RtlEqualSid(v16, v15) || RtlIsParentOfChildAppContainer(v16, v15) )
      return 0;
  }
  return -1073741727;
}
