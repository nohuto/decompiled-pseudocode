/*
 * XREFs of PfTCreateTraceDump @ 0x14094EC80
 * Callers:
 *     PfTGenerateTrace @ 0x14094EC00 (PfTGenerateTrace.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PfTFreeBufferList @ 0x14094F47C (PfTFreeBufferList.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  size_t v9; // rdi
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
  __int64 v31; // rax
  _QWORD *v32; // r10
  __int64 v33; // r13
  unsigned int v34; // edi
  unsigned __int64 v35; // r9
  unsigned int v36; // edx
  _QWORD *v37; // rcx
  unsigned int v38; // r14d
  unsigned __int64 v39; // rax
  _WORD *v40; // rbx
  __int64 v41; // rsi
  __int64 v42; // rbp
  unsigned int v43; // edi
  __int64 v44; // rcx
  unsigned __int16 v45; // r8
  unsigned __int16 v46; // dx
  _OWORD *v47; // r11
  _OWORD *v48; // r9
  unsigned __int16 v49; // dx
  unsigned int v50; // ecx
  unsigned __int16 v51; // r8
  unsigned int v52; // ecx
  int v53; // eax
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  unsigned int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // r9
  __int64 v68; // rcx
  __int64 v69; // r10
  __int64 v70; // rcx
  __int64 v71; // r9
  __int64 v72; // rax
  __int64 v73; // r9
  __int64 v74; // rax
  _QWORD *v75; // [rsp+20h] [rbp-118h]
  __int64 i; // [rsp+28h] [rbp-110h]
  unsigned __int64 v77; // [rsp+30h] [rbp-108h]
  _QWORD *v78; // [rsp+38h] [rbp-100h]
  unsigned __int64 v79; // [rsp+40h] [rbp-F8h]
  _QWORD *v80; // [rsp+48h] [rbp-F0h]
  unsigned __int64 v81; // [rsp+50h] [rbp-E8h]
  __int64 v82; // [rsp+58h] [rbp-E0h]
  char v83[72]; // [rsp+90h] [rbp-A8h] BYREF
  unsigned __int64 v84; // [rsp+D8h] [rbp-60h]
  __int16 v85; // [rsp+E6h] [rbp-52h]
  unsigned __int16 v88; // [rsp+150h] [rbp+18h]
  int v89; // [rsp+158h] [rbp+20h]

  v2 = a1;
  memset_0(v83, 0, 0x60uLL);
  v3 = 0;
  v4 = v2[20];
  v78 = v2 + 14;
  v5 = 0;
  v6 = (__int64 *)v2[19];
  v7 = 0;
  v75 = v2 + 19;
  v8 = 0;
  for ( i = v4; v6 != v2 + 19; v6 = (__int64 *)*v6 )
    v8 += *((_DWORD *)v6 + 8);
  v9 = 2LL * v8;
  Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
  v11 = Pool2;
  if ( !Pool2 )
  {
    v34 = -1073741670;
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
        v64 = ((unsigned int)v19 >> 2) & 0x3FF;
        v5 += v64;
        v3 = v64 + v3 - 1;
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
        v55 = *(unsigned __int16 *)(v4 + 36);
        if ( v21 < (unsigned __int16)v55 || v21 >= (unsigned int)(v55 + *(_DWORD *)(v4 + 32)) )
        {
          v67 = v4;
          while ( 1 )
          {
            v67 = *(_QWORD *)(v67 + 8);
            if ( (_QWORD *)v67 == v14 )
              v67 = v14[1];
            if ( v67 == v4 )
              break;
            v68 = *(unsigned __int16 *)(v67 + 36);
            if ( v21 >= (unsigned __int16)v68 && v21 < (unsigned int)(v68 + *(_DWORD *)(v67 + 32)) )
            {
              v4 = v67;
              v56 = v21 - v68;
              v57 = v67 + 47;
              goto LABEL_60;
            }
          }
          v22 = 0LL;
        }
        else
        {
          v56 = v21 - v55;
          v57 = v4 + 47;
LABEL_60:
          v22 = (v57 & 0xFFFFFFFFFFFFFFF8uLL) + 40 * v56 + 8;
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
          v69 = v4;
          while ( 1 )
          {
            v69 = *(_QWORD *)(v69 + 8);
            if ( (_QWORD *)v69 == v75 )
              v69 = v75[1];
            if ( v69 == v4 )
              break;
            v70 = *(unsigned __int16 *)(v69 + 36);
            if ( v20 >= (unsigned __int16)v70 && v20 < (unsigned int)(v70 + *(_DWORD *)(v69 + 32)) )
            {
              v4 = v69;
              v14 = v75;
              v25 = v20 - v70;
              v26 = v69 + 47;
              goto LABEL_17;
            }
          }
          v14 = v75;
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
    v13 = v78;
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
    v31 = ExAllocatePool2(0x100uLL);
    v82 = v31;
    if ( v31 )
    {
      v32 = v78;
      v33 = v31 + 32;
      *(_OWORD *)(v31 + 16) = 0LL;
      *(_OWORD *)(v31 + 32) = 0LL;
      *(_QWORD *)(v31 + 48) = 0LL;
      *(_DWORD *)(v31 + 24) = v30 + ((v29 + 63) & 0xFFFFFFF8) - 16;
      v34 = 0;
      *(_DWORD *)(v31 + 16) = 852013;
      *(_DWORD *)(v31 + 20) = 1128485697;
      v35 = v31 + 32 + (unsigned int)(v29 + 24);
      *(_DWORD *)(v31 + 28) = 0;
      v36 = 0;
      *(_DWORD *)(v31 + 40) = v29 + 24;
      *(_DWORD *)(v31 + 48) = v29 + 24 + v30;
      v79 = v31 + 32 + (unsigned int)(v29 + 24 + v30);
      v37 = v78;
      v84 = v79;
      *(_DWORD *)(v31 + 32) = 24;
      v77 = v35;
      v89 = 0;
      v88 = 0;
      do
      {
        v37 = (_QWORD *)v37[1];
        v38 = 0;
        v80 = v37;
        if ( *((_DWORD *)v37 + 4) )
        {
          v39 = ((unsigned __int64)v37 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
          v81 = v39;
          do
          {
            v40 = (_WORD *)(v39 + 16LL * v38);
            v41 = 16LL * v36;
            v42 = v41 + v33 + 24;
            if ( ((unsigned __int8)*(_QWORD *)v40 & 3u) >= 2 )
            {
              v43 = ((unsigned int)*(_QWORD *)v40 >> 2) & 0x3FF;
              v38 = v43 + v38 - 1;
            }
            else
            {
              v43 = 1;
            }
            if ( v42 + (unsigned __int64)(16 * v43) > v35 )
              break;
            memmove((void *)(v41 + v33 + 24), v40, 16 * v43);
            *(_DWORD *)(v33 + 4) += v43;
            v36 = v43 + v89;
            v89 += v43;
            if ( (*(_DWORD *)v40 & 3) == 2 )
            {
              v40 += 8;
              v42 = v41 + v33 + 40;
            }
            v44 = *(_QWORD *)v40;
            if ( ((unsigned __int8)*(_QWORD *)v40 & 3u) < 2 )
            {
              if ( (v44 & 3) != 0 )
              {
                v46 = -1;
                if ( (v44 & 0x18) == 0x10 )
                  v45 = v40[5];
                else
                  v45 = -1;
              }
              else
              {
                v45 = v40[5];
                v46 = v40[4];
              }
              if ( v46 == 0xFFFF )
              {
                v47 = 0LL;
              }
              else
              {
                v58 = *(unsigned __int16 *)(i + 36);
                if ( v46 < (unsigned __int16)v58 || v46 >= (unsigned int)(v58 + *(_DWORD *)(i + 32)) )
                {
                  v71 = i;
                  while ( 1 )
                  {
                    v71 = *(_QWORD *)(v71 + 8);
                    if ( (_QWORD *)v71 == v75 )
                      v71 = v75[1];
                    if ( v71 == i )
                      break;
                    v72 = *(unsigned __int16 *)(v71 + 36);
                    if ( v46 >= (unsigned __int16)v72 && v46 < (unsigned int)(v72 + *(_DWORD *)(v71 + 32)) )
                    {
                      i = v71;
                      v59 = v46 - v72;
                      v60 = v71 + 47;
                      goto LABEL_64;
                    }
                  }
                  v47 = 0LL;
                }
                else
                {
                  v59 = v46 - v58;
                  v60 = i + 47;
LABEL_64:
                  v47 = (_OWORD *)((v60 & 0xFFFFFFFFFFFFFFF8uLL) + 40 * v59 + 8);
                }
              }
              if ( v45 == 0xFFFF )
              {
                v48 = 0LL;
              }
              else
              {
                v61 = *(unsigned __int16 *)(i + 36);
                if ( v45 < (unsigned __int16)v61 || v45 >= (unsigned int)(v61 + *(_DWORD *)(i + 32)) )
                {
                  v73 = i;
                  while ( 1 )
                  {
                    v73 = *(_QWORD *)(v73 + 8);
                    if ( (_QWORD *)v73 == v75 )
                      v73 = v75[1];
                    if ( v73 == i )
                      break;
                    v74 = *(unsigned __int16 *)(v73 + 36);
                    if ( v45 >= (unsigned __int16)v74 && v45 < (unsigned int)(v74 + *(_DWORD *)(v73 + 32)) )
                    {
                      i = v73;
                      v62 = v45 - v74;
                      v63 = v73 + 47;
                      goto LABEL_68;
                    }
                  }
                  v48 = 0LL;
                }
                else
                {
                  v62 = v45 - v61;
                  v63 = i + 47;
LABEL_68:
                  v48 = (_OWORD *)((v63 & 0xFFFFFFFFFFFFFFF8uLL) + 40 * v62 + 8);
                }
              }
              if ( v47 )
              {
                v49 = v46 - v16;
                LOWORD(v50) = v11[v49];
                if ( (_WORD)v50 == 0xFFFF )
                {
                  v50 = v88;
                  v11[v49] = v88++;
                  v66 = 32LL * v50;
                  if ( v66 + v77 + 32 > v79 )
                  {
                    v88 = v50;
                  }
                  else
                  {
                    *(_OWORD *)(v66 + v77) = *v47;
                    *(_OWORD *)(v66 + v77 + 16) = v47[1];
                    ++*(_WORD *)(v33 + 12);
                  }
                }
                *(_WORD *)(v42 + 8) = v50;
              }
              if ( v48 )
              {
                v51 = v45 - v16;
                LOWORD(v52) = v11[v51];
                if ( (_WORD)v52 == 0xFFFF )
                {
                  v52 = v88;
                  v11[v51] = v88++;
                  v65 = 32LL * v52;
                  if ( v77 + v65 + 32 > v79 )
                  {
                    v88 = v52;
                  }
                  else
                  {
                    *(_OWORD *)(v65 + v77) = *v48;
                    *(_OWORD *)(v65 + v77 + 16) = v48[1];
                    ++*(_WORD *)(v33 + 12);
                  }
                }
                *(_WORD *)(v42 + 10) = v52;
              }
              v36 = v89;
            }
            v37 = v80;
            ++v38;
            v35 = v77;
            v39 = v81;
          }
          while ( v38 < *((_DWORD *)v80 + 4) );
          v32 = v78;
          v34 = 0;
        }
      }
      while ( v37 != (_QWORD *)*v32 );
      v53 = v84 - *(_DWORD *)(v33 + 16) - v33;
      *(_WORD *)(v33 + 14) = v85;
      *(_DWORD *)(v33 + 20) = v53;
      *a2 = v82;
    }
    else
    {
      v34 = -1073741670;
    }
  }
  else
  {
    v34 = -2147483622;
  }
  ExFreePoolWithTag(v11, 0);
  v2 = a1;
LABEL_56:
  PfTFreeBufferList(v2 + 11);
  PfTFreeBufferList(v2 + 16);
  return v34;
}
