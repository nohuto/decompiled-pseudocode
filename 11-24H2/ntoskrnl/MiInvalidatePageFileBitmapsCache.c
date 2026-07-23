/*
 * XREFs of MiInvalidatePageFileBitmapsCache @ 0x1403C4918
 * Callers:
 *     MiGatherPagefilePages @ 0x1402F9BC8 (MiGatherPagefilePages.c)
 *     MiFindFreePageFileSpace @ 0x1403C438C (MiFindFreePageFileSpace.c)
 *     MiAttemptPageFileReductionApc @ 0x1403EF420 (MiAttemptPageFileReductionApc.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1403651C0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1403C4BF0 (MiBitmapsCachedEntryLengthChanged.c)
 */

void __fastcall MiInvalidatePageFileBitmapsCache(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  BOOLEAN v5; // bl
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // r8d
  unsigned int v12; // ecx
  __int64 v13; // rax
  int v14; // r8d
  unsigned int *v15; // rdx
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rsi
  _QWORD *v19; // rax
  int v20; // r11d
  int v21; // ecx
  _QWORD *v22; // rax
  __int64 *v23; // r14
  unsigned int v24; // ecx
  unsigned int v25; // r9d
  __int64 v26; // r8
  _RTL_RB_TREE *v27; // rcx
  unsigned __int64 v28; // rdx
  BOOLEAN v29; // r8
  unsigned __int64 v30; // rax
  _RTL_RB_TREE *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  unsigned int v34; // eax
  bool v35; // cc

  v5 = 0;
  if ( a4 )
  {
LABEL_14:
    v14 = *(_DWORD *)(a4 + 48);
    v15 = (unsigned int *)(a4 + 52);
    if ( v14 == a2 || (v20 = a2 + a3, v21 = v14 + *v15, a2 + a3 == v21) )
    {
      v16 = *v15 - a3;
      *v15 = v16;
      if ( v14 == a2 )
        *(_DWORD *)(a4 + 48) = v14 + a3;
      v17 = a4;
      if ( !v16 )
      {
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 112), (PRTL_BALANCED_NODE)a4);
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 128), (PRTL_BALANCED_NODE)(a4 + 24));
        v18 = a1 + 144;
        v19 = *(_QWORD **)(v18 + 8);
        if ( *v19 == v18 )
        {
          *(_QWORD *)a4 = v18;
          *(_QWORD *)(a4 + 8) = v19;
          *v19 = a4;
          *(_QWORD *)(v18 + 8) = a4;
          return;
        }
        goto LABEL_20;
      }
    }
    else
    {
      v22 = (_QWORD *)(a1 + 144);
      v23 = *(__int64 **)(a1 + 144);
      v24 = v21 - a2 - a3;
      v25 = a2 - v14;
      if ( v23 != (__int64 *)(a1 + 144) )
      {
        if ( (_QWORD *)v23[1] == v22 )
        {
          v26 = *v23;
          if ( *(__int64 **)(*v23 + 8) == v23 )
          {
            *v22 = v26;
            *(_QWORD *)(v26 + 8) = v22;
            *((_DWORD *)v23 + 13) = v24;
            *((_DWORD *)v23 + 12) = v20;
            *v15 = v25;
            MiBitmapsCachedEntryLengthChanged(a1, a4, 0LL);
            v27 = (_RTL_RB_TREE *)(a1 + 112);
            v28 = *(_QWORD *)(a1 + 112);
            if ( (*(_BYTE *)(a1 + 120) & 1) != 0 && v28 )
              v28 ^= (unsigned __int64)v27;
            v29 = 0;
            if ( v28 )
            {
              while ( 1 )
              {
                if ( (unsigned __int64)v23[6] >= *(_QWORD *)(v28 + 48) )
                {
                  v30 = *(_QWORD *)(v28 + 8);
                  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
                  {
                    if ( !v30 )
                      goto LABEL_35;
                    v30 ^= v28;
                  }
                  if ( !v30 )
                  {
LABEL_35:
                    v29 = 1;
                    break;
                  }
                }
                else
                {
                  v30 = *(_QWORD *)v28;
                  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
                  {
                    if ( !v30 )
                      goto LABEL_59;
                    v30 ^= v28;
                  }
                  if ( !v30 )
                  {
LABEL_59:
                    v29 = 0;
                    break;
                  }
                }
                v28 = v30;
              }
            }
            RtlRbInsertNodeEx(v27, (PRTL_BALANCED_NODE)v28, v29, (PRTL_BALANCED_NODE)v23);
            v31 = (_RTL_RB_TREE *)(a1 + 128);
            v32 = *(_QWORD *)(a1 + 128);
            if ( (*(_BYTE *)(a1 + 136) & 1) != 0 && v32 )
              v32 ^= (unsigned __int64)v31;
            if ( v32 )
            {
              while ( 1 )
              {
                if ( *((_DWORD *)v23 + 12) < *(_DWORD *)(v32 + 24) )
                {
                  v33 = *(_QWORD *)v32;
                  if ( (*(_BYTE *)(a1 + 136) & 1) != 0 )
                  {
                    if ( !v33 )
                      break;
                    v33 ^= v32;
                  }
                  if ( !v33 )
                    break;
                }
                else
                {
                  v33 = *(_QWORD *)(v32 + 8);
                  if ( (*(_BYTE *)(a1 + 136) & 1) != 0 )
                  {
                    if ( !v33 )
                      goto LABEL_41;
                    v33 ^= v32;
                  }
                  if ( !v33 )
                  {
LABEL_41:
                    v5 = 1;
                    break;
                  }
                }
                v32 = v33;
              }
            }
            RtlRbInsertNodeEx(v31, (PRTL_BALANCED_NODE)v32, v5, (PRTL_BALANCED_NODE)v23 + 1);
            return;
          }
        }
LABEL_20:
        __fastfail(3u);
      }
      if ( v25 <= v24 )
      {
        *v15 = v24;
        v24 = v25;
        *(_DWORD *)(a4 + 48) = v20;
        v34 = *(_DWORD *)(a1 + 108);
        v35 = v34 <= v25;
      }
      else
      {
        *v15 = v25;
        v34 = *(_DWORD *)(a1 + 108);
        v35 = v34 <= v24;
      }
      if ( !v35 )
        v24 = v34;
      *(_DWORD *)(a1 + 108) = v24;
      v17 = a4;
    }
    MiBitmapsCachedEntryLengthChanged(a1, v17, 0LL);
    return;
  }
  v9 = a1 + 128;
  v10 = *(_QWORD *)v9;
  if ( (*(_BYTE *)(v9 + 8) & 1) != 0 && v10 )
    v10 ^= v9;
  v11 = *(_BYTE *)(v9 + 8) & 1;
  if ( v10 )
  {
    do
    {
      v12 = *(_DWORD *)(v10 + 24);
      if ( a2 + a3 <= v12 )
      {
        v13 = *(_QWORD *)v10;
      }
      else
      {
        if ( a2 < *(_DWORD *)(v10 + 28) + v12 )
          break;
        v13 = *(_QWORD *)(v10 + 8);
      }
      if ( v11 && v13 )
        v10 ^= v13;
      else
        v10 = v13;
    }
    while ( v10 );
    if ( v10 )
    {
      a4 = v10 - 24;
      goto LABEL_14;
    }
  }
}
