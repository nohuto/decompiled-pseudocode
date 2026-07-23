/*
 * XREFs of SeSecurityDescriptorChangedAuditAlarm @ 0x140912CF0
 * Callers:
 *     NtSetSecurityObject @ 0x1409118E0 (NtSetSecurityObject.c)
 * Callees:
 *     SeMaximumAuditMask @ 0x140499CD8 (SeMaximumAuditMask.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     SepIsSidEqual @ 0x1407951F4 (SepIsSidEqual.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SepAuditFailed @ 0x14084D220 (SepAuditFailed.c)
 *     SepAdtAuditThisEventWithContext @ 0x14084EED0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x140861BC0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepIsAclEqual @ 0x140863BB4 (SepIsAclEqual.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x14088E1C0 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepQueryTypeString @ 0x140913780 (SepQueryTypeString.c)
 *     SepQueryNameString @ 0x140914194 (SepQueryNameString.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SeSecurityDescriptorChangedAuditAlarm(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        __int64 a5,
        __int16 a6,
        int a7,
        char a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  int v13; // ebx
  int v14; // edi
  __int64 v15; // r12
  __int64 v16; // r13
  PACCESS_TOKEN PrimaryToken; // rcx
  char v19; // r15
  unsigned int v20; // r14d
  __int64 v21; // r15
  __int16 v22; // ax
  __int64 v23; // r8
  __int64 v24; // r14
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // edi
  __int16 v29; // ax
  __int64 v30; // rax
  __int16 v31; // ax
  _WORD *v32; // rsi
  __int16 v33; // r9
  unsigned __int16 *v34; // r13
  _WORD *v35; // r12
  __int16 v36; // r10
  __int16 v37; // r11
  _WORD *v38; // r15
  unsigned __int16 *v39; // r14
  unsigned int v40; // edx
  int v41; // edx
  unsigned int v42; // eax
  __int64 v43; // rax
  unsigned __int16 *v44; // r12
  unsigned __int16 *p_Length; // r13
  __int64 v46; // rdi
  unsigned int v47; // ebx
  __int16 v48; // ax
  unsigned __int16 *v49; // rax
  __int16 v50; // ax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int16 v53; // ax
  __int64 v54; // rax
  __int16 v55; // ax
  __int64 v56; // rax
  __int16 v57; // ax
  int v58; // eax
  __int16 v59; // ax
  SIZE_T v60; // rax
  __int64 v61; // rcx
  ACCESS_MASK v62; // edi
  __int64 v63; // rax
  void *v64; // rdx
  SIZE_T v65; // rax
  __int64 v66; // rcx
  SIZE_T v67; // rax
  __int64 v68; // rcx
  SIZE_T v69; // rax
  __int64 v70; // rcx
  bool v71; // cf
  __int64 v72; // rax
  void *v73; // rcx
  __int64 v74; // rax
  void *v75; // rdx
  __int64 v76; // rax
  void *v77; // rcx
  __int16 v78; // ax
  __int64 v79; // rax
  _WORD *v80; // rdx
  __int16 v81; // ax
  __int64 v82; // rax
  _WORD *v83; // rcx
  int v84; // [rsp+58h] [rbp-99h]
  __int64 v85; // [rsp+60h] [rbp-91h]
  ACCESS_MASK AuditMask[2]; // [rsp+68h] [rbp-89h] BYREF
  UNICODE_STRING *v87; // [rsp+70h] [rbp-81h]
  int v88; // [rsp+78h] [rbp-79h]
  PACCESS_TOKEN Token; // [rsp+80h] [rbp-71h]
  PVOID v90; // [rsp+88h] [rbp-69h] BYREF
  PVOID P[3]; // [rsp+90h] [rbp-61h] BYREF
  void *Source2; // [rsp+A8h] [rbp-49h]
  void *v93; // [rsp+B0h] [rbp-41h]
  unsigned __int16 *v94; // [rsp+B8h] [rbp-39h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-31h] BYREF
  __int16 v96; // [rsp+138h] [rbp+47h]
  __int16 v98; // [rsp+150h] [rbp+5Fh]
  __int16 v99; // [rsp+160h] [rbp+6Fh]

  AuditMask[0] = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v13 = 0;
  v90 = 0LL;
  P[0] = 0LL;
  v14 = 0;
  v94 = 0LL;
  v15 = 0LL;
  v87 = 0LL;
  v16 = 0LL;
  AuditMask[1] = 0;
  v88 = 0;
  v84 = 0;
  v98 = 0;
  v93 = 0LL;
  v96 = 0;
  Source2 = 0LL;
  v99 = 0;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  Token = PrimaryToken;
  if ( !PrimaryToken )
  {
    SepAuditFailed(-1073741700);
    return;
  }
  v19 = SepAdtAuditThisEventWithContext(142LL, 1, 0, &SubjectContext);
  if ( v19 && a11 )
    v14 = a8 & 0x20;
  if ( (a7 & 0x1000000) != 0 )
  {
    if ( SepAdtAuditThisEventWithContext(140LL, 1, 0, &SubjectContext) )
      v14 |= a8 & 8;
    if ( v19 && a12 )
      v14 |= a8 & 0x40;
  }
  if ( a3 && *a3 )
  {
    v87 = (UNICODE_STRING *)a3;
  }
  else if ( a2 )
  {
    AuditMask[1] = SepQueryTypeString(a2, P);
    if ( (AuditMask[1] & 0x80000000) != 0 )
      goto LABEL_49;
    v49 = 0LL;
    if ( P[0] )
      v49 = (unsigned __int16 *)P[0];
    v87 = (UNICODE_STRING *)v49;
  }
  v20 = a7 & 0xFEFFFFFF;
  if ( (a7 & 0xFEFFFFFF) != 0 )
  {
    v50 = *(_WORD *)(a10 + 2);
    if ( (v50 & 0x10) == 0 )
      goto LABEL_142;
    if ( v50 >= 0 )
    {
      v52 = *(_QWORD *)(a10 + 24);
      goto LABEL_144;
    }
    v51 = *(unsigned int *)(a10 + 12);
    if ( (_DWORD)v51 )
      v52 = a10 + v51;
    else
LABEL_142:
      v52 = 0LL;
LABEL_144:
    SeMaximumAuditMask(v52, v20, (__int64)Token, AuditMask);
    SeMaximumAuditMaskFromGlobalSacl(v87, v20, Token, AuditMask);
    if ( (AuditMask[0] & 0x80000) != 0 && v19 )
      v14 |= a8 & 0x10;
  }
  v21 = a13;
  v22 = *(_WORD *)(a13 + 2);
  if ( (v22 & 0x10) == 0 )
  {
LABEL_14:
    v23 = 0LL;
    goto LABEL_15;
  }
  if ( v22 >= 0 )
  {
    v23 = *(_QWORD *)(a13 + 24);
  }
  else
  {
    v27 = *(unsigned int *)(a13 + 12);
    if ( !(_DWORD)v27 )
      goto LABEL_14;
    v23 = a13 + v27;
  }
LABEL_15:
  v85 = v23;
  if ( !a10 )
    goto LABEL_16;
  v29 = *(_WORD *)(a10 + 2);
  if ( (v29 & 0x10) == 0 )
    goto LABEL_39;
  if ( v29 >= 0 )
  {
    v16 = *(_QWORD *)(a10 + 24);
  }
  else
  {
    v30 = *(unsigned int *)(a10 + 12);
    if ( !(_DWORD)v30 )
    {
LABEL_39:
      v16 = 0LL;
      goto LABEL_16;
    }
    v16 = a10 + v30;
  }
LABEL_16:
  v24 = a9;
  if ( !a9 )
    goto LABEL_17;
  v53 = *(_WORD *)(a9 + 2);
  if ( (v53 & 0x10) == 0 )
  {
LABEL_147:
    v15 = 0LL;
    goto LABEL_17;
  }
  if ( v53 < 0 )
  {
    v54 = *(unsigned int *)(a9 + 12);
    if ( (_DWORD)v54 )
    {
      v15 = a9 + v54;
      goto LABEL_17;
    }
    goto LABEL_147;
  }
  v15 = *(_QWORD *)(a9 + 24);
LABEL_17:
  if ( !a11 )
  {
    v25 = 0LL;
    goto LABEL_19;
  }
  v31 = *(_WORD *)(a11 + 2);
  if ( (v31 & 0x10) == 0 )
    goto LABEL_44;
  if ( v31 >= 0 )
  {
    v25 = *(_QWORD *)(a11 + 24);
  }
  else
  {
    v43 = *(unsigned int *)(a11 + 12);
    if ( !(_DWORD)v43 )
    {
LABEL_44:
      v25 = 0LL;
      goto LABEL_19;
    }
    v25 = a11 + v43;
  }
LABEL_19:
  if ( a12 )
  {
    v55 = *(_WORD *)(a12 + 2);
    if ( (v55 & 0x10) == 0 )
      goto LABEL_149;
    if ( v55 >= 0 )
    {
      v26 = *(_QWORD *)(a12 + 24);
      goto LABEL_21;
    }
    v56 = *(unsigned int *)(a12 + 12);
    if ( (_DWORD)v56 )
      v26 = a12 + v56;
    else
LABEL_149:
      v26 = 0LL;
  }
  else
  {
    v26 = 0LL;
  }
LABEL_21:
  if ( v23 && *(_WORD *)(v23 + 4) )
  {
    if ( !v14 )
      goto LABEL_24;
    v32 = (_WORD *)(v23 + 8);
    if ( v16 && (v57 = *(_WORD *)(v16 + 4)) != 0 )
    {
      v34 = (unsigned __int16 *)(v16 + 8);
      v98 = v57;
      v33 = v57;
    }
    else
    {
      v33 = 0;
      v34 = 0LL;
    }
    if ( v15 && (v58 = *(unsigned __int16 *)(v15 + 4), (_WORD)v58) )
    {
      v35 = (_WORD *)(v15 + 8);
      v84 = v58;
    }
    else
    {
      v35 = 0LL;
    }
    if ( v25 && (v48 = *(_WORD *)(v25 + 4)) != 0 )
    {
      v96 = *(_WORD *)(v25 + 4);
      v93 = (void *)(v25 + 8);
      v36 = v48;
    }
    else
    {
      v36 = 0;
    }
    if ( v26 && (v59 = *(_WORD *)(v26 + 4)) != 0 )
    {
      v99 = *(_WORD *)(v26 + 4);
      Source2 = (void *)(v26 + 8);
      v37 = v59;
    }
    else
    {
      v37 = 0;
    }
    v38 = Source2;
    v39 = (unsigned __int16 *)v93;
    while ( 1 )
    {
      v40 = *(unsigned __int8 *)v32;
      if ( v40 <= 0x10 )
        goto LABEL_63;
      if ( v40 != 17 )
        break;
      if ( (v14 & 0x10) == 0 )
        goto LABEL_67;
      if ( !v35
        || v32[1] != v35[1]
        || (v69 = RtlCompareMemory(v32, v35, (unsigned __int16)v35[1]),
            v70 = (unsigned __int16)v35[1],
            v23 = v85,
            v69 != v70) )
      {
        v13 |= 0x10u;
        v14 &= ~0x10u;
        goto LABEL_160;
      }
      v33 = v98;
      v41 = v84 - 1;
      v36 = v96;
      v37 = v99;
      v71 = v84-- != 1;
      v35 = (_WORD *)(((unsigned __int64)v35 + v70) & -(__int64)v71);
LABEL_68:
      v32 = (_WORD *)((char *)v32 + (unsigned __int16)v32[1]);
      v42 = *(unsigned __int16 *)(v23 + 4);
      if ( ++v88 >= v42 || !v14 )
      {
        v24 = a9;
        v21 = a13;
        if ( v33 )
          v13 |= v14 & 8;
        if ( v36 )
          v13 |= v14 & 0x20;
        if ( v37 )
          v13 |= v14 & 0x40;
        if ( v41 )
        {
          v28 = v14 & 0x10;
LABEL_173:
          v13 |= v28;
        }
        goto LABEL_24;
      }
    }
    if ( v40 == 18 )
    {
      if ( (v14 & 0x20) == 0 )
        goto LABEL_67;
      if ( v39 )
      {
        if ( v32[1] == v39[1] )
        {
          v67 = RtlCompareMemory(v32, v39, v39[1]);
          v68 = v39[1];
          v23 = v85;
          if ( v67 == v68 )
          {
            v33 = v98;
            v36 = --v96;
            v39 = (unsigned __int16 *)(((unsigned __int64)v39 + v68) & -(__int64)(v96 != 0));
            goto LABEL_163;
          }
        }
      }
      v13 |= 0x20u;
      v14 &= ~0x20u;
LABEL_160:
      v33 = v98;
    }
    else
    {
      if ( v40 == 19 )
      {
        if ( (v14 & 0x40) == 0 )
          goto LABEL_67;
        if ( !v38
          || v32[1] != v38[1]
          || (v65 = RtlCompareMemory(v32, v38, (unsigned __int16)v38[1]),
              v66 = (unsigned __int16)v38[1],
              v23 = v85,
              v65 != v66) )
        {
          v13 |= 0x40u;
          v14 &= ~0x40u;
          goto LABEL_160;
        }
        v37 = --v99;
        v38 = (_WORD *)(((unsigned __int64)v38 + v66) & -(__int64)(v99 != 0));
        goto LABEL_66;
      }
LABEL_63:
      if ( (v14 & 8) == 0 )
      {
LABEL_67:
        v41 = v84;
        goto LABEL_68;
      }
      if ( !v34
        || *(_BYTE *)v34 != (_BYTE)v40
        || v32[1] != v34[1]
        || (v60 = RtlCompareMemory(v32, v34, v34[1]), v61 = v34[1], v23 = v85, v60 != v61) )
      {
        v37 = v99;
        v13 |= 8u;
        v14 &= ~8u;
LABEL_66:
        v36 = v96;
        v33 = v98;
        goto LABEL_67;
      }
      v33 = --v98;
      v34 = (unsigned __int16 *)(((unsigned __int64)v34 + v61) & -(__int64)(v98 != 0));
    }
    v36 = v96;
LABEL_163:
    v37 = v99;
    goto LABEL_67;
  }
  if ( v16 && *(_WORD *)(v16 + 4) )
    v13 = v14 & 8;
  if ( v15 && *(_WORD *)(v15 + 4) )
    v13 |= v14 & 0x10;
  if ( v25 && *(_WORD *)(v25 + 4) )
    v13 |= v14 & 0x20;
  if ( v26 && *(_WORD *)(v26 + 4) )
  {
    v28 = v14 & 0x40;
    goto LABEL_173;
  }
LABEL_24:
  if ( v24 )
  {
    v62 = AuditMask[0];
    if ( (AuditMask[0] & 0x80000) != 0 )
    {
      if ( (a8 & 1) != 0 )
      {
        if ( *(__int16 *)(v21 + 2) >= 0 )
        {
          v64 = *(void **)(v21 + 8);
        }
        else
        {
          v63 = *(unsigned int *)(v21 + 4);
          v64 = (_DWORD)v63 ? (void *)(v21 + v63) : 0LL;
        }
        if ( *(__int16 *)(v24 + 2) >= 0 )
        {
          v73 = *(void **)(v24 + 8);
        }
        else
        {
          v72 = *(unsigned int *)(v24 + 4);
          v73 = (_DWORD)v72 ? (void *)(v24 + v72) : 0LL;
        }
        if ( !SepIsSidEqual(v73, v64) )
          v13 |= 1u;
      }
      if ( (a8 & 2) != 0 )
      {
        if ( *(__int16 *)(v21 + 2) >= 0 )
        {
          v75 = *(void **)(v21 + 16);
        }
        else
        {
          v74 = *(unsigned int *)(v21 + 8);
          v75 = (_DWORD)v74 ? (void *)(v21 + v74) : 0LL;
        }
        if ( *(__int16 *)(v24 + 2) >= 0 )
        {
          v77 = *(void **)(v24 + 16);
        }
        else
        {
          v76 = *(unsigned int *)(v24 + 8);
          v77 = (_DWORD)v76 ? (void *)(v24 + v76) : 0LL;
        }
        if ( !SepIsSidEqual(v77, v75) )
          v13 |= 2u;
      }
    }
    if ( (v62 & 0x40000) != 0 )
    {
      v78 = *(_WORD *)(v21 + 2);
      if ( (v78 & 4) != 0 )
      {
        if ( v78 >= 0 )
        {
          v80 = *(_WORD **)(v21 + 32);
LABEL_203:
          v81 = *(_WORD *)(v24 + 2);
          if ( (v81 & 4) != 0 )
          {
            if ( v81 >= 0 )
            {
              v83 = *(_WORD **)(v24 + 32);
LABEL_209:
              if ( !SepIsAclEqual(v83, v80) )
                v13 |= 4u;
              goto LABEL_25;
            }
            v82 = *(unsigned int *)(v24 + 16);
            if ( (_DWORD)v82 )
            {
              v83 = (_WORD *)(v24 + v82);
              goto LABEL_209;
            }
          }
          v83 = 0LL;
          goto LABEL_209;
        }
        v79 = *(unsigned int *)(v21 + 16);
        if ( (_DWORD)v79 )
        {
          v80 = (_WORD *)(v21 + v79);
          goto LABEL_203;
        }
      }
      v80 = 0LL;
      goto LABEL_203;
    }
  }
LABEL_25:
  if ( v13 )
  {
    if ( !a2 )
    {
      v44 = v94;
LABEL_84:
      p_Length = &v87->Length;
      v46 = **((_QWORD **)Token + 19);
      if ( (v13 & 8) != 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (__int64 *)&SubjectContext,
          (unsigned __int16 *)&SeSubsystemName,
          &v87->Length,
          v44,
          a5,
          v46,
          a10,
          8u,
          v21);
      if ( (v13 & 0x20) != 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (__int64 *)&SubjectContext,
          (unsigned __int16 *)&SeSubsystemName,
          p_Length,
          v44,
          a5,
          v46,
          a11,
          0x20u,
          v21);
      if ( (v13 & 0x40) != 0 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (__int64 *)&SubjectContext,
          (unsigned __int16 *)&SeSubsystemName,
          p_Length,
          v44,
          a5,
          v46,
          a12,
          0x40u,
          v21);
      v47 = v13 & 0xFFFFFF97;
      if ( v47 )
        SepAdtSecurityDescriptorChangedAuditAlarm(
          (__int64 *)&SubjectContext,
          (unsigned __int16 *)&SeSubsystemName,
          p_Length,
          v44,
          a5,
          v46,
          v24,
          v47,
          v21);
      goto LABEL_49;
    }
    AuditMask[1] = SepQueryNameString(a2, &v90);
    if ( (AuditMask[1] & 0x80000000) == 0 )
    {
      v44 = 0LL;
      if ( v90 )
        v44 = (unsigned __int16 *)v90;
      goto LABEL_84;
    }
LABEL_49:
    if ( v90 )
      ExFreePoolWithTag(v90, 0);
    if ( P[0] )
      ExFreePoolWithTag(P[0], 0);
  }
  if ( (AuditMask[1] & 0x80000000) != 0 )
    SepAuditFailed(AuditMask[1]);
  SeReleaseSubjectContext(&SubjectContext);
}
