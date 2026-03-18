/*
 * XREFs of AuthzBasepEvaluateAceCondition @ 0x140367C20
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x140291ED8 (SepVerifyDesktopAppxPackageName.c)
 *     SeAccessCheckWithHint @ 0x140362560 (SeAccessCheckWithHint.c)
 *     SepFilterCheck @ 0x140363580 (SepFilterCheck.c)
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     SepNormalAccessCheck @ 0x140366DE0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x140368FC0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x14036A718 (SepNormalAccessCheckEx.c)
 *     SepCommonAccessCheckEx @ 0x1403CD1A0 (SepCommonAccessCheckEx.c)
 *     SepMaximumAccessCheckEx @ 0x1403CEF04 (SepMaximumAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14092B360 (SepAccessCheckAndAuditAlarm.c)
 *     SepExamineSaclEx @ 0x14092D558 (SepExamineSaclEx.c)
 *     SeExamineSacl @ 0x14092EA20 (SeExamineSacl.c)
 * Callees:
 *     SepPotentialGlobalTableAttribute @ 0x140360FB8 (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140366160 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1403679D0 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepIsValidExpression @ 0x140369B90 (AuthzBasepIsValidExpression.c)
 *     AuthzBasepSupportSetOperation @ 0x140369D44 (AuthzBasepSupportSetOperation.c)
 *     AuthzBasepMemAlloc @ 0x140369D70 (AuthzBasepMemAlloc.c)
 *     AuthzBasepEvaluateExpression @ 0x140369DA0 (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepOperandValueTypesCompatible @ 0x140369F30 (AuthzBasepOperandValueTypesCompatible.c)
 *     AuthzBasepResetOperands @ 0x14043A6C0 (AuthzBasepResetOperands.c)
 *     AuthzBasepEvaluateAttribute @ 0x14045AEB0 (AuthzBasepEvaluateAttribute.c)
 *     AuthzBasepMemberOf @ 0x1404D9F54 (AuthzBasepMemberOf.c)
 *     AuthzBasepDeviceMemberOf @ 0x1404DA064 (AuthzBasepDeviceMemberOf.c)
 *     __report_rangecheckfailure @ 0x1404F290C (__report_rangecheckfailure.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1404F4924 (SepValidateAndCopyGlobalEntry.c)
 *     AuthzBasepComputeBitwise @ 0x14068BB88 (AuthzBasepComputeBitwise.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepEvaluateAceCondition(
        _DWORD *a1,
        void *a2,
        void *a3,
        void *a4,
        void *a5,
        void *a6,
        void *a7,
        _DWORD *a8,
        unsigned int a9,
        unsigned __int8 a10,
        unsigned __int8 a11,
        _DWORD *a12)
{
  int SecurityAttributeAndValues; // ebx
  unsigned int v14; // r15d
  PVOID *v15; // r11
  _DWORD *v16; // r9
  __int64 v17; // rdx
  int v18; // r13d
  PVOID *v19; // rsi
  unsigned int v20; // r12d
  __int64 v21; // r14
  unsigned __int8 *v22; // r15
  int v23; // edi
  int v24; // r10d
  int v25; // r9d
  int v26; // r8d
  char *v27; // rdx
  unsigned int v28; // ecx
  _DWORD *v29; // rsi
  __int64 v31; // r14
  unsigned int v32; // r15d
  unsigned int v33; // r14d
  unsigned __int64 v34; // r13
  char *v35; // rbx
  __int64 v36; // r12
  PVOID *v37; // rsi
  void *v38; // rax
  PVOID *v39; // rsi
  void *v40; // rax
  PVOID *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rdi
  int v44; // eax
  unsigned int i; // r8d
  int v46; // r8d
  int v47; // r9d
  __int64 v48; // r10
  int v49; // edi
  __int64 v50; // rbx
  unsigned int v51; // r15d
  int v52; // ecx
  __int64 v53; // rdi
  unsigned int j; // r9d
  int v55; // r9d
  int v56; // r10d
  __int64 v57; // r11
  int v58; // r8d
  int v59; // ecx
  bool v60; // zf
  int v61; // eax
  int v62; // ecx
  unsigned int v63; // r15d
  unsigned int v64; // r15d
  int v65; // r10d
  int v66; // eax
  int v67; // ecx
  int v68; // eax
  char v69; // al
  char v70; // al
  PVOID v71; // rdi
  int v72; // eax
  unsigned int v73; // edx
  int v74; // eax
  unsigned int v75; // edx
  int v76; // eax
  char v77; // al
  char v78; // al
  __int16 v79; // bx
  int v80; // ecx
  unsigned int v81; // r15d
  int v82; // eax
  unsigned int v83; // edx
  __int64 v84; // rax
  _WORD v85[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v86[4]; // [rsp+34h] [rbp-CCh] BYREF
  int v87; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v88; // [rsp+3Ch] [rbp-C4h]
  _DWORD *v89; // [rsp+40h] [rbp-C0h]
  char v90; // [rsp+48h] [rbp-B8h] BYREF
  char v91; // [rsp+49h] [rbp-B7h]
  char v92; // [rsp+4Ah] [rbp-B6h]
  char v93; // [rsp+4Bh] [rbp-B5h]
  int v94; // [rsp+4Ch] [rbp-B4h]
  __int128 v95; // [rsp+50h] [rbp-B0h] BYREF
  PVOID *v96; // [rsp+60h] [rbp-A0h]
  __int64 v97; // [rsp+68h] [rbp-98h]
  PVOID *v98; // [rsp+70h] [rbp-90h]
  __int128 v99; // [rsp+78h] [rbp-88h]
  __int128 v100; // [rsp+88h] [rbp-78h]
  PVOID *v101; // [rsp+98h] [rbp-68h]
  _DWORD *v102; // [rsp+A0h] [rbp-60h]
  _DWORD *v103; // [rsp+A8h] [rbp-58h]
  void *v104; // [rsp+B0h] [rbp-50h]
  PVOID v105; // [rsp+B8h] [rbp-48h] BYREF
  void *v106; // [rsp+C0h] [rbp-40h]
  void *v107; // [rsp+C8h] [rbp-38h]
  __int64 CurrentIrql; // [rsp+D0h] [rbp-30h]
  __int128 v109; // [rsp+E0h] [rbp-20h] BYREF
  PVOID P[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v111; // [rsp+100h] [rbp+0h]
  __int128 v112; // [rsp+110h] [rbp+10h]
  __int64 v113; // [rsp+120h] [rbp+20h]
  __int128 v114; // [rsp+128h] [rbp+28h] BYREF
  __int128 v115; // [rsp+138h] [rbp+38h]
  __int128 v116; // [rsp+148h] [rbp+48h]
  __int128 v117; // [rsp+158h] [rbp+58h]
  __int64 v118; // [rsp+168h] [rbp+68h]
  _DWORD v119[256]; // [rsp+170h] [rbp+70h]

  v102 = a8;
  v107 = a3;
  SecurityAttributeAndValues = 0;
  v104 = a2;
  v103 = a1;
  v88 = 0;
  v14 = 0;
  LODWORD(v109) = 0;
  *((_QWORD *)&v109 + 1) = 0LL;
  v106 = a4;
  v89 = a12;
  memset_0(P, 0, 0x80uLL);
  *(_WORD *)((char *)&v95 + 5) = 0;
  BYTE7(v95) = 0;
  memset_0((char *)&v95 + 8, 0, 0x48uLL);
  v87 = -1;
  v15 = 0LL;
  v85[0] = 0;
  v91 = 0;
  v90 = 0;
  v86[0] = 0;
  v93 = 0;
  v92 = 0;
  v105 = 0LL;
  *a12 = -1;
  P[1] = 0LL;
  *((_QWORD *)&v115 + 1) = 0LL;
  if ( !a1 || (v16 = v102) == 0LL )
  {
    SecurityAttributeAndValues = -1073741811;
    goto LABEL_106;
  }
  v17 = a9;
  CurrentIrql = KeGetCurrentIrql();
  if ( a9 < 4 )
  {
    *a12 = 1;
    SecurityAttributeAndValues = -2147483601;
LABEL_106:
    v29 = a12;
    goto LABEL_21;
  }
  if ( *v102 != 2020897377 )
  {
    *a12 = 1;
    SecurityAttributeAndValues = -2147483601;
    v29 = a12;
    goto LABEL_21;
  }
  LOWORD(v95) = 0;
  v18 = 0;
  BYTE4(v95) = 0;
  v19 = 0LL;
  *((_QWORD *)&v95 + 1) = 0LL;
  v20 = 0;
  v96 = 0LL;
  LODWORD(v21) = 4;
  LODWORD(v97) = 0;
  v98 = 0LL;
  LOWORD(v99) = 0;
  BYTE4(v99) = 0;
  *((_QWORD *)&v99 + 1) = 0LL;
  *(_QWORD *)&v100 = 0LL;
  DWORD2(v100) = 0;
  v101 = 0LL;
  v94 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v21 >= (unsigned int)v17 )
    {
      if ( v14 == 1 )
      {
        v29 = v89;
        *v89 = v119[0];
        goto LABEL_21;
      }
      if ( !v14 && v20 == 1 )
      {
        v68 = AuthzBasepEvaluateAttribute(v19);
        v29 = v89;
        *v89 = v68;
        goto LABEL_21;
      }
LABEL_62:
      v29 = v89;
      goto LABEL_21;
    }
    v22 = (unsigned __int8 *)v16 + (unsigned int)v21;
    v23 = *v22;
    if ( v23 == 252 )
      break;
    switch ( v23 )
    {
      case 162:
        LODWORD(v21) = v21 + 1;
        v86[0] = 0;
        for ( i = (unsigned int)v15; i < v20; i = v46 + 1 )
        {
          if ( !*((_DWORD *)&v95 + 10 * i + 3)
            || !(unsigned __int8)AuthzBasepSupportSetOperation((unsigned __int8)v23)
            && v47 != 1
            && *(_DWORD *)((char *)&v95 + v48 + 4) > 1u )
          {
            goto LABEL_61;
          }
        }
        if ( !(unsigned __int8)AuthzBasepSupportSetOperation((unsigned __int8)v23) && v20 == 2 || v20 == 2 )
          goto LABEL_61;
        if ( v20 == 1 )
        {
          if ( v18 == 1 )
            goto LABEL_61;
          v49 = AuthzBasepEvaluateAttribute(v19);
          v87 = v49;
          if ( LOBYTE(v85[0]) )
          {
            ExFreePoolWithTag(v19[3], 0);
            v15 = 0LL;
            v19[3] = 0LL;
            LOBYTE(v85[0]) = 0;
          }
          v19 = v15;
          if ( HIBYTE(v85[0]) )
          {
            v50 = v100;
            ExFreePoolWithTag(*(PVOID *)(v100 + 24), 0);
            v15 = 0LL;
            *(_QWORD *)(v50 + 24) = 0LL;
            HIBYTE(v85[0]) = 0;
          }
          v51 = v88;
          *(_QWORD *)&v100 = v15;
        }
        else
        {
          if ( !v88 )
            goto LABEL_61;
          v51 = v88 - 1;
          v49 = v119[v88 - 1];
          v87 = v49;
        }
        if ( v49 == -1 )
        {
          v52 = -1;
        }
        else if ( v49 )
        {
          v52 = (int)v15;
        }
        else
        {
          v52 = 1;
        }
        if ( v51 >= 0x100 )
        {
LABEL_266:
          v29 = v89;
          SecurityAttributeAndValues = -1073740791;
          goto LABEL_21;
        }
        v119[v51] = v52;
        goto LABEL_77;
      case 142:
LABEL_83:
        LODWORD(v21) = v21 + 1;
        v86[0] = 0;
        for ( j = (unsigned int)v15; j < v20; j = v55 + 1 )
        {
          if ( !*((_DWORD *)&v95 + 10 * j + 3) )
            goto LABEL_61;
          if ( !(unsigned __int8)AuthzBasepSupportSetOperation((unsigned __int8)v23)
            && v56 != 1
            && *(_DWORD *)((char *)&v95 + v57 + 4) > 1u )
          {
LABEL_257:
            v59 = -1;
            v86[0] = 1;
            v87 = -1;
LABEL_95:
            v15 = 0LL;
            goto LABEL_96;
          }
        }
        if ( !(unsigned __int8)AuthzBasepSupportSetOperation((unsigned __int8)v23)
          && v20 == 2
          && (v95 & 0xFFFB) != 0
          && HIDWORD(v99) == 1
          && BYTE4(v99) )
        {
          goto LABEL_61;
        }
        if ( v58 == 163 )
        {
LABEL_90:
          if ( v18 == 1 || v20 != 2 || ((_BYTE)v23 == 0x88 || (_BYTE)v23 == 0x8F) && HIDWORD(v99) == 1 && !BYTE4(v99) )
            goto LABEL_61;
        }
        else
        {
          switch ( v58 )
          {
            case 128:
            case 129:
            case 130:
            case 131:
            case 132:
            case 133:
            case 134:
            case 136:
            case 142:
            case 143:
              goto LABEL_90;
            case 135:
            case 141:
              if ( v18 == 1 || v20 != 1 )
                goto LABEL_61;
              if ( ((v18 - 3) & 0xFFFFFFFD) != 0 )
                goto LABEL_94;
              v29 = v89;
              SecurityAttributeAndValues = -1073741406;
              goto LABEL_21;
            case 137:
            case 138:
            case 139:
            case 140:
            case 144:
            case 145:
            case 146:
            case 147:
              if ( v20 != 1 )
                goto LABEL_61;
              if ( v18 != 1 && (_WORD)v95 != 5 )
                goto LABEL_257;
              goto LABEL_94;
            case 160:
            case 161:
              v83 = 0;
              break;
            default:
              goto LABEL_94;
          }
          while ( v83 < v20 )
          {
            if ( *((_DWORD *)&v95 + 10 * v83 + 3) == 1 )
              goto LABEL_61;
            ++v83;
          }
        }
LABEL_94:
        AuthzBasepEvaluateExpression((unsigned __int8)v23, &v95, &v87);
        v59 = v87;
        v19 = v96;
        if ( (unsigned __int8)(v23 + 114) > 1u )
          goto LABEL_95;
        v15 = 0LL;
        if ( v87 != -1 )
        {
          v59 = v87 == 0;
          v87 = v59;
        }
LABEL_96:
        v51 = v88;
        if ( v88 >= 0x100 )
          goto LABEL_266;
        v119[v88] = v59;
LABEL_77:
        v14 = v51 + 1;
        *((_QWORD *)&v95 + 1) = 0LL;
        v18 = (int)v15;
        BYTE4(v95) = 0;
        SecurityAttributeAndValues = (int)v15;
        LOWORD(v95) = (_WORD)v15;
        v88 = v14;
        if ( LOBYTE(v85[0]) )
        {
          ExFreePoolWithTag(v19[3], 0);
          v15 = 0LL;
          v19[3] = 0LL;
          LOBYTE(v85[0]) = 0;
        }
        v19 = v15;
        v96 = v15;
        LODWORD(v97) = (_DWORD)v15;
        v98 = v15;
        LOWORD(v99) = (_WORD)v15;
        BYTE4(v99) = 0;
        *((_QWORD *)&v99 + 1) = 0LL;
        if ( HIBYTE(v85[0]) )
        {
          v53 = v100;
          ExFreePoolWithTag(*(PVOID *)(v100 + 24), 0);
          v15 = 0LL;
          *(_QWORD *)(v53 + 24) = 0LL;
          HIBYTE(v85[0]) = 0;
        }
        *(_QWORD *)&v100 = v15;
        v20 = (unsigned int)v15;
        DWORD2(v100) = (_DWORD)v15;
        v101 = v15;
        v94 = (int)v15;
        goto LABEL_82;
      case 81:
LABEL_11:
        if ( v20 == 2 )
        {
          if ( v18 == 1 )
            goto LABEL_61;
          v74 = AuthzBasepEvaluateAttribute(v19);
          v75 = v88;
          v87 = v74;
          if ( v88 >= 0x100 )
            goto LABEL_266;
          v119[v88] = v74;
          v88 = v75 + 1;
          if ( LOBYTE(v85[0]) )
            ExFreePoolWithTag(v19[3], 0);
          v109 = v114;
          *(_OWORD *)P = v115;
          v111 = v116;
          v113 = v118;
          v112 = v117;
          v97 = *((_QWORD *)&v100 + 1);
          v96 = (PVOID *)&v109;
          v85[0] = HIBYTE(v85[0]);
          v95 = v99;
          v98 = v101;
          v99 = 0LL;
          v101 = 0LL;
          v100 = 0LL;
          memset_0(&v114, 0, 0x48uLL);
          v15 = 0LL;
          v20 = 1;
        }
        v24 = *v22;
        v25 = a9 - v21;
        SecurityAttributeAndValues = (int)v15;
        v26 = 1;
        *((_WORD *)&v95 + 20 * v20) = (_WORD)v15;
        v27 = (char *)&v95 + 40 * v20;
        v27[4] = 0;
        *((_DWORD *)v27 + 2) = (_DWORD)v15;
        *((_DWORD *)v27 + 3) = 1;
        *((_QWORD *)v27 + 2) = v15;
        *((_DWORD *)v27 + 6) = (_DWORD)v15;
        *((_QWORD *)v27 + 4) = v15;
        if ( v24 == 81 )
        {
LABEL_13:
          if ( (unsigned int)(v25 - 1) < 4 )
            goto LABEL_61;
          if ( (_BYTE)v24 == 16 )
          {
            *(_WORD *)v27 = 3;
          }
          else
          {
            *(_WORD *)v27 = 16;
            if ( (_BYTE)v24 == 80 )
              v27[4] = 1;
          }
          v28 = *(_DWORD *)(v22 + 1);
          *((_DWORD *)v27 + 6) = v28;
          if ( v25 - 5 < v28 )
            goto LABEL_61;
          *((_QWORD *)v27 + 4) = v22 + 5;
          v26 = v28 + 5;
LABEL_18:
          ++v20;
          LODWORD(v21) = v26 + v21;
        }
        else
        {
          switch ( v24 )
          {
            case 1:
            case 2:
            case 3:
            case 4:
              if ( (unsigned int)(v25 - 1) < 0xA )
                goto LABEL_61;
              *(_WORD *)v27 = 2;
              *((_QWORD *)v27 + 4) = v22 + 1;
              ++v20;
              *((_DWORD *)v27 + 6) = 10;
              LODWORD(v21) = v21 + 11;
              break;
            case 16:
            case 24:
            case 80:
              goto LABEL_13;
            default:
              goto LABEL_18;
          }
        }
        goto LABEL_53;
    }
    switch ( *v22 )
    {
      case 0u:
        while ( 1 )
        {
          v21 = (unsigned int)(v21 + 1);
          v60 = (_DWORD)v21 == (_DWORD)v17;
          if ( (unsigned int)v21 >= (unsigned int)v17 )
            break;
          if ( *((_BYTE *)v16 + v21) )
          {
            v60 = (_DWORD)v21 == (_DWORD)v17;
            break;
          }
        }
        if ( !v60 )
          goto LABEL_61;
        v14 = v88;
        continue;
      case 1u:
      case 2u:
      case 3u:
      case 4u:
      case 0x10u:
      case 0x18u:
      case 0x50u:
        goto LABEL_11;
      case 0x80u:
      case 0x81u:
      case 0x82u:
      case 0x83u:
      case 0x84u:
      case 0x85u:
      case 0x86u:
      case 0x88u:
      case 0x8Fu:
        goto LABEL_83;
      case 0x87u:
      case 0x8Du:
        LODWORD(v21) = v21 + 1;
        if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v23, &v95, v20, v86) )
          goto LABEL_61;
        v62 = v19 != 0LL;
        v87 = v62;
        if ( (_BYTE)v23 == 0x8D )
        {
          v62 = v19 == 0LL;
          v87 = v62;
        }
        goto LABEL_126;
      case 0x89u:
      case 0x8Bu:
      case 0x90u:
      case 0x92u:
        LODWORD(v21) = v21 + 1;
        if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v23, &v95, v20, v86) )
        {
          SecurityAttributeAndValues = -1073741406;
          if ( !v86[0] )
            goto LABEL_62;
LABEL_197:
          v62 = -1;
          v87 = -1;
          v76 = -1;
          goto LABEL_198;
        }
        if ( v86[0] )
        {
          v77 = v91;
        }
        else
        {
          v69 = (_BYTE)v23 == 0x89 || (_BYTE)v23 == 0x90;
          SecurityAttributeAndValues = AuthzBasepMemberOf(
                                         (unsigned int)&v95,
                                         (_DWORD)v103,
                                         a10,
                                         a11,
                                         v69,
                                         (__int64)&v90);
          v77 = v90;
          v91 = v90;
        }
        if ( SecurityAttributeAndValues < 0 )
          goto LABEL_197;
        if ( v77 )
        {
          v62 = 1;
          v87 = 1;
          v76 = 1;
        }
        else
        {
          v62 = 0;
          v87 = 0;
          v76 = 0;
        }
LABEL_198:
        if ( (((_BYTE)v23 + 112) & 0xFD) == 0 && v76 != -1 )
          goto LABEL_200;
        goto LABEL_126;
      case 0x8Au:
      case 0x8Cu:
      case 0x91u:
      case 0x93u:
        LODWORD(v21) = v21 + 1;
        if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v23, &v95, v20, v86) )
        {
          SecurityAttributeAndValues = -1073741406;
          if ( !v86[0] )
            goto LABEL_62;
LABEL_202:
          v62 = -1;
          v87 = -1;
          v76 = -1;
          goto LABEL_203;
        }
        if ( v86[0] )
        {
          v78 = v91;
        }
        else
        {
          v70 = (_BYTE)v23 == 0x8A || (_BYTE)v23 == 0x91;
          SecurityAttributeAndValues = AuthzBasepDeviceMemberOf(
                                         (unsigned int)&v95,
                                         (_DWORD)v103,
                                         a10,
                                         a11,
                                         v70,
                                         (__int64)&v90);
          v78 = v90;
          v91 = v90;
        }
        if ( SecurityAttributeAndValues < 0 )
          goto LABEL_202;
        if ( v78 )
        {
          v62 = 1;
          v87 = 1;
          v76 = 1;
        }
        else
        {
          v62 = 0;
          v87 = 0;
          v76 = 0;
        }
LABEL_203:
        if ( (((_BYTE)v23 + 111) & 0xFD) == 0 && v76 != -1 )
        {
LABEL_200:
          v62 = v76 == 0;
          v87 = v62;
        }
LABEL_126:
        v63 = v88;
        if ( v88 >= 0x100 )
          goto LABEL_266;
        v119[v88] = v62;
        goto LABEL_128;
      case 0xA0u:
      case 0xA1u:
        LODWORD(v21) = v21 + 1;
        if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v23, &v95, v20, v86) )
          goto LABEL_61;
        if ( v20 == 2 )
        {
          AuthzBasepEvaluateAttribute(v19);
          v66 = AuthzBasepEvaluateAttribute(v100);
          v63 = v88;
        }
        else
        {
          if ( v20 == 1 )
          {
            v82 = AuthzBasepEvaluateAttribute(v19);
            v64 = v88;
            v65 = v82;
          }
          else
          {
            if ( !v88 )
              goto LABEL_61;
            v64 = v88 - 1;
            v65 = v119[v88 - 1];
          }
          if ( !v64 )
          {
LABEL_61:
            SecurityAttributeAndValues = -1073741406;
            goto LABEL_62;
          }
          v63 = v64 - 1;
          v66 = v119[v63];
        }
        if ( (_BYTE)v23 == 0xA0 )
        {
          if ( !v65 || !v66 )
          {
LABEL_144:
            v67 = 0;
            v87 = 0;
            goto LABEL_145;
          }
          if ( v66 == -1 || v65 == -1 )
            goto LABEL_165;
        }
        else if ( v65 != 1 )
        {
          if ( v66 == -1 )
            goto LABEL_165;
          if ( v66 != 1 )
          {
            if ( v65 != -1 )
              goto LABEL_144;
LABEL_165:
            v67 = -1;
            goto LABEL_166;
          }
        }
        v67 = 1;
LABEL_166:
        v87 = v67;
LABEL_145:
        if ( v63 >= 0x100 )
          goto LABEL_266;
        v119[v63] = v67;
LABEL_128:
        SecurityAttributeAndValues = 0;
        v14 = v63 + 1;
        v88 = v14;
        AuthzBasepResetOperands(&v95, v85);
        v18 = HIDWORD(v95);
        v15 = 0LL;
        v19 = v96;
        v20 = 0;
        v94 = 0;
        break;
      case 0xA3u:
        LODWORD(v21) = v21 + 1;
        if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v23, &v95, v20, v86) )
        {
          SecurityAttributeAndValues = -1073741406;
          if ( !v86[0] )
            goto LABEL_62;
LABEL_245:
          v80 = -1;
          v87 = -1;
          goto LABEL_224;
        }
        if ( v86[0] )
          goto LABEL_245;
        v79 = v95;
        if ( v18 == 1 )
          v79 = v99;
        if ( !(unsigned __int8)AuthzBasepOperandValueTypesCompatible(&v95) || (_BYTE)v23 != 0xA3 || v79 != 2 )
        {
LABEL_223:
          v80 = 0;
          v87 = 0;
          goto LABEL_224;
        }
        v84 = AuthzBasepComputeBitwise(163LL, &v95);
        if ( v84 == -1 )
          goto LABEL_245;
        if ( !v84 )
          goto LABEL_223;
        v80 = 1;
        v87 = 1;
LABEL_224:
        v81 = v88;
        if ( v88 >= 0x100 )
          goto LABEL_266;
        v119[v88] = v80;
        SecurityAttributeAndValues = 0;
        v14 = v81 + 1;
        v88 = v14;
        AuthzBasepResetOperands(&v95, v85);
        v18 = HIDWORD(v95);
        v15 = 0LL;
        v19 = v96;
        break;
      case 0xF8u:
      case 0xF9u:
      case 0xFAu:
      case 0xFBu:
        goto LABEL_29;
      default:
        goto LABEL_61;
    }
LABEL_82:
    v16 = v102;
    v17 = a9;
  }
LABEL_29:
  v31 = (unsigned int)(v21 + 1);
  if ( v20 == 2 )
  {
    if ( v18 == 1 )
      goto LABEL_61;
    v72 = AuthzBasepEvaluateAttribute(v19);
    v73 = v88;
    v87 = v72;
    if ( v88 >= 0x100 )
      goto LABEL_266;
    v119[v88] = v72;
    v88 = v73 + 1;
    if ( LOBYTE(v85[0]) )
      ExFreePoolWithTag(v19[3], 0);
    v109 = v114;
    *(_OWORD *)P = v115;
    v111 = v116;
    v113 = v118;
    v112 = v117;
    v97 = *((_QWORD *)&v100 + 1);
    v96 = (PVOID *)&v109;
    v85[0] = HIBYTE(v85[0]);
    v95 = v99;
    v98 = v101;
    v99 = 0LL;
    v101 = 0LL;
    v100 = 0LL;
    memset_0(&v114, 0, 0x48uLL);
    v17 = a9;
    v20 = 1;
    v16 = v102;
    v94 = 1;
  }
  if ( (unsigned int)(v17 - v31) < 4 )
    goto LABEL_61;
  v32 = *(_DWORD *)((char *)v16 + v31);
  v33 = v31 + 4;
  if ( (unsigned int)v17 - v33 < v32 )
    goto LABEL_61;
  if ( v32 > 0xFFFE )
  {
    v29 = v89;
    SecurityAttributeAndValues = -1073741562;
    goto LABEL_21;
  }
  v34 = v20;
  v35 = (char *)v16 + v33;
  *((_BYTE *)v85 + v20) = 0;
  v36 = 9LL * v20;
  v37 = &P[v36];
  *((_WORD *)v37 + 1) = v32;
  *(_WORD *)v37 = v32;
  v37[1] = v35;
  if ( !(_WORD)v32 || !v35 )
    goto LABEL_61;
  if ( ((unsigned __int8)v35 & 1) == 0 )
  {
LABEL_38:
    v39 = &P[v36 - 2];
    switch ( (_BYTE)v23 )
    {
      case 0xF9:
        v40 = a5;
        if ( !a11 )
          v40 = v106;
        *(_DWORD *)v39 = 3;
        break;
      case 0xFB:
        v40 = a7;
        if ( !a11 )
          v40 = a6;
        *(_DWORD *)v39 = 5;
        break;
      case 0xFA:
        v40 = v107;
        *(_DWORD *)v39 = 4;
        break;
      case 0xFC:
        v40 = v103;
        *(_DWORD *)v39 = 6;
        break;
      default:
        v40 = v104;
        *(_DWORD *)v39 = 2;
        break;
    }
    P[v36 - 1] = v40;
    v41 = &P[v36 - 1];
    v42 = 9 * v34;
    *((_QWORD *)&v112 + v42 + 1) = 0LL;
    *(&v113 + v42) = 0LL;
    SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues((__int64)&P[v36 - 2]);
    if ( SecurityAttributeAndValues == -1073741275 )
    {
      if ( *(_DWORD *)v39 != 2
        || (SepSingletonGlobal[4] & 1) == 0
        || (v103[50] & 0x20000) != 0
        || !SepPotentialGlobalTableAttribute((PCUNICODE_STRING)&P[v36])
        || v93 )
      {
        goto LABEL_46;
      }
      if ( !v92 )
      {
        v61 = SepValidateAndCopyGlobalEntry(v104, &v105);
        SecurityAttributeAndValues = v61;
        if ( v61 < 0 )
        {
          v93 = 1;
          if ( v61 != -1073741275 )
          {
LABEL_98:
            if ( SecurityAttributeAndValues != -1073741275 )
              goto LABEL_62;
            goto LABEL_99;
          }
          goto LABEL_46;
        }
        v92 = 1;
      }
      *v41 = v105;
      SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues((__int64)&P[v36 - 2]);
      if ( SecurityAttributeAndValues == -1073741275 )
      {
        *v41 = v104;
LABEL_46:
        if ( (unsigned __int8)CurrentIrql >= 2u || *(_DWORD *)v39 != 2 )
        {
LABEL_99:
          v15 = 0LL;
          SecurityAttributeAndValues = 0;
          v43 = 40 * v34;
          *(_WORD *)((char *)&v95 + v43) = 0;
          *(_DWORD *)((char *)&v95 + v43 + 4) = 0;
          (&v96)[(unsigned __int64)v43 / 8] = 0LL;
          if ( !*((_BYTE *)v85 + v34) )
            goto LABEL_52;
          ExFreePoolWithTag(P[v36 + 1], 0);
          if ( v34 >= 2 )
            _report_rangecheckfailure();
          *((_BYTE *)v85 + v34) = 0;
LABEL_51:
          v15 = 0LL;
LABEL_52:
          v44 = *(_DWORD *)v39;
          v20 = v94 + 1;
          LODWORD(v21) = v32 + v33;
          *(_DWORD *)((char *)&v97 + v43) = 0;
          (&v98)[(unsigned __int64)v43 / 8] = 0LL;
          *(_DWORD *)((char *)&v95 + v43 + 8) = 0;
          *(_DWORD *)((char *)&v95 + v43 + 12) = v44;
LABEL_53:
          v14 = v88;
          v18 = HIDWORD(v95);
          v19 = v96;
          v94 = v20;
          goto LABEL_82;
        }
        *(_DWORD *)v39 = 7;
        *v41 = 0LL;
        SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues((__int64)&P[v36 - 2]);
      }
    }
    if ( SecurityAttributeAndValues >= 0 )
    {
      v43 = 40 * v34;
      *(_WORD *)((char *)&v95 + v43) = *(_WORD *)((char *)&v111 + v36 * 8);
      *(_DWORD *)((char *)&v95 + v43 + 4) = *(_DWORD *)((char *)&v111 + v36 * 8 + 8);
      (&v96)[(unsigned __int64)v43 / 8] = v39;
      goto LABEL_51;
    }
    goto LABEL_98;
  }
  v38 = (void *)AuthzBasepMemAlloc((unsigned __int16)v32, v17, 1632068947LL);
  v37[1] = v38;
  if ( v38 )
  {
    memmove(v38, v35, v32);
    *((_BYTE *)v85 + v34) = 1;
    goto LABEL_38;
  }
  v29 = v89;
  SecurityAttributeAndValues = -1073741801;
LABEL_21:
  if ( LOBYTE(v85[0]) )
    ExFreePoolWithTag(P[1], 0);
  if ( HIBYTE(v85[0]) )
    ExFreePoolWithTag(*((PVOID *)&v115 + 1), 0);
  if ( v92 )
  {
    v71 = v105;
    if ( v105 )
    {
      AuthzBasepFreeSecurityAttributesList(v105);
      ExFreePoolWithTag(v71, 0x74416553u);
    }
  }
  if ( SecurityAttributeAndValues < 0 )
    *v29 = -1;
  return (unsigned int)SecurityAttributeAndValues;
}
