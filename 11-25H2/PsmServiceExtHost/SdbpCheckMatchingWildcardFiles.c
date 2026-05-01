/*
 * XREFs of SdbpCheckMatchingWildcardFiles @ 0x18009A530
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbpCheckAllAttributes @ 0x180096ABC (SdbpCheckAllAttributes.c)
 *     SdbFindFirstTag @ 0x180097A8C (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x180097D74 (SdbGetStringTagPtr.c)
 *     SdbpInitializeSearchDBContext @ 0x18009B5C0 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x18009B9F8 (SdbpResolveMatchingFile.c)
 *     AslFree @ 0x18009D6FC (AslFree.c)
 *     AslFileMappingCreate @ 0x18009EB18 (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x18009ED88 (AslFileMappingDelete.c)
 *     AslPathWildcardFindClose @ 0x1800A41DC (AslPathWildcardFindClose.c)
 *     AslPathWildcardFindFirst @ 0x1800A4220 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1800A4854 (AslPathWildcardFindNext.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
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
  __int64 v9; // rsi
  __int64 v10; // rdi
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // r13
  __int64 v13; // r12
  _DWORD *v14; // rdx
  int v15; // r15d
  __int64 v16; // rdx
  int i; // eax
  __int64 result; // rax
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v23; // [rsp+58h] [rbp-A8h]
  __int64 v24; // [rsp+60h] [rbp-A0h]
  __int64 v25; // [rsp+68h] [rbp-98h]
  _DWORD *v26; // [rsp+70h] [rbp-90h]
  _BYTE v27[528]; // [rsp+80h] [rbp-80h] BYREF

  v25 = a3;
  v24 = a2;
  v7 = a1;
  v23 = a1;
  v8 = 0;
  v20 = 0;
  v9 = 0LL;
  v19 = 0LL;
  v10 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  FirstTag = SdbFindFirstTag(a3, a5, 24577);
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
      if ( (*(_BYTE *)a6 & 1) != 0 || (unsigned int)SdbpInitializeSearchDBContext(a6) )
      {
        v14 = *(_DWORD **)(a6 + 72);
        v15 = 0;
        v26 = v14;
        while ( v15 < *v14 )
        {
          if ( !(unsigned int)SdbpResolveMatchingFile(
                                v24,
                                a6,
                                StringTagPtr,
                                (unsigned int)v13,
                                &v14[12 * v15 + 2],
                                &v19) )
          {
            AslLogCallPrintf(1LL);
            v9 = v19;
            v8 = 0;
            goto LABEL_26;
          }
          AslPathWildcardFindClose(&v22);
          memset_0(v27, 0, 0x208uLL);
          v9 = v19;
          for ( i = AslPathWildcardFindFirst(v27, v16, v19, &v22); i >= 0; i = AslPathWildcardFindNext(v27, 260LL, v22) )
          {
            if ( v10 )
            {
              AslFileMappingDelete(v10);
              v21 = 0LL;
            }
            i = AslFileMappingCreate(&v21, v27);
            v10 = v21;
            if ( i < 0 )
              break;
            if ( (int)SdbpCheckAllAttributes(&v20, v24, v25, a5, v21) >= 0 )
              goto LABEL_25;
          }
          if ( i != -2147483642 )
            AslLogCallPrintf(3LL);
          if ( v9 )
          {
            AslFree(NtCurrentPeb()->ProcessHeap, v19);
            v10 = v21;
            v9 = 0LL;
            v19 = 0LL;
          }
          v14 = v26;
          ++v15;
        }
LABEL_25:
        *(_DWORD *)(a6 + 80) = 1;
      }
      else
      {
        AslLogCallPrintf(1LL);
        v8 = 0;
      }
LABEL_26:
      v7 = v23;
    }
    else
    {
      AslLogCallPrintf(1LL);
    }
  }
  AslPathWildcardFindClose(&v22);
  AslFileMappingDelete(v10);
  if ( v9 )
    AslFree(NtCurrentPeb()->ProcessHeap, v19);
  result = v8;
  *v7 = v20;
  return result;
}
