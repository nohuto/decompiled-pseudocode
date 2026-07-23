/*
 * XREFs of SeTokenCanImpersonate @ 0x1408A58F0
 * Callers:
 *     PsImpersonateClient @ 0x1408A51C0 (PsImpersonateClient.c)
 * Callees:
 *     SepAcquireOrderedReadLocks @ 0x140293230 (SepAcquireOrderedReadLocks.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     RtlSidDominatesForTrust @ 0x140361640 (RtlSidDominatesForTrust.c)
 *     RtlEqualSid @ 0x14036A6E0 (RtlEqualSid.c)
 *     SepSidInToken @ 0x1403CF090 (SepSidInToken.c)
 *     SepSidInTokenSidHash @ 0x1403D1F20 (SepSidInTokenSidHash.c)
 *     RtlSidDominates @ 0x1403F2890 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x14041C6A0 (SepCopyTokenIntegrity.c)
 *     SeTokenIsRestricted @ 0x1404360F0 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x14045ACB0 (SeTokenIsWriteRestricted.c)
 *     SepLogUnmatchedSessionFlagImpersonationAttempt @ 0x1404CEC80 (SepLogUnmatchedSessionFlagImpersonationAttempt.c)
 *     RtlIsParentOfChildAppContainer @ 0x1406EF480 (RtlIsParentOfChildAppContainer.c)
 *     SeQueryInformationToken @ 0x1408418A0 (SeQueryInformationToken.c)
 *     RtlIsMultiSessionSku @ 0x140A09E70 (RtlIsMultiSessionSku.c)
 *     SeTokenIsElevated @ 0x140A0BD24 (SeTokenIsElevated.c)
 *     RtlQueryElevationFlags @ 0x140A4AFD0 (RtlQueryElevationFlags.c)
 *     SepCheckCapabilities @ 0x140A87D3C (SepCheckCapabilities.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall SeTokenCanImpersonate(__int64 Token, __int64 a2, int a3, _BYTE *a4)
{
  NTSTATUS result; // eax
  _BYTE *v7; // r11
  NTSTATUS InformationToken; // esi
  char v9; // r14
  bool v10; // zf
  int v11; // eax
  void *v12; // r14
  void *v13; // r15
  void *v14; // rbx
  void *v15; // rdi
  unsigned __int8 *v16; // r14
  bool v17; // si
  unsigned __int8 *v18; // r14
  unsigned __int8 *v19; // r14
  bool v20; // sf
  BOOLEAN v21; // al
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
      *v7 = 1;
    if ( (*(_DWORD *)(Token + 64) & *(_DWORD *)(Token + 72) & 0x20000000) != 0 )
      return 0;
    SepAcquireOrderedReadLocks(Token, a2);
    SepCopyTokenIntegrity(Token, (__int64)Sid1);
    SepCopyTokenIntegrity(a2, (__int64)Sid2);
    InformationToken = RtlSidDominates(Sid1[0], Sid2[0], (PBOOLEAN)&Dominates);
    if ( InformationToken < 0 )
    {
LABEL_30:
      ExReleaseResourceLite(*(PERESOURCE *)(Token + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return InformationToken;
    }
    if ( (_BYTE)Dominates )
    {
      if ( *(_DWORD *)(a2 + 120) == *(_DWORD *)(Token + 120)
        && (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 32LL) & 0x10) == 0
        && !RtlIsMultiSessionSku() )
      {
        v16 = (unsigned __int8 *)SeDefaultAccountAliasSid;
        v17 = SepSidInToken(Token, 0LL, (unsigned __int8 *)SeDefaultAccountAliasSid, 0, 0, 0);
        if ( v17 && SeTokenIsRestricted((PACCESS_TOKEN)Token) )
          v17 = SepSidInToken(Token, 0LL, v16, 0, 1, 0);
        if ( SepAllowSessionImpersonationCap && (*(_DWORD *)(Token + 200) & 0x4000) == 0 )
        {
          v18 = (unsigned __int8 *)SeSessionImpersonationCapabilityGroupSid;
          if ( SepSidInToken(Token, 0LL, (unsigned __int8 *)SeSessionImpersonationCapabilityGroupSid, 0, 0, 0)
            && (!SeTokenIsRestricted((PACCESS_TOKEN)Token) || SepSidInToken(Token, 0LL, v18, 0, 1, 0)) )
          {
            goto LABEL_32;
          }
          if ( v17 )
            goto LABEL_32;
        }
        if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
        {
          v19 = (unsigned __int8 *)SeConstrainedImpersonationCapabilityGroupSid;
          if ( (SepSidInToken(Token, 0LL, (unsigned __int8 *)SeConstrainedImpersonationCapabilityGroupSid, 0, 0, 0)
             && (!SeTokenIsRestricted((PACCESS_TOKEN)Token) || SepSidInToken(Token, 0LL, v19, 0, 1, 0))
             || v17)
            && (*(_DWORD *)(Token + 200) & 0x4000) == 0 )
          {
            goto LABEL_32;
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
            v20 = (int)SepCheckCapabilities((PACCESS_TOKEN)Token, (__int64)&DominatesTrust) < 0;
            v21 = DominatesTrust;
            if ( !v20 )
            {
              if ( DominatesTrust )
              {
LABEL_32:
                InformationToken = 0;
                goto LABEL_30;
              }
              v21 = RtlEqualSid(*(PSID *)(Token + 784), *(PSID *)(a2 + 784));
            }
            if ( v21 )
              goto LABEL_32;
          }
        }
      }
      if ( *(_DWORD *)(Token + 24) == *(_DWORD *)(a2 + 224) && *(_DWORD *)(Token + 28) == *(_DWORD *)(a2 + 228) )
        goto LABEL_32;
      if ( RtlEqualSid(**(PSID **)(Token + 152), **(PSID **)(a2 + 152)) )
      {
        if ( RtlQueryElevationFlags(&Flags) < 0 || (Flags.Flags & 1) == 0 )
          goto LABEL_27;
        v9 = 0;
        Dominates = 0LL;
        v10 = *(_DWORD *)(a2 + 192) == 2;
        DominatesTrust = 0;
        if ( !v10 || *(int *)(a2 + 196) >= 2 )
        {
          InformationToken = SeQueryInformationToken((PACCESS_TOKEN)a2, TokenElevation, (PVOID *)&Dominates);
          if ( InformationToken >= 0 && *Dominates )
          {
            v9 = 1;
            DominatesTrust = 1;
          }
          if ( Dominates )
            ExFreePoolWithTag(Dominates, 0);
          if ( InformationToken < 0 )
            goto LABEL_30;
        }
        if ( v9 )
        {
          InformationToken = SeTokenIsElevated(Token, &DominatesTrust);
          if ( InformationToken < 0 )
            goto LABEL_30;
          if ( !DominatesTrust && (*(_DWORD *)(*(_QWORD *)(Token + 216) + 32LL) & 4) != 0 )
            goto LABEL_38;
        }
        if ( (*(_DWORD *)(*(_QWORD *)(Token + 216) + 32LL) & 4) != 0
          && (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 32LL) & 4) == 0 )
        {
          SepLogUnmatchedSessionFlagImpersonationAttempt(Token, a2);
        }
        else
        {
LABEL_27:
          InformationToken = 0;
          if ( (*(_DWORD *)(Token + 200) & 0x4000) == 0
            || (*(_DWORD *)(a2 + 200) & 0x4000) != 0
            && ((v12 = *(void **)(a2 + 784), v13 = *(void **)(Token + 784), RtlEqualSid(v13, v12))
             || RtlIsParentOfChildAppContainer(v13, v12)) )
          {
            if ( !SeTokenIsRestricted((PACCESS_TOKEN)Token)
              || SeTokenIsRestricted((PACCESS_TOKEN)a2)
              && (SeTokenIsWriteRestricted((PACCESS_TOKEN)Token) || !SeTokenIsWriteRestricted((PACCESS_TOKEN)a2)) )
            {
              v11 = *(_DWORD *)(a2 + 120);
              if ( *(_DWORD *)(Token + 120) == v11 || v11 )
                goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_38:
    InformationToken = -1073741727;
    goto LABEL_30;
  }
  if ( (*(_DWORD *)(Token + 200) & 0x4000) == 0 )
    return 0;
  if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
  {
    v14 = *(void **)(a2 + 784);
    v15 = *(void **)(Token + 784);
    if ( RtlEqualSid(v15, v14) || RtlIsParentOfChildAppContainer(v15, v14) )
      return 0;
  }
  return -1073741727;
}
