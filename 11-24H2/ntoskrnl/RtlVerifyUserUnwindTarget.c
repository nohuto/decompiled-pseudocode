/*
 * XREFs of RtlVerifyUserUnwindTarget @ 0x140A0B69C
 * Callers:
 *     KiVerifyContextIpForUserCet @ 0x1403D5CD8 (KiVerifyContextIpForUserCet.c)
 * Callees:
 *     RtlGetImageBaseAndLoadConfig @ 0x14045A364 (RtlGetImageBaseAndLoadConfig.c)
 *     bsearch_s @ 0x1404FC130 (bsearch_s.c)
 *     RtlpFindDynamicEHContinuationTarget @ 0x140A248E4 (RtlpFindDynamicEHContinuationTarget.c)
 */

__int64 __fastcall RtlVerifyUserUnwindTarget(unsigned __int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rax
  unsigned int v10; // r8d
  unsigned __int64 v11; // rax
  char *v12; // r10
  rsize_t v13; // r8
  rsize_t v14; // r9
  rsize_t v15; // rax
  unsigned __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  char *v17; // [rsp+38h] [rbp-20h] BYREF
  rsize_t v18; // [rsp+40h] [rbp-18h]
  int Key; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  Key = 0;
  result = RtlGetImageBaseAndLoadConfig(a1, &v16, (__int64 *)&v17);
  if ( (int)result >= 0 )
  {
    v7 = (unsigned __int64)v17;
    if ( a3 )
    {
      *(_BYTE *)(a3 + 16) = 1;
      *(_QWORD *)a3 = v16;
      *(_QWORD *)(a3 + 8) = v7;
    }
    if ( v16 )
    {
      v8 = 0x10000;
      if ( a2 != 2 )
        v8 = 0x400000;
      v9 = 192LL;
      if ( a2 != 2 )
        v9 = 280LL;
      v10 = v9;
      v11 = v7 + v9;
      if ( v11 > 0x7FFFFFFF0000LL || v11 < v7 )
        v7 = (unsigned __int64)v17;
      if ( !v7 || *(_DWORD *)v7 < v10 || (v8 & *(_DWORD *)(v7 + 144)) == 0 )
        return 0LL;
      if ( a2 == 2 )
      {
        v12 = *(char **)(v7 + 176);
        v17 = v12;
        v13 = *(_QWORD *)(v7 + 184);
        v18 = v13;
        if ( v13 >= 0xFFFFFFFF )
          return 3221225621LL;
      }
      else
      {
        v12 = *(char **)(v7 + 264);
        v17 = v12;
        if ( (unsigned __int64)v12 <= v16 )
          return 0LL;
        v13 = *(_QWORD *)(v7 + 272);
        v18 = v13;
        if ( v13 >= 0xFFFFFFFF )
          return 3221225621LL;
      }
      if ( v13 )
      {
        Key = a1 - v16;
        v14 = (unsigned int)((*(_DWORD *)(v7 + 144) >> 28) + 4);
        if ( v13 > 0xFFFFFFFFFFFFFFFFuLL / v14 )
          return 3221225621LL;
        v15 = v13 * (unsigned int)v14;
        if ( v15 && ((unsigned __int64)&v12[v15] > 0x7FFFFFFF0000LL || &v12[v15] < v12) )
        {
          v12 = v17;
          v13 = v18;
        }
        if ( bsearch_s(&Key, v12, v13, v14, (int (__cdecl *)(void *, const void *, const void *))RtlpTargetCompare, 0LL) )
          return 0LL;
      }
    }
    if ( a2 )
      return 3221227018LL;
    else
      return (unsigned __int8)RtlpFindDynamicEHContinuationTarget(a1) == 0 ? 0xC000060A : 0;
  }
  return result;
}
