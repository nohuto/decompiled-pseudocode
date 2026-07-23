/*
 * XREFs of RaspScanConvert @ 0x14045E04C
 * Callers:
 *     RaspRasterize @ 0x14069CE9C (RaspRasterize.c)
 * Callees:
 *     RaspTestIntersection @ 0x14045E4A8 (RaspTestIntersection.c)
 *     RaspCreateSegmentList @ 0x14045E7C4 (RaspCreateSegmentList.c)
 *     BgpFmRoundUp @ 0x14045EB04 (BgpFmRoundUp.c)
 *     RaspDestroySegmentList @ 0x14045EB24 (RaspDestroySegmentList.c)
 *     RaspAllocateMemory @ 0x14045EBE4 (RaspAllocateMemory.c)
 *     RaspFreeMemory @ 0x14045EC60 (RaspFreeMemory.c)
 *     BgpGxInitializeRectangle @ 0x1406995DC (BgpGxInitializeRectangle.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall RaspScanConvert(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        __int64 **a6,
        int *a7,
        __int64 a8)
{
  __int64 v8; // r12
  int v9; // r8d
  __int64 *v12; // rdi
  char v13; // r14
  __int64 v14; // rdx
  int SegmentList; // ebx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  unsigned int v24; // r9d
  unsigned int v25; // r8d
  int v26; // r11d
  int v27; // esi
  __int64 v28; // rcx
  int v29; // r10d
  int v30; // r9d
  int v31; // r8d
  unsigned int v32; // ecx
  unsigned int v33; // r13d
  int v34; // r13d
  unsigned int v35; // ebx
  __int64 Memory; // r8
  __int64 v37; // r9
  __int64 *v38; // rsi
  int v39; // r14d
  __int64 v40; // r15
  size_t v41; // rcx
  unsigned int v42; // r12d
  unsigned int v43; // ebx
  __int64 v44; // r12
  _BYTE *v45; // r14
  int v46; // r10d
  _BYTE *v47; // rax
  int v48; // edx
  __int64 i; // rcx
  int v50; // ecx
  __int64 *v51; // rcx
  __int64 v53; // rax
  int v54; // r8d
  int v55; // edx
  __int64 v56; // rcx
  int v57; // r11d
  int v58; // edx
  bool v59; // cc
  int v60; // edx
  unsigned int v61; // ecx
  int v62; // [rsp+30h] [rbp-30h] BYREF
  int v63; // [rsp+34h] [rbp-2Ch]
  int v64; // [rsp+38h] [rbp-28h]
  _DWORD v65[4]; // [rsp+40h] [rbp-20h] BYREF
  int v66; // [rsp+50h] [rbp-10h]
  __int64 v67; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v68; // [rsp+A0h] [rbp+40h] BYREF
  int v69; // [rsp+B0h] [rbp+50h] BYREF
  int v70; // [rsp+B8h] [rbp+58h]

  v70 = a4;
  v69 = a3;
  v8 = a8;
  v9 = *(unsigned __int16 *)(a1 + 24);
  v68 = 0;
  v12 = 0LL;
  v62 = 0;
  v13 = a5 & 1;
  v69 = 0;
  v67 = 0LL;
  SegmentList = RaspCreateSegmentList(a1, a2, v9, (unsigned int)&v67, (__int64)&v68, a8);
  if ( SegmentList < 0 )
    goto LABEL_34;
  v17 = BgpFmRoundUp(*(unsigned int *)(a1 + 14), v14, v16, (unsigned int)*(unsigned __int16 *)(a1 + 24) - 2);
  v18 = *(unsigned int *)(a1 + 6);
  v19 = v17;
  v70 = v17;
  v23 = BgpFmRoundUp(v18, v20, v21, v22);
  v25 = v24 + 1;
  v26 = v19 - v23 + 1;
  if ( v19 == v23 )
  {
    v60 = *(_DWORD *)(17LL * v25 + a2 + 4);
    v61 = (v60 >> 6) | 0xFC000000;
    if ( v60 >= 0 )
      v61 = *(int *)(17LL * v25 + a2 + 4) >> 6;
    v26 = v61 + 1;
    if ( (v60 & 0x20) == 0 )
      v26 = v61;
    v27 = v26;
    v70 = v26;
  }
  else
  {
    v27 = v70;
  }
  v28 = 17LL * v24;
  v29 = *(_DWORD *)(v28 + a2 + 8);
  v30 = *(_DWORD *)(v28 + a2);
  v31 = *(_DWORD *)(17LL * v25 + a2) + *(_DWORD *)(17LL * v25 + a2 + 8) - v29 - v30;
  v32 = (v31 >> 6) | 0xFC000000;
  if ( v31 >= 0 )
    v32 = v31 >> 6;
  v64 = 4 * v26;
  v65[1] = 4 * v26;
  v33 = v32 + 1;
  if ( (v31 & 0x20) == 0 )
    v33 = v32;
  v34 = 4 * v33;
  v66 = v29 + v30;
  v65[0] = v34;
  v65[2] = v34;
  if ( v13 )
  {
    v12 = qword_141028870;
    SegmentList = BgpGxInitializeRectangle(v65, 1LL, qword_141028870, 3140LL);
    if ( SegmentList < 0 )
      goto LABEL_34;
  }
  else
  {
    v35 = ((unsigned int)(4 * v26 * v34) >> 3) + 72;
    Memory = RaspAllocateMemory(v35, v8);
    if ( Memory )
    {
      SegmentList = BgpGxInitializeRectangle(v65, 1LL, Memory, v35);
      v12 = (__int64 *)Memory;
    }
    else
    {
      SegmentList = -1073741801;
    }
    if ( SegmentList < 0 )
      goto LABEL_68;
  }
  memset_0((void *)v12[3], 0, *((unsigned int *)v12 + 3));
  if ( !v67 )
  {
    *a6 = v12;
    *a7 = v27;
    return 0LL;
  }
  if ( v13 )
  {
    if ( v34 <= 104 )
    {
      v38 = qword_1410286D0;
LABEL_15:
      a5 = 0;
      v39 = 0;
      v63 = 0;
      v40 = v34;
      if ( v64 <= 0 )
        goto LABEL_31;
      v41 = 4LL * v34;
      v42 = a5;
      v65[0] = v70 << 6;
      while ( 1 )
      {
        memset_0(v38, 0, v41);
        v43 = v65[0] + -16 * (v39 & 3) - ((unsigned int)v39 >> 2 << 6);
        if ( v68 )
          break;
LABEL_23:
        v47 = (_BYTE *)(v12[3] + ((unsigned __int64)v42 >> 3));
        v48 = 128 >> (v42 & 7);
        for ( i = 0LL; i < v40; ++i )
        {
          if ( *((_DWORD *)v38 + i) )
            *v47 |= v48;
          LOBYTE(v48) = (unsigned __int8)v48 >> 1;
          if ( !(_BYTE)v48 )
          {
            LOBYTE(v48) = 0x80;
            ++v47;
          }
        }
        v42 += v34;
        v41 = 4 * v40;
        ++v39;
        a5 = v42;
        v63 = v39;
        if ( v39 >= v64 )
        {
          v8 = a8;
LABEL_31:
          SegmentList = 0;
          v50 = v70;
          *a6 = v12;
          *a7 = v50;
          if ( v38 != qword_1410286D0 )
          {
            v51 = v38;
            goto LABEL_33;
          }
          goto LABEL_34;
        }
      }
      v44 = v68;
      v45 = (_BYTE *)(v67 + 24);
      while ( 1 )
      {
        RaspTestIntersection(v45 - 24, v43, &v62, &v69);
        v46 = v62;
        if ( v62 != 0x7FFFFFFF )
          break;
        v40 = v34;
LABEL_21:
        v45 += 25;
        if ( !--v44 )
        {
          v39 = v63;
          v42 = a5;
          goto LABEL_23;
        }
      }
      v53 = *((_QWORD *)v45 - 1);
      v54 = *(_DWORD *)(v53 + 12);
      v55 = v54
          + *(_DWORD *)(v53 + 4)
          - *(_DWORD *)(*((_QWORD *)v45 - 3) + 12LL)
          - *(_DWORD *)(*((_QWORD *)v45 - 3) + 4LL);
      if ( !v55 )
      {
        if ( *v45 == 1 )
          goto LABEL_64;
        v55 = v54
            + *(_DWORD *)(v53 + 4)
            - *(_DWORD *)(*((_QWORD *)v45 - 2) + 12LL)
            - *(_DWORD *)(*((_QWORD *)v45 - 2) + 4LL);
      }
      if ( v55 > 0 )
      {
        Memory = 1LL;
LABEL_40:
        v37 = 0LL;
        v40 = v34;
        v56 = 0LL;
        if ( v34 <= 0 )
          goto LABEL_21;
        v57 = v66;
        while ( 1 )
        {
          v58 = v57 + ((16 * v37) & 0xFFFFFFC0) + 16 * (v37 & 3);
          if ( *v45 == 1 || v69 == 0x7FFFFFFF )
            break;
          if ( v58 >= v46 )
          {
            v59 = v58 <= v69;
LABEL_45:
            if ( v59 )
              *((_DWORD *)v38 + v56) += Memory;
          }
          v37 = (unsigned int)(v37 + 1);
          if ( ++v56 >= v34 )
            goto LABEL_21;
        }
        v59 = v58 <= v46;
        goto LABEL_45;
      }
      if ( v55 < 0 )
      {
        Memory = 0xFFFFFFFFLL;
        goto LABEL_40;
      }
LABEL_64:
      Memory = 0LL;
      goto LABEL_40;
    }
  }
  else
  {
    v38 = (__int64 *)RaspAllocateMemory(4LL * v34, v8);
    if ( v38 )
      goto LABEL_15;
  }
  SegmentList = -1073741670;
LABEL_68:
  if ( v12 )
  {
    v51 = v12;
LABEL_33:
    RaspFreeMemory(v51, v8, Memory, v37);
  }
LABEL_34:
  if ( v67 )
    RaspDestroySegmentList(v67, v68, v8);
  return (unsigned int)SegmentList;
}
