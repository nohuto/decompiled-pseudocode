/*
 * XREFs of PfTCreateTraceDump @ 0x140971190
 * Callers:
 *     PfTGenerateTrace @ 0x140971110 (PfTGenerateTrace.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PfTFreeBufferList @ 0x14097198C (PfTFreeBufferList.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfTCreateTraceDump(_QWORD *a1, __int64 *a2)
{
  _QWORD *v2; // r13
  unsigned int v3; // esi
  __int64 v4; // rbp
  int v5; // r14d
  __int64 *v6; // rax
  int v7; // ebx
  unsigned int v8; // r8d
  ULONG_PTR v9; // rdi
  _WORD *Pool2; // rax
  _WORD *v11; // r15
  __int64 v12; // rax
  _QWORD *v13; // r8
  _QWORD *v14; // rdi
  _QWORD *v15; // r13
  __int16 v16; // r12
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int16 v20; // r8
  unsigned __int16 v21; // ax
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int16 v27; // ax
  unsigned __int16 v28; // r8
  int v29; // r14d
  int v30; // ebx
  unsigned int v31; // edi
  __int64 v32; // rax
  _QWORD *v33; // r10
  __int64 v34; // r13
  unsigned int v35; // edi
  unsigned __int64 v36; // r9
  unsigned int v37; // edx
  _QWORD *v38; // rcx
  unsigned int v39; // r14d
  unsigned __int64 v40; // rax
  _WORD *v41; // rbx
  __int64 v42; // rsi
  __int64 v43; // rbp
  unsigned int v44; // edi
  __int64 v45; // rcx
  unsigned __int16 v46; // r8
  unsigned __int16 v47; // dx
  _OWORD *v48; // r11
  _OWORD *v49; // r9
  unsigned __int16 v50; // dx
  unsigned int v51; // ecx
  unsigned __int16 v52; // r8
  unsigned int v53; // ecx
  int v54; // eax
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  unsigned int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // r9
  __int64 v69; // rcx
  __int64 v70; // r10
  __int64 v71; // rcx
  __int64 v72; // r9
  __int64 v73; // rax
  __int64 v74; // r9
  __int64 v75; // rax
  _QWORD *v76; // [rsp+20h] [rbp-118h]
  __int64 i; // [rsp+28h] [rbp-110h]
  unsigned __int64 v78; // [rsp+30h] [rbp-108h]
  _QWORD *v79; // [rsp+38h] [rbp-100h]
  unsigned __int64 v80; // [rsp+40h] [rbp-F8h]
  _QWORD *v81; // [rsp+48h] [rbp-F0h]
  unsigned __int64 v82; // [rsp+50h] [rbp-E8h]
  __int64 v83; // [rsp+58h] [rbp-E0h]
  char v84[72]; // [rsp+90h] [rbp-A8h] BYREF
  unsigned __int64 v85; // [rsp+D8h] [rbp-60h]
  __int16 v86; // [rsp+E6h] [rbp-52h]
  unsigned __int16 v89; // [rsp+150h] [rbp+18h]
  int v90; // [rsp+158h] [rbp+20h]

  v2 = a1;
  memset_0(v84, 0, 0x60uLL);
  v3 = 0;
  v4 = v2[20];
  v79 = v2 + 14;
  v5 = 0;
  v6 = (__int64 *)v2[19];
  v7 = 0;
  v76 = v2 + 19;
  v8 = 0;
  for ( i = v4; v6 != v2 + 19; v6 = (__int64 *)*v6 )
    v8 += *((_DWORD *)v6 + 8);
  v9 = 2LL * v8;
  Pool2 = (_WORD *)ExAllocatePool2(0x100uLL, v9, 0x74546650u);
  v11 = Pool2;
  if ( !Pool2 )
  {
    v35 = -1073741670;
    goto LABEL_56;
  }
  memset_0(Pool2, 0, v9);
  v12 = v2[20];
  v13 = v2 + 14;
  v14 = v2 + 19;
  v15 = v2 + 14;
  v16 = *(_WORD *)(v12 + 36);
  while ( 2 )
  {
    v15 = (_QWORD *)v15[1];
    if ( !*((_DWORD *)v15 + 4) )
      goto LABEL_26;
    v17 = ((unsigned __int64)v15 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
    do
    {
      v18 = v17 + 16LL * v3;
      v19 = *(_QWORD *)v18;
      if ( ((unsigned __int8)*(_QWORD *)v18 & 3u) >= 2 )
      {
        v65 = ((unsigned int)v19 >> 2) & 0x3FF;
        v5 += v65;
        v3 = v65 + v3 - 1;
        if ( (v19 & 3) != 2 )
          goto LABEL_24;
        LODWORD(v19) = *(_DWORD *)(v18 + 16);
        v18 += 16LL;
      }
      else
      {
        ++v5;
      }
      if ( (v19 & 3) != 0 )
      {
        v21 = -1;
        if ( (*(_BYTE *)v18 & 0x18) == 0x10 )
          v20 = *(_WORD *)(v18 + 10);
        else
          v20 = -1;
      }
      else
      {
        v20 = *(_WORD *)(v18 + 10);
        v21 = *(_WORD *)(v18 + 8);
      }
      if ( v21 == 0xFFFF )
      {
        v22 = 0LL;
      }
      else
      {
        v56 = *(unsigned __int16 *)(v4 + 36);
        if ( v21 < (unsigned __int16)v56 || v21 >= (unsigned int)(v56 + *(_DWORD *)(v4 + 32)) )
        {
          v68 = v4;
          while ( 1 )
          {
            v68 = *(_QWORD *)(v68 + 8);
            if ( (_QWORD *)v68 == v14 )
              v68 = v14[1];
            if ( v68 == v4 )
              break;
            v69 = *(unsigned __int16 *)(v68 + 36);
            if ( v21 >= (unsigned __int16)v69 && v21 < (unsigned int)(v69 + *(_DWORD *)(v68 + 32)) )
            {
              v4 = v68;
              v57 = v21 - v69;
              v58 = v68 + 47;
              goto LABEL_60;
            }
          }
          v22 = 0LL;
        }
        else
        {
          v57 = v21 - v56;
          v58 = v4 + 47;
LABEL_60:
          v22 = (v58 & 0xFFFFFFFFFFFFFFF8uLL) + 40 * v57 + 8;
        }
      }
      if ( v20 == 0xFFFF )
      {
        v23 = 0LL;
      }
      else
      {
        v24 = *(unsigned __int16 *)(v4 + 36);
        if ( v20 < (unsigned __int16)v24 || v20 >= (unsigned int)(v24 + *(_DWORD *)(v4 + 32)) )
        {
          v70 = v4;
          while ( 1 )
          {
            v70 = *(_QWORD *)(v70 + 8);
            if ( (_QWORD *)v70 == v76 )
              v70 = v76[1];
            if ( v70 == v4 )
              break;
            v71 = *(unsigned __int16 *)(v70 + 36);
            if ( v20 >= (unsigned __int16)v71 && v20 < (unsigned int)(v71 + *(_DWORD *)(v70 + 32)) )
            {
              v4 = v70;
              v14 = v76;
              v25 = v20 - v71;
              v26 = v70 + 47;
              goto LABEL_17;
            }
          }
          v14 = v76;
          v23 = 0LL;
        }
        else
        {
          v25 = v20 - v24;
          v26 = v4 + 47;
LABEL_17:
          v23 = (v26 & 0xFFFFFFFFFFFFFFF8uLL) + 40 * v25 + 8;
        }
      }
      if ( v22 )
      {
        v27 = v21 - v16;
        if ( v11[v27] != 0xFFFF )
        {
          v11[v27] = -1;
          ++v7;
        }
      }
      if ( v23 )
      {
        v28 = v20 - v16;
        if ( v11[v28] != 0xFFFF )
        {
          v11[v28] = -1;
          ++v7;
        }
      }
LABEL_24:
      v17 = ((unsigned __int64)v15 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
      ++v3;
    }
    while ( v3 < *((_DWORD *)v15 + 4) );
    v13 = v79;
    i = v4;
LABEL_26:
    if ( v15 != (_QWORD *)*v13 )
    {
      v3 = 0;
      continue;
    }
    break;
  }
  if ( v5 )
  {
    v29 = 16 * v5;
    v30 = 32 * v7;
    v31 = v30 + ((v29 + 63) & 0xFFFFFFF8);
    v32 = ExAllocatePool2(0x100uLL, v31, 0x44546650u);
    v83 = v32;
    if ( v32 )
    {
      v33 = v79;
      v34 = v32 + 32;
      *(_OWORD *)(v32 + 16) = 0LL;
      *(_OWORD *)(v32 + 32) = 0LL;
      *(_QWORD *)(v32 + 48) = 0LL;
      *(_DWORD *)(v32 + 24) = v31 - 16;
      v35 = 0;
      *(_DWORD *)(v32 + 16) = 852013;
      *(_DWORD *)(v32 + 20) = 1128485697;
      v36 = v32 + 32 + (unsigned int)(v29 + 24);
      *(_DWORD *)(v32 + 28) = 0;
      v37 = 0;
      *(_DWORD *)(v32 + 40) = v29 + 24;
      *(_DWORD *)(v32 + 48) = v29 + 24 + v30;
      v80 = v32 + 32 + (unsigned int)(v29 + 24 + v30);
      v38 = v79;
      v85 = v80;
      *(_DWORD *)(v32 + 32) = 24;
      v78 = v36;
      v90 = 0;
      v89 = 0;
      do
      {
        v38 = (_QWORD *)v38[1];
        v39 = 0;
        v81 = v38;
        if ( *((_DWORD *)v38 + 4) )
        {
          v40 = ((unsigned __int64)v38 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
          v82 = v40;
          do
          {
            v41 = (_WORD *)(v40 + 16LL * v39);
            v42 = 16LL * v37;
            v43 = v42 + v34 + 24;
            if ( ((unsigned __int8)*(_QWORD *)v41 & 3u) >= 2 )
            {
              v44 = ((unsigned int)*(_QWORD *)v41 >> 2) & 0x3FF;
              v39 = v44 + v39 - 1;
            }
            else
            {
              v44 = 1;
            }
            if ( v43 + (unsigned __int64)(16 * v44) > v36 )
              break;
            memmove((void *)(v42 + v34 + 24), v41, 16 * v44);
            *(_DWORD *)(v34 + 4) += v44;
            v37 = v44 + v90;
            v90 += v44;
            if ( (*(_DWORD *)v41 & 3) == 2 )
            {
              v41 += 8;
              v43 = v42 + v34 + 40;
            }
            v45 = *(_QWORD *)v41;
            if ( ((unsigned __int8)*(_QWORD *)v41 & 3u) < 2 )
            {
              if ( (v45 & 3) != 0 )
              {
                v47 = -1;
                if ( (v45 & 0x18) == 0x10 )
                  v46 = v41[5];
                else
                  v46 = -1;
              }
              else
              {
                v46 = v41[5];
                v47 = v41[4];
              }
              if ( v47 == 0xFFFF )
              {
                v48 = 0LL;
              }
              else
              {
                v59 = *(unsigned __int16 *)(i + 36);
                if ( v47 < (unsigned __int16)v59 || v47 >= (unsigned int)(v59 + *(_DWORD *)(i + 32)) )
                {
                  v72 = i;
                  while ( 1 )
                  {
                    v72 = *(_QWORD *)(v72 + 8);
                    if ( (_QWORD *)v72 == v76 )
                      v72 = v76[1];
                    if ( v72 == i )
                      break;
                    v73 = *(unsigned __int16 *)(v72 + 36);
                    if ( v47 >= (unsigned __int16)v73 && v47 < (unsigned int)(v73 + *(_DWORD *)(v72 + 32)) )
                    {
                      i = v72;
                      v60 = v47 - v73;
                      v61 = v72 + 47;
                      goto LABEL_64;
                    }
                  }
                  v48 = 0LL;
                }
                else
                {
                  v60 = v47 - v59;
                  v61 = i + 47;
LABEL_64:
                  v48 = (_OWORD *)((v61 & 0xFFFFFFFFFFFFFFF8uLL) + 40 * v60 + 8);
                }
              }
              if ( v46 == 0xFFFF )
              {
                v49 = 0LL;
              }
              else
              {
                v62 = *(unsigned __int16 *)(i + 36);
                if ( v46 < (unsigned __int16)v62 || v46 >= (unsigned int)(v62 + *(_DWORD *)(i + 32)) )
                {
                  v74 = i;
                  while ( 1 )
                  {
                    v74 = *(_QWORD *)(v74 + 8);
                    if ( (_QWORD *)v74 == v76 )
                      v74 = v76[1];
                    if ( v74 == i )
                      break;
                    v75 = *(unsigned __int16 *)(v74 + 36);
                    if ( v46 >= (unsigned __int16)v75 && v46 < (unsigned int)(v75 + *(_DWORD *)(v74 + 32)) )
                    {
                      i = v74;
                      v63 = v46 - v75;
                      v64 = v74 + 47;
                      goto LABEL_68;
                    }
                  }
                  v49 = 0LL;
                }
                else
                {
                  v63 = v46 - v62;
                  v64 = i + 47;
LABEL_68:
                  v49 = (_OWORD *)((v64 & 0xFFFFFFFFFFFFFFF8uLL) + 40 * v63 + 8);
                }
              }
              if ( v48 )
              {
                v50 = v47 - v16;
                LOWORD(v51) = v11[v50];
                if ( (_WORD)v51 == 0xFFFF )
                {
                  v51 = v89;
                  v11[v50] = v89++;
                  v67 = 32LL * v51;
                  if ( v67 + v78 + 32 > v80 )
                  {
                    v89 = v51;
                  }
                  else
                  {
                    *(_OWORD *)(v67 + v78) = *v48;
                    *(_OWORD *)(v67 + v78 + 16) = v48[1];
                    ++*(_WORD *)(v34 + 12);
                  }
                }
                *(_WORD *)(v43 + 8) = v51;
              }
              if ( v49 )
              {
                v52 = v46 - v16;
                LOWORD(v53) = v11[v52];
                if ( (_WORD)v53 == 0xFFFF )
                {
                  v53 = v89;
                  v11[v52] = v89++;
                  v66 = 32LL * v53;
                  if ( v78 + v66 + 32 > v80 )
                  {
                    v89 = v53;
                  }
                  else
                  {
                    *(_OWORD *)(v66 + v78) = *v49;
                    *(_OWORD *)(v66 + v78 + 16) = v49[1];
                    ++*(_WORD *)(v34 + 12);
                  }
                }
                *(_WORD *)(v43 + 10) = v53;
              }
              v37 = v90;
            }
            v38 = v81;
            ++v39;
            v36 = v78;
            v40 = v82;
          }
          while ( v39 < *((_DWORD *)v81 + 4) );
          v33 = v79;
          v35 = 0;
        }
      }
      while ( v38 != (_QWORD *)*v33 );
      v54 = v85 - *(_DWORD *)(v34 + 16) - v34;
      *(_WORD *)(v34 + 14) = v86;
      *(_DWORD *)(v34 + 20) = v54;
      *a2 = v83;
    }
    else
    {
      v35 = -1073741670;
    }
  }
  else
  {
    v35 = -2147483622;
  }
  ExFreePoolWithTag(v11, 0);
  v2 = a1;
LABEL_56:
  PfTFreeBufferList(v2 + 11);
  PfTFreeBufferList(v2 + 16);
  return v35;
}
