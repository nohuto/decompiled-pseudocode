/*
 * XREFs of MiRescanPageFileBitmapPortion @ 0x1403C56D8
 * Callers:
 *     MiRescanPagefileBitmaps @ 0x1403C3F28 (MiRescanPagefileBitmaps.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1403C4F10 (MiCoalescePageFileBitmapsCache.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1403651C0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     RtlFindNextClearRunUlong @ 0x1403C598C (RtlFindNextClearRunUlong.c)
 */

__int64 __fastcall MiRescanPageFileBitmapPortion(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5)
{
  __int64 v5; // rax
  __int64 *v7; // r12
  int v8; // edx
  __int64 v9; // rbx
  int v10; // r13d
  __int64 result; // rax
  int v12; // r8d
  unsigned int v13; // ebp
  unsigned int *v14; // rdi
  unsigned int v15; // eax
  unsigned int v16; // r14d
  int v17; // r15d
  unsigned int v18; // eax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rdi
  unsigned int v22; // ecx
  unsigned __int64 v23; // rdx
  BOOLEAN v24; // r8
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  BOOLEAN v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  _DWORD v30[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v31; // [rsp+38h] [rbp-30h]
  int v32; // [rsp+80h] [rbp+18h] BYREF

  v5 = *(_QWORD *)(a2 + 8);
  v7 = a5;
  v32 = 0;
  v30[1] = 0;
  v8 = a3 & 0x1F;
  v9 = *a5;
  v10 = a3 - v8;
  v31 = v5 + 4 * ((unsigned __int64)(unsigned int)(a3 - v8) >> 5);
  v30[0] = v8 + a4;
  result = RtlFindNextClearRunUlong((unsigned int)v30, v8, a3, -1, (__int64)&v32);
  v13 = result;
  if ( (_DWORD)result )
  {
    v14 = (unsigned int *)(a1 + 108);
    do
    {
      v15 = *(_DWORD *)(v9 + 52);
      v16 = v32 + v10;
      v17 = v32 + v13;
      if ( v13 > v15 )
      {
        if ( v15 )
        {
          v21 = a1 + 112;
          RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 112), (PRTL_BALANCED_NODE)v9);
          RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 128), (PRTL_BALANCED_NODE)(v9 + 24));
          v22 = *(_DWORD *)(a1 + 108);
          if ( v22 <= *(_DWORD *)(v9 + 52) )
            v22 = *(_DWORD *)(v9 + 52);
          *(_DWORD *)(a1 + 108) = v22;
        }
        else
        {
          v19 = *(_QWORD *)v9;
          if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 || (v20 = *(_QWORD **)(v9 + 8), *v20 != v9) )
            __fastfail(3u);
          *v20 = v19;
          v21 = a1 + 112;
          *(_QWORD *)(v19 + 8) = v20;
        }
        *(_DWORD *)(v9 + 52) = v13;
        *(_DWORD *)(v9 + 48) = v16;
        v23 = *(_QWORD *)v21;
        if ( (*(_BYTE *)(v21 + 8) & 1) != 0 && v23 )
          v23 ^= v21;
        v24 = 0;
        if ( v23 )
        {
          while ( 1 )
          {
            if ( __PAIR64__(v13, v16) >= *(_QWORD *)(v23 + 48) )
            {
              v25 = *(_QWORD *)(v23 + 8);
              if ( (*(_BYTE *)(v21 + 8) & 1) != 0 )
              {
                if ( !v25 )
                  goto LABEL_26;
                v25 ^= v23;
              }
              if ( !v25 )
              {
LABEL_26:
                v24 = 1;
                break;
              }
            }
            else
            {
              v25 = *(_QWORD *)v23;
              if ( (*(_BYTE *)(v21 + 8) & 1) != 0 )
              {
                if ( !v25 )
                  break;
                v25 ^= v23;
              }
              if ( !v25 )
                break;
            }
            v23 = v25;
          }
        }
        RtlRbInsertNodeEx((PRTL_RB_TREE)v21, (PRTL_BALANCED_NODE)v23, v24, (PRTL_BALANCED_NODE)v9);
        v26 = *(_QWORD *)(a1 + 128);
        if ( (*(_BYTE *)(a1 + 136) & 1) != 0 && v26 )
          v26 ^= a1 + 128;
        v27 = 0;
        if ( v26 )
        {
          while ( 1 )
          {
            if ( *(_DWORD *)(v9 + 48) < *(_DWORD *)(v26 + 24) )
            {
              v28 = *(_QWORD *)v26;
              if ( (*(_BYTE *)(a1 + 136) & 1) != 0 )
              {
                if ( !v28 )
                  goto LABEL_54;
                v28 ^= v26;
              }
              if ( !v28 )
              {
LABEL_54:
                v27 = 0;
                break;
              }
            }
            else
            {
              v28 = *(_QWORD *)(v26 + 8);
              if ( (*(_BYTE *)(a1 + 136) & 1) != 0 )
              {
                if ( !v28 )
                  goto LABEL_32;
                v28 ^= v26;
              }
              if ( !v28 )
              {
LABEL_32:
                v27 = 1;
                break;
              }
            }
            v26 = v28;
          }
        }
        RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 128), (PRTL_BALANCED_NODE)v26, v27, (PRTL_BALANCED_NODE)(v9 + 24));
        ++*(_DWORD *)(a1 + 96);
        v9 = *(_QWORD *)(a1 + 144);
        if ( v9 == a1 + 144 )
        {
          v29 = *(_QWORD *)(a1 + 120);
          if ( (v29 & 1) != 0 )
          {
            if ( v29 == 1 )
              v9 = 0LL;
            else
              v9 = v29 ^ ((a1 + 112) | 1);
          }
          else
          {
            v9 = *(_QWORD *)(a1 + 120);
          }
        }
        v14 = (unsigned int *)(a1 + 108);
      }
      else
      {
        v18 = *v14;
        if ( *v14 <= v13 )
          v18 = v13;
        *v14 = v18;
      }
      result = RtlFindNextClearRunUlong((unsigned int)v30, v17, v12, -1, (__int64)&v32);
      v13 = result;
    }
    while ( (_DWORD)result );
  }
  *v7 = v9;
  return result;
}
