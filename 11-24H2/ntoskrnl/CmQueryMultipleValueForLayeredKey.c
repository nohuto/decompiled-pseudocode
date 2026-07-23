/*
 * XREFs of CmQueryMultipleValueForLayeredKey @ 0x14090789C
 * Callers:
 *     CmQueryMultipleValueKey @ 0x140870B80 (CmQueryMultipleValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     CmpFindNameInListWithStatus @ 0x140870840 (CmpFindNameInListWithStatus.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140872050 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x140872A10 (CmpUnlockKcbStack.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpGetKeyNodeForKcb @ 0x140879FC0 (CmpGetKeyNodeForKcb.c)
 *     CmpGetValueData @ 0x14087A8E0 (CmpGetValueData.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpIsValueTombstone @ 0x140907D80 (CmpIsValueTombstone.c)
 *     CmpGetEffectiveKcbSemantics @ 0x140908010 (CmpGetEffectiveKcbSemantics.c)
 *     CmpLockKcbStackShared @ 0x14090B180 (CmpLockKcbStackShared.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BBB7D0 (CmpPerformKeyBodyDeletionCheck.c)
 */

__int64 __fastcall CmQueryMultipleValueForLayeredKey(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        _DWORD *a6)
{
  char v6; // r14
  __int64 v7; // rsi
  __int64 v8; // r13
  void *v9; // r15
  unsigned int v10; // r12d
  __int64 v11; // rdx
  int started; // edi
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int16 v16; // cx
  __int16 v17; // si
  unsigned int v18; // r14d
  ULONG_PTR v19; // rcx
  __int64 CellFlat; // rax
  __int64 v21; // rdx
  ULONG_PTR v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // edi
  unsigned int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r14
  __int64 KeyNodeForKcb; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  char v35; // [rsp+41h] [rbp-B7h]
  _BYTE BugCheckParameter4[14]; // [rsp+42h] [rbp-B6h] BYREF
  __int64 v37; // [rsp+50h] [rbp-A8h] BYREF
  void *Src; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+60h] [rbp-98h] BYREF
  int v40; // [rsp+68h] [rbp-90h]
  __int64 v41; // [rsp+70h] [rbp-88h] BYREF
  __int64 v42; // [rsp+78h] [rbp-80h]
  __int64 v43; // [rsp+80h] [rbp-78h]
  __int128 v44; // [rsp+88h] [rbp-70h] BYREF
  __int128 v45; // [rsp+98h] [rbp-60h]
  __int64 v46; // [rsp+A8h] [rbp-50h]
  __int64 v47; // [rsp+B0h] [rbp-48h]

  v37 = 0LL;
  v41 = 0LL;
  v39 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  WORD1(v44) = -1;
  v6 = 0;
  v7 = 0LL;
  HvpGetCellContextInitialize(&v37);
  HvpGetCellContextInitialize(&v41);
  v8 = 0LL;
  v43 = 0LL;
  v9 = 0LL;
  Src = 0LL;
  BugCheckParameter4[0] = 0;
  HvpGetCellContextInitialize(&v39);
  v10 = 0;
  *(_DWORD *)&BugCheckParameter4[2] = 0;
  v35 = 0;
  v46 = *(_QWORD *)(v11 + 8);
  started = CmpStartKcbStackForTopLayerKcb((__int64)&v44, v46);
  if ( started >= 0 )
  {
    CmpLockKcbStackShared(&v44);
    v6 = 1;
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started >= 0 )
    {
      v14 = 0LL;
      while ( 1 )
      {
        v40 = v14;
        if ( (unsigned int)v14 >= a3 )
          break;
        v47 = 3 * v14;
        v15 = *(_QWORD *)(a2 + 24 * v14);
        v42 = v15;
        v16 = *(_WORD *)v15;
        if ( *(_WORD *)v15 )
        {
          v32 = *(_QWORD *)(v15 + 8);
          do
          {
            if ( *(_WORD *)(v32 + 2 * (((unsigned __int64)v16 - 1) >> 1)) )
              break;
            v16 -= 2;
            *(_WORD *)v15 = v16;
          }
          while ( v16 );
        }
        *(_DWORD *)&BugCheckParameter4[6] = -1;
        v17 = *(_WORD *)(v46 + 66);
        while ( v17 >= 0 )
        {
          v29 = v17 >= 2 ? *(_QWORD *)(*((_QWORD *)&v45 + 1) + 8LL * v17 - 16) : *((_QWORD *)&v44 + v17 + 1);
          if ( (unsigned int)CmpGetEffectiveKcbSemantics(v29, a1) == 1 )
            break;
          if ( *(_DWORD *)(v29 + 40) == -1 )
          {
            --v17;
          }
          else
          {
            KeyNodeForKcb = CmpGetKeyNodeForKcb(v29, (unsigned int *)&v41, 0);
            started = CmpFindNameInListWithStatus(
                        *(_QWORD *)(v29 + 32),
                        (unsigned int *)(KeyNodeForKcb + 36),
                        (unsigned __int16 *)v15,
                        0,
                        0LL,
                        &BugCheckParameter4[6]);
            v31 = *(_QWORD *)(v29 + 32);
            if ( (*(_BYTE *)(v31 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v31, (__int64)&v41);
            else
              HvpReleaseCellPaged(v31, (unsigned int *)&v41);
            if ( started >= 0 )
            {
              v8 = v29;
              v43 = v29;
              break;
            }
            if ( started != -1073741772 )
              goto LABEL_47;
            if ( (unsigned int)CmpGetEffectiveKcbSemantics(v29, a1) )
              break;
            --v17;
            v15 = v42;
          }
        }
        v18 = *(_DWORD *)&BugCheckParameter4[6];
        if ( *(_DWORD *)&BugCheckParameter4[6] == -1 )
        {
          started = -1073741772;
LABEL_47:
          v6 = 1;
          goto LABEL_48;
        }
        v19 = *(_QWORD *)(v8 + 32);
        if ( (*(_BYTE *)(v19 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v19, *(unsigned int *)&BugCheckParameter4[6], &v37);
        else
          CellFlat = HvpGetCellPaged(v19, *(unsigned int *)&BugCheckParameter4[6], &v37);
        v7 = CellFlat;
        v42 = CellFlat;
        if ( (unsigned __int8)CmpIsValueTombstone(*(_QWORD *)(v8 + 32), CellFlat) )
        {
          started = -1073741772;
LABEL_56:
          v6 = 1;
          goto LABEL_2;
        }
        v23 = *(_DWORD *)(v21 + 4);
        v24 = v23 + 0x80000000;
        if ( v23 < 0x80000000 )
          v24 = *(_DWORD *)(v21 + 4);
        *(_DWORD *)&BugCheckParameter4[6] = v24;
        v10 = (v10 + 3) & 0xFFFFFFFC;
        v25 = (*(_DWORD *)&BugCheckParameter4[2] + 3) & 0xFFFFFFFC;
        *(_DWORD *)&BugCheckParameter4[2] = v25;
        if ( v35 || v10 + v24 > *a5 || v10 + v24 < v10 )
        {
          v35 = 1;
        }
        else
        {
          if ( !CmpGetValueData(
                  v22,
                  v18,
                  v7,
                  (unsigned int *)&BugCheckParameter4[6],
                  (__int64)&Src,
                  (__int64)BugCheckParameter4,
                  &v39) )
          {
            started = -1073741670;
            v9 = Src;
            goto LABEL_56;
          }
          v24 = *(_DWORD *)&BugCheckParameter4[6];
          memmove((void *)(a4 + v10), Src, *(unsigned int *)&BugCheckParameter4[6]);
          v26 = v47;
          *(_DWORD *)(a2 + 8 * v47 + 16) = *(_DWORD *)(v7 + 12);
          *(_DWORD *)(a2 + 8 * v26 + 8) = v24;
          *(_DWORD *)(a2 + 8 * v26 + 12) = v10;
          v10 += v24;
          if ( BugCheckParameter4[0] )
          {
            ExFreePoolWithTag(Src, 0);
          }
          else
          {
            v27 = *(_QWORD *)(v8 + 32);
            if ( (*(_BYTE *)(v27 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v27, (__int64)&v39);
            else
              HvpReleaseCellPaged(v27, (unsigned int *)&v39);
          }
          v9 = 0LL;
          Src = 0LL;
          v25 = *(_DWORD *)&BugCheckParameter4[2];
        }
        *(_DWORD *)&BugCheckParameter4[2] = v24 + v25;
        v28 = *(_QWORD *)(v8 + 32);
        if ( (*(_BYTE *)(v28 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v28, (__int64)&v37);
        else
          HvpReleaseCellPaged(v28, (unsigned int *)&v37);
        v14 = (unsigned int)(v40 + 1);
        v6 = 1;
      }
      *a5 = v10;
      if ( a6 )
        *a6 = *(_DWORD *)&BugCheckParameter4[2];
      started = -2147483643;
      if ( !v35 )
        started = 0;
LABEL_48:
      v7 = 0LL;
    }
  }
LABEL_2:
  if ( v9 )
  {
    if ( BugCheckParameter4[0] )
    {
      ExFreePoolWithTag(v9, 0);
    }
    else
    {
      v34 = *(_QWORD *)(v8 + 32);
      if ( (*(_BYTE *)(v34 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v34, (__int64)&v39);
      else
        HvpReleaseCellPaged(v34, (unsigned int *)&v39);
    }
  }
  if ( v7 )
  {
    v33 = *(_QWORD *)(v8 + 32);
    if ( (*(_BYTE *)(v33 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v33, (__int64)&v37);
    else
      HvpReleaseCellPaged(v33, (unsigned int *)&v37);
  }
  if ( v6 )
    CmpUnlockKcbStack((__int64)&v44);
  if ( *((_QWORD *)&v45 + 1) )
    CmSiFreeMemory(*((PPRIVILEGE_SET *)&v45 + 1));
  return (unsigned int)started;
}
