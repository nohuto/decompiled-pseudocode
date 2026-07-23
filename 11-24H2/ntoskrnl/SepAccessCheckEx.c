/*
 * XREFs of SepAccessCheckEx @ 0x1404E81A8
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140465250 (SepCommonAccessCheckEx.c)
 * Callees:
 *     SepSinglePrivilegeCheck @ 0x14041571C (SepSinglePrivilegeCheck.c)
 *     AuthzBasepSetTypeListAccessReasons @ 0x140456724 (AuthzBasepSetTypeListAccessReasons.c)
 *     SepMaximumAccessCheckEx @ 0x1404E9F90 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x1404EB6BC (SepNormalAccessCheckEx.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1405E2C90 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SepAssemblePrivileges @ 0x140A0D308 (SepAssemblePrivileges.c)
 */

char __fastcall SepAccessCheckEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int128 *a6,
        unsigned int a7,
        _DWORD *a8,
        int a9,
        char a10,
        int *a11,
        _QWORD *a12,
        int *a13,
        __int64 a14,
        int a15,
        char a16,
        char a17,
        __int64 a18,
        __int64 a19,
        bool *a20)
{
  __int64 v21; // r10
  _DWORD *v25; // r9
  char v26; // r15
  int v27; // r11d
  unsigned int v28; // esi
  unsigned int v29; // ebp
  _QWORD *v30; // rax
  __int64 v31; // rcx
  unsigned __int8 v32; // al
  char v33; // r10
  __int64 v34; // r9
  int v35; // ecx
  int v36; // r8d
  int v37; // ebx
  int v38; // edx
  int v39; // edi
  __int64 v40; // rdx
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // rcx
  __int16 v44; // ax
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // r11d
  int v48; // ecx
  int v49; // r11d
  _DWORD *v50; // rdx
  __int64 v51; // rcx
  int v52; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  int v54; // esi
  bool v55; // zf
  int v56; // esi
  int v57; // ecx
  __int64 v58; // rdx
  __int64 v59; // rcx
  int v60; // eax
  int v61; // ecx
  int v62; // ebp
  int v63; // eax
  int v64; // ecx
  int v65; // ecx
  char v67; // [rsp+28h] [rbp-110h]
  int v68; // [rsp+50h] [rbp-E8h]
  char v69; // [rsp+70h] [rbp-C8h]
  char v70; // [rsp+71h] [rbp-C7h]
  char v71; // [rsp+72h] [rbp-C6h]
  int v72; // [rsp+74h] [rbp-C4h]
  __int64 v73; // [rsp+78h] [rbp-C0h]
  __int64 v74; // [rsp+80h] [rbp-B8h]
  int v75; // [rsp+98h] [rbp-A0h]
  __int128 v76; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v77; // [rsp+D0h] [rbp-68h]
  __int128 v78; // [rsp+E0h] [rbp-58h]

  v21 = 0LL;
  v25 = a8;
  v26 = 1;
  if ( !a4 )
    a4 = a3;
  v75 = a3;
  v72 = 0;
  v71 = 0;
  v70 = 0;
  v69 = 0;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v27 = a5;
  v28 = a5;
  if ( a7 )
  {
    v29 = a7;
  }
  else
  {
    DWORD1(v77) = -1;
    a6 = &v76;
    v29 = 1;
  }
  v30 = (_QWORD *)a6 + 5;
  v31 = v29;
  do
  {
    *v30 = a14;
    a14 += 128LL;
    v30 += 6;
    --v31;
  }
  while ( v31 );
  if ( (a5 & 0x1000000) != 0 )
  {
    v32 = SepSinglePrivilegeCheck(SeSecurityPrivilege.LowPart, a4, a10);
    v34 = (__int64)a6;
    v35 = 0x1000000;
    v36 = 8;
    if ( !v32 )
    {
      v37 = -1073741727;
      v38 = 0x100000;
LABEL_11:
      v39 = 0;
      AuthzBasepSetTypeListAccessReasons(v35, v38, v36, v34, v29, 0);
      goto LABEL_120;
    }
    v39 = a9 | 0x1000000;
    AuthzBasepSetTypeListAccessReasons(0x1000000, 0x200000, 8, (__int64)a6, v29, v33);
    v21 = 0LL;
    v72 = 1;
    v71 = 1;
    v28 = a5 & 0xFEFFFFFF;
    if ( (a5 & 0xFEFFFFFF) == 0 )
    {
LABEL_113:
      v37 = 0;
      if ( v39 )
        goto LABEL_114;
LABEL_111:
      v37 = -1073741790;
      goto LABEL_120;
    }
    v27 = a5;
    v25 = a8;
  }
  else
  {
    v39 = a9;
  }
  v40 = *(unsigned __int16 *)(a1 + 2);
  v43 = 0x8000LL;
  v44 = v40 & 0x8000;
  if ( (v40 & 4) != 0 )
  {
    if ( v44 )
    {
      v43 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v43 )
        v21 = a1 + v43;
    }
    else
    {
      v21 = *(_QWORD *)(a1 + 32);
    }
  }
  v73 = v21;
  if ( (v40 & 0x10) == 0 )
    goto LABEL_22;
  if ( !v44 )
  {
    v46 = *(_QWORD *)(a1 + 24);
    goto LABEL_27;
  }
  v45 = *(unsigned int *)(a1 + 12);
  if ( (_DWORD)v45 )
  {
    v46 = a1 + v45;
LABEL_27:
    v74 = v46;
    goto LABEL_28;
  }
LABEL_22:
  v74 = 0LL;
LABEL_28:
  if ( (v40 & 4) == 0 || !v21 )
  {
    v39 |= v27;
    if ( (v27 & 0x2000000) != 0 )
    {
      v39 = v25[3] | v39 & 0xFDFFFFFF;
      AuthzBasepSetTypeListAccessReasons(v39, 5242880, 0, (__int64)a6, v29, 0);
      v64 = *(_DWORD *)(a4 + 200);
      if ( (v64 & 0x4000) == 0 )
        goto LABEL_113;
      if ( (v64 & 0x3000000) != 0x3000000 )
      {
        v67 = 1;
LABEL_110:
        v39 = 0;
        AuthzBasepSetTypeListAccessReasons(0, 5242880, 0, (__int64)a6, v29, v67);
        *(_BYTE *)(a18 + 21) = 0;
        *(_DWORD *)(a18 + 4) = 0;
        goto LABEL_111;
      }
    }
    else
    {
      AuthzBasepSetTypeListAccessReasons(v27, 5242880, 0, (__int64)a6, v29, 0);
      v65 = *(_DWORD *)(a4 + 200);
      if ( (v65 & 0x4000) == 0 )
        goto LABEL_113;
      if ( (v65 & 0x3000000) != 0x3000000 )
      {
        v67 = 0;
        goto LABEL_110;
      }
    }
    *(_BYTE *)(a18 + 23) = 1;
    *(_DWORD *)(a18 + 4) = v39;
    *(_BYTE *)(a18 + 21) = 1;
    *(_DWORD *)a18 = 0;
    goto LABEL_113;
  }
  if ( (v28 & 0x80000) == 0 )
    goto LABEL_35;
  if ( SepSinglePrivilegeCheck(SeTakeOwnershipPrivilege, a4, a10) )
  {
    v39 |= v47;
    AuthzBasepSetTypeListAccessReasons(v47, 0x200000, 9, (__int64)a6, v29, 0);
    v70 = 1;
  }
  else
  {
    if ( !SepSinglePrivilegeCheck(SeRelabelPrivilege, a4, a10) )
      goto LABEL_35;
    v39 |= v49;
    AuthzBasepSetTypeListAccessReasons(v49, 0x200000, 32, (__int64)a6, v29, 0);
    v69 = 1;
  }
  ++v72;
  v28 &= ~0x80000u;
  if ( !v28 )
    goto LABEL_113;
  v21 = v73;
LABEL_35:
  if ( *(_WORD *)(v21 + 4) )
  {
    if ( (a5 & 0x2000000) == 0 )
    {
      SepNormalAccessCheckEx(v28, a4, v75, v21, v74, a19, 0, v29, (__int64)a6, a7, 0, a16, a17, a18);
      *(_DWORD *)(a18 + 12) = *((_DWORD *)a6 + 6);
      if ( *((_DWORD *)a6 + 6) )
      {
LABEL_50:
        v37 = -1073741790;
LABEL_119:
        v39 = 0;
        goto LABEL_120;
      }
      v52 = *(_DWORD *)(a4 + 200);
      if ( (v52 & 0x10) != 0 )
      {
        if ( (v52 & 8) != 0 )
        {
          v50 = a8;
          v51 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000u;
        }
        else
        {
          v51 = a8[3] | 0x1FFFFFu;
        }
        if ( ((unsigned int)v51 & a5) != 0 )
          SepNormalAccessCheckEx(v28 & v51, a4, v75, v73, v74, a19, 0, v29, (__int64)a6, a7, 1, a16, a17, a18);
      }
      *(_DWORD *)(a18 + 12) = *((_DWORD *)a6 + 6);
      if ( *((_DWORD *)a6 + 6) )
      {
LABEL_58:
        v37 = -1073741790;
        goto LABEL_119;
      }
      IsEnabledDeviceUsageNoInline = Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(
                                       v51,
                                       v50);
      LODWORD(v40) = *(_DWORD *)(a4 + 200);
      if ( IsEnabledDeviceUsageNoInline )
      {
        if ( (*(_DWORD *)(a4 + 200) & 0x6000) == 0x2000 )
          goto LABEL_72;
        v54 = a5 | v28;
        if ( (v40 & 0x4000) != 0 )
        {
          v54 = (*(_DWORD *)a18 | v54) & ~(*(_DWORD *)(a18 + 4) | *(_DWORD *)(a18 + 8));
          if ( !v54 )
            goto LABEL_70;
          if ( *(_DWORD *)(a18 + 12) )
            goto LABEL_70;
          LODWORD(v40) = v40 & 0x3000000;
          if ( (_DWORD)v40 != 50331648 )
            goto LABEL_70;
          *(_BYTE *)(a18 + 23) = 1;
        }
        else
        {
          if ( (v40 & 0x2000) != 0 )
          {
LABEL_70:
            *((_DWORD *)a6 + 6) = v54;
            v55 = v54 == 0;
            goto LABEL_71;
          }
          if ( *(_BYTE *)(a18 + 20) )
          {
            v54 = ~*(_DWORD *)(a18 + 4) & (*(_DWORD *)a18 | v54);
            goto LABEL_70;
          }
        }
        v54 = 0;
        goto LABEL_70;
      }
      if ( (v40 & 0x2000) != 0 )
        goto LABEL_72;
      v56 = a5 | v28;
      if ( (v40 & 0x4000) != 0 )
      {
        v57 = (*(_DWORD *)a18 | v56) & ~(*(_DWORD *)(a18 + 4) | *(_DWORD *)(a18 + 8));
        if ( !v57 )
          goto LABEL_82;
        if ( *(_DWORD *)(a18 + 12) )
          goto LABEL_82;
        LODWORD(v40) = v40 & 0x3000000;
        if ( (_DWORD)v40 != 50331648 )
          goto LABEL_82;
        *(_BYTE *)(a18 + 23) = 1;
      }
      else if ( *(_BYTE *)(a18 + 20) )
      {
        v57 = ~*(_DWORD *)(a18 + 4) & (*(_DWORD *)a18 | v56);
        goto LABEL_82;
      }
      v57 = 0;
LABEL_82:
      *((_DWORD *)a6 + 6) = v57;
      v55 = v57 == 0;
LABEL_71:
      if ( !v55 )
        goto LABEL_58;
LABEL_72:
      v39 |= a5;
      goto LABEL_113;
    }
    SepMaximumAccessCheckEx(a4, v75, v21, v74, a19, 0, v29, (__int64)a6, a7, 0, 0, a16, a17, a18);
    AuthzBasepSetTypeListAccessReasons(-1, 0x800000, 0, (__int64)a6, v29, 0);
    v60 = *(_DWORD *)(a4 + 200);
    if ( (v60 & 0x10) != 0 )
    {
      if ( (v60 & 8) != 0 )
        v61 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
      else
        v61 = a8[3] | 0x1FFFFF;
      LOBYTE(v68) = 1;
      SepMaximumAccessCheckEx(a4, v75, v73, v74, a19, 0, v29, (__int64)a6, a7, v61, v68, a16, a17, a18);
    }
    v62 = *((_DWORD *)a6 + 7);
    v63 = Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(v59, v58);
    LODWORD(v40) = *(_DWORD *)(a4 + 200);
    v41 = 0;
    if ( v63 )
    {
      if ( (v40 & 0x4000) != 0 )
      {
LABEL_90:
        v62 &= *(_DWORD *)(a18 + 4) | *(_DWORD *)(a18 + 8);
        if ( v62 != *((_DWORD *)a6 + 7) )
        {
          LODWORD(v40) = v40 & 0x3000000;
          if ( (_DWORD)v40 == 50331648 && !v62 )
          {
            *(_BYTE *)(a18 + 23) = 1;
            v62 = *((_DWORD *)a6 + 7);
            goto LABEL_101;
          }
        }
        goto LABEL_100;
      }
      if ( (v40 & 0x2000) != 0 )
        goto LABEL_101;
    }
    else
    {
      if ( (v40 & 0x2000) != 0 )
        goto LABEL_101;
      if ( (v40 & 0x4000) != 0 )
        goto LABEL_90;
    }
    if ( !*(_BYTE *)(a18 + 20) )
      goto LABEL_101;
    v62 &= *(_DWORD *)(a18 + 4);
LABEL_100:
    v39 &= ~*(_DWORD *)a18;
LABEL_101:
    if ( (~(v62 | 0x2000000) & v28) == 0 )
    {
      v39 |= v62;
      goto LABEL_113;
    }
    goto LABEL_50;
  }
  *(_DWORD *)(a18 + 12) = v28;
  Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(v43, v40);
  v48 = *(_DWORD *)(a4 + 200);
  if ( (v48 & 0x4000) != 0 )
    v39 &= ~*(_DWORD *)a18;
  if ( v28 != 0x2000000 )
  {
    if ( !v28 && *(_DWORD *)a18 && v39 && (v48 & 0x6000) == 0 )
      goto LABEL_40;
LABEL_47:
    v37 = -1073741790;
    v34 = (__int64)a6;
    v36 = 0;
    v38 = 6291456;
    v35 = -33554433;
    goto LABEL_11;
  }
  if ( !v39 )
    goto LABEL_47;
LABEL_40:
  v37 = 0;
LABEL_114:
  if ( KeGetCurrentIrql() < 2u )
  {
    if ( v72 )
    {
      LOBYTE(v42) = v69;
      LOBYTE(v41) = v70;
      LOBYTE(v40) = v71;
      SepAssemblePrivileges(v72, v40, v41, v42, (__int64)a12);
      if ( a12 )
      {
        if ( !*a12 )
        {
          v26 = 0;
          v37 = -1073741801;
          goto LABEL_119;
        }
      }
    }
  }
LABEL_120:
  *a13 = v37;
  *a11 = v39;
  if ( a20 )
    *a20 = v37 >= 0;
  return v26;
}
