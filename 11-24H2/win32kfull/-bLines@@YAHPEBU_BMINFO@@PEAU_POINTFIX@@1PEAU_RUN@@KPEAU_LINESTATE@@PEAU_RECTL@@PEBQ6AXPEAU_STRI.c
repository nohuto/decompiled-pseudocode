/*
 * XREFs of ?bLines@@YAHPEBU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEBQ6AXPEAU_STRIP@@03@ZKPEAKJPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x140008B70
 * Callers:
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x140009EDC (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1401226C8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall bLines(
        const struct _BMINFO *a1,
        struct _POINTFIX *a2,
        struct _POINTFIX *a3,
        struct _RUN *a4,
        unsigned int a5,
        struct _LINESTATE *a6,
        struct _RECTL *a7,
        void (*const *a8)(struct _STRIP *, const struct _BMINFO *, struct _LINESTATE *),
        unsigned int a9,
        unsigned int *a10,
        int a11,
        struct _W32KCDD_ENG_CALLBACKS *a12)
{
  struct _POINTFIX *v12; // rdi
  signed int v14; // r12d
  FIX x; // r14d
  FIX v16; // ecx
  FIX y; // esi
  FIX v18; // eax
  unsigned int v19; // edi
  int v20; // r10d
  int v21; // r8d
  unsigned int v22; // r14d
  unsigned int v23; // esi
  int v24; // r8d
  int v25; // r10d
  unsigned __int64 v26; // rcx
  signed __int64 v27; // rax
  int v28; // r9d
  int v29; // edx
  signed int v30; // ebx
  unsigned int v31; // r9d
  unsigned __int64 v32; // r10
  unsigned int v33; // ecx
  int v34; // edx
  signed int v35; // r8d
  int v36; // r11d
  unsigned int *v37; // rdx
  const struct _BMINFO *v38; // r11
  int v39; // ecx
  int *v40; // r8
  int v41; // ebx
  unsigned __int64 v42; // r12
  int v43; // r13d
  int v44; // r10d
  int v45; // eax
  char *v46; // rcx
  unsigned int v48; // eax
  int v49; // eax
  unsigned int v50; // edx
  unsigned int v51; // eax
  unsigned int v52; // ecx
  __int64 v53; // rax
  unsigned int v54; // r8d
  unsigned __int64 v55; // rtt
  int v56; // r12d
  char *v57; // rdx
  char *v58; // rax
  __int64 v59; // r11
  __int64 v60; // r8
  unsigned int v61; // edx
  unsigned int v62; // ecx
  int v63; // r12d
  int v64; // eax
  unsigned int v65; // eax
  int v66; // edx
  int v67; // r8d
  unsigned int v68; // r11d
  unsigned int v69; // ecx
  __int64 v70; // rcx
  int v71; // eax
  int v72; // eax
  int *v73; // r12
  int v74; // eax
  int *v75; // rcx
  unsigned __int64 v76; // rax
  int v77; // ecx
  unsigned int v78; // eax
  int v79; // ecx
  int v80; // ecx
  int v81; // ecx
  unsigned __int64 v82; // rax
  unsigned int v83; // [rsp+20h] [rbp-308h]
  unsigned int v84; // [rsp+28h] [rbp-300h]
  __int64 v85; // [rsp+38h] [rbp-2F0h]
  int v86; // [rsp+50h] [rbp-2D8h]
  void (*v87)(struct _STRIP *, const struct _BMINFO *, struct _LINESTATE *); // [rsp+58h] [rbp-2D0h]
  __int64 v88; // [rsp+58h] [rbp-2D0h]
  unsigned int v89; // [rsp+60h] [rbp-2C8h]
  unsigned int v90; // [rsp+64h] [rbp-2C4h]
  int v91; // [rsp+68h] [rbp-2C0h]
  int v92; // [rsp+6Ch] [rbp-2BCh]
  struct _POINTFIX *v95; // [rsp+90h] [rbp-298h]
  __int64 v96; // [rsp+A0h] [rbp-288h]
  struct _POINTFIX *v97; // [rsp+110h] [rbp-218h]
  _DWORD v98[4]; // [rsp+120h] [rbp-208h] BYREF
  unsigned int *v99; // [rsp+130h] [rbp-1F8h]
  int v100; // [rsp+138h] [rbp-1F0h]
  _BYTE v101[400]; // [rsp+13Ch] [rbp-1ECh] BYREF
  char v102; // [rsp+2CCh] [rbp-5Ch] BYREF
  struct _W32KCDD_ENG_CALLBACKS *v103; // [rsp+2D0h] [rbp-58h]
  unsigned int *v104; // [rsp+2D8h] [rbp-50h]

  v12 = a3;
  v95 = a3;
  if ( a1 <= (const struct _BMINFO *)&off_1403490C0 || !(unsigned int)bUMPDSecurityGateEx() )
  {
    v97 = &v12[a5];
    v89 = 0;
    v91 = 0;
    v92 = 0;
    v85 = 0LL;
    v96 = 0LL;
    v83 = 0;
    v90 = 0;
    v14 = 0;
    v84 = 0;
    memset_0(v98, 0, 0x1B0uLL);
    v103 = a12;
    v104 = a10;
    while ( 1 )
    {
      x = a2->x;
      v16 = v12->x;
      y = a2->y;
      v18 = v12->y;
      v19 = a9 | 0x20;
      if ( v16 >= x )
        v19 = a9;
      v20 = v18;
      if ( v16 >= x )
        v20 = y;
      v21 = v16;
      if ( v16 >= x )
      {
        v21 = x;
        y = v18;
        x = v16;
      }
      if ( y < v20 )
      {
        v20 = -v20;
        y = -y;
        v19 |= 8u;
      }
      v22 = x - v21;
      if ( (v22 & 0x80000000) != 0 || (v23 = y - v20, (v23 & 0x80000000) != 0) )
      {
        v33 = v83;
        goto LABEL_37;
      }
      if ( v23 >= v22 )
      {
        if ( v23 == v22 )
        {
          v19 |= 0x10u;
        }
        else
        {
          v48 = v22;
          v22 = v23;
          v23 = v48;
          v49 = v21;
          v21 = v20;
          v20 = v49;
          v19 |= 5u;
        }
      }
      v19 |= gaflRound[(v19 >> 2) & 7];
      v91 = v21 >> 4;
      v92 = v20 >> 4;
      v24 = v21 & 0xF;
      v25 = v20 & 0xF;
      v26 = (int)v23 * (unsigned __int64)(unsigned int)v24;
      v27 = (int)v22 * (unsigned __int64)(unsigned int)(v25 + 8) - v26 - 1;
      if ( (v19 & 0x8000) == 0 )
        v27 = (int)v22 * (unsigned __int64)(unsigned int)(v25 + 8) - v26;
      v85 = v27 >> 4;
      v96 = ~(v27 >> 4);
      v28 = ((_BYTE)v23 + (_BYTE)v25) & 0xF;
      v29 = ((_BYTE)v22 + (_BYTE)v24) & 0xF;
      v30 = (v22 + v24) >> 4;
      if ( (v19 & 0x20) == 0 )
      {
        --v30;
        if ( (((_BYTE)v22 + (_BYTE)v24) & 0xF) != 0 )
        {
          if ( (((_BYTE)v23 + (_BYTE)v25) & 0xF) != 0 )
          {
            v81 = 8 - v28;
            if ( 8 - v28 < 0 )
              v81 = v28 - 8;
            if ( v81 <= v29 )
              v30 = (v22 + v24) >> 4;
          }
          else if ( v29 - (unsigned int)((v19 & 0x80) != 0) + 8 >= 0x10 )
          {
            v30 = (v22 + v24) >> 4;
          }
        }
        if ( (v19 & 0x90) != 0x90 )
          goto LABEL_19;
        if ( (((_BYTE)v22 + (_BYTE)v24) & 0xF) != 0 && v28 == v29 + 8 )
          --v30;
        if ( v24 && v25 == v24 + 8 )
        {
          v31 = 0;
        }
        else
        {
LABEL_19:
          v31 = 0;
          if ( v24 )
          {
            if ( v25 )
            {
              v77 = 8 - v25;
              if ( 8 - v25 < 0 )
                v77 = v25 - 8;
              if ( v77 <= v24 )
                v31 = 1;
            }
            else
            {
              LOBYTE(v31) = v24 - (unsigned int)((v19 & 0x80) != 0) + 8 >= 0x10;
            }
          }
        }
        LODWORD(v32) = 0;
        if ( v85 >= 0 )
          LODWORD(v32) = (unsigned int)v85 >= v22 - (v23 & -v31);
        goto LABEL_22;
      }
      if ( (((_BYTE)v23 + (_BYTE)v25) & 0xF) != 0 )
      {
        v79 = 8 - v28;
        if ( 8 - v28 < 0 )
          v79 = v28 - 8;
        if ( (unsigned int)(v29 + v79) > 0x10 )
LABEL_44:
          ++v30;
      }
      else if ( v29 - (unsigned int)((v19 & 0x80) != 0) + 8 >= 0x10 )
      {
        goto LABEL_44;
      }
      if ( (v19 & 0x90) != 0x10 )
        goto LABEL_46;
      if ( (((_BYTE)v23 + (_BYTE)v25) & 0xF) != 0 && v29 == v28 + 8 )
        ++v30;
      if ( !v25 || v24 != v25 + 8 )
      {
LABEL_46:
        v31 = 1;
        v50 = 0;
        if ( !v25 )
        {
          v51 = v24 - ((v19 & 0x80) != 0) + 8;
          if ( v51 >= 0x10 )
            v50 = v23;
          v31 = 2 - (v51 < 0x10);
          goto LABEL_50;
        }
        v80 = 8 - v25;
        if ( 8 - v25 < 0 )
          v80 = v25 - 8;
        if ( (unsigned int)(v24 + v80) <= 0x10 )
          goto LABEL_50;
      }
      v50 = v23;
      v31 = 2;
LABEL_50:
      LODWORD(v32) = 0;
      v52 = v85 + v50;
      v53 = (v85 + v50) >> 32;
      if ( v53 >= 0 )
      {
        if ( v53 > 0 || v52 >= 2 * v22 - v23 )
          LODWORD(v32) = 2;
        else
          LODWORD(v32) = v52 >= v22 - v23;
      }
LABEL_22:
      v90 = v32;
      v33 = v31;
      v83 = v31;
      v14 = v30;
      v84 = v30;
      if ( v30 >= (int)v31 )
      {
        if ( (v19 & 0x40) != 0 )
        {
          v54 = v23;
          v89 = v23;
          goto LABEL_88;
        }
        goto LABEL_24;
      }
LABEL_37:
      while ( (v19 & 0x40) != 0 )
      {
        if ( !--a5 )
          return 1LL;
        v54 = v89;
LABEL_88:
        if ( (v19 & 0x20) != 0 )
        {
          v31 = v14 - a4->iStop;
          v30 = v14 - a4->iStart;
        }
        else
        {
          v31 = v33 + a4->iStart;
          v30 = v33 + a4->iStop;
        }
        ++a4;
        v23 = v54;
        *((_DWORD *)a6 + 8) = *((_DWORD *)a6 + 9);
        v76 = v85 + v54 * (unsigned __int64)v31;
        if ( v76 >= 0xFFFFFFFF )
          v32 = (v85 + v54 * (unsigned __int64)v31) / v22;
        else
          LODWORD(v32) = (unsigned int)v76 / v22;
LABEL_24:
        if ( (v19 & 0x400) != 0 )
        {
          v56 = 0;
          v57 = (char *)a6 + 92;
          v58 = (char *)a6 + 88;
          if ( (v19 & 5) == 0 )
            v58 = (char *)a6 + 92;
          v59 = *(unsigned int *)v58;
          if ( (v19 & 5) == 0 )
            v57 = (char *)a6 + 88;
          v60 = *(unsigned int *)v57;
          if ( (_DWORD)v60 != (_DWORD)v59 )
            LOBYTE(v56) = (unsigned __int64)v23 * v59 > (unsigned __int64)v22 * v60;
          if ( v56 )
          {
            v82 = v85 + v23 * (unsigned __int64)v84;
            if ( v82 >= 0xFFFFFFFF )
              v82 = (v85 + v23 * (unsigned __int64)v84) / v22;
            else
              LODWORD(v82) = (unsigned int)v82 / v22;
            *((_DWORD *)a6 + 2) = 0;
            *((_DWORD *)a6 + 3) = v59;
            *((_DWORD *)a6 + 4) = v59;
            v61 = v90;
            v62 = v82 - v90;
            v63 = v19 & 0x20;
            if ( (v19 & 0x20) != 0 )
            {
              v78 = v82 - v32;
              goto LABEL_105;
            }
            v64 = v32;
LABEL_70:
            v65 = v64 - v61;
          }
          else
          {
            *((_QWORD *)a6 + 1) = (unsigned int)v60;
            *((_DWORD *)a6 + 4) = v60;
            v61 = v83;
            v62 = v84 - v83;
            v63 = v19 & 0x20;
            LODWORD(v59) = v60;
            if ( (v19 & 0x20) == 0 )
            {
              v64 = v31;
              goto LABEL_70;
            }
            v78 = v84 - v31;
LABEL_105:
            v65 = v78 + 1;
          }
          v66 = *((_DWORD *)a6 + 8);
          v67 = v66 + v65 * v59;
          v68 = v66 + (v62 + 1) * v59;
          *((_DWORD *)a6 + 8) = v68;
          v69 = *((_DWORD *)a6 + 7);
          if ( v67 >= v69 )
            v67 %= v69;
          if ( v68 >= v69 )
            *((_DWORD *)a6 + 8) = v68 % v69;
          if ( v63 )
          {
            v67 = -v67;
            if ( v67 < 0 )
              v67 += v69;
            v70 = *((_QWORD *)a6 + 8);
            v88 = v70 + 4LL * (unsigned int)(*((_DWORD *)a6 + 25) - 1);
            v71 = *((_DWORD *)a6 + 21) == 0;
          }
          else
          {
            v70 = *((_QWORD *)a6 + 9);
            v88 = v70 + 4LL * (unsigned int)(*((_DWORD *)a6 + 25) - 1);
            v71 = *((_DWORD *)a6 + 21);
          }
          *((_DWORD *)a6 + 20) = v71;
          *((_QWORD *)a6 + 5) = v70;
          *((_QWORD *)a6 + 6) = v88;
          v72 = *((_DWORD *)a6 + 6);
          if ( v67 >= v72 )
          {
            v67 -= v72;
            if ( (*((_DWORD *)a6 + 25) & 1) != 0 )
              *((_DWORD *)a6 + 20) = *((_DWORD *)a6 + 20) == 0;
          }
          v73 = (int *)*((_QWORD *)a6 + 5);
          *((_QWORD *)a6 + 7) = v73;
          v74 = *v73;
          v75 = v73;
          while ( v67 >= v74 )
          {
            *((_QWORD *)a6 + 7) = ++v75;
            v67 -= v74;
            v74 = *v75;
          }
          *((_DWORD *)a6 + 5) = *v75 - v67;
          if ( (((_BYTE)v75 - (_BYTE)v73) & 4) != 0 )
            *((_DWORD *)a6 + 20) = *((_DWORD *)a6 + 20) == 0;
        }
        v34 = v31 + v91;
        v35 = v32 + v92;
        if ( (v19 & 5) == 0 )
        {
          v35 = v31 + v91;
          v34 = v32 + v92;
        }
        v36 = -v34;
        if ( (v19 & 8) == 0 )
          v36 = v34;
        if ( 2 * v23 > v22 )
        {
          v19 |= 2u;
          v96 = v85 - v22;
          v23 = v22 - v23;
          LODWORD(v32) = v31 - v32;
        }
        v98[1] = v19;
        v87 = a8[v19 & 3];
        v100 = v35 & *((_DWORD *)a1 + 7);
        v98[2] = a11;
        v37 = &a10[v36 * a11];
        v38 = a1;
        v39 = *((_DWORD *)a1 + 6);
        if ( v39 < 0 )
          v99 = (unsigned int *)((char *)v37 + 3 * v35);
        else
          v99 = &v37[(__int64)v35 >> v39];
        v40 = (int *)v101;
        v41 = v30 - v31 + 1;
        LODWORD(v42) = 0;
        v43 = 0;
        v86 = 0;
        if ( v23 )
        {
          v55 = v96 + v22 * (unsigned __int64)(unsigned int)(v32 + 1);
          v42 = v55 % v23;
          v44 = v55 / v23 - v31 + 1;
          v86 = v22 % v23;
          v43 = v22 / v23;
        }
        else
        {
          v44 = 0x7FFFFFFF;
        }
        while ( 1 )
        {
          v45 = v41;
          v41 -= v44;
          v46 = (char *)(v40 + 1);
          if ( v41 <= 0 )
            break;
          *v40++ = v44;
          if ( v46 == &v102 )
          {
            v98[0] = (v46 - v101) >> 2;
            ((void (__fastcall *)(_DWORD *, const struct _BMINFO *, struct _LINESTATE *))v87)(v98, v38, a6);
            v38 = a1;
            v40 = (int *)v101;
          }
          v44 = v43;
          LODWORD(v42) = v42 + v86;
          if ( (unsigned int)v42 >= v23 )
          {
            LODWORD(v42) = v42 - v23;
            v44 = v43 + 1;
          }
        }
        *v40 = v45;
        v98[0] = (v46 - v101) >> 2;
        ((void (__fastcall *)(_DWORD *, const struct _BMINFO *, struct _LINESTATE *))v87)(v98, v38, a6);
        v14 = v84;
        v33 = v83;
      }
      a2 = v95;
      v12 = v95 + 1;
      v95 = v12;
      if ( v12 >= v97 )
        return 1LL;
    }
  }
  return 0LL;
}
