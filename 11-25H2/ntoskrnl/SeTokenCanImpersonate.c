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

__int64 __fastcall SeTokenCanImpersonate(__int64 Token, __int64 a2, int a3, _BYTE *a4)
{
  __int64 result; // rax
  _BYTE *v7; // r11
  __int64 v8; // rdx
  int IsElevated; // esi
  __int64 v10; // rcx
  char v11; // r14
  bool v12; // zf
  int v13; // eax
  void *v14; // r14
  void *v15; // r15
  void *v16; // rbx
  void *v17; // rdi
  unsigned __int8 *v18; // r14
  bool v19; // si
  unsigned __int8 *v20; // r14
  unsigned __int8 *v21; // r14
  bool v22; // sf
  char v23; // al
  void *Buf2[2]; // [rsp+30h] [rbp-28h] BYREF
  void *Buf1[2]; // [rsp+40h] [rbp-18h] BYREF
  PVOID TokenInformation; // [rsp+80h] [rbp+28h] BYREF
  int v27; // [rsp+88h] [rbp+30h] BYREF
  __int64 v28; // [rsp+90h] [rbp+38h] BYREF

  LOBYTE(TokenInformation) = 0;
  LOBYTE(v28) = 0;
  v27 = 0;
  *a4 = 0;
  *(_OWORD *)Buf1 = 0LL;
  *(_OWORD *)Buf2 = 0LL;
  if ( a3 < 2 )
    return 0LL;
  if ( *(_DWORD *)(a2 + 24) != 998 || *(_DWORD *)(a2 + 28) )
  {
    result = RtlSidDominatesForTrust(*(_QWORD *)(Token + 1104), *(_QWORD *)(a2 + 1104), (bool *)&v28);
    if ( (int)result < 0 )
      return result;
    if ( !(_BYTE)v28 )
      *v7 = 1;
    if ( (*(_DWORD *)(Token + 64) & *(_DWORD *)(Token + 72) & 0x20000000) != 0 )
      return 0LL;
    SepAcquireOrderedReadLocks(Token, a2);
    SepCopyTokenIntegrity(Token, (__int64)Buf1);
    SepCopyTokenIntegrity(a2, (__int64)Buf2);
    IsElevated = RtlSidDominates((char *)Buf1[0], (char *)Buf2[0], &TokenInformation);
    if ( IsElevated < 0 )
    {
LABEL_30:
      ExReleaseResourceLite(*(PERESOURCE *)(Token + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return (unsigned int)IsElevated;
    }
    if ( (_BYTE)TokenInformation )
    {
      if ( *(_DWORD *)(a2 + 120) == *(_DWORD *)(Token + 120) )
      {
        v10 = *(unsigned int *)(*(_QWORD *)(a2 + 216) + 32LL);
        if ( (v10 & 0x10) == 0 && !(unsigned __int8)RtlIsMultiSessionSku(v10, v8) )
        {
          v18 = (unsigned __int8 *)SeDefaultAccountAliasSid;
          v19 = SepSidInToken(Token, 0LL, (unsigned __int8 *)SeDefaultAccountAliasSid, 0, 0, 0);
          if ( v19 && SeTokenIsRestricted((PACCESS_TOKEN)Token) )
            v19 = SepSidInToken(Token, 0LL, v18, 0, 1, 0);
          if ( SepAllowSessionImpersonationCap && (*(_DWORD *)(Token + 200) & 0x4000) == 0 )
          {
            v20 = (unsigned __int8 *)SeSessionImpersonationCapabilityGroupSid;
            if ( SepSidInToken(Token, 0LL, (unsigned __int8 *)SeSessionImpersonationCapabilityGroupSid, 0, 0, 0)
              && (!SeTokenIsRestricted((PACCESS_TOKEN)Token) || SepSidInToken(Token, 0LL, v20, 0, 1, 0)) )
            {
              goto LABEL_32;
            }
            if ( v19 )
              goto LABEL_32;
          }
          if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
          {
            v21 = (unsigned __int8 *)SeConstrainedImpersonationCapabilityGroupSid;
            if ( (SepSidInToken(Token, 0LL, (unsigned __int8 *)SeConstrainedImpersonationCapabilityGroupSid, 0, 0, 0)
               && (!SeTokenIsRestricted((PACCESS_TOKEN)Token) || SepSidInToken(Token, 0LL, v21, 0, 1, 0))
               || v19)
              && (*(_DWORD *)(Token + 200) & 0x4000) == 0 )
            {
              goto LABEL_32;
            }
            LOBYTE(v28) = SepSidInTokenSidHash(
                            Token + 808,
                            0LL,
                            (unsigned __int8 *)SeConstrainedImpersonationCapabilitySid,
                            0,
                            1,
                            0);
            if ( (_BYTE)v28 )
            {
              v22 = (int)SepCheckCapabilities((PACCESS_TOKEN)Token, (__int64)&v28) < 0;
              v23 = v28;
              if ( !v22 )
              {
                if ( (_BYTE)v28 )
                {
LABEL_32:
                  IsElevated = 0;
                  goto LABEL_30;
                }
                v23 = RtlEqualSid(*(PSID *)(Token + 784), *(PSID *)(a2 + 784));
              }
              if ( v23 )
                goto LABEL_32;
            }
          }
        }
      }
      if ( *(_DWORD *)(Token + 24) == *(_DWORD *)(a2 + 224) && *(_DWORD *)(Token + 28) == *(_DWORD *)(a2 + 228) )
        goto LABEL_32;
      if ( RtlEqualSid(**(PSID **)(Token + 152), **(PSID **)(a2 + 152)) )
      {
        if ( (int)RtlQueryElevationFlags(&v27) < 0 || (v27 & 1) == 0 )
          goto LABEL_27;
        v11 = 0;
        TokenInformation = 0LL;
        v12 = *(_DWORD *)(a2 + 192) == 2;
        LOBYTE(v28) = 0;
        if ( !v12 || *(int *)(a2 + 196) >= 2 )
        {
          IsElevated = SeQueryInformationToken((PACCESS_TOKEN)a2, TokenElevation, &TokenInformation);
          if ( IsElevated >= 0 && *(_DWORD *)TokenInformation )
          {
            v11 = 1;
            LOBYTE(v28) = 1;
          }
          if ( TokenInformation )
            ExFreePoolWithTag(TokenInformation, 0);
          if ( IsElevated < 0 )
            goto LABEL_30;
        }
        if ( v11 )
        {
          IsElevated = SeTokenIsElevated(Token, &v28);
          if ( IsElevated < 0 )
            goto LABEL_30;
          if ( !(_BYTE)v28 && (*(_DWORD *)(*(_QWORD *)(Token + 216) + 32LL) & 4) != 0 )
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
          IsElevated = 0;
          if ( (*(_DWORD *)(Token + 200) & 0x4000) == 0
            || (*(_DWORD *)(a2 + 200) & 0x4000) != 0
            && ((v14 = *(void **)(a2 + 784), v15 = *(void **)(Token + 784), RtlEqualSid(v15, v14))
             || RtlIsParentOfChildAppContainer(v15, v14)) )
          {
            if ( !SeTokenIsRestricted((PACCESS_TOKEN)Token)
              || SeTokenIsRestricted((PACCESS_TOKEN)a2)
              && (SeTokenIsWriteRestricted((PACCESS_TOKEN)Token) || !SeTokenIsWriteRestricted((PACCESS_TOKEN)a2)) )
            {
              v13 = *(_DWORD *)(a2 + 120);
              if ( *(_DWORD *)(Token + 120) == v13 || v13 )
                goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_38:
    IsElevated = -1073741727;
    goto LABEL_30;
  }
  if ( (*(_DWORD *)(Token + 200) & 0x4000) == 0 )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
  {
    v16 = *(void **)(a2 + 784);
    v17 = *(void **)(Token + 784);
    if ( RtlEqualSid(v17, v16) || RtlIsParentOfChildAppContainer(v17, v16) )
      return 0LL;
  }
  return 3221225569LL;
}
