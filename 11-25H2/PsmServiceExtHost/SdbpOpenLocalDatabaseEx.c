/*
 * XREFs of SdbpOpenLocalDatabaseEx @ 0x180094AA4
 * Callers:
 *     SdbTagRefToTagID @ 0x180094CF8 (SdbTagRefToTagID.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbOpenDatabaseEx @ 0x180092550 (SdbOpenDatabaseEx.c)
 *     SdbpGetFileTimestamp @ 0x180092AE4 (SdbpGetFileTimestamp.c)
 *     SdbpCloseLocalDatabaseEx @ 0x18009497C (SdbpCloseLocalDatabaseEx.c)
 *     SdbResolveDatabaseEx @ 0x180095BCC (SdbResolveDatabaseEx.c)
 *     SdbpCheckRuntimePlatformImpl @ 0x18009AB68 (SdbpCheckRuntimePlatformImpl.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall SdbpOpenLocalDatabaseEx(__int64 a1, __int128 *a2, __int64 a3, _QWORD *a4, _DWORD *a5)
{
  unsigned int v8; // esi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // rcx
  int FileTimestamp; // eax
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int128 v17; // xmm0
  unsigned int v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v22; // [rsp+40h] [rbp-C0h]
  WCHAR v23[264]; // [rsp+50h] [rbp-B0h] BYREF

  LODWORD(v21) = 0;
  v19 = 0;
  v8 = 0;
  v9 = *a5 >> 28;
  v10 = (*a5 & 0xF0000000) == 0;
  v22 = 0LL;
  if ( v10 )
    v9 = (unsigned int)*a5;
  v20 = 0;
  if ( (_DWORD)v9 != 1 && (unsigned int)(v9 - 3) > 0xC
    || (SdbpCloseLocalDatabaseEx(a1, (__int64)a2, v9),
        (unsigned int)SdbResolveDatabaseEx(a1, (_DWORD)a2, (unsigned int)&v21, (unsigned int)&v19, (__int64)v23) - 1 > 0x102) )
  {
    v11 = 1LL;
    goto LABEL_23;
  }
  if ( *(_WORD *)(a1 + 584) != 0x7FFF )
  {
    if ( !(unsigned int)SdbpCheckRuntimePlatformImpl(&v20, 0LL, *(unsigned int *)(a1 + 552), v19) )
    {
LABEL_8:
      AslLogCallPrintf(1LL);
      return v8;
    }
    if ( !v20 )
      goto LABEL_10;
  }
  v21 = 0LL;
  FileTimestamp = SdbpGetFileTimestamp(&v21, v23, 0);
  if ( FileTimestamp < 0 && FileTimestamp != -1073741790 && FileTimestamp != -1073741757 )
  {
LABEL_10:
    v11 = 3LL;
LABEL_23:
    AslLogCallPrintf(v11);
    return v8;
  }
  v14 = SdbOpenDatabaseEx((__int64)v23, v13, 0);
  if ( !v14 )
    goto LABEL_8;
  v15 = 32LL * (unsigned int)v9;
  v16 = 32 * (v9 + 2);
  *(_QWORD *)(v15 + a1 + 56) = v14;
  *(_DWORD *)(v16 + a1) = 2;
  *(_DWORD *)(a1 + 36) |= 1 << v9;
  if ( a2 )
  {
    v17 = *a2;
    *(_DWORD *)(v16 + a1) |= 1u;
    *(_OWORD *)(v15 + a1 + 40) = v17;
  }
  else
  {
    *(_OWORD *)(v15 + a1 + 40) = 0LL;
  }
  v8 = 1;
  if ( (_DWORD)v9 == 1 )
    *(_QWORD *)(a1 + 24) = v14;
  *a5 = (_DWORD)v9 << 28;
  if ( a4 )
    *a4 = v14;
  return v8;
}
