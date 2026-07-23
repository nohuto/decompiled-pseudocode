/*
 * XREFs of SdbpCheckMatchingWildcardFiles @ 0x140804270
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SdbpInitializeSearchDBContext @ 0x140805650 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x140805CD0 (SdbpResolveMatchingFile.c)
 *     SdbpCheckAllAttributes @ 0x140807A9C (SdbpCheckAllAttributes.c)
 *     AslPathWildcardFindClose @ 0x14080A7A0 (AslPathWildcardFindClose.c)
 *     AslPathWildcardFindFirst @ 0x14080A7E4 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x14080ADDC (AslPathWildcardFindNext.c)
 *     AslFileMappingCreate @ 0x140941554 (AslFileMappingCreate.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslFileMappingDelete @ 0x140944898 (AslFileMappingDelete.c)
 *     SdbGetStringTagPtr @ 0x140947558 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x140947AFC (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckMatchingWildcardFiles(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  _DWORD *v7; // r12
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // r13
  __int64 v13; // r12
  _DWORD *v14; // rdx
  int i; // r15d
  int j; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 result; // rax
  int v21; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD *v25; // [rsp+50h] [rbp-B0h]
  __int64 v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+60h] [rbp-A0h]
  _DWORD *v28; // [rsp+68h] [rbp-98h]
  wchar_t pszDest[264]; // [rsp+70h] [rbp-90h] BYREF

  v27 = a3;
  v26 = a2;
  v7 = a1;
  v25 = a1;
  v8 = 0;
  v21 = 0;
  v9 = 0LL;
  v23 = 0LL;
  v10 = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  FirstTag = SdbFindFirstTag(a3, a5, 24577LL);
  if ( FirstTag )
  {
    StringTagPtr = SdbGetStringTagPtr(a3, FirstTag);
    if ( StringTagPtr )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( *(_WORD *)(StringTagPtr + 2 * v13) );
      v8 = 1;
      if ( (*(_DWORD *)a6 & 1) != 0 || (unsigned int)SdbpInitializeSearchDBContext(a6) )
      {
        v14 = *(_DWORD **)(a6 + 72);
        v28 = v14;
        for ( i = 0; i < *v14; ++i )
        {
          if ( !(unsigned int)SdbpResolveMatchingFile(v26, a6, StringTagPtr, (unsigned int)v13, &v14[12 * i + 2], &v23) )
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"SdbpCheckMatchingWildcardFiles",
              3451,
              (unsigned int)"Failed to resolve matching file");
            v9 = v23;
            v8 = 0;
            goto LABEL_26;
          }
          AslPathWildcardFindClose(&v24);
          memset_0(pszDest, 0, 0x208uLL);
          v9 = v23;
          for ( j = AslPathWildcardFindFirst(pszDest); ; j = AslPathWildcardFindNext(pszDest, v18, v24) )
          {
            v17 = 0LL;
            if ( j < 0 )
              break;
            if ( v10 )
            {
              AslFileMappingDelete(v10);
              v22 = 0LL;
            }
            j = AslFileMappingCreate((unsigned int)&v22, (unsigned int)pszDest, 0, 0, 0LL);
            v10 = v22;
            if ( j < 0 )
              break;
            if ( (int)SdbpCheckAllAttributes((unsigned int)&v21, v26, v27, a5, v22) >= 0 )
              goto LABEL_25;
          }
          if ( j != -2147483642 )
            AslLogCallPrintf(
              3,
              (unsigned int)"SdbpCheckMatchingWildcardFiles",
              3505,
              (unsigned int)"AslPathWildcardFindFirst/Next failed to find a file [%x]");
          if ( v9 )
          {
            AslFree(v17);
            v9 = 0LL;
            v23 = 0LL;
          }
          v14 = v28;
        }
LABEL_25:
        *(_DWORD *)(a6 + 80) = 1;
      }
      else
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpCheckMatchingWildcardFiles",
          3427,
          (unsigned int)"Failed to initialize SEARCHDBCONTEXT");
        v8 = 0;
      }
LABEL_26:
      v7 = v25;
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCheckMatchingWildcardFiles",
        3413,
        (unsigned int)"Failed to get the string from the database");
    }
  }
  AslPathWildcardFindClose(&v24);
  AslFileMappingDelete(v10);
  if ( v9 )
    AslFree(v19);
  result = v8;
  *v7 = v21;
  return result;
}
