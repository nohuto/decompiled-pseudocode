/*
 * XREFs of LdrpMapDllSearchPath @ 0x180074F30
 * Callers:
 *     LdrpProcessWork @ 0x180021E60 (LdrpProcessWork.c)
 *     LdrpLoadEnclaveModule @ 0x1800D9218 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     LdrpReleaseDllPath @ 0x18000ABC0 (LdrpReleaseDllPath.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpInitializeDllPath @ 0x180065A30 (LdrpInitializeDllPath.c)
 *     LdrpMapDllNtFileName @ 0x180071640 (LdrpMapDllNtFileName.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x180073C10 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpHashUnicodeString @ 0x180074360 (LdrpHashUnicodeString.c)
 *     LdrpSearchPath @ 0x1800754F0 (LdrpSearchPath.c)
 *     LdrpResolveDllName @ 0x180075B50 (LdrpResolveDllName.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x18007616C (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpFreeUnicodeString @ 0x18007625C (LdrpFreeUnicodeString.c)
 *     LdrpLogEtwDllSearchResults @ 0x180076294 (LdrpLogEtwDllSearchResults.c)
 *     LdrpLoadContextReplaceModule @ 0x1800D6BB8 (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
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
  volatile signed __int32 **v14; // rdx
  unsigned __int64 v15; // r8
  __int64 *v16; // rdx
  __int128 v17; // xmm1
  __int64 v19; // rcx
  __int64 *v20; // r8
  char v21; // [rsp+50h] [rbp-B0h] BYREF
  char v22; // [rsp+51h] [rbp-AFh] BYREF
  unsigned int v23; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v24[2]; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v25; // [rsp+68h] [rbp-98h] BYREF
  __int64 v26[2]; // [rsp+70h] [rbp-90h] BYREF
  char v27[16]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v28; // [rsp+90h] [rbp-70h]
  UNICODE_STRING v29; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v30; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v31[254]; // [rsp+B2h] [rbp-4Eh] BYREF
  __int64 v32[16]; // [rsp+1B0h] [rbp+B0h] BYREF

  *(_OWORD *)v26 = 0LL;
  memset_thunk_772440563353939046(v32, 0, 0x80uLL);
  memset_thunk_772440563353939046(v31, 0, 0xFEuLL);
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(a1 + 56);
  v25 = 0LL;
  v29.Buffer = (wchar_t *)&v30;
  v4 = 0;
  v21 = 0;
  *(_QWORD *)&v29.Length = 0x1000000LL;
  v30 = 0;
  v23 = 0;
  v28 = 0LL;
  *(_OWORD *)v24 = 0LL;
  if ( v2 )
  {
    v5 = 31488LL;
    v6 = *(unsigned int *)(v2 + 280);
    v7 = 31488;
    if ( (LdrpPolicyBits & 4) != 0 )
      v7 = 32512;
    if ( (v7 & (unsigned int)v6) != 0 )
    {
      v19 = *(_QWORD *)(v2 + 80);
      if ( (LdrpPolicyBits & 4) != 0 )
        v5 = 32512LL;
      LdrpInitializeDllPath(v19, v6 & v5 | 1, (__int64)v32);
    }
  }
  while ( 1 )
  {
    v8 = LdrpSearchPath(a1, (__int64)&v29, (__int64)v26, (__int64)v24, (__int64)&v21, (__int64)&v23);
    LoadedDllByNameLockHeld = v8;
    if ( v21 )
      *(_DWORD *)(v3 + 104) |= 1u;
    if ( v8 == -1073741515 )
      break;
    if ( v8 < 0 )
      goto LABEL_23;
LABEL_11:
    v4 = 1;
    if ( !*(_QWORD *)(a1 + 176) )
    {
      *(_OWORD *)v27 = 0LL;
      v10 = v8;
      v22 = 0;
      if ( g_ShimsEnabled || g_ShimsLoading )
      {
        v20 = v24;
        if ( v8 < 0 )
          v20 = (__int64 *)a1;
        ((void (__fastcall *)(char *, char *, __int64 *))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                                 g_pfnSE_LdrResolveDllName,
                                                                                 64 - (MEMORY[0x7FFE0330] & 0x3Fu))))(
          v27,
          &v22,
          v20);
        if ( v22 )
        {
          *(_DWORD *)(a1 + 32) |= 0x10000u;
          if ( v24[1] )
          {
            RtlpSysVolFree(v24[1]);
            v24[1] = 0LL;
          }
          LODWORD(v24[0]) = 0;
          v29.Length = 0;
          *v29.Buffer = 0;
          v10 = LdrpResolveDllName((char)v27, *(_DWORD *)(a1 + 32));
        }
      }
      LoadedDllByNameLockHeld = v10;
      if ( v10 < 0 )
        goto LABEL_23;
      if ( (*(_DWORD *)(a1 + 32) & 0x10000) != 0 )
        v23 |= 1u;
      v11 = LdrpHashUnicodeString((unsigned __int16 *)v26);
      *(_DWORD *)(v3 + 264) = v11;
      v12 = *(_DWORD *)(a1 + 32);
      v25 = 0LL;
      v13 = v11;
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpModuleDatatableLock, v14, v15);
      v16 = v24;
      if ( (v12 & 0x20) != 0 )
        v16 = 0LL;
      LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(
                                  (unsigned __int16 *)v26,
                                  (unsigned __int16 *)v16,
                                  v12,
                                  &v25,
                                  v13);
      if ( LoadedDllByNameLockHeld == -1073741515 && (v12 & 8) != 0 )
      {
        LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(0LL, (unsigned __int16 *)v24, 0, &v25, v13);
        if ( LoadedDllByNameLockHeld >= 0 )
        {
          *((_DWORD *)v25 + 26) |= 1u;
          RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
          goto LABEL_23;
        }
      }
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( LoadedDllByNameLockHeld != -1073741515 )
        goto LABEL_23;
    }
    LdrpFreeUnicodeString(v3 + 72);
    v17 = *(_OWORD *)v26;
    *(_OWORD *)(v3 + 72) = *(_OWORD *)v24;
    *(_OWORD *)(v3 + 88) = v17;
    *(_OWORD *)v24 = 0LL;
    LoadedDllByNameLockHeld = LdrpMapDllNtFileName(a1, &v29);
    if ( LoadedDllByNameLockHeld != 1073741838 )
      goto LABEL_23;
    if ( &v30 != (__int16 *)v29.Buffer )
      RtlpSysVolFree((__int64)v29.Buffer);
    *(_DWORD *)&v29.Length = 0x1000000;
    v29.Buffer = (wchar_t *)&v30;
    v30 = 0;
  }
  if ( !v4 )
    goto LABEL_11;
  LoadedDllByNameLockHeld = -1073741701;
LABEL_23:
  if ( v25 )
  {
    LdrpLoadContextReplaceModule(a1, v25);
  }
  else if ( (unsigned __int8)LdrpIsSecurityEtwLoggingEnabled() )
  {
    LdrpLogEtwDllSearchResults(v23, a1);
  }
  if ( &v30 != (__int16 *)v29.Buffer )
    RtlpSysVolFree((__int64)v29.Buffer);
  v29.Buffer = (wchar_t *)&v30;
  *(_DWORD *)&v29.Length = 0x1000000;
  v30 = 0;
  if ( v24[1] )
  {
    RtlpSysVolFree(v24[1]);
    v24[1] = 0LL;
  }
  LODWORD(v24[0]) = 0;
  LdrpReleaseDllPath(v32);
  return (unsigned int)LoadedDllByNameLockHeld;
}
