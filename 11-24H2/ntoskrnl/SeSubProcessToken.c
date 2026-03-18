/*
 * XREFs of SeSubProcessToken @ 0x140A30C24
 * Callers:
 *     PspInitializeProcessSecurity @ 0x140A30A28 (PspInitializeProcessSecurity.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     SepDesktopAppxSubProcessToken @ 0x140355ABC (SepDesktopAppxSubProcessToken.c)
 *     ObFastDereferenceObject @ 0x140356880 (ObFastDereferenceObject.c)
 *     SepSetTrustLevelForProcessToken @ 0x14035F43C (SepSetTrustLevelForProcessToken.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1403EBC80 (SepCreateAccessStateFromSubjectContext.c)
 *     SepDeleteAccessState @ 0x140401610 (SepDeleteAccessState.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     SeTokenGetNoChildProcessRestricted @ 0x1404519E0 (SeTokenGetNoChildProcessRestricted.c)
 *     SepSetTokenBnoIsolation @ 0x1404843CC (SepSetTokenBnoIsolation.c)
 *     SepMandatorySubProcessToken @ 0x1404EF064 (SepMandatorySubProcessToken.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x140609118 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x140609170 (SepSetTokenAllApplicationPackagesPolicy.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SeCreateAccessState @ 0x14083F490 (SeCreateAccessState.c)
 *     SeDeleteAccessState @ 0x140840F80 (SeDeleteAccessState.c)
 *     SepDuplicateToken @ 0x140856520 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     PsReferenceEffectiveToken @ 0x14085D1B0 (PsReferenceEffectiveToken.c)
 *     SepFinalizeTokenAcls @ 0x14090F550 (SepFinalizeTokenAcls.c)
 *     RtlQueryElevationFlags @ 0x140911360 (RtlQueryElevationFlags.c)
 *     SepSetTokenSessionById @ 0x1409FD934 (SepSetTokenSessionById.c)
 *     SepSetProcessUniqueAttribute @ 0x140A32FD4 (SepSetProcessUniqueAttribute.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x140A34924 (EtwTimLogProhibitChildProcessCreation.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A45514 (SepDereferenceLowBoxNumberEntry.c)
 *     SepSetTokenLowboxNumber @ 0x140A4BC18 (SepSetTokenLowboxNumber.c)
 *     SepAddTokenOriginClaim @ 0x140A97DE0 (SepAddTokenOriginClaim.c)
 */

__int64 __fastcall SeSubProcessToken(
        __int64 a1,
        __int64 a2,
        PVOID *a3,
        int a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11)
{
  bool v14; // r15
  unsigned int v15; // esi
  ULONG_PTR v16; // rax
  void *v17; // rbx
  int inserted; // ebx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  PVOID v22; // rcx
  char v23; // r15
  UNICODE_STRING *v24; // rax
  PVOID v25; // rcx
  unsigned int v26; // eax
  char v27; // di
  char **v28; // rcx
  PVOID *v29; // rcx
  __int64 v30; // rcx
  char v32; // [rsp+40h] [rbp-C0h] BYREF
  char v33; // [rsp+41h] [rbp-BFh]
  bool v34[6]; // [rsp+42h] [rbp-BEh] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  bool v36; // [rsp+50h] [rbp-B0h] BYREF
  char v37; // [rsp+51h] [rbp-AFh] BYREF
  char v38[2]; // [rsp+52h] [rbp-AEh] BYREF
  int v39; // [rsp+54h] [rbp-ACh] BYREF
  int v40; // [rsp+58h] [rbp-A8h] BYREF
  int v41; // [rsp+5Ch] [rbp-A4h] BYREF
  char *v42; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  __int64 v44; // [rsp+78h] [rbp-88h]
  PVOID *v45; // [rsp+80h] [rbp-80h]
  __int128 v46; // [rsp+88h] [rbp-78h] BYREF
  __int128 v47; // [rsp+98h] [rbp-68h]
  __int128 v48; // [rsp+A8h] [rbp-58h]
  struct _ACCESS_STATE v49; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v50[28]; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+240h] [rbp+140h] BYREF
  char **v52; // [rsp+250h] [rbp+150h]
  __int64 Flink; // [rsp+258h] [rbp+158h]
  wchar_t *Buffer; // [rsp+260h] [rbp+160h]
  int Length; // [rsp+268h] [rbp+168h]
  int v56; // [rsp+26Ch] [rbp+16Ch]

  v44 = a8;
  v45 = a3;
  *(_QWORD *)&v48 = 0LL;
  DWORD2(v48) = 0;
  v39 = a4;
  *(_QWORD *)&DestinationString.Length = a11;
  Object = 0LL;
  v46 = 0LL;
  UserData.Reserved = 0;
  v47 = 0LL;
  memset_0(&v49, 0, sizeof(v49));
  memset_0(v50, 0, sizeof(v50));
  *a3 = 0LL;
  v34[1] = 0;
  *(_WORD *)a11 = 0;
  *(_BYTE *)(a11 + 2) = 0;
  v32 = 0;
  v37 = 0;
  v38[0] = 0;
  v33 = 0;
  v42 = 0LL;
  v36 = 0;
  v34[0] = 0;
  SeTokenGetNoChildProcessRestricted(a2, &v34[1], &v36, v34);
  v14 = v34[1];
  if ( !*(_WORD *)v34 )
    goto LABEL_75;
  v15 = -1073740643;
  if ( (*(_DWORD *)a6 & 2) != 0 )
  {
    v41 = 0;
    v34[0] = 0;
    v40 = 0;
    v16 = PsReferenceEffectiveToken((__int64)KeGetCurrentThread(), 0x74726853u, &v41, v34, &v40, 0LL);
    v17 = (void *)v16;
    if ( v41 == 2 && v40 < 2 || (v15 = SeTokenIsNoChildProcessRestrictionEnforced(v16) ? 0xC000049D : 0, v41 != 1) )
    {
      if ( v17 )
        ObfDereferenceObjectWithTag(v17, 0x74726853u);
    }
    else
    {
      ObFastDereferenceObject(
        (__int64 *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors,
        (ULONG_PTR)v17,
        0x74726853u);
    }
    v14 = v34[1];
  }
  inserted = 0;
  if ( *(_DWORD *)(a6 + 8) != 1 )
    inserted = v15;
  if ( (*(_DWORD *)(a1 + 1532) & 1) != 0 && !*(_QWORD *)(a1 + 1600)
    || inserted >= 0
    || v36 && *(_DWORD *)(a6 + 12)
    || (EtwTimLogProhibitChildProcessCreation(
          (unsigned int)v14 + 1,
          *(_QWORD *)(a6 + 16),
          (*(_QWORD *)(a6 + 24) + 96LL) & -(__int64)(*(_QWORD *)(a6 + 24) != 0LL),
          (*(_QWORD *)(a6 + 24) + 112LL) & -(__int64)(*(_QWORD *)(a6 + 24) != 0LL)),
        !v14) )
  {
LABEL_75:
    v40 = 0;
    RtlQueryElevationFlags(&v40);
    v23 = v39;
    if ( (v40 & 0x18) == 0x10
      && (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 40LL) & 4) != 0
      && (*(_DWORD *)(a2 + 200) & 0x8001000) == 0x8001000
      && (v39 & 2) != 0 )
    {
      if ( EtwAppCompatProvRegHandle && EtwEventEnabled(EtwAppCompatProvRegHandle, &APPCOMPAT_AP_UIACCESS_REMOVAL_EVENT) )
      {
        v24 = *(UNICODE_STRING **)(a6 + 24);
        DestinationString = 0LL;
        if ( v24 && v24[6].Length )
          DestinationString = v24[6];
        else
          RtlInitUnicodeString(&DestinationString, L"Unknown");
        UserData.Ptr = (ULONGLONG)&v39;
        LODWORD(v42) = DestinationString.Length;
        v52 = &v42;
        Buffer = DestinationString.Buffer;
        Length = DestinationString.Length;
        v39 = 0;
        *(_QWORD *)&UserData.Size = 4LL;
        Flink = 4LL;
        v56 = 0;
        EtwWrite(EtwAppCompatProvRegHandle, &APPCOMPAT_AP_UIACCESS_REMOVAL_EVENT, 0LL, 3u, &UserData);
      }
      return (unsigned int)-1073741790;
    }
    LODWORD(v46) = 48;
    *((_QWORD *)&v46 + 1) = 0LL;
    DWORD2(v47) = 0;
    *(_QWORD *)&v47 = 0LL;
    v48 = 0LL;
    inserted = SepDuplicateToken(a2, (int)&v46, 0, 1, 0, 0, 1, &Object);
    if ( inserted >= 0 )
    {
      v25 = Object;
      if ( (*((_DWORD *)Object + 50) & 0x4000) != 0 )
      {
        v26 = *((_DWORD *)Object + 30);
        if ( v26 != a5 )
        {
          SepDereferenceLowBoxNumberEntry(v26, *((_QWORD *)Object + 135));
          *((_QWORD *)Object + 135) = 0LL;
          SepSetTokenSessionById((__int64)Object, a5, 0, 0LL, 0LL);
          *((_DWORD *)Object + 30) = a5;
          inserted = SepSetTokenLowboxNumber(Object, *((_QWORD *)Object + 98));
          if ( inserted < 0 )
          {
LABEL_64:
            v22 = Object;
            goto LABEL_65;
          }
          v25 = Object;
        }
      }
      SepSetTokenSessionById((__int64)v25, a5, 0, 0LL, 0LL);
      *((_DWORD *)Object + 30) = a5;
      *((_DWORD *)Object + 50) &= ~0x200000u;
      if ( (*(_DWORD *)a6 & 1) != 0 )
      {
        *((_DWORD *)Object + 50) |= 0x80000u;
        if ( (*(_DWORD *)a6 & 4) != 0 )
          *((_DWORD *)Object + 50) |= 0x100000u;
      }
      inserted = SepSetTokenBnoIsolation((__int64)Object, 0, 0LL, 0, 0LL);
      if ( inserted >= 0 )
      {
        v27 = 0;
        inserted = SepDesktopAppxSubProcessToken((__int64)Object, a1, 0LL, *(_DWORD *)(a6 + 4), &v37, v38);
        if ( inserted >= 0 )
        {
          inserted = SepMandatorySubProcessToken((_DWORD *)(a2 & -(__int64)((v23 & 2) != 0)), (__int64)Object, a1, &v42);
          if ( inserted >= 0 )
          {
            inserted = SepSetTrustLevelForProcessToken((__int64)Object, a1, &v32);
            if ( inserted >= 0 )
            {
              if ( (SepTokenSingletonAttributesConfig & 3) != 3
                || (inserted = SepSetProcessUniqueAttribute(Object), inserted >= 0) )
              {
                v28 = (char **)Object;
                if ( (*((_DWORD *)Object + 50) & 0x4000) == 0 || (a7 & 1) == 0 )
                  goto LABEL_49;
                inserted = SepSetTokenAllApplicationPackagesPolicy((__int64)Object, a7);
                if ( inserted >= 0 )
                {
                  v28 = (char **)Object;
LABEL_49:
                  if ( v44 )
                  {
                    SepAddTokenOriginClaim(v44, a9, v28, 0LL);
                    v28 = (char **)Object;
                  }
                  if ( !a10 )
                    goto LABEL_54;
                  inserted = SepSetTokenBnoIsolation(
                               (__int64)v28,
                               *(_BYTE *)(a10 + 32),
                               (__int128 *)a10,
                               *(_DWORD *)(a10 + 16),
                               *(_QWORD *)(a10 + 24));
                  if ( inserted >= 0 )
                  {
                    v28 = (char **)Object;
LABEL_54:
                    if ( (v23 & 2) == 0 || v42 )
                      v32 = 1;
                    if ( v32 )
                    {
                      v52 = v28;
                      UserData.Ptr = 0LL;
                      UserData.Size = 0;
                      Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
                      SepCreateAccessStateFromSubjectContext(&UserData, &v49, v50, 0, 0LL);
                    }
                    else
                    {
                      SeCreateAccessState(&v49, v50, 0, 0LL);
                    }
                    v27 = 1;
                    inserted = ObInsertObjectEx((struct _FILE_OBJECT *)Object, &v49, 0, 0, 0, 0LL, 0LL);
                    if ( inserted >= 0 )
                    {
                      SepFinalizeTokenAcls(Object);
                      v29 = v45;
                      *((_BYTE *)Object + 204) = v23 & 1;
                      *v29 = Object;
                      v30 = *(_QWORD *)&DestinationString.Length;
                      **(_BYTE **)&DestinationString.Length = v32;
                      *(_BYTE *)(v30 + 1) = v37;
                      *(_BYTE *)(v30 + 2) = v38[0];
LABEL_69:
                      if ( v32 )
                        SepDeleteAccessState((__int64)&v49, v19, v20, v21);
                      else
                        SeDeleteAccessState((__int64)&v49, v19, v20, v21);
                      return (unsigned int)inserted;
                    }
                    v22 = 0LL;
                    Object = 0LL;
                    goto LABEL_66;
                  }
                }
              }
            }
            v22 = Object;
            goto LABEL_66;
          }
        }
      }
      goto LABEL_64;
    }
  }
  v22 = 0LL;
  Object = 0LL;
LABEL_65:
  v27 = v33;
LABEL_66:
  if ( v22 )
    ObfDereferenceObject(v22);
  if ( v27 )
    goto LABEL_69;
  return (unsigned int)inserted;
}
