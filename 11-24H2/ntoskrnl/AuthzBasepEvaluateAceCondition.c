/*
 * XREFs of AuthzBasepEvaluateAceCondition @ 0x140323B60
 * Callers:
 *     SeAccessCheckWithHint @ 0x1403B6970 (SeAccessCheckWithHint.c)
 *     SepFilterCheck @ 0x1403B9AB0 (SepFilterCheck.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1403BAF3C (SepVerifyDesktopAppxPackageName.c)
 *     SeAccessCheckByType @ 0x14042DC70 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140465250 (SepCommonAccessCheckEx.c)
 *     SepMaximumAccessCheck @ 0x1404E8A30 (SepMaximumAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x1404E9F90 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheck @ 0x1404EA720 (SepNormalAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x1404EB6BC (SepNormalAccessCheckEx.c)
 *     SeExamineSacl @ 0x14088DA20 (SeExamineSacl.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 *     SepExamineSaclEx @ 0x140A19D34 (SepExamineSaclEx.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x140323790 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepIsValidExpression @ 0x140324ADC (AuthzBasepIsValidExpression.c)
 *     AuthzBasepMemAlloc @ 0x140324D30 (AuthzBasepMemAlloc.c)
 *     AuthzBasepEvaluateExpression @ 0x140324EE0 (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepOperandValueTypesCompatible @ 0x140325070 (AuthzBasepOperandValueTypesCompatible.c)
 *     SepPotentialGlobalTableAttribute @ 0x1403B86D8 (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1403B95E0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepResetOperands @ 0x14042A600 (AuthzBasepResetOperands.c)
 *     AuthzBasepEvaluateAttribute @ 0x14044F960 (AuthzBasepEvaluateAttribute.c)
 *     AuthzBasepMemberOf @ 0x1404D2354 (AuthzBasepMemberOf.c)
 *     AuthzBasepDeviceMemberOf @ 0x1404D2464 (AuthzBasepDeviceMemberOf.c)
 *     __report_rangecheckfailure @ 0x1404F2ABC (__report_rangecheckfailure.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1404F4AFC (SepValidateAndCopyGlobalEntry.c)
 *     AuthzBasepComputeBitwise @ 0x140697F58 (AuthzBasepComputeBitwise.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  _DWORD *v13; // rdi
  int SecurityAttributeAndValues; // r14d
  __int64 v15; // r13
  char *v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  PVOID *v19; // rsi
  unsigned int v20; // r12d
  __int64 v21; // rbx
  unsigned __int8 *v22; // r15
  int v23; // edi
  int v24; // r10d
  unsigned int v25; // ecx
  unsigned __int8 *v26; // rax
  __int64 v28; // rbx
  unsigned int v29; // r15d
  unsigned int v30; // ebx
  void *v31; // rsi
  __int64 v32; // r12
  PVOID *v33; // r14
  void *v34; // rax
  PVOID *v35; // rsi
  void *v36; // rax
  PVOID *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdi
  int v40; // eax
  int v41; // r14d
  __int64 v42; // rdi
  int v43; // ecx
  __int64 v44; // rax
  __int64 v45; // rdi
  _BYTE *v46; // rax
  bool v47; // zf
  int v48; // eax
  int v49; // ecx
  __int64 v50; // rax
  int v51; // r10d
  int v52; // eax
  int v53; // eax
  PVOID v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  char v58; // al
  char v59; // al
  int v60; // eax
  __int64 v61; // rcx
  int v62; // eax
  __int64 v63; // rcx
  int v64; // eax
  char v65; // di
  int v66; // eax
  char v67; // r15
  int v68; // eax
  char v69; // r15
  __int16 v70; // si
  int v71; // ecx
  __int64 v72; // rax
  __int64 v73; // rax
  _BYTE v74[4]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v75[2]; // [rsp+34h] [rbp-CCh] BYREF
  int v76; // [rsp+38h] [rbp-C8h] BYREF
  char v77; // [rsp+3Ch] [rbp-C4h] BYREF
  char v78; // [rsp+3Dh] [rbp-C3h]
  _DWORD *v79; // [rsp+40h] [rbp-C0h]
  char v80; // [rsp+48h] [rbp-B8h]
  char v81; // [rsp+49h] [rbp-B7h]
  int v82; // [rsp+4Ch] [rbp-B4h]
  _DWORD *v83; // [rsp+50h] [rbp-B0h]
  __int128 v84; // [rsp+60h] [rbp-A0h] BYREF
  PVOID *v85; // [rsp+70h] [rbp-90h]
  __int64 v86; // [rsp+78h] [rbp-88h]
  __int64 v87; // [rsp+80h] [rbp-80h]
  __int128 v88; // [rsp+88h] [rbp-78h]
  __int128 v89; // [rsp+98h] [rbp-68h]
  __int64 v90; // [rsp+A8h] [rbp-58h]
  _DWORD *v91; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v92; // [rsp+B8h] [rbp-48h]
  void *v93; // [rsp+C0h] [rbp-40h]
  _BYTE *v94; // [rsp+C8h] [rbp-38h]
  PVOID v95; // [rsp+D0h] [rbp-30h] BYREF
  void *v96; // [rsp+D8h] [rbp-28h]
  void *v97; // [rsp+E0h] [rbp-20h]
  __int64 CurrentIrql; // [rsp+E8h] [rbp-18h]
  __int128 v99; // [rsp+F0h] [rbp-10h] BYREF
  PVOID P[2]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v101; // [rsp+110h] [rbp+10h]
  __int128 v102; // [rsp+120h] [rbp+20h]
  __int64 v103; // [rsp+130h] [rbp+30h]
  __int128 v104; // [rsp+138h] [rbp+38h] BYREF
  __int128 v105; // [rsp+148h] [rbp+48h]
  __int128 v106; // [rsp+158h] [rbp+58h]
  __int128 v107; // [rsp+168h] [rbp+68h]
  __int64 v108; // [rsp+178h] [rbp+78h]
  _DWORD v109[256]; // [rsp+180h] [rbp+80h]

  v13 = a12;
  v83 = a8;
  v97 = a3;
  SecurityAttributeAndValues = 0;
  v93 = a2;
  v91 = a1;
  LODWORD(v99) = 0;
  LODWORD(v15) = 0;
  *((_QWORD *)&v99 + 1) = 0LL;
  v96 = a4;
  v79 = a12;
  memset_0(P, 0, 0x80uLL);
  *(_WORD *)((char *)&v84 + 5) = 0;
  BYTE7(v84) = 0;
  memset_0((char *)&v84 + 8, 0, 0x48uLL);
  v76 = -1;
  v78 = 0;
  v77 = 0;
  v75[0] = 0;
  v74[0] = 0;
  v81 = 0;
  v80 = 0;
  v95 = 0LL;
  *a12 = -1;
  P[1] = 0LL;
  *((_QWORD *)&v105 + 1) = 0LL;
  if ( !a1 || (v17 = (__int64)v83) == 0 )
  {
    SecurityAttributeAndValues = -1073741811;
    goto LABEL_23;
  }
  v16 = (char *)a9;
  CurrentIrql = KeGetCurrentIrql();
  if ( a9 < 4 )
  {
    *a12 = 1;
    SecurityAttributeAndValues = -2147483601;
    goto LABEL_23;
  }
  if ( *v83 != 2020897377 )
  {
    *a12 = 1;
    SecurityAttributeAndValues = -2147483601;
    goto LABEL_23;
  }
  v19 = 0LL;
  LOWORD(v84) = 0;
  BYTE4(v88) = 0;
  v20 = 0;
  BYTE4(v84) = 0;
  LODWORD(v21) = 4;
  *((_QWORD *)&v84 + 1) = 0LL;
  v85 = 0LL;
  LODWORD(v86) = 0;
  v87 = 0LL;
  LOWORD(v88) = 0;
  *((_QWORD *)&v88 + 1) = 0LL;
  *(_QWORD *)&v89 = 0LL;
  DWORD2(v89) = 0;
  v90 = 0LL;
  v82 = 0;
  while ( 1 )
  {
    v18 = 0x140000000uLL;
LABEL_7:
    if ( (unsigned int)v21 >= (unsigned int)v16 )
    {
      if ( (_DWORD)v15 == 1 )
      {
        v13 = v79;
        *v79 = v109[0];
        goto LABEL_23;
      }
      if ( !(_DWORD)v15 && v20 == 1 )
      {
        v53 = AuthzBasepEvaluateAttribute(v19, v16, v17, 0x140000000uLL);
        v13 = v79;
        *v79 = v53;
        goto LABEL_23;
      }
LABEL_76:
      v13 = v79;
      goto LABEL_23;
    }
    v22 = (unsigned __int8 *)(v17 + (unsigned int)v21);
    v23 = *v22;
    switch ( v23 )
    {
      case 252:
LABEL_31:
        v28 = (unsigned int)(v21 + 1);
        if ( v20 == 2 )
        {
          if ( HIDWORD(v84) == 1 )
            goto LABEL_75;
          v60 = AuthzBasepEvaluateAttribute(v19, v16, v17, 0x140000000uLL);
          v76 = v60;
          if ( (unsigned int)v15 >= 0x100 )
            goto LABEL_214;
          v61 = (unsigned int)v15;
          LODWORD(v15) = v15 + 1;
          v47 = LOBYTE(v75[0]) == 0;
          v109[v61] = v60;
          if ( !v47 )
            ExFreePoolWithTag(v19[3], 0);
          v99 = v104;
          *(_OWORD *)P = v105;
          v101 = v106;
          v103 = v108;
          v102 = v107;
          v86 = *((_QWORD *)&v89 + 1);
          v85 = (PVOID *)&v99;
          v75[0] = HIBYTE(v75[0]);
          v84 = v88;
          v87 = v90;
          v88 = 0LL;
          v90 = 0LL;
          v89 = 0LL;
          memset_0(&v104, 0, 0x48uLL);
          v16 = (char *)a9;
          v20 = 1;
          v17 = (__int64)v83;
          v82 = 1;
        }
        if ( (unsigned int)((_DWORD)v16 - v28) < 4 )
          goto LABEL_75;
        v29 = *(_DWORD *)(v28 + v17);
        v30 = v28 + 4;
        if ( (unsigned int)v16 - v30 < v29 )
          goto LABEL_75;
        if ( v29 > 0xFFFE )
        {
          v13 = v79;
          SecurityAttributeAndValues = -1073741562;
          goto LABEL_23;
        }
        v31 = (void *)(v17 + v30);
        v17 = v20;
        v92 = v20;
        v94 = (char *)v75 + v20;
        v32 = 9LL * v20;
        *v94 = 0;
        v33 = &P[v32];
        *((_WORD *)v33 + 1) = v29;
        *(_WORD *)v33 = v29;
        v33[1] = v31;
        if ( !(_WORD)v29 || !v31 )
          goto LABEL_75;
        if ( ((unsigned __int8)v31 & 1) != 0 )
        {
          v34 = (void *)AuthzBasepMemAlloc((unsigned __int16)v29, v16, 1632068947LL, v18);
          v33[1] = v34;
          if ( !v34 )
          {
            v13 = v79;
            SecurityAttributeAndValues = -1073741801;
            goto LABEL_23;
          }
          memmove(v34, v31, v29);
          v17 = v92;
          *v94 = 1;
        }
        v35 = &P[v32 - 2];
        switch ( (_BYTE)v23 )
        {
          case 0xF9:
            v36 = a5;
            if ( !a11 )
              v36 = v96;
            *(_DWORD *)v35 = 3;
            break;
          case 0xFB:
            v36 = a7;
            if ( !a11 )
              v36 = a6;
            *(_DWORD *)v35 = 5;
            break;
          case 0xFA:
            v36 = v97;
            *(_DWORD *)v35 = 4;
            break;
          case 0xFC:
            v36 = v91;
            *(_DWORD *)v35 = 6;
            break;
          default:
            v36 = v93;
            *(_DWORD *)v35 = 2;
            break;
        }
        v37 = &P[v32 - 1];
        P[v32 - 1] = v36;
        v38 = 9 * v17;
        *((_QWORD *)&v102 + v38 + 1) = 0LL;
        *(&v103 + v38) = 0LL;
        SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues((__int64)&P[v32 - 2]);
        if ( SecurityAttributeAndValues == -1073741275 )
        {
          if ( *(_DWORD *)v35 != 2
            || (SepSingletonGlobal[4] & 1) == 0
            || (v91[50] & 0x20000) != 0
            || !(unsigned __int8)SepPotentialGlobalTableAttribute((PCUNICODE_STRING)&P[v32])
            || v81 )
          {
            goto LABEL_48;
          }
          if ( !v80 )
          {
            v48 = SepValidateAndCopyGlobalEntry(v93, &v95);
            SecurityAttributeAndValues = v48;
            if ( v48 < 0 )
            {
              v81 = 1;
              if ( v48 != -1073741275 )
              {
LABEL_77:
                if ( SecurityAttributeAndValues != -1073741275 )
                  goto LABEL_76;
                goto LABEL_78;
              }
              goto LABEL_48;
            }
            v80 = 1;
          }
          *v37 = v95;
          SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues((__int64)&P[v32 - 2]);
          if ( SecurityAttributeAndValues == -1073741275 )
          {
            *v37 = v93;
LABEL_48:
            if ( (unsigned __int8)CurrentIrql >= 2u || *(_DWORD *)v35 != 2 )
            {
LABEL_78:
              SecurityAttributeAndValues = 0;
              v39 = 40 * v92;
              v46 = v94;
              *(_WORD *)((char *)&v84 + v39) = 0;
              *(_DWORD *)((char *)&v84 + v39 + 4) = 0;
              (&v85)[(unsigned __int64)v39 / 8] = 0LL;
              if ( *v46 )
              {
                ExFreePoolWithTag(P[v32 + 1], 0);
                if ( v92 >= 2 )
                  _report_rangecheckfailure();
                *v94 = 0;
              }
              goto LABEL_53;
            }
            *(_DWORD *)v35 = 7;
            *v37 = 0LL;
            SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues((__int64)&P[v32 - 2]);
          }
        }
        if ( SecurityAttributeAndValues >= 0 )
        {
          v39 = 40 * v92;
          *(_WORD *)((char *)&v84 + v39) = *(_WORD *)((char *)&v101 + v32 * 8);
          *(_DWORD *)((char *)&v84 + v39 + 4) = *(_DWORD *)((char *)&v101 + v32 * 8 + 8);
          (&v85)[(unsigned __int64)v39 / 8] = v35;
LABEL_53:
          v40 = *(_DWORD *)v35;
          v20 = v82 + 1;
          *(_DWORD *)((char *)&v86 + v39) = 0;
          LODWORD(v21) = v29 + v30;
          *(__int64 *)((char *)&v87 + v39) = 0LL;
          *(_DWORD *)((char *)&v84 + v39 + 8) = 0;
          *(_DWORD *)((char *)&v84 + v39 + 12) = v40;
          v19 = v85;
          v82 = v20;
          goto LABEL_69;
        }
        goto LABEL_77;
      case 162:
        LODWORD(v21) = v21 + 1;
        if ( !(unsigned __int8)AuthzBasepIsValidExpression(162LL, &v84, v20, v74) )
          goto LABEL_75;
        if ( v20 == 1 )
        {
          v41 = AuthzBasepEvaluateAttribute(v19, v16, v17, v18);
          v76 = v41;
          if ( LOBYTE(v75[0]) )
          {
            ExFreePoolWithTag(v19[3], 0);
            v19[3] = 0LL;
            LOBYTE(v75[0]) = 0;
          }
          v19 = 0LL;
          if ( HIBYTE(v75[0]) )
          {
            v42 = v89;
            ExFreePoolWithTag(*(PVOID *)(v89 + 24), 0);
            *(_QWORD *)(v42 + 24) = 0LL;
            HIBYTE(v75[0]) = 0;
          }
          *(_QWORD *)&v89 = 0LL;
        }
        else
        {
          if ( !(_DWORD)v15 )
            goto LABEL_75;
          v15 = (unsigned int)(v15 - 1);
          v41 = v109[v15];
          v76 = v41;
        }
        if ( v41 == -1 )
          v43 = -1;
        else
          v43 = v41 == 0;
        goto LABEL_63;
      case 142:
LABEL_70:
        LODWORD(v21) = v21 + 1;
        if ( (unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v23, &v84, v20, v74) )
        {
          if ( !v74[0] )
          {
            AuthzBasepEvaluateExpression((unsigned __int8)v23, &v84, &v76);
            v43 = v76;
            v19 = v85;
            if ( (unsigned __int8)(v23 + 114) <= 1u && v76 != -1 )
            {
              v43 = v76 == 0;
              v76 = v43;
            }
            goto LABEL_63;
          }
        }
        else
        {
          SecurityAttributeAndValues = -1073741406;
          if ( !v74[0] )
            goto LABEL_76;
        }
        v43 = -1;
        v76 = -1;
LABEL_63:
        if ( (unsigned int)v15 >= 0x100 )
          goto LABEL_214;
        v44 = (unsigned int)v15;
        SecurityAttributeAndValues = 0;
        LODWORD(v15) = v15 + 1;
        *((_QWORD *)&v84 + 1) = 0LL;
        v47 = LOBYTE(v75[0]) == 0;
        BYTE4(v84) = 0;
        v109[v44] = v43;
        LOWORD(v84) = 0;
        if ( !v47 )
        {
          ExFreePoolWithTag(v19[3], 0);
          v19[3] = 0LL;
          LOBYTE(v75[0]) = 0;
        }
        v19 = 0LL;
        v85 = 0LL;
        LODWORD(v86) = 0;
        v87 = 0LL;
        LOWORD(v88) = 0;
        BYTE4(v88) = 0;
        *((_QWORD *)&v88 + 1) = 0LL;
        if ( HIBYTE(v75[0]) )
        {
          v45 = v89;
          ExFreePoolWithTag(*(PVOID *)(v89 + 24), 0);
          *(_QWORD *)(v45 + 24) = 0LL;
          HIBYTE(v75[0]) = 0;
        }
        *(_QWORD *)&v89 = 0LL;
        v20 = 0;
        DWORD2(v89) = 0;
        v90 = 0LL;
        v82 = 0;
        goto LABEL_69;
    }
    if ( v23 == 81 )
      break;
    switch ( *v22 )
    {
      case 0u:
        while ( 1 )
        {
          v21 = (unsigned int)(v21 + 1);
          v47 = (_DWORD)v21 == (_DWORD)v16;
          if ( (unsigned int)v21 >= (unsigned int)v16 )
            break;
          if ( *(_BYTE *)(v21 + v17) )
          {
            v47 = (_DWORD)v21 == (_DWORD)v16;
            break;
          }
        }
        if ( !v47 )
          goto LABEL_75;
        goto LABEL_7;
      case 1u:
      case 2u:
      case 3u:
      case 4u:
      case 0x10u:
      case 0x18u:
      case 0x50u:
        goto LABEL_12;
      case 0x80u:
      case 0x81u:
      case 0x82u:
      case 0x83u:
      case 0x84u:
      case 0x85u:
      case 0x86u:
      case 0x88u:
      case 0x8Fu:
        goto LABEL_70;
      case 0x87u:
      case 0x8Du:
        LODWORD(v21) = v21 + 1;
        if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v23, &v84, v20, v74) )
          goto LABEL_75;
        v49 = v19 != 0LL;
        v76 = v49;
        if ( (_BYTE)v23 == 0x8D )
        {
          v49 = v19 == 0LL;
          v76 = v49;
        }
        goto LABEL_108;
      case 0x89u:
      case 0x8Bu:
      case 0x90u:
      case 0x92u:
        LODWORD(v21) = v21 + 1;
        if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v23, &v84, v20, v74) )
        {
          SecurityAttributeAndValues = -1073741406;
          if ( !v74[0] )
            goto LABEL_76;
LABEL_167:
          v49 = -1;
          v64 = -1;
LABEL_168:
          v65 = v23 + 112;
          goto LABEL_163;
        }
        if ( v74[0] )
        {
          v67 = v78;
        }
        else
        {
          v58 = (_BYTE)v23 == 0x89 || (_BYTE)v23 == 0x90;
          v66 = AuthzBasepMemberOf((unsigned int)&v84, (_DWORD)v91, a10, a11, v58, (__int64)&v77);
          v67 = v77;
          SecurityAttributeAndValues = v66;
          v78 = v77;
        }
        if ( SecurityAttributeAndValues < 0 )
          goto LABEL_167;
        if ( !v67 )
        {
          v49 = 0;
          v64 = 0;
          goto LABEL_168;
        }
        v49 = 1;
        v64 = 1;
        v65 = v23 + 112;
LABEL_163:
        v76 = v49;
        if ( (v65 & 0xFD) != 0 || v64 == -1 )
          goto LABEL_108;
        v49 = v64 == 0;
        goto LABEL_121;
      case 0x8Au:
      case 0x8Cu:
      case 0x91u:
      case 0x93u:
        LODWORD(v21) = v21 + 1;
        if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v23, &v84, v20, v74) )
        {
          SecurityAttributeAndValues = -1073741406;
          if ( !v74[0] )
            goto LABEL_76;
LABEL_161:
          v49 = -1;
          v64 = -1;
          goto LABEL_162;
        }
        if ( v74[0] )
        {
          v69 = v78;
        }
        else
        {
          v59 = (_BYTE)v23 == 0x8A || (_BYTE)v23 == 0x91;
          v68 = AuthzBasepDeviceMemberOf((unsigned int)&v84, (_DWORD)v91, a10, a11, v59, (__int64)&v77);
          v69 = v77;
          SecurityAttributeAndValues = v68;
          v78 = v77;
        }
        if ( SecurityAttributeAndValues < 0 )
          goto LABEL_161;
        if ( v69 )
        {
          v49 = 1;
          v64 = 1;
        }
        else
        {
          v49 = 0;
          v64 = 0;
        }
LABEL_162:
        v65 = v23 + 111;
        goto LABEL_163;
      case 0xA0u:
      case 0xA1u:
        LODWORD(v21) = v21 + 1;
        if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v23, &v84, v20, v74) )
          goto LABEL_75;
        if ( v20 == 2 )
        {
          AuthzBasepEvaluateAttribute(v19, v16, v17, v18);
          v52 = AuthzBasepEvaluateAttribute(v89, v55, v56, v57);
        }
        else
        {
          if ( v20 == 1 )
          {
            v51 = AuthzBasepEvaluateAttribute(v19, v16, v17, v18);
          }
          else
          {
            if ( !(_DWORD)v15 )
              goto LABEL_75;
            LODWORD(v15) = v15 - 1;
            v51 = v109[(unsigned int)v15];
          }
          if ( !(_DWORD)v15 )
          {
LABEL_75:
            SecurityAttributeAndValues = -1073741406;
            goto LABEL_76;
          }
          LODWORD(v15) = v15 - 1;
          v52 = v109[(unsigned int)v15];
        }
        if ( (_BYTE)v23 == 0xA0 )
        {
          if ( !v51 || !v52 )
          {
LABEL_120:
            v49 = 0;
            goto LABEL_121;
          }
          if ( v52 == -1 || v51 == -1 )
            goto LABEL_135;
        }
        else if ( v51 != 1 )
        {
          if ( v52 == -1 )
            goto LABEL_135;
          if ( v52 != 1 )
          {
            if ( v51 != -1 )
              goto LABEL_120;
LABEL_135:
            v49 = -1;
            goto LABEL_121;
          }
        }
        v49 = 1;
LABEL_121:
        v76 = v49;
LABEL_108:
        if ( (unsigned int)v15 >= 0x100 )
          goto LABEL_214;
        v50 = (unsigned int)v15;
        LODWORD(v15) = v15 + 1;
        SecurityAttributeAndValues = 0;
        v109[v50] = v49;
        AuthzBasepResetOperands(&v84, v75);
        v19 = v85;
        v20 = 0;
        v82 = 0;
LABEL_69:
        v16 = (char *)a9;
        v17 = (__int64)v83;
        break;
      case 0xA3u:
        LODWORD(v21) = v21 + 1;
        if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v23, &v84, v20, v74) )
        {
          SecurityAttributeAndValues = -1073741406;
          if ( !v74[0] )
            goto LABEL_76;
LABEL_202:
          v71 = -1;
          goto LABEL_187;
        }
        if ( v74[0] )
          goto LABEL_202;
        v70 = v84;
        if ( HIDWORD(v84) == 1 )
          v70 = v88;
        if ( !(unsigned __int8)AuthzBasepOperandValueTypesCompatible(&v84) || (_BYTE)v23 != 0xA3 || v70 != 2 )
        {
LABEL_186:
          v71 = 0;
          goto LABEL_187;
        }
        v73 = AuthzBasepComputeBitwise(163LL, &v84);
        if ( v73 == -1 )
          goto LABEL_202;
        if ( !v73 )
          goto LABEL_186;
        v71 = 1;
LABEL_187:
        v76 = v71;
        if ( (unsigned int)v15 >= 0x100 )
          goto LABEL_214;
        v72 = (unsigned int)v15;
        LODWORD(v15) = v15 + 1;
        SecurityAttributeAndValues = 0;
        v109[v72] = v71;
        AuthzBasepResetOperands(&v84, v75);
        v19 = v85;
        goto LABEL_69;
      case 0xF8u:
      case 0xF9u:
      case 0xFAu:
      case 0xFBu:
        goto LABEL_31;
      default:
        goto LABEL_75;
    }
  }
LABEL_12:
  if ( v20 != 2 )
  {
LABEL_13:
    v24 = *v22;
    v18 = a9 - (unsigned int)v21;
    SecurityAttributeAndValues = 0;
    v17 = 1LL;
    *((_WORD *)&v84 + 20 * v20) = 0;
    v16 = (char *)&v84 + 40 * v20;
    v16[4] = 0;
    *((_DWORD *)v16 + 2) = 0;
    *((_DWORD *)v16 + 3) = 1;
    *((_QWORD *)v16 + 2) = 0LL;
    *((_DWORD *)v16 + 6) = 0;
    *((_QWORD *)v16 + 4) = 0LL;
    if ( v24 == 81 )
    {
LABEL_14:
      if ( (unsigned int)(v18 - 1) < 4 )
        goto LABEL_75;
      if ( (_BYTE)v24 == 16 )
      {
        *(_WORD *)v16 = 3;
      }
      else
      {
        *(_WORD *)v16 = 16;
        if ( (_BYTE)v24 == 80 )
          v16[4] = 1;
      }
      v25 = *(_DWORD *)(v22 + 1);
      *((_DWORD *)v16 + 6) = v25;
      if ( (int)v18 - 5 < v25 )
        goto LABEL_75;
      v26 = v22 + 5;
      LODWORD(v17) = v25 + 5;
    }
    else
    {
      switch ( v24 )
      {
        case 1:
        case 2:
        case 3:
        case 4:
          if ( (unsigned int)(v18 - 1) < 0xA )
            goto LABEL_75;
          *(_WORD *)v16 = 2;
          v26 = v22 + 1;
          *((_DWORD *)v16 + 6) = 10;
          LODWORD(v17) = 11;
          break;
        case 16:
        case 24:
        case 80:
          goto LABEL_14;
        default:
          goto LABEL_20;
      }
    }
    *((_QWORD *)v16 + 4) = v26;
LABEL_20:
    v19 = v85;
    ++v20;
    LODWORD(v21) = v17 + v21;
    v82 = v20;
    goto LABEL_69;
  }
  if ( HIDWORD(v84) == 1 )
    goto LABEL_75;
  v62 = AuthzBasepEvaluateAttribute(v19, v16, v17, 0x140000000uLL);
  v76 = v62;
  if ( (unsigned int)v15 < 0x100 )
  {
    v63 = (unsigned int)v15;
    LODWORD(v15) = v15 + 1;
    v47 = LOBYTE(v75[0]) == 0;
    v109[v63] = v62;
    if ( !v47 )
      ExFreePoolWithTag(v19[3], 0);
    v99 = v104;
    *(_OWORD *)P = v105;
    v101 = v106;
    v103 = v108;
    v102 = v107;
    v86 = *((_QWORD *)&v89 + 1);
    v85 = (PVOID *)&v99;
    v75[0] = HIBYTE(v75[0]);
    v84 = v88;
    v87 = v90;
    v88 = 0LL;
    v90 = 0LL;
    v89 = 0LL;
    memset_0(&v104, 0, 0x48uLL);
    v20 = 1;
    goto LABEL_13;
  }
LABEL_214:
  v13 = v79;
  SecurityAttributeAndValues = -1073740791;
LABEL_23:
  if ( LOBYTE(v75[0]) )
    ExFreePoolWithTag(P[1], 0);
  if ( HIBYTE(v75[0]) )
    ExFreePoolWithTag(*((PVOID *)&v105 + 1), 0);
  if ( v80 )
  {
    v54 = v95;
    if ( v95 )
    {
      AuthzBasepFreeSecurityAttributesList(v95, v16, v17, v18);
      ExFreePoolWithTag(v54, 0x74416553u);
    }
  }
  if ( SecurityAttributeAndValues < 0 )
    *v13 = -1;
  return (unsigned int)SecurityAttributeAndValues;
}
