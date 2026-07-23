/*
 * XREFs of MiCallCreateSectionFilters @ 0x14098C3A8
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14098BD70 (MiCreateImageOrDataSection.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14098C5C0 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFile @ 0x14098D3F0 (FsRtlReleaseFile.c)
 */

__int64 __fastcall MiCallCreateSectionFilters(int *a1)
{
  int v2; // eax
  int v3; // esi
  struct _FILE_OBJECT *v4; // r14
  char v5; // di
  __int64 result; // rax
  unsigned int v7; // ebp
  int v8; // eax
  unsigned int v9; // eax
  PKGUARDED_MUTEX *FsContext; // rsi
  struct _FAST_MUTEX *v11; // rcx
  int v12; // edx
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF

  if ( (*a1 & 1) != 0 )
    return 0LL;
  v2 = a1[4];
  v3 = a1[7];
  v4 = (struct _FILE_OBJECT *)*((_QWORD *)a1 + 7);
  v5 = 0;
  v13 = 0LL;
  LODWORD(v13) = 16;
  result = FsRtlAcquireFileExclusiveCommon(v4, v2, (__int64)&v13);
  v7 = result;
  if ( (int)result >= 0 )
  {
    if ( (v3 & 0x44) != 0 )
    {
      FsContext = (PKGUARDED_MUTEX *)v4->FsContext;
      if ( FsContext )
      {
        ExAcquireFastMutex(FsContext[6]);
        v11 = FsContext[6];
        *((_BYTE *)FsContext + 6) |= 0x10u;
        KeReleaseGuardedMutex(v11);
      }
    }
    if ( DWORD1(v13) >= 0xC )
      v5 = BYTE8(v13);
    if ( (v5 & 6) == 0 )
      goto LABEL_7;
    v12 = *a1;
    if ( (*a1 & 0x2000000) != 0 )
    {
      FsRtlReleaseFile(v4);
      return 3221227793LL;
    }
    if ( (a1[4] & 0x1000000) != 0 )
    {
      v12 |= 0x4000u;
      *a1 = v12;
      if ( (v5 & 4) == 0 )
      {
        v12 |= 0x10000u;
        *a1 = v12;
      }
      if ( (v5 & 8) != 0 )
        goto LABEL_25;
      v12 |= 0x20000u;
    }
    else
    {
      if ( (v5 & 2) == 0 )
        goto LABEL_25;
      v12 |= 0x4000u;
    }
    *a1 = v12;
LABEL_25:
    if ( (v5 & 6) == 6 )
      *a1 = v12 | 0x8000;
LABEL_7:
    v8 = *a1;
    if ( v7 == 299 )
      v9 = v8 | 0x40;
    else
      v9 = v8 & 0xFFFFFFBF;
    *a1 = v9;
    return v7;
  }
  return result;
}
