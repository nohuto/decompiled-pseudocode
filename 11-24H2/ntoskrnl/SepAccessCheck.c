/*
 * XREFs of SepAccessCheck @ 0x14035BC30
 * Callers:
 *     SeAccessCheckWithHint @ 0x14035A620 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14091DB90 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepNormalAccessCheck @ 0x140344500 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x140363250 (SepMaximumAccessCheck.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SepAssemblePrivileges @ 0x140A14428 (SepAssemblePrivileges.c)
 */

__int64 __fastcall SepAccessCheck(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int128 *a6,
        unsigned int a7,
        _DWORD *a8,
        unsigned int a9,
        char a10,
        void *a11,
        _QWORD *a12,
        int *a13,
        char a14,
        char a15,
        __int64 a16,
        _QWORD *a17,
        char *a18,
        char *a19)
{
  __int64 v20; // r11
  unsigned __int8 v21; // r12
  int v22; // r8d
  unsigned int v23; // esi
  __int16 v24; // di
  __int16 v25; // ax
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r15
  unsigned int v29; // eax
  int v30; // edi
  unsigned int v31; // r8d
  __int64 v32; // r11
  __int64 v33; // r10
  int v34; // eax
  unsigned int v35; // r8d
  int v36; // edx
  int v37; // ecx
  unsigned int v38; // r13d
  int v39; // ebx
  _DWORD *v40; // r8
  int v42; // eax
  bool v43; // zf
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r10
  int v47; // eax
  int v48; // edi
  int v49; // edx
  unsigned int v50; // edi
  unsigned __int64 LowPart; // rdi
  __int64 v52; // rdx
  unsigned __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  unsigned int v56; // edi
  __int64 v57; // rdx
  unsigned __int64 v58; // rax
  unsigned __int8 v59; // cf
  int v60; // r9d
  int v61; // edi
  int v62; // ecx
  _QWORD *v63; // r15
  _DWORD *v64; // rdx
  int v65; // ecx
  int v66; // ecx
  __int64 v67; // r9
  unsigned int v68; // eax
  int v69; // edi
  char v70; // r14
  char v71; // r15
  int v72; // r10d
  unsigned int v73; // edx
  int *v74; // rcx
  _DWORD *v75; // rdi
  char *v76; // r8
  int v77; // eax
  _QWORD *v78; // rdi
  unsigned int v79; // r8d
  unsigned int v80; // edx
  char *v81; // r10
  int *v82; // r9
  __int64 v83; // rax
  __int64 v84; // rax
  unsigned int v85; // esi
  int *v86; // rdi
  unsigned __int64 k; // rcx
  __int64 v88; // r9
  char *v89; // rcx
  __int64 v90; // rax
  unsigned int *v91; // r10
  int *v92; // r9
  __int64 v93; // rax
  __int64 v94; // rax
  int *v95; // rdi
  unsigned __int64 i; // rcx
  unsigned int *v97; // rdi
  unsigned __int64 j; // rcx
  signed __int64 v99; // r9
  unsigned int *v100; // rcx
  __int64 v101; // rax
  signed __int32 v102[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned __int8 v103; // [rsp+70h] [rbp-90h]
  unsigned __int8 v104; // [rsp+71h] [rbp-8Fh]
  unsigned __int8 v105; // [rsp+72h] [rbp-8Eh]
  unsigned int v106; // [rsp+74h] [rbp-8Ch]
  int v107; // [rsp+78h] [rbp-88h]
  unsigned int v108; // [rsp+7Ch] [rbp-84h]
  __int64 v109; // [rsp+80h] [rbp-80h]
  int *v110; // [rsp+88h] [rbp-78h]
  void *v111; // [rsp+90h] [rbp-70h]
  _DWORD *v112; // [rsp+98h] [rbp-68h]
  unsigned __int8 *v113; // [rsp+A0h] [rbp-60h]
  _QWORD *v114; // [rsp+A8h] [rbp-58h]
  __int64 v115; // [rsp+B0h] [rbp-50h]
  __int64 v116; // [rsp+B8h] [rbp-48h]
  __int64 v117; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v118; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v119; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v120; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v121; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v122; // [rsp+E8h] [rbp-18h] BYREF
  char *v123; // [rsp+F0h] [rbp-10h]
  _QWORD *v124; // [rsp+F8h] [rbp-8h]
  char *v125; // [rsp+100h] [rbp+0h]
  __int128 v126; // [rsp+108h] [rbp+8h] BYREF
  __int128 v127; // [rsp+118h] [rbp+18h]
  __int128 v128; // [rsp+128h] [rbp+28h]

  v111 = a11;
  v20 = a4;
  if ( !a4 )
    v20 = a3;
  v110 = a13;
  v21 = 1;
  v112 = a8;
  v124 = a12;
  v109 = a16;
  v114 = a17;
  v115 = a3;
  v22 = a1;
  v123 = a18;
  v113 = a2;
  v125 = a19;
  v107 = 0;
  v105 = 0;
  v103 = 0;
  v104 = 0;
  v116 = v20;
  v106 = a5;
  v108 = 1;
  v126 = 0LL;
  v127 = 0LL;
  v128 = 0LL;
  if ( (a5 & 0x1000000) != 0 )
  {
    LowPart = SeSecurityPrivilege.LowPart;
    v118 = 0LL;
    v117 = 0LL;
    if ( a10 )
    {
      _InterlockedExchange64(&v118, *(_QWORD *)(v20 + 72));
      _InterlockedExchange64(&v117, *(_QWORD *)(v20 + 64));
      v52 = v118 & v117;
      _InterlockedOr(v102, 0);
      if ( !_bittest64(&v52, LowPart) )
      {
        v23 = 0;
        v39 = -1073741727;
        v38 = 0;
        goto LABEL_32;
      }
    }
    v107 = 1;
    v23 = a9 | 0x1000000;
    v106 = a5 & 0xFEFFFFFF;
    v105 = 1;
    v30 = 1;
    if ( (a5 & 0xFEFFFFFF) == 0 )
      goto LABEL_115;
  }
  else
  {
    v23 = a9;
  }
  v24 = *(_WORD *)(a1 + 2);
  v25 = v24 & 0x8000;
  if ( (v24 & 4) != 0 )
  {
    if ( v25 )
    {
      v27 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v27 )
        v26 = a1 + v27;
      else
        v26 = 0LL;
    }
    else
    {
      v26 = *(_QWORD *)(a1 + 32);
    }
  }
  else
  {
    v26 = 0LL;
  }
  if ( (v24 & 0x10) != 0 )
  {
    if ( v25 )
    {
      v45 = *(unsigned int *)(a1 + 12);
      if ( (_DWORD)v45 )
        v28 = a1 + v45;
      else
        v28 = 0LL;
    }
    else
    {
      v28 = *(_QWORD *)(a1 + 24);
    }
  }
  else
  {
    v28 = 0LL;
  }
  if ( (v24 & 4) == 0 || !v26 )
  {
    v42 = *(_DWORD *)(v20 + 200);
    v23 |= a5;
    if ( (a5 & 0x2000000) != 0 )
      v23 = v112[3] | v23 & 0xFDFFFFFF;
    if ( (v42 & 0x4000) != 0 )
    {
      v43 = (v42 & 0x3000000) == 50331648;
      v44 = v109;
      if ( !v43 )
      {
        v23 = 0;
        *(_DWORD *)(v109 + 4) = 0;
        *(_BYTE *)(v44 + 21) = 0;
        v39 = -1073741790;
        v38 = 0;
        goto LABEL_32;
      }
      *(_BYTE *)(v109 + 23) = 1;
      *(_DWORD *)(v44 + 4) = v23;
      *(_BYTE *)(v44 + 21) = 1;
      *(_DWORD *)v44 = 0;
    }
    v30 = v107;
    goto LABEL_115;
  }
  v29 = v106;
  if ( (v106 & 0x80000) == 0 )
  {
    v30 = v107;
LABEL_16:
    LOBYTE(v22) = 0;
    goto LABEL_17;
  }
  v53 = (unsigned int)SeTakeOwnershipPrivilege;
  v120 = 0LL;
  v119 = 0LL;
  if ( a10 )
  {
    _InterlockedExchange64(&v120, *(_QWORD *)(v20 + 72));
    _InterlockedExchange64(&v119, *(_QWORD *)(v20 + 64));
    v54 = v120 & v119;
    _InterlockedOr(v102, 0);
    if ( !_bittest64(&v54, v53) )
    {
      v55 = *(_QWORD *)(v20 + 72);
      v56 = SeRelabelPrivilege;
      v122 = 0LL;
      v121 = 0LL;
      _InterlockedExchange64(&v122, v55);
      _InterlockedExchange64(&v121, *(_QWORD *)(v20 + 64));
      v57 = v122 & v121;
      _InterlockedOr(v102, 0);
      v58 = v56;
      v30 = v107;
      v59 = _bittest64(&v57, v58);
      v29 = v106;
      if ( !v59 )
        goto LABEL_16;
      v29 = v106 & 0xFFF7FFFF;
      v104 = 1;
      v30 = v107 + 1;
      v106 = v29;
      v23 |= 0x80000u;
      ++v107;
      if ( v29 )
        goto LABEL_16;
LABEL_115:
      v38 = 0;
      LOBYTE(v22) = 0;
      goto LABEL_28;
    }
    v29 = v106;
  }
  v29 &= ~0x80000u;
  v30 = v107 + 1;
  v106 = v29;
  v23 |= 0x80000u;
  ++v107;
  v103 = 1;
  v22 = 1;
  if ( !v29 )
  {
    v38 = 0;
    goto LABEL_28;
  }
LABEL_17:
  if ( !*(_WORD *)(v26 + 4) )
  {
    v64 = (_DWORD *)v109;
    *(_DWORD *)(v109 + 12) = v29;
    v65 = *(_DWORD *)(v20 + 200);
    if ( (v65 & 0x4000) != 0 )
    {
      v23 &= ~*v64;
      v29 = v106;
    }
    if ( v29 == 0x2000000 )
    {
      if ( v23 )
      {
LABEL_98:
        v39 = 0;
        v38 = 0;
LABEL_30:
        if ( KeGetCurrentIrql() < 2u )
        {
          if ( v30 )
          {
            v63 = v124;
            SepAssemblePrivileges(v30, v105, v22, v104, (__int64)v124);
            if ( v63 )
            {
              if ( !*v63 )
              {
                v21 = 0;
                v39 = -1073741801;
                v23 = 0;
              }
            }
          }
        }
LABEL_32:
        if ( a14 )
        {
          if ( a7 )
          {
            v91 = (unsigned int *)v111;
            v92 = v110;
            if ( a7 < 4 )
              goto LABEL_168;
            v93 = a7 - 1;
            if ( v111 <= &v110[v93] && (char *)v111 + 4 * v93 >= (char *)v110 )
              goto LABEL_168;
            v94 = a7 & 0xFFFFFFFC;
            do
              v38 += 4;
            while ( v38 < (unsigned int)v94 );
            v95 = v110;
            for ( i = (unsigned __int64)(4 * v94) >> 2; i; --i )
              *v95++ = v39;
            v97 = v91;
            for ( j = (unsigned __int64)(4 * v94) >> 2; j; --j )
              *v97++ = v23;
            if ( v38 < a7 )
            {
LABEL_168:
              v99 = (char *)v92 - (char *)v91;
              v100 = &v91[v38];
              v101 = a7 - v38;
              do
              {
                *(unsigned int *)((char *)v100 + v99) = v39;
                *v100++ = v23;
                --v101;
              }
              while ( v101 );
            }
          }
          goto LABEL_34;
        }
LABEL_33:
        v40 = v111;
        *v110 = v39;
        *v40 = v23;
LABEL_34:
        if ( v39 < 0 )
        {
          if ( v123 )
            *v123 = 0;
          if ( a19 )
            *a19 = 1;
        }
        else
        {
          if ( v123 )
            *v123 = 1;
          if ( a19 )
            *a19 = 0;
        }
        return v21;
      }
    }
    else if ( !v29 && *v64 && v23 && (v65 & 0x6000) == 0 )
    {
      goto LABEL_98;
    }
    v23 = 0;
    v39 = -1073741790;
    v38 = 0;
    goto LABEL_32;
  }
  if ( a7 )
  {
    v31 = a7;
    v108 = a7;
  }
  else
  {
    v127 = 0LL;
    DWORD1(v127) = -1;
    a6 = &v126;
    v126 = 0LL;
    v31 = 1;
    v128 = 0LL;
  }
  if ( (a5 & 0x2000000) == 0 && !a14 )
  {
    SepNormalAccessCheck(v29, v20, v115, v26, v28, v114, v113, v31, (__int64)a6, a7, 0, a15, v109);
    v32 = v109;
    *(_DWORD *)(v109 + 12) = *((_DWORD *)a6 + 6);
    if ( *((_DWORD *)a6 + 6) )
      goto LABEL_52;
    v33 = v116;
    v34 = *(_DWORD *)(v116 + 200);
    if ( (v34 & 0x10) != 0 )
    {
      if ( (v34 & 8) != 0 )
        v62 = v112[1] & ~(*v112 | v112[2]) | 0x10D0000;
      else
        v62 = v112[3] | 0x1FFFFF;
      v35 = a5;
      if ( (v62 & a5) == 0 )
      {
LABEL_25:
        v36 = *((_DWORD *)a6 + 6);
        *(_DWORD *)(v32 + 12) = v36;
        if ( !*((_DWORD *)a6 + 6) )
        {
          v37 = *(_DWORD *)(v33 + 200);
          if ( (v37 & 0x2000) != 0 )
          {
LABEL_27:
            v30 = v107;
            v23 |= v35;
            v22 = v103;
            v38 = 0;
LABEL_28:
            v39 = 0;
            goto LABEL_29;
          }
          v60 = v35 | v106;
          if ( (v37 & 0x4000) != 0 )
          {
            v61 = (*(_DWORD *)v32 | v60) & ~(*(_DWORD *)(v32 + 4) | *(_DWORD *)(v32 + 8));
            if ( v61 && !v36 && (v37 & 0x3000000) == 0x3000000 )
            {
              *(_BYTE *)(v32 + 23) = 1;
              v61 = 0;
            }
          }
          else
          {
            if ( !*(_BYTE *)(v32 + 20) )
            {
              *((_DWORD *)a6 + 6) = 0;
              goto LABEL_27;
            }
            v61 = ~*(_DWORD *)(v32 + 4) & (*(_DWORD *)v32 | v60);
          }
          *((_DWORD *)a6 + 6) = v61;
          if ( v61 )
          {
            v23 = 0;
            v39 = -1073741790;
            goto LABEL_33;
          }
          goto LABEL_27;
        }
LABEL_52:
        v39 = -1073741790;
        v23 = 0;
        goto LABEL_33;
      }
      SepNormalAccessCheck(v106 & v62, v116, v115, v26, v28, v114, v113, v108, (__int64)a6, a7, 1, a15, v32);
      v33 = v116;
      v32 = v109;
    }
    v35 = a5;
    goto LABEL_25;
  }
  SepMaximumAccessCheck(v20, v115, v26, v28, (__int64)v114, (__int64)v113, v31, (__int64)a6, a7, 0, 0, a15, v109);
  v46 = v116;
  v47 = *(_DWORD *)(v116 + 200);
  if ( (v47 & 0x10) != 0 )
  {
    if ( (v47 & 8) != 0 )
      v66 = v112[1] & ~(*v112 | v112[2]) | 0x10D0000;
    else
      v66 = v112[3] | 0x1FFFFF;
    SepMaximumAccessCheck(v116, v115, v26, v28, (__int64)v114, (__int64)v113, v108, (__int64)a6, a7, v66, 1, a15, v109);
    v46 = v116;
  }
  v48 = *(_DWORD *)(v46 + 200);
  v49 = *((_DWORD *)a6 + 7);
  if ( (v48 & 0x2000) != 0 )
  {
    v50 = a5;
    goto LABEL_57;
  }
  if ( (v48 & 0x4000) != 0 )
  {
    v49 &= *(_DWORD *)(v109 + 4) | *(_DWORD *)(v109 + 8);
    if ( v49 == *((_DWORD *)a6 + 7) )
    {
      v50 = a5;
LABEL_93:
      v23 &= ~*(_DWORD *)v109;
      goto LABEL_57;
    }
    v43 = (v48 & 0x3000000) == 50331648;
    v50 = a5;
    if ( !v43 || v49 && (a5 & 0x2000000) != 0 )
      goto LABEL_93;
    *(_BYTE *)(v109 + 23) = 1;
    v49 = *((_DWORD *)a6 + 7);
  }
  else
  {
    v50 = a5;
    if ( *(_BYTE *)(v109 + 20) )
    {
      v49 &= *(_DWORD *)(v109 + 4);
      v23 &= ~*(_DWORD *)v109;
    }
  }
LABEL_57:
  if ( !a14 )
  {
    if ( (~(v49 | 0x2000000) & v106) == 0 )
    {
      v30 = v107;
      v23 |= v49;
      v22 = v103;
      v38 = 0;
      v39 = 0;
LABEL_29:
      if ( !v23 )
      {
        v39 = -1073741790;
        goto LABEL_32;
      }
      goto LABEL_30;
    }
    goto LABEL_52;
  }
  v67 = v108;
  v68 = v50;
  v69 = v23 | v50;
  v70 = 0;
  v71 = 0;
  v72 = v69;
  if ( (v68 & 0x2000000) != 0 )
    v72 = -33554433;
  v73 = v69 & 0xFDFFFFFF;
  if ( (v68 & 0x2000000) == 0 )
    v73 = v69;
  if ( v108 )
  {
    v74 = v110;
    v75 = (_DWORD *)a6 + 7;
    v76 = (char *)((_BYTE *)v111 - (_BYTE *)v110);
    do
    {
      v43 = (v72 & (*v75 | v23)) == 0;
      v77 = v72 & (*v75 | v23);
      *(int *)((char *)v74 + (_QWORD)v76) = v77;
      if ( v43 )
      {
        *v74 = -1073741790;
        v71 = 1;
      }
      else if ( (~v77 & v73) != 0 )
      {
        *v74 = -1073741790;
        v71 = 1;
      }
      else
      {
        *v74 = 0;
        v70 = 1;
      }
      v75 += 12;
      ++v74;
      --v67;
    }
    while ( v67 );
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    if ( v70 )
    {
      if ( v107 )
      {
        v78 = v124;
        SepAssemblePrivileges(v107, v105, v103, v104, (__int64)v124);
        if ( v78 )
        {
          if ( !*v78 )
          {
            v79 = v108;
            v21 = 0;
            v70 = 0;
            v71 = 1;
            v80 = 0;
            if ( v108 )
            {
              v81 = (char *)v111;
              v82 = v110;
              if ( v108 >= 4 )
              {
                v83 = v108 - 1;
                if ( v111 > &v110[v83] || (char *)v111 + 4 * v83 < (char *)v110 )
                {
                  v84 = v108 & 0xFFFFFFFC;
                  do
                  {
                    v80 += 4;
                    v85 = v80;
                  }
                  while ( v80 < (unsigned int)v84 );
                  v86 = v110;
                  for ( k = (unsigned __int64)(4 * v84) >> 2; k; --k )
                    *v86++ = -1073741801;
                  memset_0(v81, 0, 4 * v84);
                  v79 = v108;
                  v80 = v85;
                  if ( v85 >= v108 )
                    goto LABEL_144;
                  v82 = v110;
                  v81 = (char *)v111;
                }
              }
              v88 = (char *)v82 - v81;
              v89 = &v81[4 * v80];
              v90 = v79 - v80;
              do
              {
                *(_DWORD *)&v89[v88] = -1073741801;
                *(_DWORD *)v89 = 0;
                v89 += 4;
                --v90;
              }
              while ( v90 );
            }
          }
        }
      }
    }
  }
LABEL_144:
  if ( v123 )
    *v123 = v70;
  if ( v125 )
    *v125 = v71;
  return v21;
}
