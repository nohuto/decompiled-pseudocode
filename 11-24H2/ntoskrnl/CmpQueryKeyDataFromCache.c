/*
 * XREFs of CmpQueryKeyDataFromCache @ 0x14087C8F0
 * Callers:
 *     CmQueryKey @ 0x14087BBC0 (CmQueryKey.c)
 *     CmpQueryKeyData @ 0x14087C7F0 (CmpQueryKeyData.c)
 * Callees:
 *     CmpIsKeyDeleted @ 0x140872540 (CmpIsKeyDeleted.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmEqualTrans @ 0x14087D5B0 (CmEqualTrans.c)
 *     CmGetVisibleSubkeyCount @ 0x14087F870 (CmGetVisibleSubkeyCount.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmListGetNextElement @ 0x140BBB940 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpQueryKeyDataFromCache(__int64 a1, int a2, __int64 a3, unsigned int a4, _DWORD *a5, __int64 a6)
{
  unsigned int v9; // esi
  __int64 v10; // rax
  unsigned __int16 v11; // r14
  unsigned int v12; // r9d
  _QWORD *v13; // rax
  __int64 v14; // rbx
  _QWORD *v15; // r13
  int v16; // eax
  int v17; // eax
  ULONG_PTR v18; // rdx
  ULONG_PTR v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 NextElement; // rax
  ULONG_PTR v25; // rdx
  ULONG_PTR v26; // rcx
  __int64 CellFlat; // rax
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned int v31; // r13d
  ULONG_PTR v32; // rdx
  ULONG_PTR v33; // rcx
  __int64 CellPaged; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  ULONG_PTR v37; // rdx
  ULONG_PTR v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r8
  unsigned __int16 v41; // cx
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // ecx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  unsigned int v48; // [rsp+20h] [rbp-68h] BYREF
  int v49; // [rsp+24h] [rbp-64h]
  __int64 v50; // [rsp+28h] [rbp-60h] BYREF
  unsigned int v51; // [rsp+30h] [rbp-58h]
  unsigned int v52; // [rsp+34h] [rbp-54h]
  unsigned int v53[2]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v54; // [rsp+40h] [rbp-48h] BYREF
  int v55; // [rsp+48h] [rbp-40h]
  int v56; // [rsp+4Ch] [rbp-3Ch]
  _QWORD *v57; // [rsp+50h] [rbp-38h]
  unsigned int v58; // [rsp+90h] [rbp+8h]

  v53[0] = -1;
  v9 = 0;
  v53[1] = 0;
  v10 = *(_QWORD *)(a1 + 80);
  if ( v10 )
  {
    v11 = *(_WORD *)(v10 + 24);
    if ( (*(_DWORD *)v10 & 1) != 0 )
      v11 *= 2;
    if ( a2 == 4 )
    {
      v54 = 0LL;
      v48 = -1;
      v49 = 0;
      v12 = *(unsigned __int16 *)(a1 + 176);
      v58 = v12;
      if ( a6 )
      {
        while ( 1 )
        {
          NextElement = CmListGetNextElement(a1 + 208, &v54, 32LL);
          v50 = NextElement;
          if ( !NextElement )
            break;
          if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56)) )
          {
            if ( *(_DWORD *)(v50 + 68) == 1 )
            {
              v50 = *(_QWORD *)(v50 + 88);
              if ( !CmpIsKeyDeleted(v50, 0LL) )
              {
                v25 = *(unsigned int *)(v50 + 40);
                v26 = *(_QWORD *)(v50 + 32);
                if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
                  CellFlat = HvpGetCellFlat(v26, v25, &v48);
                else
                  CellFlat = HvpGetCellPaged(v26, v25, &v48);
                if ( !CellFlat )
                  return (unsigned int)-1073741670;
                v28 = (unsigned __int16)*(_DWORD *)(CellFlat + 52);
                if ( v58 >= v28 )
                  v28 = v58;
                v58 = v28;
                v29 = *(_QWORD *)(v50 + 32);
                if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v29, &v48);
                else
                  HvpReleaseCellPaged(v29, &v48);
              }
            }
          }
        }
      }
      v48 = -1;
      v49 = 0;
      v50 = 0xFFFFFFFFLL;
      v51 = *(unsigned __int16 *)(a1 + 178);
      v52 = *(_DWORD *)(a1 + 180);
      if ( a6 )
      {
        v30 = *(_QWORD *)(a1 + 288);
        if ( v30 )
        {
          if ( v30 == a6 )
          {
            v51 = 0;
            v31 = 0;
            v52 = 0;
            if ( *(_DWORD *)(a1 + 280) )
            {
              v32 = *(unsigned int *)(a1 + 284);
              v33 = *(_QWORD *)(a1 + 32);
              if ( (*(_BYTE *)(v33 + 140) & 1) != 0 )
                CellPaged = HvpGetCellFlat(v33, v32, &v48);
              else
                CellPaged = HvpGetCellPaged(v33, v32, &v48);
              v35 = CellPaged;
              v54 = CellPaged;
              if ( !CellPaged )
                return (unsigned int)-1073741670;
              v36 = 0LL;
              while ( 1 )
              {
                v55 = v36;
                if ( (unsigned int)v36 >= *(_DWORD *)(a1 + 280) )
                  break;
                v37 = *(unsigned int *)(v35 + 4 * v36);
                v38 = *(_QWORD *)(a1 + 32);
                if ( (*(_BYTE *)(v38 + 140) & 1) != 0 )
                  v39 = HvpGetCellFlat(v38, v37, &v50);
                else
                  v39 = HvpGetCellPaged(v38, v37, &v50);
                v40 = v39;
                if ( !v39 )
                {
                  v46 = *(_QWORD *)(a1 + 32);
                  if ( (*(_BYTE *)(v46 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v46, &v48);
                  else
                    HvpReleaseCellPaged(v46, &v48);
                  return (unsigned int)-1073741670;
                }
                v41 = 2 * *(_WORD *)(v39 + 2);
                if ( (*(_BYTE *)(v39 + 16) & 1) == 0 )
                  v41 = *(_WORD *)(v39 + 2);
                v42 = v41;
                if ( v51 >= v41 )
                  v42 = v51;
                v51 = v42;
                v43 = *(_DWORD *)(v40 + 4);
                v44 = v43 + 0x80000000;
                if ( v43 < 0x80000000 )
                  v44 = *(_DWORD *)(v40 + 4);
                if ( v31 < v44 )
                  v31 = v44;
                v52 = v31;
                v45 = *(_QWORD *)(a1 + 32);
                if ( (*(_BYTE *)(v45 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v45, &v50);
                else
                  HvpReleaseCellPaged(v45, (unsigned int *)&v50);
                v36 = (unsigned int)(v55 + 1);
                v35 = v54;
              }
              v47 = *(_QWORD *)(a1 + 32);
              if ( (*(_BYTE *)(v47 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v47, &v48);
              else
                HvpReleaseCellPaged(v47, &v48);
              v12 = v58;
            }
          }
        }
      }
      *a5 = 40;
      if ( a4 < 0x28 )
      {
        v9 = -1073741789;
        v56 = -1073741789;
      }
      else
      {
        v13 = 0LL;
        v57 = 0LL;
        v14 = *(_QWORD *)(a1 + 168);
        if ( a6 )
        {
          while ( 1 )
          {
            v15 = (_QWORD *)(a1 + 208);
            if ( !v13 )
            {
              v13 = *(_QWORD **)(a1 + 216);
              v57 = v13;
            }
            if ( v15 == v13 || (v54 = (__int64)(v13 - 4), v57 = (_QWORD *)v13[1], v13 == (_QWORD *)32) )
            {
              v12 = v58;
              goto LABEL_10;
            }
            if ( (unsigned __int8)CmEqualTrans(v13[3]) && *(_DWORD *)(v54 + 68) == 8 )
              break;
            v13 = v57;
          }
          v14 = *(_QWORD *)(v54 + 88);
          v12 = v58;
        }
        else
        {
          v15 = (_QWORD *)(a1 + 208);
        }
LABEL_10:
        *(_QWORD *)a3 = v14;
        *(_DWORD *)(a3 + 8) = 0;
        *(_DWORD *)(a3 + 32) = v11;
        v16 = -1;
        if ( a1 )
        {
          if ( a6 && (v21 = *(_QWORD *)(a1 + 288)) != 0 )
          {
            if ( v21 == a6 )
              v16 = *(_DWORD *)(a1 + 280);
            else
              v16 = *(_DWORD *)(a1 + 96);
            v15 = (_QWORD *)(a1 + 208);
          }
          else
          {
            v16 = *(_DWORD *)(a1 + 96);
          }
        }
        *(_DWORD *)(a3 + 20) = v16;
        *(_DWORD *)(a3 + 16) = v12;
        *(_DWORD *)(a3 + 24) = v51;
        *(_DWORD *)(a3 + 28) = v52;
        v17 = *(_DWORD *)(a1 + 8);
        if ( (v17 & 0x40) == 0 && (_QWORD *)*v15 == v15 )
        {
          if ( (v17 & 1) != 0 )
          {
            *(_DWORD *)(a3 + 12) = 0;
          }
          else if ( (v17 & 2) != 0 )
          {
            *(_DWORD *)(a3 + 12) = 1;
          }
          else if ( (v17 & 4) != 0 )
          {
            *(_DWORD *)(a3 + 12) = **(_DWORD **)(a1 + 112);
          }
          else
          {
            *(_DWORD *)(a3 + 12) = *(_DWORD *)(a1 + 112);
          }
        }
        else
        {
          v18 = *(unsigned int *)(a1 + 40);
          v19 = *(_QWORD *)(a1 + 32);
          if ( (*(_BYTE *)(v19 + 140) & 1) != 0 )
            v20 = HvpGetCellFlat(v19, v18, v53);
          else
            v20 = HvpGetCellPaged(v19, v18, v53);
          if ( v20 )
          {
            *(_DWORD *)(a3 + 12) = CmGetVisibleSubkeyCount(a1, v20, a6);
            v22 = *(_QWORD *)(a1 + 32);
            if ( (*(_BYTE *)(v22 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v22, v53);
            else
              HvpReleaseCellPaged(v22, v53);
          }
          else
          {
            v9 = -1073741670;
            v56 = -1073741670;
          }
        }
      }
      return v9;
    }
    return (unsigned int)-1073741811;
  }
  return 3221225626LL;
}
