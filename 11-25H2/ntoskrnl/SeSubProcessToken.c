/*
 * XREFs of SeSubProcessToken @ 0x140A0C9E8
 * Callers:
 *     PspInitializeProcessSecurity @ 0x140A0C7EC (PspInitializeProcessSecurity.c)
 * Callees:
 *     SeTokenGetNoChildProcessRestricted @ 0x140206E6C (SeTokenGetNoChildProcessRestricted.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     SepDesktopAppxSubProcessToken @ 0x14029223C (SepDesktopAppxSubProcessToken.c)
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     SepSetTrustLevelForProcessToken @ 0x14036B140 (SepSetTrustLevelForProcessToken.c)
 *     PsGetSessionObjectById @ 0x1403D6D20 (PsGetSessionObjectById.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1403E3020 (SepCreateAccessStateFromSubjectContext.c)
 *     SepDeleteAccessState @ 0x1403F9FA0 (SepDeleteAccessState.c)
 *     SepMandatorySubProcessToken @ 0x14047E350 (SepMandatorySubProcessToken.c)
 *     SepSetTokenBnoIsolation @ 0x140483BBC (SepSetTokenBnoIsolation.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x1405FCC88 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x1405FCCE0 (SepSetTokenAllApplicationPackagesPolicy.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SeDeleteAccessState @ 0x140844A10 (SeDeleteAccessState.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 *     SepFinalizeTokenAcls @ 0x1408A4398 (SepFinalizeTokenAcls.c)
 *     SeCreateAccessState @ 0x1409154F0 (SeCreateAccessState.c)
 *     PsReferenceEffectiveToken @ 0x140969860 (PsReferenceEffectiveToken.c)
 *     SepSetProcessUniqueAttribute @ 0x140A0D02C (SepSetProcessUniqueAttribute.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x140A0D588 (EtwTimLogProhibitChildProcessCreation.c)
 *     SepSetTokenLowboxNumber @ 0x140A0DB74 (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A0E024 (SepDereferenceLowBoxNumberEntry.c)
 *     SepAddTokenOriginClaim @ 0x140A93A94 (SepAddTokenOriginClaim.c)
 */

__int64 __fastcall SeSubProcessToken(
        __int64 a1,
        __int128 *a2,
        HANDLE *a3,
        char a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10,
        char *a11)
{
  bool v15; // r14
  unsigned __int64 v16; // r14
  int inserted; // ebx
  _DWORD *v18; // rbx
  void *v19; // rcx
  __int64 v20; // r9
  HANDLE v21; // rcx
  char v22; // di
  HANDLE *v23; // rcx
  char *v24; // rcx
  unsigned int v25; // edi
  HANDLE v26; // rcx
  __int64 v28; // rcx
  _QWORD *v29; // rbx
  void *v30; // rcx
  ULONG_PTR v31; // rax
  void *v32; // rbx
  char v33; // [rsp+40h] [rbp-C0h] BYREF
  char v34; // [rsp+41h] [rbp-BFh]
  bool v35[6]; // [rsp+42h] [rbp-BEh] BYREF
  HANDLE TokenHandle; // [rsp+48h] [rbp-B8h] BYREF
  bool v37; // [rsp+50h] [rbp-B0h] BYREF
  char v38; // [rsp+51h] [rbp-AFh] BYREF
  _BYTE v39[14]; // [rsp+52h] [rbp-AEh] BYREF
  __int64 v40; // [rsp+60h] [rbp-A0h] BYREF
  __int128 *v41; // [rsp+68h] [rbp-98h]
  __int64 v42; // [rsp+70h] [rbp-90h]
  HANDLE *v43; // [rsp+78h] [rbp-88h]
  char *v44; // [rsp+80h] [rbp-80h]
  __int128 v45; // [rsp+88h] [rbp-78h] BYREF
  __int128 v46; // [rsp+98h] [rbp-68h]
  __int128 v47; // [rsp+A8h] [rbp-58h]
  __int128 v48; // [rsp+B8h] [rbp-48h] BYREF
  HANDLE v49; // [rsp+C8h] [rbp-38h]
  struct _LIST_ENTRY *Flink; // [rsp+D0h] [rbp-30h]
  struct _ACCESS_STATE AccessState; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v52[28]; // [rsp+180h] [rbp+80h] BYREF

  TokenHandle = 0LL;
  v42 = a8;
  v43 = a3;
  HIDWORD(v48) = 0;
  v41 = a2;
  *(_QWORD *)&v47 = 0LL;
  DWORD2(v47) = 0;
  v44 = a11;
  v45 = 0LL;
  v46 = 0LL;
  memset_0(&AccessState, 0, sizeof(AccessState));
  memset_0(v52, 0, sizeof(v52));
  *a3 = 0LL;
  *(_WORD *)a11 = 0;
  a11[2] = 0;
  v37 = 0;
  *(_WORD *)v35 = 0;
  v33 = 0;
  v38 = 0;
  v39[0] = 0;
  v34 = 0;
  v40 = 0LL;
  SeTokenGetNoChildProcessRestricted((__int64)a2, &v35[1], &v37, v35);
  v15 = v35[1];
  if ( *(_WORD *)v35 )
  {
    v25 = -1073740643;
    if ( (*(_DWORD *)a6 & 2) != 0 )
    {
      *(_QWORD *)&v39[2] = 0LL;
      v35[0] = 0;
      v31 = PsReferenceEffectiveToken((__int64)KeGetCurrentThread(), 0x74726853u, &v39[2], v35, (int *)&v39[6], 0LL);
      v32 = (void *)v31;
      if ( *(_DWORD *)&v39[2] == 2 && *(int *)&v39[6] < 2
        || (v25 = SeTokenIsNoChildProcessRestrictionEnforced(v31) ? 0xC000049D : 0, *(_DWORD *)&v39[2] != 1) )
      {
        if ( v32 )
          ObfDereferenceObjectWithTag(v32, 0x74726853u);
      }
      else
      {
        ObFastDereferenceObject(
          (__int64 *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors,
          (ULONG_PTR)v32,
          1953654867LL);
      }
      v15 = v35[1];
    }
    inserted = 0;
    if ( *(_DWORD *)(a6 + 8) != 1 )
      inserted = v25;
    if ( ((*(_DWORD *)(a1 + 1532) & 1) == 0 || *(_QWORD *)(a1 + 1600))
      && inserted < 0
      && (!v37 || !*(_DWORD *)(a6 + 12)) )
    {
      EtwTimLogProhibitChildProcessCreation(
        (unsigned int)v15 + 1,
        *(_QWORD *)(a6 + 16),
        (*(_QWORD *)(a6 + 24) + 96LL) & -(__int64)(*(_QWORD *)(a6 + 24) != 0LL),
        (*(_QWORD *)(a6 + 24) + 112LL) & -(__int64)(*(_QWORD *)(a6 + 24) != 0LL));
      if ( v15 )
        goto LABEL_36;
    }
  }
  v16 = (unsigned __int64)v41;
  *((_QWORD *)&v45 + 1) = 0LL;
  DWORD2(v46) = 0;
  *(_QWORD *)&v46 = 0LL;
  LODWORD(v45) = 48;
  v47 = 0LL;
  inserted = SepDuplicateToken(v41, (__int64)&v45, 0, 1, 0, 0, 1, (__int64 *)&TokenHandle);
  if ( inserted < 0 )
  {
LABEL_36:
    v26 = 0LL;
    TokenHandle = 0LL;
    v22 = 0;
    goto LABEL_37;
  }
  v18 = TokenHandle;
  if ( (*((_DWORD *)TokenHandle + 50) & 0x4000) != 0 )
  {
    v28 = *((unsigned int *)TokenHandle + 30);
    if ( (_DWORD)v28 != a5 )
    {
      SepDereferenceLowBoxNumberEntry(v28, *((_QWORD *)TokenHandle + 135));
      *((_QWORD *)TokenHandle + 135) = 0LL;
      v29 = TokenHandle;
      if ( *((_DWORD *)TokenHandle + 30) != a5 )
      {
        *((_DWORD *)TokenHandle + 30) = a5;
        if ( !SeTokenDoesNotTrackSessionObject )
        {
          v30 = (void *)v29[145];
          if ( v30 )
            ObfDereferenceObject(v30);
          v29[145] = PsGetSessionObjectById();
        }
      }
      *((_DWORD *)TokenHandle + 30) = a5;
      inserted = SepSetTokenLowboxNumber(TokenHandle, *((_QWORD *)TokenHandle + 98));
      if ( inserted < 0 )
        goto LABEL_56;
      v18 = TokenHandle;
    }
  }
  if ( v18[30] != a5 )
  {
    v18[30] = a5;
    if ( !SeTokenDoesNotTrackSessionObject )
    {
      v19 = (void *)*((_QWORD *)v18 + 145);
      if ( v19 )
        ObfDereferenceObject(v19);
      *((_QWORD *)v18 + 145) = PsGetSessionObjectById();
    }
    v18 = TokenHandle;
  }
  v18[30] = a5;
  *((_DWORD *)TokenHandle + 50) &= ~0x200000u;
  if ( (*(_DWORD *)a6 & 1) != 0 )
  {
    *((_DWORD *)TokenHandle + 50) |= 0x80000u;
    if ( (*(_DWORD *)a6 & 4) != 0 )
      *((_DWORD *)TokenHandle + 50) |= 0x100000u;
  }
  inserted = SepSetTokenBnoIsolation((__int64)TokenHandle, 0, 0LL, 0, 0LL);
  if ( inserted < 0 )
    goto LABEL_56;
  inserted = SepDesktopAppxSubProcessToken(TokenHandle, a1, *(_DWORD *)(a6 + 4), &v38, v39);
  if ( inserted < 0 )
    goto LABEL_56;
  inserted = SepMandatorySubProcessToken((_DWORD *)(v16 & -(__int64)((a4 & 2) != 0)), (__int64)TokenHandle, a1, &v40);
  if ( inserted < 0 )
    goto LABEL_56;
  inserted = SepSetTrustLevelForProcessToken((__int64)TokenHandle, a1, &v33, v20);
  if ( inserted < 0 )
    goto LABEL_56;
  if ( (SepTokenSingletonAttributesConfig & 3) == 3 )
  {
    inserted = SepSetProcessUniqueAttribute(TokenHandle);
    if ( inserted < 0 )
      goto LABEL_56;
  }
  v21 = TokenHandle;
  if ( (*((_DWORD *)TokenHandle + 50) & 0x4000) != 0 && (a7 & 1) != 0 )
  {
    inserted = SepSetTokenAllApplicationPackagesPolicy((__int64)TokenHandle, a7);
    if ( inserted < 0 )
      goto LABEL_56;
    v21 = TokenHandle;
  }
  if ( v42 )
  {
    SepAddTokenOriginClaim(v42, a9, v21, 0LL);
    v21 = TokenHandle;
  }
  if ( !a10 )
    goto LABEL_21;
  inserted = SepSetTokenBnoIsolation(
               (__int64)v21,
               *(_BYTE *)(a10 + 32),
               (__int128 *)a10,
               *(_DWORD *)(a10 + 16),
               *(_QWORD *)(a10 + 24));
  if ( inserted < 0 )
  {
LABEL_56:
    v22 = v34;
    v26 = TokenHandle;
    goto LABEL_37;
  }
  v21 = TokenHandle;
LABEL_21:
  if ( (a4 & 2) == 0 || v40 )
    v33 = 1;
  if ( v33 )
  {
    *(_QWORD *)&v48 = 0LL;
    DWORD2(v48) = 0;
    v49 = v21;
    Flink = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    SepCreateAccessStateFromSubjectContext(&v48, &AccessState, v52, 0, 0LL);
  }
  else
  {
    SeCreateAccessState(&AccessState, v52, 0, 0LL);
  }
  v22 = 1;
  inserted = ObInsertObjectEx((char *)TokenHandle, &AccessState, 0, 0, 0, 0LL, 0LL);
  if ( inserted >= 0 )
  {
    SepFinalizeTokenAcls(TokenHandle);
    v23 = v43;
    *((_BYTE *)TokenHandle + 204) = a4 & 1;
    *v23 = TokenHandle;
    v24 = v44;
    *v44 = v33;
    v24[1] = v38;
    v24[2] = v39[0];
LABEL_27:
    if ( v33 )
      SepDeleteAccessState((__int64)&AccessState);
    else
      SeDeleteAccessState((__int64)&AccessState);
    return (unsigned int)inserted;
  }
  v26 = 0LL;
  TokenHandle = 0LL;
LABEL_37:
  if ( v26 )
    ObfDereferenceObject(v26);
  if ( v22 )
    goto LABEL_27;
  return (unsigned int)inserted;
}
