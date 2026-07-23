/*
 * XREFs of SeSubProcessToken @ 0x140AD660C
 * Callers:
 *     PspInitializeProcessSecurity @ 0x140ACAA98 (PspInitializeProcessSecurity.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1403E0270 (SepCreateAccessStateFromSubjectContext.c)
 *     SepSetTrustLevelForProcessToken @ 0x1403EB1F4 (SepSetTrustLevelForProcessToken.c)
 *     SepDeleteAccessState @ 0x1403FBF80 (SepDeleteAccessState.c)
 *     SepLocateTokenIntegrity @ 0x14040ECA0 (SepLocateTokenIntegrity.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlSubAuthoritySid @ 0x140445040 (RtlSubAuthoritySid.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x140446A8C (SeTokenGetNoChildProcessRestricted.c)
 *     RtlSubAuthorityCountSid @ 0x140454FB0 (RtlSubAuthorityCountSid.c)
 *     SepSetTokenBnoIsolation @ 0x14047F96C (SepSetTokenBnoIsolation.c)
 *     SepDesktopAppxSubProcessToken @ 0x1404EBED4 (SepDesktopAppxSubProcessToken.c)
 *     SepMandatorySubProcessToken @ 0x1404EC31C (SepMandatorySubProcessToken.c)
 *     Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x1405E208C (Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1405E2C90 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x1406069D8 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SepCreateAppContainerToken @ 0x140606A30 (SepCreateAppContainerToken.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x140607388 (SepSetTokenAllApplicationPackagesPolicy.c)
 *     SepVerifyUIAccessChildProcessImage @ 0x140607418 (SepVerifyUIAccessChildProcessImage.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlSuffixUnicodeString @ 0x14077D020 (RtlSuffixUnicodeString.c)
 *     SeCreateAccessState @ 0x14083B750 (SeCreateAccessState.c)
 *     SeDeleteAccessState @ 0x14083D240 (SeDeleteAccessState.c)
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     PsReferenceEffectiveToken @ 0x140858F20 (PsReferenceEffectiveToken.c)
 *     SepFinalizeTokenAcls @ 0x1408E6CA0 (SepFinalizeTokenAcls.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1408E6CE0 (SepAppendAceToTokenObjectAcl.c)
 *     RtlQueryElevationFlags @ 0x1408E8AB0 (RtlQueryElevationFlags.c)
 *     SepSetTokenSessionById @ 0x1409F6674 (SepSetTokenSessionById.c)
 *     SepSetProcessUniqueAttribute @ 0x140A26FE4 (SepSetProcessUniqueAttribute.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x140A28934 (EtwTimLogProhibitChildProcessCreation.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A3B0C0 (SepDereferenceLowBoxNumberEntry.c)
 *     SepSetTokenLowboxNumber @ 0x140A42978 (SepSetTokenLowboxNumber.c)
 *     SepAddTokenOriginClaim @ 0x140A94630 (SepAddTokenOriginClaim.c)
 */

__int64 __fastcall SeSubProcessToken(
        __int64 a1,
        __int64 a2,
        PVOID *a3,
        int a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        _DWORD *a8,
        int a9,
        __int128 *a10,
        char *a11)
{
  char v11; // bl
  ULONG v15; // r12d
  char v16; // r14
  unsigned int v17; // edi
  void *v18; // rbx
  int inserted; // ebx
  char v20; // di
  UNICODE_STRING *v21; // rax
  unsigned int v22; // ebx
  wchar_t *v23; // rax
  PSID *TokenIntegrity; // rax
  PSID v25; // rbx
  int v26; // ecx
  PVOID v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // r9
  int v30; // r14d
  PSID *v31; // rax
  PSID *v32; // rbx
  PSID v33; // rdi
  int v34; // ecx
  ULONG v35; // eax
  PSID v36; // rdi
  PVOID v37; // rcx
  __int64 v38; // r8
  char *v39; // rcx
  __int64 v41; // [rsp+28h] [rbp-D8h]
  char v42[7]; // [rsp+41h] [rbp-BFh] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v44; // [rsp+50h] [rbp-B0h] BYREF
  bool v45; // [rsp+52h] [rbp-AEh] BYREF
  char v46; // [rsp+53h] [rbp-ADh]
  _WORD v47[2]; // [rsp+54h] [rbp-ACh] BYREF
  _RTL_ELEVATION_FLAGS v48; // [rsp+58h] [rbp-A8h] BYREF
  int v49; // [rsp+5Ch] [rbp-A4h]
  int Length; // [rsp+60h] [rbp-A0h] BYREF
  void *v51; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v53; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v54; // [rsp+90h] [rbp-70h]
  __int128 *v55; // [rsp+98h] [rbp-68h]
  PVOID *v56; // [rsp+A0h] [rbp-60h]
  char *v57; // [rsp+A8h] [rbp-58h]
  __int128 v58; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v59; // [rsp+C0h] [rbp-40h]
  __int128 v60; // [rsp+D0h] [rbp-30h]
  int v61[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v62; // [rsp+F0h] [rbp-10h]
  __int128 v63; // [rsp+100h] [rbp+0h]
  struct _ACCESS_STATE v64; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v65[28]; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+290h] [rbp+190h] BYREF
  __int128 v67; // [rsp+2A0h] [rbp+1A0h]
  wchar_t *Buffer; // [rsp+2B0h] [rbp+1B0h]
  int v69; // [rsp+2B8h] [rbp+1B8h]
  int v70; // [rsp+2BCh] [rbp+1BCh]

  v11 = a4;
  v54 = a8;
  v55 = a10;
  v56 = a3;
  v15 = 0;
  *(_QWORD *)&v60 = 0LL;
  DWORD2(v60) = 0;
  v49 = a4;
  v57 = a11;
  Object = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  UserData = 0LL;
  v67 = 0LL;
  memset_0(&v64, 0, sizeof(v64));
  memset_0(v65, 0, sizeof(v65));
  *a3 = 0LL;
  *(_WORD *)a11 = 0;
  a11[2] = 0;
  v44 = 0;
  v42[0] = 0;
  v47[0] = 0;
  v51 = 0LL;
  v46 = 0;
  v45 = 0;
  *(_OWORD *)v61 = 0LL;
  *(_QWORD *)&v63 = 0LL;
  v62 = 0LL;
  DWORD2(v63) = 0;
  SeTokenGetNoChildProcessRestricted(a2, (bool *)&v44, &v45, (bool *)&v44 + 1);
  v16 = v44;
  if ( v44 )
  {
    v17 = -1073740643;
    if ( (*(_DWORD *)a6 & 2) != 0 )
    {
      Length = 0;
      v48.Flags = 0;
      v18 = (void *)PsReferenceEffectiveToken(
                      (__int64)KeGetCurrentThread(),
                      0x74726853u,
                      &Length,
                      (bool *)&v44 + 1,
                      (int *)&v48,
                      0LL);
      if ( Length == 2 && (int)v48.Flags < 2
        || (v17 = SeTokenIsNoChildProcessRestrictionEnforced((__int64)v18) ? 0xC000049D : 0, Length != 1) )
      {
        if ( v18 )
          ObfDereferenceObjectWithTag(v18, 0x74726853u);
      }
      else
      {
        ObFastDereferenceObject(
          (__int64 *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors,
          (ULONG_PTR)v18,
          0x74726853u);
      }
      v16 = v44;
    }
    inserted = 0;
    if ( *(_DWORD *)(a6 + 8) != 1 )
      inserted = v17;
    if ( ((*(_DWORD *)(a1 + 1532) & 1) == 0 || *(_QWORD *)(a1 + 1600))
      && inserted < 0
      && (!v45 || !*(_DWORD *)(a6 + 12)) )
    {
      EtwTimLogProhibitChildProcessCreation(
        (v16 != 0) + 1,
        *(_QWORD *)(a6 + 16),
        (UNICODE_STRING *)((*(_QWORD *)(a6 + 24) + 96LL) & -(__int64)(*(_QWORD *)(a6 + 24) != 0LL)),
        (UNICODE_STRING *)((*(_QWORD *)(a6 + 24) + 112LL) & -(__int64)(*(_QWORD *)(a6 + 24) != 0LL)));
      if ( v16 )
      {
        Object = 0LL;
        v20 = 0;
        goto LABEL_44;
      }
    }
    v11 = v49;
  }
  if ( (unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline() )
  {
    v48.Flags = 0;
    RtlQueryElevationFlags(&v48);
    if ( (v48.Flags & 0x18) == 0x10
      && (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 40LL) & 4) != 0
      && (*(_DWORD *)(a2 + 200) & 0x8001000) == 0x8001000
      && (v11 & 2) != 0 )
    {
      v21 = *(UNICODE_STRING **)(a6 + 24);
      DestinationString = 0LL;
      if ( v21 && v21[6].Length )
        DestinationString = v21[6];
      else
        RtlInitUnicodeString(&DestinationString, L"Unknown");
      v22 = 0;
      while ( !RtlSuffixUnicodeString((PCUNICODE_STRING)&qword_14000B810[2 * v22], &DestinationString, 1u) )
      {
        if ( ++v22 )
          goto LABEL_32;
      }
      v23 = (wchar_t *)(qword_14000B810[2 * v22 + 1] + 2);
      *(_QWORD *)&v53.Length = 0LL;
      v53.Buffer = v23;
      v53.Length = LOWORD(qword_14000B810[2 * v22]) - 2;
      v53.MaximumLength = v53.Length;
      if ( !SepVerifyUIAccessChildProcessImage(a1, &v53) )
      {
LABEL_32:
        if ( EtwAppCompatProvRegHandle
          && EtwEventEnabled(EtwAppCompatProvRegHandle, &APPCOMPAT_AP_UIACCESS_REMOVAL_EVENT) )
        {
          UserData.Ptr = (ULONGLONG)&v48;
          Length = DestinationString.Length;
          *(_QWORD *)&v67 = &Length;
          Buffer = DestinationString.Buffer;
          v69 = DestinationString.Length;
          v48.Flags = 0;
          *(_QWORD *)&UserData.Size = 4LL;
          *((_QWORD *)&v67 + 1) = 4LL;
          v70 = 0;
          EtwWrite(EtwAppCompatProvRegHandle, &APPCOMPAT_AP_UIACCESS_REMOVAL_EVENT, 0LL, 3u, &UserData);
        }
        return (unsigned int)-1073741790;
      }
      v46 = 1;
      TokenIntegrity = (PSID *)SepLocateTokenIntegrity(a2);
      if ( TokenIntegrity )
      {
        v25 = *TokenIntegrity;
        v26 = *RtlSubAuthorityCountSid(*TokenIntegrity);
        if ( (_BYTE)v26 )
          v15 = *RtlSubAuthoritySid(v25, v26 - 1);
      }
    }
  }
  *((_QWORD *)&v58 + 1) = 0LL;
  LODWORD(v58) = 48;
  v60 = 0LL;
  DWORD2(v59) = 0;
  *(_QWORD *)&v59 = 0LL;
  if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline()
    && *(_QWORD *)(a6 + 32) )
  {
    v41 = *(_QWORD *)(a6 + 32);
    v61[0] = 48;
    *(_QWORD *)&v61[2] = 0LL;
    DWORD2(v62) = 1536;
    *(_QWORD *)&v62 = 0LL;
    v63 = 0LL;
    inserted = SepCreateAppContainerToken(0LL, &Object, 0xF01FFu, (int)v61, 0, v41);
    if ( inserted < 0 )
      goto LABEL_43;
  }
  else
  {
    inserted = SepDuplicateToken(a2, (int)&v58, 0, 1, 0, 0, 1, &Object);
    if ( inserted < 0 )
    {
      Object = 0LL;
      goto LABEL_43;
    }
  }
  v27 = Object;
  if ( (*((_DWORD *)Object + 50) & 0x4000) != 0 )
  {
    v28 = *((_DWORD *)Object + 30);
    if ( v28 != a5 )
    {
      SepDereferenceLowBoxNumberEntry(v28, *((_QWORD *)Object + 135));
      *((_QWORD *)Object + 135) = 0LL;
      SepSetTokenSessionById((__int64)Object, a5, 0, 0LL, 0LL);
      *((_DWORD *)Object + 30) = a5;
      inserted = SepSetTokenLowboxNumber((__int64)Object, *((_QWORD *)Object + 98));
      if ( inserted < 0 )
      {
        v20 = 0;
        goto LABEL_44;
      }
      v27 = Object;
    }
  }
  SepSetTokenSessionById((__int64)v27, a5, 0, 0LL, 0LL);
  *((_DWORD *)Object + 30) = a5;
  *((_DWORD *)Object + 50) &= ~0x200000u;
  if ( (*(_DWORD *)a6 & 1) != 0 )
  {
    *((_DWORD *)Object + 50) |= 0x80000u;
    if ( (*(_DWORD *)a6 & 4) != 0 )
      *((_DWORD *)Object + 50) |= 0x100000u;
  }
  inserted = SepSetTokenBnoIsolation((__int64)Object, 0, 0LL, 0, 0LL);
  if ( inserted < 0 )
  {
LABEL_43:
    v20 = 0;
    goto LABEL_44;
  }
  v30 = v49 & 2;
  inserted = SepDesktopAppxSubProcessToken(Object, a1, 0LL, v29, *(_DWORD *)(a6 + 4), v47, (_BYTE *)v47 + 1);
  if ( inserted < 0 )
  {
    v20 = 0;
    goto LABEL_44;
  }
  inserted = SepMandatorySubProcessToken((_DWORD *)(a2 & -(__int64)(v30 != 0)), (__int64)Object, a1, &v51);
  if ( inserted < 0 )
    goto LABEL_96;
  if ( (unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline()
    && v46
    && v15
    && (v31 = (PSID *)SepLocateTokenIntegrity((__int64)Object), (v32 = v31) != 0LL)
    && ((v33 = *v31, v34 = *RtlSubAuthorityCountSid(*v31), (_BYTE)v34)
      ? (v35 = *RtlSubAuthoritySid(v33, v34 - 1))
      : (v35 = 0),
        v35 < v15) )
  {
    *RtlSubAuthoritySid(v33, 0) = v15;
    v36 = *v32;
    if ( v15 >= 0x2000 )
      *((_DWORD *)Object + 50) |= 0x2000u;
  }
  else
  {
    v36 = v51;
  }
  inserted = SepSetTrustLevelForProcessToken((__int64)Object, a1, v42);
  if ( inserted < 0 )
    goto LABEL_96;
  if ( (SepTokenSingletonAttributesConfig & 3) == 3 )
  {
    inserted = SepSetProcessUniqueAttribute((__int64)Object);
    if ( inserted < 0 )
      goto LABEL_96;
  }
  v37 = Object;
  if ( (*((_DWORD *)Object + 50) & 0x4000) != 0 && (a7 & 1) != 0 )
  {
    inserted = SepSetTokenAllApplicationPackagesPolicy((__int64)Object, a7);
    if ( inserted < 0 )
      goto LABEL_96;
    v37 = Object;
  }
  if ( v54 )
  {
    SepAddTokenOriginClaim(v54, a9, (__int64)v37, 0LL);
    v37 = Object;
  }
  if ( v55 )
  {
    inserted = SepSetTokenBnoIsolation(
                 (__int64)v37,
                 *((_BYTE *)v55 + 32),
                 v55,
                 *((_DWORD *)v55 + 4),
                 *((_QWORD *)v55 + 3));
    if ( inserted >= 0 )
    {
      v37 = Object;
      goto LABEL_84;
    }
LABEL_96:
    v20 = 0;
    goto LABEL_44;
  }
LABEL_84:
  if ( !v30 || v36 )
    v42[0] = 1;
  if ( v42[0] )
  {
    *(_QWORD *)&v67 = v37;
    UserData.Ptr = 0LL;
    UserData.Size = 0;
    *((_QWORD *)&v67 + 1) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    SepCreateAccessStateFromSubjectContext(&UserData, &v64, v65, 0, 0LL);
  }
  else
  {
    SeCreateAccessState(&v64, v65, 0, 0LL);
  }
  v20 = 1;
  inserted = ObInsertObjectEx((struct _FILE_OBJECT *)Object, &v64, 0, 0, 0, 0LL, 0LL);
  if ( inserted >= 0 )
  {
    if ( !(unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline()
      || (v38 = *(_QWORD *)(a6 + 32)) == 0
      || (inserted = SepAppendAceToTokenObjectAcl((ULONG_PTR *)Object, 983551, *(_WORD **)(*(_QWORD *)(v38 + 8) + 16LL)),
          inserted >= 0) )
    {
      SepFinalizeTokenAcls(Object);
      *((_BYTE *)Object + 204) = v49 & 1;
      *v56 = Object;
      v39 = v57;
      *v57 = v42[0];
      *(_WORD *)(v39 + 1) = v47[0];
LABEL_47:
      if ( v42[0] )
        SepDeleteAccessState((__int64)&v64);
      else
        SeDeleteAccessState((__int64)&v64);
      return (unsigned int)inserted;
    }
  }
  else
  {
    Object = 0LL;
  }
LABEL_44:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v20 )
    goto LABEL_47;
  return (unsigned int)inserted;
}
