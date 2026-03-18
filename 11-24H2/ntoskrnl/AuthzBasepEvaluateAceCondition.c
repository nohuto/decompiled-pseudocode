/*
 * XREFs of AuthzBasepEvaluateAceCondition @ 0x1403450F0
 * Callers:
 *     SepNormalAccessCheck @ 0x140344500 (SepNormalAccessCheck.c)
 *     SepVerifyDesktopAppxPackageName @ 0x140355758 (SepVerifyDesktopAppxPackageName.c)
 *     SeAccessCheckWithHint @ 0x14035A620 (SeAccessCheckWithHint.c)
 *     SepFilterCheck @ 0x14035B6A0 (SepFilterCheck.c)
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140360470 (SepCommonAccessCheckEx.c)
 *     SepMaximumAccessCheckEx @ 0x140362354 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x14036292C (SepNormalAccessCheckEx.c)
 *     SepMaximumAccessCheck @ 0x140363250 (SepMaximumAccessCheck.c)
 *     SeExamineSacl @ 0x140889B70 (SeExamineSacl.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14091DB90 (SepAccessCheckAndAuditAlarm.c)
 *     SepExamineSaclEx @ 0x14091FD68 (SepExamineSaclEx.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1403442B0 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepIsValidExpression @ 0x1403461E8 (AuthzBasepIsValidExpression.c)
 *     AuthzBasepMemAlloc @ 0x140346440 (AuthzBasepMemAlloc.c)
 *     AuthzBasepEvaluateExpression @ 0x14034646C (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepOperandValueTypesCompatible @ 0x1403465FC (AuthzBasepOperandValueTypesCompatible.c)
 *     SepPotentialGlobalTableAttribute @ 0x1403592C8 (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14035C750 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepResetOperands @ 0x140437B80 (AuthzBasepResetOperands.c)
 *     AuthzBasepEvaluateAttribute @ 0x14045A510 (AuthzBasepEvaluateAttribute.c)
 *     AuthzBasepMemberOf @ 0x1404D8F04 (AuthzBasepMemberOf.c)
 *     AuthzBasepDeviceMemberOf @ 0x1404D9014 (AuthzBasepDeviceMemberOf.c)
 *     __report_rangecheckfailure @ 0x1404F51BC (__report_rangecheckfailure.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1404F721C (SepValidateAndCopyGlobalEntry.c)
 *     AuthzBasepComputeBitwise @ 0x140696ED8 (AuthzBasepComputeBitwise.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepEvaluateAceCondition(
        _DWORD *a1,
        void *a2,
        void *a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8,
        unsigned int a9,
        char a10,
        char a11,
        _DWORD *a12)
{
  _DWORD *v13; // rdi
  int SecurityAttributeAndValues; // r14d
  __int64 v15; // r13
  char *v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  PVOID *v19; // rsi
  unsigned int v20; // r12d
  unsigned int v21; // ebx
  unsigned __int8 *v22; // r15
  __int64 v23; // rdi
  unsigned int v24; // eax
  int v25; // r10d
  unsigned int v26; // ecx
  unsigned __int8 *v27; // rax
  __int64 v29; // rbx
  unsigned int v30; // r15d
  unsigned int v31; // ebx
  void *v32; // rsi
  __int64 v33; // r12
  PVOID *v34; // r14
  void *v35; // rax
  PVOID *v36; // rsi
  PVOID *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdi
  int v40; // eax
  int v41; // r14d
  __int64 v42; // rdi
  int v43; // ecx
  __int64 v44; // rax
  bool v45; // zf
  __int64 v46; // rdi
  _BYTE *v47; // rax
  int v48; // eax
  int v49; // eax
  PVOID v50; // rbx
  int v51; // eax
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rcx
  void *v55; // rax
  _BYTE v56[4]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v57[2]; // [rsp+34h] [rbp-CCh] BYREF
  int v58; // [rsp+38h] [rbp-C8h] BYREF
  char v59; // [rsp+3Ch] [rbp-C4h]
  char v60; // [rsp+3Dh] [rbp-C3h]
  _DWORD *v61; // [rsp+40h] [rbp-C0h]
  char v62; // [rsp+48h] [rbp-B8h]
  char v63; // [rsp+49h] [rbp-B7h]
  int v64; // [rsp+4Ch] [rbp-B4h]
  _DWORD *v65; // [rsp+50h] [rbp-B0h]
  __int128 v66; // [rsp+60h] [rbp-A0h] BYREF
  PVOID *v67; // [rsp+70h] [rbp-90h]
  __int64 v68; // [rsp+78h] [rbp-88h]
  __int64 v69; // [rsp+80h] [rbp-80h]
  __int128 v70; // [rsp+88h] [rbp-78h]
  __int128 v71; // [rsp+98h] [rbp-68h]
  __int64 v72; // [rsp+A8h] [rbp-58h]
  _DWORD *v73; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v74; // [rsp+B8h] [rbp-48h]
  void *v75; // [rsp+C0h] [rbp-40h]
  _BYTE *v76; // [rsp+C8h] [rbp-38h]
  PVOID v77[3]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 CurrentIrql; // [rsp+E8h] [rbp-18h]
  __int128 v79; // [rsp+F0h] [rbp-10h] BYREF
  PVOID P[2]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v81; // [rsp+110h] [rbp+10h]
  __int128 v82; // [rsp+120h] [rbp+20h]
  __int64 v83; // [rsp+130h] [rbp+30h]
  __int128 v84; // [rsp+138h] [rbp+38h] BYREF
  __int128 v85; // [rsp+148h] [rbp+48h]
  __int128 v86; // [rsp+158h] [rbp+58h]
  __int128 v87; // [rsp+168h] [rbp+68h]
  __int64 v88; // [rsp+178h] [rbp+78h]
  _DWORD v89[256]; // [rsp+180h] [rbp+80h]

  v13 = a12;
  v65 = a8;
  v77[2] = a3;
  SecurityAttributeAndValues = 0;
  v75 = a2;
  v73 = a1;
  LODWORD(v79) = 0;
  LODWORD(v15) = 0;
  *((_QWORD *)&v79 + 1) = 0LL;
  v77[1] = a4;
  v61 = a12;
  memset_0(P, 0, 0x80uLL);
  *(_WORD *)((char *)&v66 + 5) = 0;
  BYTE7(v66) = 0;
  memset_0((char *)&v66 + 8, 0, 0x48uLL);
  v58 = -1;
  v60 = 0;
  v59 = 0;
  v57[0] = 0;
  v56[0] = 0;
  v63 = 0;
  v62 = 0;
  v77[0] = 0LL;
  *a12 = -1;
  P[1] = 0LL;
  *((_QWORD *)&v85 + 1) = 0LL;
  if ( !a1 || (v17 = (__int64)v65) == 0 )
  {
    SecurityAttributeAndValues = -1073741811;
    goto LABEL_22;
  }
  v16 = (char *)a9;
  CurrentIrql = KeGetCurrentIrql();
  if ( a9 < 4 )
  {
    *a12 = 1;
    SecurityAttributeAndValues = -2147483601;
    goto LABEL_22;
  }
  if ( *v65 != 2020897377 )
  {
    *a12 = 1;
    SecurityAttributeAndValues = -2147483601;
    goto LABEL_22;
  }
  v19 = 0LL;
  LOWORD(v66) = 0;
  BYTE4(v70) = 0;
  v20 = 0;
  BYTE4(v66) = 0;
  v21 = 4;
  *((_QWORD *)&v66 + 1) = 0LL;
  v67 = 0LL;
  LODWORD(v68) = 0;
  v69 = 0LL;
  LOWORD(v70) = 0;
  *((_QWORD *)&v70 + 1) = 0LL;
  *(_QWORD *)&v71 = 0LL;
  DWORD2(v71) = 0;
  v72 = 0LL;
  v64 = 0;
  while ( 1 )
  {
    v18 = 0x140000000uLL;
    if ( v21 >= (unsigned int)v16 )
    {
      if ( (_DWORD)v15 == 1 )
      {
        v13 = v61;
        *v61 = v89[0];
        goto LABEL_22;
      }
      if ( !(_DWORD)v15 && v20 == 1 )
      {
        v49 = AuthzBasepEvaluateAttribute(v19, v16, v17, 0x140000000uLL);
        v13 = v61;
        *v61 = v49;
        goto LABEL_22;
      }
LABEL_70:
      v13 = v61;
      goto LABEL_22;
    }
    v22 = (unsigned __int8 *)(v17 + v21);
    v23 = *v22;
    v24 = *v22;
    if ( (_DWORD)v23 == 252 )
    {
      v29 = v21 + 1;
      if ( v20 == 2 )
      {
        if ( HIDWORD(v66) == 1 )
          goto LABEL_69;
        v51 = AuthzBasepEvaluateAttribute(v19, v16, v17, 0x140000000uLL);
        v58 = v51;
        if ( (unsigned int)v15 >= 0x100 )
          goto LABEL_119;
        v52 = (unsigned int)v15;
        LODWORD(v15) = v15 + 1;
        v45 = LOBYTE(v57[0]) == 0;
        v89[v52] = v51;
        if ( !v45 )
          ExFreePoolWithTag(v19[3], 0);
        v79 = v84;
        *(_OWORD *)P = v85;
        v81 = v86;
        v83 = v88;
        v82 = v87;
        v68 = *((_QWORD *)&v71 + 1);
        v67 = (PVOID *)&v79;
        v57[0] = HIBYTE(v57[0]);
        v66 = v70;
        v69 = v72;
        v70 = 0LL;
        v72 = 0LL;
        v71 = 0LL;
        memset_0(&v84, 0, 0x48uLL);
        v16 = (char *)a9;
        v20 = 1;
        v17 = (__int64)v65;
        v64 = 1;
      }
      if ( (unsigned int)((_DWORD)v16 - v29) < 4 )
        goto LABEL_69;
      v30 = *(_DWORD *)(v29 + v17);
      v31 = v29 + 4;
      if ( (unsigned int)v16 - v31 < v30 )
        goto LABEL_69;
      if ( v30 > 0xFFFE )
      {
        v13 = v61;
        SecurityAttributeAndValues = -1073741562;
        goto LABEL_22;
      }
      v32 = (void *)(v17 + v31);
      v17 = v20;
      v74 = v20;
      v76 = (char *)v57 + v20;
      v33 = 9LL * v20;
      *v76 = 0;
      v34 = &P[v33];
      *((_WORD *)v34 + 1) = v30;
      *(_WORD *)v34 = v30;
      v34[1] = v32;
      if ( !(_WORD)v30 || !v32 )
        goto LABEL_69;
      if ( ((unsigned __int8)v32 & 1) != 0 )
      {
        v35 = (void *)AuthzBasepMemAlloc((unsigned __int16)v30, v16, 1632068947LL, v18);
        v34[1] = v35;
        if ( !v35 )
        {
          v13 = v61;
          SecurityAttributeAndValues = -1073741801;
          goto LABEL_22;
        }
        memmove(v35, v32, v30);
        v17 = v74;
        *v76 = 1;
      }
      v36 = &P[v33 - 2];
      v55 = v73;
      LODWORD(P[v33 - 2]) = 6;
      v37 = &P[v33 - 1];
      P[v33 - 1] = v55;
      v38 = 9 * v17;
      *((_QWORD *)&v82 + v38 + 1) = 0LL;
      *(&v83 + v38) = 0LL;
      SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues((__int64)&P[v33 - 2]);
      if ( SecurityAttributeAndValues == -1073741275 )
      {
        if ( *(_DWORD *)v36 != 2
          || (SepSingletonGlobal[4] & 1) == 0
          || (v73[50] & 0x20000) != 0
          || !(unsigned __int8)SepPotentialGlobalTableAttribute((PCUNICODE_STRING)&P[v33])
          || v63 )
        {
          goto LABEL_42;
        }
        if ( !v62 )
        {
          v48 = SepValidateAndCopyGlobalEntry(v75, v77);
          SecurityAttributeAndValues = v48;
          if ( v48 < 0 )
          {
            v63 = 1;
            if ( v48 != -1073741275 )
            {
LABEL_71:
              if ( SecurityAttributeAndValues != -1073741275 )
                goto LABEL_70;
              goto LABEL_72;
            }
            goto LABEL_42;
          }
          v62 = 1;
        }
        *v37 = v77[0];
        SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues((__int64)&P[v33 - 2]);
        if ( SecurityAttributeAndValues == -1073741275 )
        {
          *v37 = v75;
LABEL_42:
          if ( (unsigned __int8)CurrentIrql >= 2u || *(_DWORD *)v36 != 2 )
          {
LABEL_72:
            SecurityAttributeAndValues = 0;
            v39 = 40 * v74;
            v47 = v76;
            *(_WORD *)((char *)&v66 + v39) = 0;
            *(_DWORD *)((char *)&v66 + v39 + 4) = 0;
            (&v67)[(unsigned __int64)v39 / 8] = 0LL;
            if ( *v47 )
            {
              ExFreePoolWithTag(P[v33 + 1], 0);
              if ( v74 >= 2 )
                _report_rangecheckfailure();
              *v76 = 0;
            }
            goto LABEL_47;
          }
          *(_DWORD *)v36 = 7;
          *v37 = 0LL;
          SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues((__int64)&P[v33 - 2]);
        }
      }
      if ( SecurityAttributeAndValues >= 0 )
      {
        v39 = 40 * v74;
        *(_WORD *)((char *)&v66 + v39) = *(_WORD *)((char *)&v81 + v33 * 8);
        *(_DWORD *)((char *)&v66 + v39 + 4) = *(_DWORD *)((char *)&v81 + v33 * 8 + 8);
        (&v67)[(unsigned __int64)v39 / 8] = v36;
LABEL_47:
        v40 = *(_DWORD *)v36;
        v20 = v64 + 1;
        *(_DWORD *)((char *)&v68 + v39) = 0;
        v21 = v30 + v31;
        *(__int64 *)((char *)&v69 + v39) = 0LL;
        *(_DWORD *)((char *)&v66 + v39 + 8) = 0;
        *(_DWORD *)((char *)&v66 + v39 + 12) = v40;
        v19 = v67;
        v64 = v20;
        goto LABEL_63;
      }
      goto LABEL_71;
    }
    if ( v24 == 162 )
    {
      ++v21;
      if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v23, &v66, v20, v56) )
        goto LABEL_69;
      if ( v20 == 1 )
      {
        v41 = AuthzBasepEvaluateAttribute(v19, v16, v17, v18);
        v58 = v41;
        if ( LOBYTE(v57[0]) )
        {
          ExFreePoolWithTag(v19[3], 0);
          v19[3] = 0LL;
          LOBYTE(v57[0]) = 0;
        }
        v19 = 0LL;
        if ( HIBYTE(v57[0]) )
        {
          v42 = v71;
          ExFreePoolWithTag(*(PVOID *)(v71 + 24), 0);
          *(_QWORD *)(v42 + 24) = 0LL;
          HIBYTE(v57[0]) = 0;
        }
        *(_QWORD *)&v71 = 0LL;
      }
      else
      {
        if ( !(_DWORD)v15 )
          goto LABEL_69;
        v15 = (unsigned int)(v15 - 1);
        v41 = v89[v15];
        v58 = v41;
      }
      if ( v41 == -1 )
        v43 = -1;
      else
        v43 = v41 == 0;
      goto LABEL_57;
    }
    if ( v24 == 142 )
    {
      ++v21;
      if ( (unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v23, &v66, v20, v56) )
      {
        if ( !v56[0] )
        {
          AuthzBasepEvaluateExpression((unsigned __int8)v23, &v66, &v58);
          v43 = v58;
          v19 = v67;
          if ( (unsigned __int8)(v23 + 114) <= 1u && v58 != -1 )
          {
            v43 = v58 == 0;
            v58 = v43;
          }
          goto LABEL_57;
        }
      }
      else
      {
        SecurityAttributeAndValues = -1073741406;
        if ( !v56[0] )
          goto LABEL_70;
      }
      v43 = -1;
      v58 = -1;
LABEL_57:
      if ( (unsigned int)v15 >= 0x100 )
        goto LABEL_119;
      v44 = (unsigned int)v15;
      SecurityAttributeAndValues = 0;
      LODWORD(v15) = v15 + 1;
      *((_QWORD *)&v66 + 1) = 0LL;
      v45 = LOBYTE(v57[0]) == 0;
      BYTE4(v66) = 0;
      v89[v44] = v43;
      LOWORD(v66) = 0;
      if ( !v45 )
      {
        ExFreePoolWithTag(v19[3], 0);
        v19[3] = 0LL;
        LOBYTE(v57[0]) = 0;
      }
      v19 = 0LL;
      v67 = 0LL;
      LODWORD(v68) = 0;
      v69 = 0LL;
      LOWORD(v70) = 0;
      BYTE4(v70) = 0;
      *((_QWORD *)&v70 + 1) = 0LL;
      if ( HIBYTE(v57[0]) )
      {
        v46 = v71;
        ExFreePoolWithTag(*(PVOID *)(v71 + 24), 0);
        *(_QWORD *)(v46 + 24) = 0LL;
        HIBYTE(v57[0]) = 0;
      }
      *(_QWORD *)&v71 = 0LL;
      v20 = 0;
      DWORD2(v71) = 0;
      v72 = 0LL;
      v64 = 0;
      goto LABEL_63;
    }
    if ( v24 != 81 )
    {
      if ( v24 <= 0xFB )
        __asm { jmp     rcx }
LABEL_69:
      SecurityAttributeAndValues = -1073741406;
      goto LABEL_70;
    }
    if ( v20 == 2 )
      break;
LABEL_12:
    v25 = *v22;
    v18 = a9 - v21;
    SecurityAttributeAndValues = 0;
    v17 = 1LL;
    *((_WORD *)&v66 + 20 * v20) = 0;
    v16 = (char *)&v66 + 40 * v20;
    v16[4] = 0;
    *((_DWORD *)v16 + 2) = 0;
    *((_DWORD *)v16 + 3) = 1;
    *((_QWORD *)v16 + 2) = 0LL;
    *((_DWORD *)v16 + 6) = 0;
    *((_QWORD *)v16 + 4) = 0LL;
    if ( v25 == 81 )
    {
LABEL_13:
      if ( (unsigned int)(v18 - 1) < 4 )
        goto LABEL_69;
      if ( (_BYTE)v25 == 16 )
      {
        *(_WORD *)v16 = 3;
      }
      else
      {
        *(_WORD *)v16 = 16;
        if ( (_BYTE)v25 == 80 )
          v16[4] = 1;
      }
      v26 = *(_DWORD *)(v22 + 1);
      *((_DWORD *)v16 + 6) = v26;
      if ( (int)v18 - 5 < v26 )
        goto LABEL_69;
      v27 = v22 + 5;
      LODWORD(v17) = v26 + 5;
    }
    else
    {
      switch ( v25 )
      {
        case 1:
        case 2:
        case 3:
        case 4:
          if ( (unsigned int)(v18 - 1) < 0xA )
            goto LABEL_69;
          *(_WORD *)v16 = 2;
          v27 = v22 + 1;
          *((_DWORD *)v16 + 6) = 10;
          LODWORD(v17) = 11;
          break;
        case 16:
        case 24:
        case 80:
          goto LABEL_13;
        default:
          goto LABEL_19;
      }
    }
    *((_QWORD *)v16 + 4) = v27;
LABEL_19:
    v19 = v67;
    ++v20;
    v21 += v17;
    v64 = v20;
LABEL_63:
    v16 = (char *)a9;
    v17 = (__int64)v65;
  }
  if ( HIDWORD(v66) == 1 )
    goto LABEL_69;
  v53 = AuthzBasepEvaluateAttribute(v19, v16, v17, 0x140000000uLL);
  v58 = v53;
  if ( (unsigned int)v15 < 0x100 )
  {
    v54 = (unsigned int)v15;
    LODWORD(v15) = v15 + 1;
    v45 = LOBYTE(v57[0]) == 0;
    v89[v54] = v53;
    if ( !v45 )
      ExFreePoolWithTag(v19[3], 0);
    v79 = v84;
    *(_OWORD *)P = v85;
    v81 = v86;
    v83 = v88;
    v82 = v87;
    v68 = *((_QWORD *)&v71 + 1);
    v67 = (PVOID *)&v79;
    v57[0] = HIBYTE(v57[0]);
    v66 = v70;
    v69 = v72;
    v70 = 0LL;
    v72 = 0LL;
    v71 = 0LL;
    memset_0(&v84, 0, 0x48uLL);
    v20 = 1;
    goto LABEL_12;
  }
LABEL_119:
  v13 = v61;
  SecurityAttributeAndValues = -1073740791;
LABEL_22:
  if ( LOBYTE(v57[0]) )
    ExFreePoolWithTag(P[1], 0);
  if ( HIBYTE(v57[0]) )
    ExFreePoolWithTag(*((PVOID *)&v85 + 1), 0);
  if ( v62 )
  {
    v50 = v77[0];
    if ( v77[0] )
    {
      AuthzBasepFreeSecurityAttributesList(v77[0], v16, v17, v18);
      ExFreePoolWithTag(v50, 0x74416553u);
    }
  }
  if ( SecurityAttributeAndValues < 0 )
    *v13 = -1;
  return (unsigned int)SecurityAttributeAndValues;
}
