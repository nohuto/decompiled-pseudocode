/*
 * XREFs of RtlpTraverseParents @ 0x1800022C0
 * Callers:
 *     RtlpIsQualifiedLanguage @ 0x180001530 (RtlpIsQualifiedLanguage.c)
 *     RtlpTraverseParents @ 0x1800022C0 (RtlpTraverseParents.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800145C0 (LdrpMergeParentBaseLanguagesToList.c)
 * Callees:
 *     RtlpTraverseParents @ 0x1800022C0 (RtlpTraverseParents.c)
 *     RtlpCompareConfigNodeWithSpec @ 0x18000260C (RtlpCompareConfigNodeWithSpec.c)
 */

char __fastcall RtlpTraverseParents(_WORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  char v6; // r14
  int v11; // ecx
  int v12; // r12d
  __int16 v13; // r15
  unsigned int v14; // r10d
  __int16 i; // dx
  __int16 v16; // dx
  int v17; // r15d
  __int16 v18; // dx
  int v20; // ecx
  __int16 v21; // ax
  __int64 v22; // rax
  int v23; // edx
  __int64 v24; // r8
  __int16 v25; // ax
  char v26; // al
  unsigned int v27; // [rsp+38h] [rbp-30h]
  __int64 v28; // [rsp+38h] [rbp-30h]
  __int16 v29; // [rsp+70h] [rbp+8h]
  int v30; // [rsp+70h] [rbp+8h]

  v6 = 0;
  if ( !a1 || !a2 || !a3 || a5 > 4 || a6 <= 1 )
    return 0;
  v11 = *a1 & 7;
  if ( v11 != 2 )
  {
    v20 = v11 - 1;
    if ( !v20 )
    {
      *(_DWORD *)(a2 + 4) = 1;
      *(_WORD *)a2 = a1[2];
      *(_WORD *)(a2 + 2) = a1[3];
      return 1;
    }
    if ( v20 != 3 )
      return 0;
  }
  v12 = 0;
  if ( a4 )
  {
    v13 = a1[2];
    if ( (v13 & 0xEBFF) != 0 || v13 == 1024 )
    {
      v14 = 1;
      goto LABEL_10;
    }
    v13 = a1[3];
    if ( v13 > 0 )
    {
      v14 = 3;
LABEL_10:
      v27 = v14;
      for ( i = 0; ; i = v29 + 1 )
      {
        v29 = i;
        if ( i >= (int)*(unsigned __int16 *)(a4 + 4) )
          break;
        v26 = RtlpCompareConfigNodeWithSpec(a3, v14, (unsigned __int16)v13, *(_QWORD *)(a4 + 8) + 12LL * i);
        v16 = v29;
        if ( v26 )
          goto LABEL_13;
        v14 = v27;
      }
      v16 = -1;
LABEL_13:
      if ( v16 != -1 )
      {
        v22 = v16;
        v23 = 0;
        v24 = *(_QWORD *)(a4 + 8) + 12 * v22;
        v28 = v24;
        while ( 1 )
        {
          v30 = v23;
          if ( v23 >= 3 )
            break;
          v25 = (*(_WORD *)(v24 + 2) >> (2 * v23)) & 3;
          if ( v25 )
          {
            if ( v25 != 2 )
            {
              if ( v25 == 1 )
              {
                *(_WORD *)(a2 + 8) = *(_WORD *)(v24 + 2LL * v23 + 6);
                *(_WORD *)(a2 + 10) = -1;
              }
              else
              {
                *(_WORD *)(a2 + 8) = 0;
                *(_WORD *)(a2 + 10) = *(_WORD *)(v24 + 2LL * v23 + 6);
              }
              *(_DWORD *)(a2 + 12) = 1;
LABEL_33:
              v6 = 1;
              break;
            }
            if ( (unsigned __int8)RtlpTraverseParents(
                                    *(_DWORD *)(*(_QWORD *)(a3 + 24) + 16LL) + 28 * *(__int16 *)(v24 + 2LL * v23 + 6),
                                    (int)a2 + 8,
                                    a3,
                                    a4,
                                    a5 + 1,
                                    a6 - 1) )
              goto LABEL_33;
            v23 = v30;
            v24 = v28;
          }
          ++v23;
        }
      }
    }
  }
  v17 = 0;
  if ( v6 )
    goto LABEL_18;
  while ( 1 )
  {
    if ( v17 >= 4 )
      return 0;
    v18 = (a1[4] >> (2 * v17)) & 3;
    if ( v18 != 2 )
      break;
    if ( (unsigned __int8)RtlpTraverseParents(
                            *(_DWORD *)(*(_QWORD *)(a3 + 24) + 16LL) + 28 * (__int16)a1[v17 + 6],
                            (int)a2 + 8,
                            a3,
                            a4,
                            a5 + 1,
                            a6 - 1) )
      goto LABEL_18;
LABEL_41:
    v12 = ++v17;
  }
  if ( ((v18 - 1) & 0xFFFD) != 0 )
    goto LABEL_41;
  v21 = a1[v12 + 6];
  if ( v18 == 1 )
    *(_WORD *)(a2 + 8) = v21;
  else
    *(_WORD *)(a2 + 10) = v21;
  *(_DWORD *)(a2 + 12) = 1;
LABEL_18:
  *(_DWORD *)(a2 + 4) = 1;
  *(_WORD *)a2 = a1[2];
  *(_WORD *)(a2 + 2) = a1[3];
  return 1;
}
