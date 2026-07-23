/*
 * XREFs of LdrpMapDllSearchPath @ 0x180091810
 * Callers:
 *     LdrpProcessWork @ 0x18004E860 (LdrpProcessWork.c)
 *     LdrpLoadEnclaveModule @ 0x1800D4588 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     LdrpReleaseDllPath @ 0x1800375C0 (LdrpReleaseDllPath.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     LdrpMapDllNtFileName @ 0x18008DF20 (LdrpMapDllNtFileName.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x1800904F0 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpHashUnicodeString @ 0x180090C40 (LdrpHashUnicodeString.c)
 *     LdrpSearchPath @ 0x180091DD0 (LdrpSearchPath.c)
 *     LdrpResolveDllName @ 0x180092430 (LdrpResolveDllName.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x180092A4C (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpFreeUnicodeString @ 0x180092B3C (LdrpFreeUnicodeString.c)
 *     LdrpLogEtwDllSearchResults @ 0x180092B74 (LdrpLogEtwDllSearchResults.c)
 *     LdrpInitializeDllPath @ 0x1800AD900 (LdrpInitializeDllPath.c)
 *     LdrpLoadContextReplaceModule @ 0x1800D1F28 (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpMapDllSearchPath(UNICODE_STRING *Source)
{
  __int64 v2; // rcx
  wchar_t *Buffer; // rsi
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
  __int64 *v14; // rdx
  __int128 v15; // xmm1
  __int64 v17; // rcx
  __int64 *v18; // r8
  char v19; // [rsp+50h] [rbp-B0h] BYREF
  char v20; // [rsp+51h] [rbp-AFh] BYREF
  unsigned int v21; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v22[2]; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v23; // [rsp+68h] [rbp-98h] BYREF
  __int64 v24[2]; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v25[2]; // [rsp+80h] [rbp-80h] BYREF
  _UNICODE_STRING v26; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v27; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v28[254]; // [rsp+B2h] [rbp-4Eh] BYREF
  __int64 v29[16]; // [rsp+1B0h] [rbp+B0h] BYREF

  *(_OWORD *)v24 = 0LL;
  memset_thunk_772440563353939046(v29, 0, 0x80uLL);
  memset_thunk_772440563353939046(v28, 0, 0xFEuLL);
  v2 = *(_QWORD *)&Source[3].Length;
  Buffer = Source[3].Buffer;
  v23 = 0LL;
  v26.Buffer = (wchar_t *)&v27;
  v4 = 0;
  v19 = 0;
  *(_QWORD *)&v26.Length = 0x1000000LL;
  v27 = 0;
  v21 = 0;
  v25[1] = 0LL;
  *(_OWORD *)v22 = 0LL;
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
      LdrpInitializeDllPath(v17, v6 & v5 | 1, v29);
    }
  }
  while ( 1 )
  {
    v8 = LdrpSearchPath(Source, (__int64)&v26, (__int64)v24, (__int64)v22, (__int64)&v19, (__int64)&v21);
    LoadedDllByNameLockHeld = v8;
    if ( v19 )
      *((_DWORD *)Buffer + 26) |= 1u;
    if ( v8 == -1073741515 )
      break;
    if ( v8 < 0 )
      goto LABEL_23;
LABEL_11:
    v4 = 1;
    if ( !*(_QWORD *)&Source[11].Length )
    {
      v25[0] = 0LL;
      v10 = v8;
      v20 = 0;
      if ( g_ShimsEnabled || g_ShimsLoading )
      {
        v18 = v22;
        if ( v8 < 0 )
          v18 = (__int64 *)Source;
        ((void (__fastcall *)(_OWORD *, char *, __int64 *))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                                   g_pfnSE_LdrResolveDllName,
                                                                                   64 - (MEMORY[0x7FFE0330] & 0x3Fu))))(
          v25,
          &v20,
          v18);
        if ( v20 )
        {
          *(_DWORD *)&Source[2].Length |= 0x10000u;
          if ( v22[1] )
          {
            RtlpSysVolFree((void *)v22[1]);
            v22[1] = 0LL;
          }
          LODWORD(v22[0]) = 0;
          v26.Length = 0;
          *v26.Buffer = 0;
          v10 = LdrpResolveDllName(
                  (unsigned int)v25,
                  (unsigned int)&v26,
                  (unsigned int)v24,
                  (unsigned int)v22,
                  *(_DWORD *)&Source[2].Length);
        }
      }
      LoadedDllByNameLockHeld = v10;
      if ( v10 < 0 )
        goto LABEL_23;
      if ( (*(_DWORD *)&Source[2].Length & 0x10000) != 0 )
        v21 |= 1u;
      v11 = LdrpHashUnicodeString((unsigned __int16 *)v24);
      *((_DWORD *)Buffer + 66) = v11;
      v12 = *(_DWORD *)&Source[2].Length;
      v23 = 0LL;
      v13 = v11;
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v14 = v22;
      if ( (v12 & 0x20) != 0 )
        v14 = 0LL;
      LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(
                                  (unsigned __int16 *)v24,
                                  (unsigned __int16 *)v14,
                                  v12,
                                  &v23,
                                  v13);
      if ( LoadedDllByNameLockHeld == -1073741515 && (v12 & 8) != 0 )
      {
        LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(0LL, (unsigned __int16 *)v22, 0, &v23, v13);
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
    LdrpFreeUnicodeString(Buffer + 36);
    v15 = *(_OWORD *)v24;
    *(_OWORD *)(Buffer + 36) = *(_OWORD *)v22;
    *(_OWORD *)(Buffer + 44) = v15;
    *(_OWORD *)v22 = 0LL;
    LoadedDllByNameLockHeld = LdrpMapDllNtFileName((__int64)Source, &v26);
    if ( LoadedDllByNameLockHeld != 1073741838 )
      goto LABEL_23;
    if ( &v27 != (__int16 *)v26.Buffer )
      RtlpSysVolFree(v26.Buffer);
    *(_DWORD *)&v26.Length = 0x1000000;
    v26.Buffer = (wchar_t *)&v27;
    v27 = 0;
  }
  if ( !v4 )
    goto LABEL_11;
  LoadedDllByNameLockHeld = -1073741701;
LABEL_23:
  if ( v23 )
  {
    LdrpLoadContextReplaceModule(Source, v23);
  }
  else if ( (unsigned __int8)LdrpIsSecurityEtwLoggingEnabled() )
  {
    LdrpLogEtwDllSearchResults(v21, Source);
  }
  if ( &v27 != (__int16 *)v26.Buffer )
    RtlpSysVolFree(v26.Buffer);
  v26.Buffer = (wchar_t *)&v27;
  *(_DWORD *)&v26.Length = 0x1000000;
  v27 = 0;
  if ( v22[1] )
  {
    RtlpSysVolFree((void *)v22[1]);
    v22[1] = 0LL;
  }
  LODWORD(v22[0]) = 0;
  LdrpReleaseDllPath(v29);
  return (unsigned int)LoadedDllByNameLockHeld;
}
