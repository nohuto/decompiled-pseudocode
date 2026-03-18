/*
 * XREFs of SepAccessCheckEx @ 0x1403CE444
 * Callers:
 *     SepCommonAccessCheckEx @ 0x1403CD1A0 (SepCommonAccessCheckEx.c)
 * Callees:
 *     SepNormalAccessCheckEx @ 0x14036A718 (SepNormalAccessCheckEx.c)
 *     SepMaximumAccessCheckEx @ 0x1403CEF04 (SepMaximumAccessCheckEx.c)
 *     SepSinglePrivilegeCheck @ 0x1403CF6BC (SepSinglePrivilegeCheck.c)
 *     AuthzBasepSetTypeListAccessReasons @ 0x1404624B4 (AuthzBasepSetTypeListAccessReasons.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SepAssemblePrivileges @ 0x140A0A7E8 (SepAssemblePrivileges.c)
 */

char __fastcall SepAccessCheckEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int128 *a6,
        int a7,
        _DWORD *a8,
        unsigned int a9,
        char a10,
        unsigned int *a11,
        _QWORD *a12,
        int *a13,
        __int64 a14,
        int a15,
        char a16,
        char a17,
        __int64 a18,
        void **a19,
        bool *a20)
{
  __int64 v20; // r13
  __int64 v22; // r11
  __int64 v23; // rax
  char v25; // si
  __int64 v26; // r9
  unsigned int v27; // r15d
  _DWORD *v28; // r8
  unsigned int v29; // ebp
  __int64 v30; // rcx
  _QWORD *v31; // rax
  unsigned int v32; // edi
  int v33; // edx
  __int16 v34; // cx
  __int64 v35; // rax
  int v36; // r11d
  __int64 v37; // r10
  __int64 v38; // rdx
  int v39; // eax
  unsigned int v40; // eax
  int v41; // edx
  int v42; // ebx
  _QWORD *v44; // rdx
  __int64 v45; // r10
  int v46; // eax
  int v47; // ecx
  __int64 v48; // rax
  int v49; // ecx
  __int64 v50; // rax
  __int64 *v51; // r9
  __int64 v52; // r10
  __int64 v53; // r8
  int v54; // eax
  unsigned int v55; // ecx
  __int64 v56; // r10
  int v57; // eax
  int v58; // edx
  _QWORD *v59; // r10
  __int64 v60; // r9
  _DWORD *v61; // rdx
  int v62; // eax
  int v63; // ecx
  int v64; // r15d
  int v65; // ecx
  __int64 *v66; // r14
  __int64 v67; // rdx
  int v68; // eax
  unsigned int v69; // ecx
  int v70; // ecx
  int v71; // ecx
  __int64 v72; // r9
  int v73; // eax
  int v74; // ecx
  __int64 v75; // r8
  __int64 v76; // r10
  char v77; // r11
  int v78; // ecx
  int v79; // ecx
  char v80; // [rsp+70h] [rbp-C8h]
  char v81; // [rsp+71h] [rbp-C7h]
  char v82; // [rsp+72h] [rbp-C6h]
  int v83; // [rsp+74h] [rbp-C4h]
  __int64 v84; // [rsp+78h] [rbp-C0h]
  __int64 v85; // [rsp+80h] [rbp-B8h]
  __int128 v87; // [rsp+C8h] [rbp-70h] BYREF
  __int128 v88; // [rsp+D8h] [rbp-60h]
  __int128 v89; // [rsp+E8h] [rbp-50h]

  v20 = 0LL;
  v22 = a1;
  v23 = a4;
  v25 = 1;
  if ( !a4 )
    v23 = a3;
  LODWORD(v26) = a5;
  v27 = a5;
  v28 = a8;
  v83 = 0;
  v82 = 0;
  v80 = 0;
  v81 = 0;
  v84 = v23;
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  if ( a7 )
  {
    v29 = a7;
  }
  else
  {
    DWORD1(v88) = -1;
    a6 = &v87;
    v29 = 1;
  }
  v30 = v29;
  v31 = (_QWORD *)a6 + 5;
  do
  {
    *v31 = a14;
    a14 += 128LL;
    v31 += 6;
    --v30;
  }
  while ( v30 );
  if ( (a5 & 0x1000000) != 0 )
  {
    LOBYTE(v28) = a10;
    if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SepSinglePrivilegeCheck)(
                             SeSecurityPrivilege,
                             v84,
                             v28) )
    {
      v32 = 0;
      v42 = -1073741727;
      v60 = v29;
      do
      {
        v61 = (_DWORD *)*v59;
        v62 = 1;
        v63 = 0;
        if ( *v59 )
        {
          while ( v62 )
          {
            if ( (v62 & 0x1000000) != 0 && !v61[v63] )
              v61[v63] = 1048584;
            ++v63;
            v62 *= 2;
          }
        }
        v59 += 6;
        --v60;
      }
      while ( v60 );
      goto LABEL_32;
    }
    v32 = a9 | 0x1000000;
    v27 = a5 & 0xFEFFFFFF;
    v72 = v29;
    do
    {
      v28 = (_DWORD *)*v59;
      v73 = 1;
      v74 = 0;
      if ( *v59 )
      {
        while ( v73 )
        {
          if ( (v73 & 0x1000000) != 0 && !v28[v74] )
            v28[v74] = 2097160;
          ++v74;
          v73 *= 2;
        }
      }
      v59 += 6;
      --v72;
    }
    while ( v72 );
    LODWORD(v26) = a5;
    v82 = 1;
    v33 = 1;
    v83 = 1;
    if ( !v27 )
    {
      v42 = 0;
      LOBYTE(v28) = 0;
      goto LABEL_108;
    }
    v28 = a8;
  }
  else
  {
    v32 = a9;
    v33 = 0;
  }
  v34 = *(_WORD *)(v22 + 2);
  if ( (v34 & 4) != 0 )
  {
    if ( v34 >= 0 )
    {
      v20 = *(_QWORD *)(v22 + 32);
    }
    else
    {
      v35 = *(unsigned int *)(v22 + 16);
      if ( (_DWORD)v35 )
        v20 = v22 + v35;
    }
  }
  if ( (v34 & 0x10) == 0 )
    goto LABEL_14;
  if ( v34 >= 0 )
  {
    v48 = *(_QWORD *)(v22 + 24);
LABEL_43:
    v36 = 0;
    v85 = v48;
    goto LABEL_15;
  }
  v50 = *(unsigned int *)(v22 + 12);
  if ( (_DWORD)v50 )
  {
    v48 = v22 + v50;
    goto LABEL_43;
  }
LABEL_14:
  v36 = 0;
  v85 = 0LL;
LABEL_15:
  if ( (v34 & 4) == 0 || !v20 )
  {
    v32 |= v26;
    if ( (v26 & 0x2000000) != 0 )
    {
      v32 = v28[3] | v32 & 0xFDFFFFFF;
      v66 = (__int64 *)a6 + 5;
      v26 = v29;
      do
      {
        v67 = *v66;
        v68 = 1;
        v69 = 0;
        if ( *v66 )
        {
          while ( v68 )
          {
            if ( (v68 & v32) != 0 )
            {
              LODWORD(v28) = v69;
              if ( !*(_DWORD *)(v67 + 4LL * v69) )
                *(_DWORD *)(v67 + 4LL * v69) = 5242880;
            }
            ++v69;
            v68 *= 2;
          }
        }
        v66 += 6;
        --v26;
      }
      while ( v26 );
      v70 = *(_DWORD *)(v84 + 200);
      if ( (v70 & 0x4000) == 0 )
        goto LABEL_49;
      if ( (v70 & 0x3000000) != 0x3000000 )
      {
        *(_BYTE *)(a18 + 21) = 0;
        *(_DWORD *)(a18 + 4) = 0;
        goto LABEL_90;
      }
    }
    else
    {
      v44 = (_QWORD *)a6 + 5;
      v45 = v29;
      do
      {
        v28 = (_DWORD *)*v44;
        v46 = 1;
        v47 = 0;
        if ( *v44 )
        {
          while ( v46 )
          {
            if ( (v46 & (unsigned int)v26) != 0 )
            {
              if ( !v28[v47] )
                v28[v47] = 5242880;
              LODWORD(v26) = a5;
            }
            ++v47;
            v46 *= 2;
          }
        }
        v44 += 6;
        --v45;
      }
      while ( v45 );
      v49 = *(_DWORD *)(v84 + 200);
      if ( (v49 & 0x4000) == 0 )
        goto LABEL_49;
      if ( (v49 & 0x3000000) != 0x3000000 )
      {
        v32 = 0;
        AuthzBasepSetTypeListAccessReasons(0, 5242880, 0, (_DWORD)a6, v29, 0);
        *(_BYTE *)(a18 + 21) = 0;
        *(_DWORD *)(a18 + 4) = 0;
        goto LABEL_139;
      }
    }
    *(_BYTE *)(a18 + 23) = 1;
    *(_DWORD *)(a18 + 4) = v32;
    *(_BYTE *)(a18 + 21) = 1;
    *(_DWORD *)a18 = 0;
LABEL_49:
    LOBYTE(v28) = 0;
    LOBYTE(v26) = 0;
    goto LABEL_28;
  }
  v37 = v84;
  if ( (v27 & 0x80000) == 0 )
  {
LABEL_18:
    LOBYTE(v28) = 0;
    LOBYTE(v26) = 0;
    goto LABEL_19;
  }
  LOBYTE(v28) = a10;
  if ( (unsigned __int8)SepSinglePrivilegeCheck(SeTakeOwnershipPrivilege, v84, v28) )
  {
    v32 |= 0x80000u;
    AuthzBasepSetTypeListAccessReasons(0x80000, 0x200000, 9, (_DWORD)a6, v29, v77);
    v36 = 0;
    v33 = v83 + 1;
    v80 = 1;
    ++v83;
    LOBYTE(v28) = 1;
    v27 &= ~0x80000u;
    if ( v27 )
    {
      v37 = v84;
      LOBYTE(v26) = 0;
      goto LABEL_19;
    }
    v42 = 0;
LABEL_108:
    LOBYTE(v26) = 0;
    goto LABEL_29;
  }
  LOBYTE(v75) = a10;
  if ( !(unsigned __int8)SepSinglePrivilegeCheck(SeRelabelPrivilege, v76, v75) )
  {
    v33 = v83;
    goto LABEL_18;
  }
  v32 |= 0x80000u;
  AuthzBasepSetTypeListAccessReasons(0x80000, 0x200000, 32, (_DWORD)a6, v29, v36);
  v36 = 0;
  v33 = v83 + 1;
  v81 = 1;
  ++v83;
  LOBYTE(v26) = 1;
  v27 &= ~0x80000u;
  if ( v27 )
  {
    v37 = v84;
    LOBYTE(v28) = 0;
LABEL_19:
    if ( *(_WORD *)(v20 + 4) != (_WORD)v36 )
    {
      if ( (a5 & 0x2000000) != 0 )
      {
        SepMaximumAccessCheckEx(v37, a3, v20, v85, (__int64)a19, v36, v29, (__int64)a6, a7, v36, v36, a16, a17, a18);
        v51 = (__int64 *)a6 + 5;
        v52 = v29;
        do
        {
          v53 = *v51;
          v54 = 1;
          v55 = 0;
          if ( *v51 )
          {
            while ( v54 )
            {
              if ( !*(_DWORD *)(v53 + 4LL * v55) )
                *(_DWORD *)(v53 + 4LL * v55) = 0x800000;
              ++v55;
              v54 *= 2;
            }
          }
          v51 += 6;
          --v52;
        }
        while ( v52 );
        v56 = v84;
        v57 = *(_DWORD *)(v84 + 200);
        if ( (v57 & 0x10) != 0 )
        {
          if ( (v57 & 8) != 0 )
            v79 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
          else
            v79 = a8[3] | 0x1FFFFF;
          SepMaximumAccessCheckEx(v84, a3, v20, v85, (__int64)a19, 0, v29, (__int64)a6, a7, v79, 1, a16, a17, a18);
          v56 = v84;
        }
        LODWORD(v28) = *(_DWORD *)(v56 + 200);
        LODWORD(v26) = *((_DWORD *)a6 + 7);
        v58 = v26;
        if ( ((unsigned __int16)v28 & 0x2000) == 0 )
        {
          if ( ((unsigned __int16)v28 & 0x4000) != 0 )
          {
            v58 = (*(_DWORD *)(a18 + 4) | *(_DWORD *)(a18 + 8)) & v26;
            if ( v58 == (_DWORD)v26 || (LODWORD(v28) = (unsigned int)v28 & 0x3000000, (_DWORD)v28 != 50331648) || v58 )
            {
              v32 &= ~*(_DWORD *)a18;
            }
            else
            {
              *(_BYTE *)(a18 + 23) = 1;
              v58 = *((_DWORD *)a6 + 7);
            }
          }
          else if ( *(_BYTE *)(a18 + 20) )
          {
            v58 = *(_DWORD *)(a18 + 4) & v26;
            v32 &= ~*(_DWORD *)a18;
          }
        }
        if ( (~(v58 | 0x2000000) & v27) == 0 )
        {
          v32 |= v58;
          goto LABEL_27;
        }
      }
      else
      {
        SepNormalAccessCheckEx(v27, v37, a3, v20, v85, a19, v36, v29, (__int64)a6, a7, v36, a16, a17, a18);
        *(_DWORD *)(a18 + 12) = *((_DWORD *)a6 + 6);
        if ( *((_DWORD *)a6 + 6) )
        {
          v42 = -1073741790;
LABEL_120:
          v32 = 0;
          goto LABEL_32;
        }
        v38 = v84;
        v39 = *(_DWORD *)(v84 + 200);
        if ( (v39 & 0x10) != 0 )
        {
          if ( (v39 & 8) != 0 )
            v71 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
          else
            v71 = a8[3] | 0x1FFFFF;
          v40 = a5;
          if ( (v71 & a5) != 0 )
          {
            SepNormalAccessCheckEx(v27 & v71, v84, a3, v20, v85, a19, 0, v29, (__int64)a6, a7, 1u, a16, a17, a18);
            v40 = a5;
            v38 = v84;
          }
        }
        else
        {
          v40 = a5;
        }
        LODWORD(v28) = *((_DWORD *)a6 + 6);
        *(_DWORD *)(a18 + 12) = (_DWORD)v28;
        if ( !*((_DWORD *)a6 + 6) )
        {
          v41 = *(_DWORD *)(v38 + 200);
          if ( (v41 & 0x2000) != 0 )
          {
LABEL_26:
            v32 |= v40;
LABEL_27:
            LOBYTE(v28) = v80;
            LOBYTE(v26) = v81;
LABEL_28:
            v33 = v83;
            v42 = 0;
            goto LABEL_29;
          }
          v64 = v40 | v27;
          if ( (v41 & 0x4000) != 0 )
          {
            v65 = (*(_DWORD *)a18 | v64) & ~(*(_DWORD *)(a18 + 4) | *(_DWORD *)(a18 + 8));
            if ( v65 && !(_DWORD)v28 )
            {
              v40 = a5;
              if ( (v41 & 0x3000000) != 0x3000000 )
              {
LABEL_77:
                *((_DWORD *)a6 + 6) = v65;
                if ( !v65 )
                  goto LABEL_26;
                goto LABEL_90;
              }
              *(_BYTE *)(a18 + 23) = 1;
LABEL_96:
              v65 = 0;
              goto LABEL_77;
            }
          }
          else
          {
            if ( !*(_BYTE *)(a18 + 20) )
              goto LABEL_96;
            v65 = ~*(_DWORD *)(a18 + 4) & (*(_DWORD *)a18 | v64);
          }
          v40 = a5;
          goto LABEL_77;
        }
      }
LABEL_90:
      v42 = -1073741790;
      goto LABEL_120;
    }
    *(_DWORD *)(a18 + 12) = v27;
    v78 = *(_DWORD *)(v37 + 200);
    if ( (v78 & 0x4000) != 0 )
      v32 &= ~*(_DWORD *)a18;
    if ( v27 == 0x2000000 )
    {
      if ( v32 )
      {
LABEL_145:
        v42 = 0;
        goto LABEL_30;
      }
    }
    else if ( !v27 && *(_DWORD *)a18 && v32 && (v78 & 0x6000) == 0 )
    {
      goto LABEL_145;
    }
    v32 = 0;
    v42 = -1073741790;
    AuthzBasepSetTypeListAccessReasons(-33554433, 6291456, 0, (_DWORD)a6, v29, 0);
    goto LABEL_32;
  }
  v42 = 0;
  LOBYTE(v28) = 0;
LABEL_29:
  if ( !v32 )
  {
LABEL_139:
    v42 = -1073741790;
    goto LABEL_32;
  }
LABEL_30:
  if ( KeGetCurrentIrql() < 2u )
  {
    if ( v33 )
    {
      LOBYTE(v33) = v82;
      SepAssemblePrivileges(v83, v33, (_DWORD)v28, v26, (__int64)a12);
      if ( a12 )
      {
        if ( !*a12 )
        {
          v25 = 0;
          v42 = -1073741801;
          goto LABEL_120;
        }
      }
    }
  }
LABEL_32:
  *a13 = v42;
  *a11 = v32;
  if ( a20 )
    *a20 = v42 >= 0;
  return v25;
}
