/*
 * XREFs of SdbpOpenLocalDatabaseEx @ 0x1408069BC
 * Callers:
 *     SdbTagRefToTagID @ 0x14080642C (SdbTagRefToTagID.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SdbOpenDatabaseEx @ 0x1408016C4 (SdbOpenDatabaseEx.c)
 *     SdbpGetFileTimestamp @ 0x14080199C (SdbpGetFileTimestamp.c)
 *     SdbpCheckRuntimePlatformImpl @ 0x1408048F8 (SdbpCheckRuntimePlatformImpl.c)
 *     SdbpCloseLocalDatabaseEx @ 0x1408068D4 (SdbpCloseLocalDatabaseEx.c)
 *     SdbResolveDatabaseEx @ 0x140806D04 (SdbResolveDatabaseEx.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpOpenLocalDatabaseEx(__int64 a1, __int128 *a2, __int64 a3, _QWORD *a4, unsigned int *a5)
{
  unsigned int v8; // ecx
  unsigned int v9; // esi
  unsigned int v10; // edi
  __int64 v11; // rdi
  const char *v12; // r9
  int v13; // r8d
  const char *v14; // r9
  int v15; // r8d
  int v16; // ecx
  int FileTimestamp; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int128 v23; // xmm0
  unsigned int v25; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v28; // [rsp+40h] [rbp-C0h]
  WCHAR v29[264]; // [rsp+50h] [rbp-B0h] BYREF

  v28 = 0LL;
  v8 = *a5;
  v9 = 0;
  v10 = *a5;
  LODWORD(v27) = 0;
  v11 = v10 >> 28;
  v25 = 0;
  v26 = 0;
  if ( (v8 & 0xF0000000) == 0 )
    v11 = v8;
  if ( (_DWORD)v11 != 1 && (unsigned int)(v11 - 3) > 0xC )
  {
    v12 = "Bad index 0x%lx";
    v13 = 1105;
LABEL_28:
    v16 = 1;
    goto LABEL_29;
  }
  SdbpCloseLocalDatabaseEx(a1, 0LL, v11);
  if ( (unsigned int)SdbResolveDatabaseEx(a1, (_DWORD)a2, (unsigned int)&v27, (unsigned int)&v25, (__int64)v29) - 1 > 0x102 )
  {
    v12 = "Cannot resolve database, the path length is 0x%lx";
    v13 = 1139;
    goto LABEL_28;
  }
  if ( *(_WORD *)(a1 + 584) != 0x7FFF )
  {
    if ( !(unsigned int)SdbpCheckRuntimePlatformImpl(&v26, 0, *(_DWORD *)(a1 + 552), v25) )
    {
      v14 = "Cannot check database runtime platform against current process";
      v15 = 1156;
LABEL_10:
      AslLogCallPrintf(1, (unsigned int)"SdbpOpenLocalDatabaseEx", v15, (_DWORD)v14);
      return v9;
    }
    if ( !v26 )
    {
      v12 = "Database \"%ws\" is not of the same type as the main EXE";
      v13 = 1160;
LABEL_13:
      v16 = 3;
LABEL_29:
      AslLogCallPrintf(v16, (unsigned int)"SdbpOpenLocalDatabaseEx", v13, (_DWORD)v12);
      return v9;
    }
  }
  v27 = 0LL;
  FileTimestamp = SdbpGetFileTimestamp(&v27, v29, 0);
  if ( FileTimestamp < 0 && FileTimestamp != -1073741790 && FileTimestamp != -1073741757 )
  {
    v12 = "Custom database has invalid path %S";
    v13 = 1178;
    goto LABEL_13;
  }
  v20 = SdbOpenDatabaseEx((__int64)v29, v18, v19);
  if ( !v20 )
  {
    v14 = "Failed to open database";
    v15 = 1184;
    goto LABEL_10;
  }
  v21 = 32LL * (unsigned int)v11;
  v22 = 32 * (v11 + 2);
  *(_QWORD *)(v21 + a1 + 56) = v20;
  *(_DWORD *)(v22 + a1) = 2;
  *(_DWORD *)(a1 + 36) |= 1 << v11;
  if ( a2 )
  {
    v23 = *a2;
    *(_DWORD *)(v22 + a1) |= 1u;
    *(_OWORD *)(v21 + a1 + 40) = v23;
  }
  else
  {
    *(_OWORD *)(v21 + a1 + 40) = 0LL;
  }
  v9 = 1;
  if ( (_DWORD)v11 == 1 )
    *(_QWORD *)(a1 + 24) = v20;
  *a5 = (_DWORD)v11 << 28;
  if ( a4 )
    *a4 = v20;
  return v9;
}
