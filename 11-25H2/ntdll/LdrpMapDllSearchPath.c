/*
 * XREFs of LdrpMapDllSearchPath @ 0x18006FE50
 * Callers:
 *     LdrpProcessWork @ 0x18006FC70 (LdrpProcessWork.c)
 *     LdrpLoadEnclaveModule @ 0x1800D91B8 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     LdrpReleaseDllPath @ 0x180049A60 (LdrpReleaseDllPath.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x18006E490 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpHashUnicodeString @ 0x18006EBE0 (LdrpHashUnicodeString.c)
 *     LdrpLoadContextReplaceModule @ 0x18006F2DC (LdrpLoadContextReplaceModule.c)
 *     LdrpLogEtwDllSearchResults @ 0x18006F538 (LdrpLogEtwDllSearchResults.c)
 *     LdrpFreeUnicodeString @ 0x18006F7E0 (LdrpFreeUnicodeString.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x18006F818 (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpSearchPath @ 0x180070410 (LdrpSearchPath.c)
 *     LdrpResolveDllName @ 0x180070A70 (LdrpResolveDllName.c)
 *     LdrpMapDllNtFileName @ 0x180072240 (LdrpMapDllNtFileName.c)
 *     LdrpInitializeDllPath @ 0x1800D1140 (LdrpInitializeDllPath.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpMapDllSearchPath(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rsi
  int v4; // r12d
  __int64 v5; // rdx
  __int64 v6; // r9
  int v7; // eax
  int v8; // eax
  int LoadedDllByNameLockHeld; // edi
  int v10; // r15d
  int v11; // eax
  int v12; // r15d
  int v13; // r13d
  unsigned __int16 *v14; // rdx
  __int128 v15; // xmm1
  __int64 v17; // rcx
  __int128 *v18; // r8
  char v19; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v20[3]; // [rsp+51h] [rbp-AFh] BYREF
  int v21; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v22; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v23; // [rsp+68h] [rbp-98h] BYREF
  __int128 v24; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v25[2]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v26[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int16 *v27; // [rsp+A8h] [rbp-58h]
  __int16 v28; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v29[254]; // [rsp+B2h] [rbp-4Eh] BYREF
  __int64 v30[16]; // [rsp+1B0h] [rbp+B0h] BYREF

  v24 = 0LL;
  memset_thunk_772440563353939046(v30, 0, 0x80uLL);
  v26[1] = 0;
  memset_thunk_772440563353939046(v29, 0, 0xFEuLL);
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(a1 + 56);
  v23 = 0LL;
  v27 = &v28;
  v4 = 0;
  v19 = 0;
  v26[0] = 0x1000000;
  v28 = 0;
  v21 = 0;
  v25[1] = 0LL;
  v22 = 0LL;
  if ( v2 )
  {
    v5 = 31488LL;
    v6 = *(unsigned int *)(v2 + 280);
    v7 = 31488;
    if ( (LdrpPolicyBits & 4) != 0 )
      v7 = 32512;
    if ( (v7 & (unsigned int)v6) != 0 )
    {
      v17 = *(_QWORD *)(v2 + 80);
      if ( (LdrpPolicyBits & 4) != 0 )
        v5 = 32512LL;
      LdrpInitializeDllPath(v17, v6 & v5 | 1, v30);
    }
  }
  while ( 1 )
  {
    v8 = LdrpSearchPath(a1, (__int64)v26, (__int64)&v24, (__int64)&v22, (__int64)&v19, (__int64)&v21);
    LoadedDllByNameLockHeld = v8;
    if ( v19 )
      *(_DWORD *)(v3 + 104) |= 1u;
    if ( v8 == -1073741515 )
      break;
    if ( v8 < 0 )
      goto LABEL_23;
LABEL_11:
    v4 = 1;
    if ( !*(_QWORD *)(a1 + 176) )
    {
      v25[0] = 0LL;
      v10 = v8;
      v20[0] = 0;
      if ( g_ShimsEnabled || g_ShimsLoading )
      {
        v18 = &v22;
        if ( v8 < 0 )
          v18 = (__int128 *)a1;
        ((void (__fastcall *)(_OWORD *, _BYTE *, __int128 *))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                                     g_pfnSE_LdrResolveDllName,
                                                                                     64 - (MEMORY[0x7FFE0330] & 0x3Fu))))(
          v25,
          v20,
          v18);
        if ( v20[0] )
        {
          *(_DWORD *)(a1 + 32) |= 0x10000u;
          if ( *((_QWORD *)&v22 + 1) )
          {
            RtlpSysVolFree(*((__int64 *)&v22 + 1));
            *((_QWORD *)&v22 + 1) = 0LL;
          }
          LODWORD(v22) = 0;
          LOWORD(v26[0]) = 0;
          *v27 = 0;
          v10 = LdrpResolveDllName((char)v25, *(_DWORD *)(a1 + 32));
        }
      }
      LoadedDllByNameLockHeld = v10;
      if ( v10 < 0 )
        goto LABEL_23;
      if ( (*(_DWORD *)(a1 + 32) & 0x10000) != 0 )
        v21 |= 1u;
      v11 = LdrpHashUnicodeString((unsigned __int16 *)&v24);
      *(_DWORD *)(v3 + 264) = v11;
      v12 = *(_DWORD *)(a1 + 32);
      v23 = 0LL;
      v13 = v11;
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpModuleDatatableLock);
      v14 = (unsigned __int16 *)&v22;
      if ( (v12 & 0x20) != 0 )
        v14 = 0LL;
      LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld((unsigned __int16 *)&v24, v14, v12, &v23, v13);
      if ( LoadedDllByNameLockHeld == -1073741515 && (v12 & 8) != 0 )
      {
        LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(0LL, (unsigned __int16 *)&v22, 0, &v23, v13);
        if ( LoadedDllByNameLockHeld >= 0 )
        {
          *((_DWORD *)v23 + 26) |= 1u;
          RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
          goto LABEL_23;
        }
      }
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( LoadedDllByNameLockHeld != -1073741515 )
        goto LABEL_23;
    }
    LdrpFreeUnicodeString(v3 + 72);
    v15 = v24;
    *(_OWORD *)(v3 + 72) = v22;
    *(_OWORD *)(v3 + 88) = v15;
    v22 = 0LL;
    LoadedDllByNameLockHeld = LdrpMapDllNtFileName(a1, v26);
    if ( LoadedDllByNameLockHeld != 1073741838 )
      goto LABEL_23;
    if ( &v28 != v27 )
      RtlpSysVolFree((__int64)v27);
    v26[0] = 0x1000000;
    v27 = &v28;
    v28 = 0;
  }
  if ( !v4 )
    goto LABEL_11;
  LoadedDllByNameLockHeld = -1073741701;
LABEL_23:
  if ( v23 )
  {
    LdrpLoadContextReplaceModule(a1, (__int64)v23);
  }
  else if ( LdrpIsSecurityEtwLoggingEnabled() )
  {
    LdrpLogEtwDllSearchResults(v21, a1);
  }
  if ( &v28 != v27 )
    RtlpSysVolFree((__int64)v27);
  v27 = &v28;
  v26[0] = 0x1000000;
  v28 = 0;
  if ( *((_QWORD *)&v22 + 1) )
  {
    RtlpSysVolFree(*((__int64 *)&v22 + 1));
    *((_QWORD *)&v22 + 1) = 0LL;
  }
  LODWORD(v22) = 0;
  LdrpReleaseDllPath(v30);
  return (unsigned int)LoadedDllByNameLockHeld;
}
