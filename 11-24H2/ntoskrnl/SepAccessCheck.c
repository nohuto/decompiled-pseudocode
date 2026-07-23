/*
 * XREFs of SepAccessCheck @ 0x1404E76E0
 * Callers:
 *     SeAccessCheckWithHint @ 0x1403B6970 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x14042DC70 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepSinglePrivilegeCheck @ 0x14041571C (SepSinglePrivilegeCheck.c)
 *     SepMaximumAccessCheck @ 0x1404E8A30 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x1404EA720 (SepNormalAccessCheck.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1405E2C90 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SepAssemblePrivileges @ 0x140A0D308 (SepAssemblePrivileges.c)
 */

__int64 __fastcall SepAccessCheck(
        __int64 a1,
        __int64 a2,
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
        __int64 a17,
        char *a18,
        char *a19)
{
  unsigned int v19; // esi
  __int64 v20; // r13
  int v22; // r14d
  unsigned int v23; // r9d
  unsigned int v24; // ebx
  unsigned __int64 LowPart; // r10
  __int64 v27; // rdx
  __int64 v28; // rdx
  int v29; // ebx
  unsigned int v30; // ebp
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int16 v33; // ax
  __int64 v34; // r10
  __int64 v35; // rcx
  __int64 v36; // r11
  __int64 v37; // rax
  int v38; // ecx
  _QWORD *v39; // rdi
  unsigned int *v40; // r10
  __int64 v41; // rax
  __int64 v42; // rax
  int *v43; // rdi
  unsigned __int64 i; // rcx
  unsigned int *v45; // rdi
  unsigned __int64 j; // rcx
  unsigned int *v47; // rcx
  __int64 v48; // rax
  _DWORD *v49; // rdx
  __int64 v50; // rcx
  int v51; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  int v53; // edx
  int v54; // ebx
  int v55; // ecx
  _DWORD *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  int v59; // eax
  int v60; // ecx
  int v61; // r14d
  int v62; // eax
  int v63; // edx
  char v64; // r13
  char v65; // r14
  int v66; // r10d
  unsigned int v67; // r8d
  _DWORD *v68; // rdx
  unsigned int v69; // r12d
  int *v70; // rcx
  __int64 v71; // rdi
  char *v72; // r9
  bool v73; // zf
  int v74; // eax
  _QWORD *v75; // rdi
  unsigned __int8 v76; // cl
  unsigned int v77; // edx
  char *v78; // r9
  __int64 v79; // rax
  __int64 v80; // rax
  unsigned int v81; // ebp
  int *v82; // rdi
  unsigned __int64 k; // rcx
  char *v84; // rcx
  __int64 v85; // rax
  int v87; // eax
  signed __int32 v88[8]; // [rsp+0h] [rbp-158h] BYREF
  unsigned __int8 v89; // [rsp+70h] [rbp-E8h]
  unsigned __int8 v90; // [rsp+71h] [rbp-E7h]
  unsigned __int8 v91; // [rsp+72h] [rbp-E6h]
  unsigned __int8 v92; // [rsp+73h] [rbp-E5h]
  int v93; // [rsp+74h] [rbp-E4h]
  unsigned __int16 v94; // [rsp+78h] [rbp-E0h]
  unsigned int v95; // [rsp+7Ch] [rbp-DCh]
  __int64 v96; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v97; // [rsp+88h] [rbp-D0h] BYREF
  void *v98; // [rsp+90h] [rbp-C8h]
  _DWORD *v99; // [rsp+98h] [rbp-C0h]
  __int64 v100; // [rsp+A0h] [rbp-B8h]
  __int64 v101; // [rsp+A8h] [rbp-B0h]
  __int64 v102; // [rsp+B0h] [rbp-A8h]
  char *v103; // [rsp+B8h] [rbp-A0h]
  char *v104; // [rsp+C0h] [rbp-98h]
  _QWORD *v105; // [rsp+C8h] [rbp-90h]
  __int128 v106; // [rsp+D0h] [rbp-88h] BYREF
  __int128 v107; // [rsp+E0h] [rbp-78h]
  __int128 v108; // [rsp+F0h] [rbp-68h]

  v19 = 0;
  v20 = a4;
  v98 = a11;
  v22 = 1;
  v99 = a8;
  if ( !a4 )
    v20 = a3;
  v23 = a5;
  v24 = a5;
  v105 = a12;
  v102 = a3;
  v101 = a17;
  v104 = a19;
  v100 = a2;
  v103 = a18;
  v89 = 1;
  v93 = 0;
  v92 = 0;
  v91 = 0;
  v90 = 0;
  v95 = 1;
  v106 = 0LL;
  v107 = 0LL;
  v108 = 0LL;
  if ( (a5 & 0x1000000) != 0 )
  {
    LowPart = SeSecurityPrivilege.LowPart;
    v96 = 0LL;
    v97 = 0LL;
    if ( a10 )
    {
      _InterlockedExchange64(&v97, *(_QWORD *)(v20 + 64));
      v27 = v97;
      _InterlockedExchange64(&v96, *(_QWORD *)(v20 + 72));
      v28 = v96 & v27;
      _InterlockedOr(v88, 0);
      if ( !_bittest64(&v28, LowPart) )
      {
        v29 = -1073741727;
LABEL_45:
        v30 = 0;
        goto LABEL_46;
      }
    }
    v30 = a9 | 0x1000000;
    v93 = 1;
    v92 = 1;
    v24 = a5 & 0xFEFFFFFF;
    if ( (a5 & 0xFEFFFFFF) == 0 )
    {
LABEL_175:
      v29 = 0;
      if ( !v30 )
      {
        v29 = -1073741790;
        goto LABEL_46;
      }
LABEL_40:
      if ( KeGetCurrentIrql() < 2u )
      {
        if ( v93 )
        {
          v39 = v105;
          SepAssemblePrivileges(v93, v92, v91, v90, (__int64)v105);
          if ( v39 )
          {
            if ( !*v39 )
            {
              v89 = 0;
              v29 = -1073741801;
              goto LABEL_45;
            }
          }
        }
      }
LABEL_46:
      if ( a14 )
      {
        if ( a7 )
        {
          v40 = (unsigned int *)v98;
          if ( a7 < 4 )
            goto LABEL_60;
          v41 = a7 - 1;
          if ( v98 <= &a13[v41] && (char *)v98 + 4 * v41 >= (char *)a13 )
            goto LABEL_60;
          v42 = a7 & 0xFFFFFFFC;
          do
            v19 += 4;
          while ( v19 < (unsigned int)v42 );
          v43 = a13;
          for ( i = (unsigned __int64)(4 * v42) >> 2; i; --i )
            *v43++ = v29;
          v45 = v40;
          for ( j = (unsigned __int64)(4 * v42) >> 2; j; --j )
            *v45++ = v30;
          if ( v19 < a7 )
          {
LABEL_60:
            v47 = &v40[v19];
            v48 = a7 - v19;
            do
            {
              *(unsigned int *)((char *)v47 + (char *)a13 - (char *)v40) = v29;
              *v47++ = v30;
              --v48;
            }
            while ( v48 );
          }
        }
        goto LABEL_98;
      }
LABEL_97:
      v56 = v98;
      *a13 = v29;
      *v56 = v30;
LABEL_98:
      if ( v29 < 0 )
      {
        if ( v103 )
          *v103 = 0;
        if ( v104 )
          *v104 = 1;
      }
      else
      {
        if ( v103 )
          *v103 = 1;
        if ( v104 )
          *v104 = 0;
      }
      return v89;
    }
  }
  else
  {
    v30 = a9;
  }
  v31 = *(unsigned __int16 *)(a1 + 2);
  v32 = (unsigned __int16)v31;
  LOWORD(v32) = v31 & 4;
  v33 = v31 & 0x8000;
  v94 = v32;
  if ( (v31 & 4) == 0 )
  {
    v34 = 0LL;
    v97 = 0LL;
    goto LABEL_18;
  }
  if ( v33 )
  {
    v35 = *(unsigned int *)(a1 + 16);
    if ( !(_DWORD)v35 )
    {
      v32 = v94;
      v34 = 0LL;
      v97 = 0LL;
      goto LABEL_18;
    }
    v34 = a1 + v35;
    v32 = v94;
  }
  else
  {
    v34 = *(_QWORD *)(a1 + 32);
  }
  v97 = v34;
LABEL_18:
  if ( (v31 & 0x10) != 0 )
  {
    if ( v33 )
    {
      v37 = *(unsigned int *)(a1 + 12);
      if ( (_DWORD)v37 )
        v36 = a1 + v37;
      else
        v36 = 0LL;
    }
    else
    {
      v36 = *(_QWORD *)(a1 + 24);
    }
  }
  else
  {
    v36 = 0LL;
  }
  v96 = v36;
  if ( !(_WORD)v32 || !v34 )
  {
    v30 |= a5;
    if ( (a5 & 0x2000000) != 0 )
      v30 = v99[3] | v30 & 0xFDFFFFFF;
    v87 = *(_DWORD *)(v20 + 200);
    if ( (v87 & 0x4000) == 0 )
      goto LABEL_175;
    if ( (v87 & 0x3000000) == 0x3000000 )
    {
      *(_BYTE *)(a16 + 23) = 1;
      *(_DWORD *)(a16 + 4) = v30;
      *(_BYTE *)(a16 + 21) = 1;
      *(_DWORD *)a16 = 0;
      goto LABEL_175;
    }
    *(_BYTE *)(a16 + 21) = 0;
    *(_DWORD *)(a16 + 4) = 0;
    goto LABEL_173;
  }
  if ( (v24 & 0x80000) != 0 )
  {
    if ( SepSinglePrivilegeCheck(SeTakeOwnershipPrivilege, v20, a10) )
    {
      ++v93;
      v30 |= 0x80000u;
      v91 = 1;
      v24 &= ~0x80000u;
      if ( !v24 )
        goto LABEL_175;
    }
    else if ( SepSinglePrivilegeCheck(SeRelabelPrivilege, v20, a10) )
    {
      ++v93;
      v30 |= 0x80000u;
      v90 = 1;
      v24 &= ~0x80000u;
      if ( !v24 )
        goto LABEL_175;
    }
    v23 = a5;
  }
  if ( !*(_WORD *)(v34 + 4) )
  {
    *(_DWORD *)(a16 + 12) = v24;
    Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(v32, v31);
    v38 = *(_DWORD *)(v20 + 200);
    if ( (v38 & 0x4000) != 0 )
      v30 &= ~*(_DWORD *)a16;
    if ( v24 == 0x2000000 )
    {
      if ( v30 )
      {
LABEL_39:
        v29 = 0;
        goto LABEL_40;
      }
    }
    else if ( !v24 && *(_DWORD *)a16 && v30 && (v38 & 0x6000) == 0 )
    {
      goto LABEL_39;
    }
LABEL_173:
    v29 = -1073741790;
    goto LABEL_45;
  }
  if ( a7 )
  {
    v22 = a7;
    v95 = a7;
  }
  else
  {
    v107 = 0LL;
    DWORD1(v107) = -1;
    a6 = &v106;
    v106 = 0LL;
    v108 = 0LL;
  }
  if ( (v23 & 0x2000000) == 0 && !a14 )
  {
    SepNormalAccessCheck(v24, v20, v102, v34, v36, v101, v100, v22, (__int64)a6, a7, 0, a15, a16);
    *(_DWORD *)(a16 + 12) = *((_DWORD *)a6 + 6);
    if ( *((_DWORD *)a6 + 6) )
      goto LABEL_96;
    v51 = *(_DWORD *)(v20 + 200);
    if ( (v51 & 0x10) != 0 )
    {
      if ( (v51 & 8) != 0 )
      {
        v49 = v99;
        v50 = v99[1] & ~(*v99 | v99[2]) | 0x10D0000u;
      }
      else
      {
        v50 = v99[3] | 0x1FFFFFu;
      }
      if ( ((unsigned int)v50 & a5) != 0 )
        SepNormalAccessCheck(v24 & v50, v20, v102, v97, v96, v101, v100, v22, (__int64)a6, a7, 1, a15, a16);
    }
    *(_DWORD *)(a16 + 12) = *((_DWORD *)a6 + 6);
    if ( *((_DWORD *)a6 + 6) )
      goto LABEL_96;
    IsEnabledDeviceUsageNoInline = Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(
                                     v50,
                                     v49);
    v53 = *(_DWORD *)(v20 + 200);
    if ( IsEnabledDeviceUsageNoInline )
    {
      if ( (*(_DWORD *)(v20 + 200) & 0x6000) == 0x2000 )
        goto LABEL_86;
      v54 = a5 | v24;
      if ( (v53 & 0x4000) == 0 )
      {
        if ( !*(_BYTE *)(a16 + 20) )
          goto LABEL_85;
LABEL_94:
        v55 = (*(_DWORD *)a16 | v54) & ~*(_DWORD *)(a16 + 4);
        goto LABEL_95;
      }
    }
    else
    {
      if ( (v53 & 0x2000) != 0 )
      {
LABEL_86:
        v30 |= a5;
        goto LABEL_175;
      }
      v54 = a5 | v24;
      if ( (v53 & 0x4000) == 0 )
      {
        if ( !*(_BYTE *)(a16 + 20) )
        {
LABEL_85:
          *((_DWORD *)a6 + 6) = 0;
          goto LABEL_86;
        }
        goto LABEL_94;
      }
    }
    v55 = (*(_DWORD *)a16 | v54) & ~(*(_DWORD *)(a16 + 4) | *(_DWORD *)(a16 + 8));
    if ( v55 && !*(_DWORD *)(a16 + 12) && (v53 & 0x3000000) == 0x3000000 )
    {
      *(_BYTE *)(a16 + 23) = 1;
      v55 = 0;
    }
LABEL_95:
    *((_DWORD *)a6 + 6) = v55;
    if ( !v55 )
      goto LABEL_86;
LABEL_96:
    v29 = -1073741790;
    v30 = 0;
    goto LABEL_97;
  }
  SepMaximumAccessCheck(v20, v102, v34, v36, v101, v100, v22, (__int64)a6, a7, 0, 0, a15, a16);
  v59 = *(_DWORD *)(v20 + 200);
  if ( (v59 & 0x10) != 0 )
  {
    if ( (v59 & 8) != 0 )
      v60 = v99[1] & ~(*v99 | v99[2]) | 0x10D0000;
    else
      v60 = v99[3] | 0x1FFFFF;
    SepMaximumAccessCheck(v20, v102, v97, v96, v101, v100, v22, (__int64)a6, a7, v60, 1, a15, a16);
  }
  v61 = *((_DWORD *)a6 + 7);
  v62 = Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(v58, v57);
  v63 = *(_DWORD *)(v20 + 200);
  if ( v62 )
  {
    if ( (v63 & 0x4000) != 0 )
    {
      v61 &= *(_DWORD *)(a16 + 4) | *(_DWORD *)(a16 + 8);
      if ( v61 != *((_DWORD *)a6 + 7) && (v63 & 0x3000000) == 0x3000000 && (!v61 || (a5 & 0x2000000) == 0) )
        goto LABEL_121;
      goto LABEL_125;
    }
    if ( (v63 & 0x2000) != 0 )
      goto LABEL_126;
LABEL_123:
    if ( !*(_BYTE *)(a16 + 20) )
      goto LABEL_126;
    v61 &= *(_DWORD *)(a16 + 4);
    goto LABEL_125;
  }
  if ( (v63 & 0x2000) != 0 )
    goto LABEL_126;
  if ( (v63 & 0x4000) == 0 )
    goto LABEL_123;
  v61 &= *(_DWORD *)(a16 + 4) | *(_DWORD *)(a16 + 8);
  if ( v61 != *((_DWORD *)a6 + 7) && (v63 & 0x3000000) == 0x3000000 )
  {
    if ( v61 )
    {
      if ( (a5 & 0x2000000) == 0 )
      {
        *(_BYTE *)(a16 + 23) = 1;
        v61 = *((_DWORD *)a6 + 7);
        goto LABEL_126;
      }
      goto LABEL_125;
    }
LABEL_121:
    *(_BYTE *)(a16 + 23) = 1;
    v61 = *((_DWORD *)a6 + 7);
    goto LABEL_126;
  }
LABEL_125:
  v30 &= ~*(_DWORD *)a16;
LABEL_126:
  if ( !a14 )
  {
    if ( (~(v61 | 0x2000000) & v24) == 0 )
    {
      v30 |= v61;
      goto LABEL_175;
    }
    goto LABEL_96;
  }
  v64 = 0;
  v65 = 0;
  v66 = v30 | a5;
  if ( (a5 & 0x2000000) != 0 )
    v66 = -33554433;
  v67 = (v30 | a5) & 0xFDFFFFFF;
  if ( (a5 & 0x2000000) == 0 )
    v67 = v30 | a5;
  if ( v95 )
  {
    v68 = (_DWORD *)a6 + 7;
    v69 = v95;
    v70 = a13;
    v71 = v95;
    v72 = (char *)((_BYTE *)v98 - (_BYTE *)a13);
    do
    {
      v73 = (v66 & (*v68 | v30)) == 0;
      v74 = v66 & (*v68 | v30);
      *(int *)((char *)v70 + (_QWORD)v72) = v74;
      if ( v73 )
      {
        *v70 = -1073741790;
        v65 = 1;
      }
      else if ( (~v74 & v67) != 0 )
      {
        *v70 = -1073741790;
        v65 = 1;
      }
      else
      {
        *v70 = 0;
        v64 = 1;
      }
      v68 += 12;
      ++v70;
      --v71;
    }
    while ( v71 );
  }
  else
  {
    v69 = 0;
  }
  if ( KeGetCurrentIrql() >= 2u
    || !v64
    || !v93
    || (v75 = v105, SepAssemblePrivileges(v93, v92, v91, v90, (__int64)v105), !v75)
    || *v75 )
  {
    v76 = 1;
    goto LABEL_161;
  }
  v76 = 0;
  v64 = 0;
  v65 = 1;
  v77 = 0;
  if ( v69 )
  {
    v78 = (char *)v98;
    if ( v69 >= 4 )
    {
      v79 = v69 - 1;
      if ( v98 > &a13[v79] || (char *)v98 + 4 * v79 < (char *)a13 )
      {
        v80 = v69 & 0xFFFFFFFC;
        do
        {
          v77 += 4;
          v81 = v77;
        }
        while ( v77 < (unsigned int)v80 );
        v82 = a13;
        for ( k = (unsigned __int64)(4 * v80) >> 2; k; --k )
          *v82++ = -1073741801;
        memset_0(v78, 0, 4 * v80);
        v77 = v81;
        if ( v81 >= v69 )
          goto LABEL_159;
        v78 = (char *)v98;
      }
    }
    v84 = &v78[4 * v77];
    v85 = v69 - v77;
    do
    {
      *(_DWORD *)&v84[(char *)a13 - v78] = -1073741801;
      *(_DWORD *)v84 = 0;
      v84 += 4;
      --v85;
    }
    while ( v85 );
LABEL_159:
    v76 = 0;
  }
LABEL_161:
  if ( v103 )
    *v103 = v64;
  if ( v104 )
    *v104 = v65;
  return v76;
}
