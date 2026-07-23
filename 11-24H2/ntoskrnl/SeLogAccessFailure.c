/*
 * XREFs of SeLogAccessFailure @ 0x140438750
 * Callers:
 *     SeAccessCheckWithHint @ 0x1403B6970 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x14042DC70 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140465250 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     SepFlattenAcl @ 0x1406061F0 (SepFlattenAcl.c)
 *     SepGetLearningModeObjectInformation @ 0x140606348 (SepGetLearningModeObjectInformation.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PsReferenceEffectiveToken @ 0x140858F20 (PsReferenceEffectiveToken.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SeLogAccessFailure(
        const void ***Object,
        __int64 a2,
        __int64 a3,
        ULONGLONG a4,
        __int64 a5,
        char a6,
        char a7)
{
  ULONGLONG v7; // r14
  char v8; // si
  const void ***v10; // rbx
  void *v11; // r15
  const wchar_t *v12; // rax
  ULONG v13; // eax
  _QWORD *LearningModeObjectInformation; // rax
  _QWORD *v15; // rdx
  unsigned __int16 *v16; // rax
  __int64 v17; // r9
  unsigned int v18; // ecx
  unsigned __int16 *v19; // r8
  const wchar_t *v20; // r9
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 LastRebalanceQpc; // rdx
  int v24; // ecx
  const wchar_t *v25; // r8
  const void **v26; // r8
  int v27; // edi
  int *v28; // rax
  unsigned int v29; // r13d
  _DWORD *Pool2; // rax
  int *v31; // rcx
  __int64 v32; // rax
  const void **v33; // rdx
  unsigned int v34; // r13d
  struct _EVENT_DATA_DESCRIPTOR *v35; // r8
  ULONGLONG v36; // rcx
  struct _EVENT_DATA_DESCRIPTOR *v37; // rdx
  int v38; // eax
  __int64 v39; // r10
  ULONG v40; // edi
  const void **v41; // r9
  unsigned __int8 *v42; // rax
  __int64 v43; // rax
  unsigned int v44; // ecx
  unsigned int v45; // r14d
  _DWORD *v46; // r13
  __int64 v47; // rdi
  unsigned __int8 *v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned int v52; // edx
  struct _EVENT_DATA_DESCRIPTOR *v53; // rcx
  struct _EVENT_DATA_DESCRIPTOR *v54; // rcx
  unsigned int v55; // eax
  __int16 v56; // r9
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // edx
  __int64 v60; // rax
  unsigned __int8 *v61; // r8
  __int64 v62; // rax
  unsigned int v63; // edx
  _QWORD *v64; // rcx
  __int64 v65; // rax
  unsigned __int8 *v66; // r8
  struct _EVENT_DATA_DESCRIPTOR *v67; // rcx
  int v68; // eax
  unsigned int v69; // edx
  __int64 v70; // rax
  ULONGLONG v71; // r13
  unsigned int v72; // edi
  struct _EVENT_DATA_DESCRIPTOR *v73; // r12
  PVOID v74; // r13
  __int64 v75; // rax
  __int16 v76; // cx
  __int64 v77; // rax
  __int64 v78; // rcx
  ULONGLONG v79; // r12
  int v80; // eax
  __int64 v81; // rax
  struct _EVENT_DATA_DESCRIPTOR *v82; // rcx
  unsigned int v83; // edi
  struct _EVENT_DATA_DESCRIPTOR *v84; // r14
  int v85; // eax
  PVOID v86; // r14
  __int64 v87; // rax
  struct _EVENT_DATA_DESCRIPTOR *v88; // rcx
  __int64 v89; // rax
  PVOID *v90; // rbx
  char v91; // [rsp+40h] [rbp-C0h] BYREF
  char v92[3]; // [rsp+41h] [rbp-BFh] BYREF
  _WORD v93[2]; // [rsp+44h] [rbp-BCh] BYREF
  _WORD v94[2]; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v95[2]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v96; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v97; // [rsp+54h] [rbp-ACh] BYREF
  char v98[4]; // [rsp+58h] [rbp-A8h] BYREF
  int v99; // [rsp+5Ch] [rbp-A4h] BYREF
  int v100; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v101; // [rsp+64h] [rbp-9Ch]
  int v102; // [rsp+68h] [rbp-98h] BYREF
  int v103; // [rsp+6Ch] [rbp-94h] BYREF
  int v104; // [rsp+70h] [rbp-90h] BYREF
  ULONG v105; // [rsp+74h] [rbp-8Ch]
  PVOID v106; // [rsp+78h] [rbp-88h] BYREF
  PVOID v107; // [rsp+80h] [rbp-80h] BYREF
  int v108; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v109; // [rsp+8Ch] [rbp-74h]
  PVOID P; // [rsp+90h] [rbp-70h]
  __int64 v111; // [rsp+98h] [rbp-68h]
  PVOID v112; // [rsp+A0h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B0h] [rbp-50h] BYREF
  const wchar_t *v114; // [rsp+C0h] [rbp-40h]
  __int64 v115; // [rsp+C8h] [rbp-38h]
  const wchar_t *v116; // [rsp+D0h] [rbp-30h]
  int v117; // [rsp+D8h] [rbp-28h]
  int v118; // [rsp+DCh] [rbp-24h]
  const wchar_t *v119; // [rsp+E0h] [rbp-20h]
  int v120; // [rsp+E8h] [rbp-18h]
  int v121; // [rsp+ECh] [rbp-14h]
  const wchar_t *v122; // [rsp+F0h] [rbp-10h]
  __int64 v123; // [rsp+F8h] [rbp-8h]
  char *v124; // [rsp+100h] [rbp+0h]
  __int64 v125; // [rsp+108h] [rbp+8h]
  int *v126; // [rsp+110h] [rbp+10h]
  __int64 v127; // [rsp+118h] [rbp+18h]
  int *v128; // [rsp+120h] [rbp+20h]
  __int64 v129; // [rsp+128h] [rbp+28h]
  char *v130; // [rsp+130h] [rbp+30h]
  __int64 v131; // [rsp+138h] [rbp+38h]
  int *v132; // [rsp+140h] [rbp+40h]
  __int64 v133; // [rsp+148h] [rbp+48h]
  int *v134; // [rsp+150h] [rbp+50h]
  __int64 v135; // [rsp+158h] [rbp+58h]
  unsigned int v136; // [rsp+168h] [rbp+68h]
  int v137; // [rsp+16Ch] [rbp+6Ch]

  v7 = a5;
  v8 = 0;
  v111 = a5;
  v92[0] = 0;
  v91 = 0;
  v10 = Object;
  v11 = 0LL;
  v97 = 0;
  v106 = 0LL;
  v94[0] = 0;
  v103 = 0;
  v107 = 0LL;
  v104 = 0;
  v95[0] = 0;
  v100 = 0;
  v102 = 1;
  v99 = 0;
  v96 = 0;
  v93[0] = 0;
  if ( KeGetCurrentIrql() >= 2u || !EtwKernelProvRegHandle )
    return;
  if ( Object )
  {
    v99 = *((_DWORD *)Object + 48);
    v100 = *((_DWORD *)Object + 49);
  }
  else
  {
    v10 = (const void ***)PsReferenceEffectiveToken(KeGetCurrentThread(), 1732535635LL, &v99, v98, &v100, 0LL);
    if ( !v10 )
      return;
    v8 = 1;
  }
  if ( ((_DWORD)v10[25] & 0x1000000) == 0 )
  {
    if ( v8 )
      ObfDereferenceObjectWithTag(v10, 0x67446553u);
    return;
  }
  v12 = L"Normal";
  if ( a7 )
    v12 = L"Permissive";
  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)v12;
  v13 = 14;
  if ( a7 )
    v13 = 22;
  UserData.Size = v13;
  LearningModeObjectInformation = (_QWORD *)SepGetLearningModeObjectInformation(v92);
  v112 = LearningModeObjectInformation;
  v15 = LearningModeObjectInformation;
  if ( LearningModeObjectInformation && (v16 = (unsigned __int16 *)LearningModeObjectInformation[2]) != 0LL )
  {
    v17 = *v16;
    v18 = v17 + 2;
    if ( v17 + 2 >= (unsigned __int64)v16[1] )
      v18 = v16[1];
    v114 = (const wchar_t *)*((_QWORD *)v16 + 1);
    v115 = v18;
  }
  else
  {
    v114 = &SourceString;
    v115 = 2LL;
    if ( !v15 )
    {
LABEL_28:
      LODWORD(v21) = 2;
      v20 = &SourceString;
      goto LABEL_29;
    }
  }
  v19 = (unsigned __int16 *)v15[3];
  if ( !v19 )
    goto LABEL_28;
  if ( v15[4] && (v20 = (const wchar_t *)v15[6]) != 0LL )
  {
    LODWORD(v21) = *((unsigned __int16 *)v15 + 21);
  }
  else
  {
    v22 = *v19;
    v21 = v19[1];
    if ( v22 + 2 < v21 )
      LODWORD(v21) = v22 + 2;
    v20 = (const wchar_t *)*((_QWORD *)v19 + 1);
  }
LABEL_29:
  v116 = v20;
  v118 = 0;
  v117 = v21;
  LastRebalanceQpc = KeGetCurrentThread()->Process[1].LastRebalanceQpc;
  if ( LastRebalanceQpc )
  {
    v24 = *(unsigned __int16 *)(LastRebalanceQpc + 2);
    v25 = *(const wchar_t **)(LastRebalanceQpc + 8);
  }
  else
  {
    v24 = 2;
    v25 = &SourceString;
  }
  v119 = v25;
  v120 = v24;
  v121 = 0;
  v122 = &SourceString;
  v123 = 2LL;
  v124 = &a6;
  v125 = 4LL;
  v126 = &v99;
  v127 = 4LL;
  v128 = &v100;
  v129 = 4LL;
  v130 = (char *)(v10 + 15);
  v131 = 4LL;
  v26 = v10[135];
  v27 = 10;
  v28 = (int *)(v26 + 5);
  if ( !v26 )
    v28 = &v96;
  v132 = v28;
  v133 = 4LL;
  v108 = 1;
  v29 = 4 * *((unsigned __int8 *)*v10[19] + 1) + 12;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, v29, 0x69536553u);
  P = Pool2;
  if ( Pool2 )
  {
    *Pool2 = *((_DWORD *)v10[19] + 2);
    memmove(Pool2 + 1, *v10[19], 4LL * *((unsigned __int8 *)*v10[19] + 1) + 8);
    v27 = 11;
    v134 = &v108;
    v135 = 4LL;
    v31 = (int *)P;
    v32 = 22LL;
    v136 = v29;
    v137 = 0;
  }
  else
  {
    v31 = &v96;
    v32 = 20LL;
    v135 = 4LL;
  }
  *(&UserData.Ptr + v32) = (ULONGLONG)v31;
  v33 = v10[98];
  v34 = v27 + 2;
  v35 = &UserData + (unsigned int)(v27 + 1);
  *(_QWORD *)&v35->Size = 4LL;
  if ( v33 )
  {
    v35->Ptr = (ULONGLONG)&v102;
    v36 = (ULONGLONG)v10[98];
    v37 = &UserData + v34;
    v38 = *(unsigned __int8 *)(v36 + 1);
    v34 = v27 + 3;
    v37->Ptr = v36;
    v37->Reserved = 0;
    v37->Size = 4 * v38 + 8;
  }
  else
  {
    v35->Ptr = (ULONGLONG)&v96;
  }
  v101 = v34;
  if ( !*((_DWORD *)v10 + 200) )
  {
    v51 = 2LL * v34;
    *(&UserData.Ptr + v51) = (ULONGLONG)&v96;
    *((_QWORD *)&UserData.Size + v51) = 4LL;
    goto LABEL_52;
  }
  v39 = *((unsigned int *)v10 + 200);
  v40 = 0;
  v41 = v10[99];
  do
  {
    v42 = (unsigned __int8 *)*v41;
    v41 += 2;
    v40 += 4 * v42[1] + 12;
    --v39;
  }
  while ( v39 );
  v105 = v40;
  v43 = ExAllocatePool2(0x100uLL, v40, 0x69536553u);
  v11 = (void *)v43;
  if ( v43 )
  {
    v44 = *((_DWORD *)v10 + 200);
    v97 = v44;
    v109 = 0;
    if ( v44 )
    {
      v45 = v109;
      v46 = (_DWORD *)v43;
      do
      {
        v47 = 2LL * v45;
        *v46 = v10[99][2 * v45 + 1];
        v48 = (unsigned __int8 *)v10[99][2 * v45];
        memmove(v46 + 1, v48, 4LL * v48[1] + 8);
        ++v45;
        v44 = v97;
        v46 += *((unsigned __int8 *)v10[99][v47] + 1) + 3;
      }
      while ( v45 < v97 );
      v7 = v111;
      v34 = v101;
      v40 = v105;
    }
  }
  else
  {
    v44 = v97;
  }
  v49 = 2LL * v34++;
  *(&UserData.Ptr + v49) = (ULONGLONG)&v97;
  *((_QWORD *)&UserData.Size + v49) = 4LL;
  if ( v44 )
  {
    v50 = 2LL * v34;
    *(&UserData.Ptr + v50) = (ULONGLONG)v11;
    *(&UserData.Size + 2 * v50) = v40;
    *(&UserData.Reserved + 2 * v50) = 0;
LABEL_52:
    ++v34;
  }
  v52 = v34 + 1;
  v53 = &UserData + v34;
  *(_QWORD *)&v53->Size = 4LL;
  if ( a4 )
  {
    v53->Ptr = (ULONGLONG)&v102;
    v54 = &UserData + v52;
    v52 = v34 + 2;
    v55 = 4 * *(unsigned __int8 *)(a4 + 1) + 8;
    v54->Ptr = a4;
    *(_QWORD *)&v54->Size = v55;
  }
  else
  {
    v53->Ptr = (ULONGLONG)&v96;
  }
  v56 = *(_WORD *)(v7 + 2);
  v57 = 2LL * v52;
  *(&UserData.Ptr + v57) = v7;
  *((_QWORD *)&UserData.Size + v57) = 1LL;
  v58 = v52 + 1;
  v59 = v52 + 2;
  v58 *= 2LL;
  *(&UserData.Ptr + v58) = v7 + 2;
  *((_QWORD *)&UserData.Size + v58) = 2LL;
  if ( v56 >= 0 )
  {
    v61 = *(unsigned __int8 **)(v7 + 8);
LABEL_60:
    if ( v61 )
      goto LABEL_62;
    goto LABEL_61;
  }
  v60 = *(unsigned int *)(v7 + 4);
  if ( (_DWORD)v60 )
  {
    v61 = (unsigned __int8 *)(v7 + v60);
    goto LABEL_60;
  }
LABEL_61:
  v61 = (unsigned __int8 *)SeNullSid;
LABEL_62:
  v62 = 16LL * v59;
  v63 = v59 + 1;
  v64 = (ULONGLONG *)((char *)&UserData.Ptr + v62);
  LODWORD(v62) = v61[1];
  *v64 = v61;
  v64[1] = (unsigned int)(4 * v62 + 8);
  if ( v56 >= 0 )
  {
    v66 = *(unsigned __int8 **)(v7 + 8);
LABEL_66:
    if ( v66 )
      goto LABEL_68;
    goto LABEL_67;
  }
  v65 = *(unsigned int *)(v7 + 4);
  if ( (_DWORD)v65 )
  {
    v66 = (unsigned __int8 *)(v7 + v65);
    goto LABEL_66;
  }
LABEL_67:
  v66 = (unsigned __int8 *)SeNullSid;
LABEL_68:
  v67 = &UserData + v63;
  v68 = v66[1];
  v69 = v63 + 1;
  v67->Ptr = (ULONGLONG)v66;
  *(_QWORD *)&v67->Size = (unsigned int)(4 * v68 + 8);
  if ( (v56 & 4) == 0 )
    goto LABEL_72;
  if ( v56 < 0 )
  {
    v70 = *(unsigned int *)(v7 + 16);
    if ( (_DWORD)v70 )
    {
      v71 = v7 + v70;
      goto LABEL_80;
    }
LABEL_72:
    v72 = v69 + 1;
    v73 = &UserData + v69;
LABEL_73:
    *(_QWORD *)&v73->Size = 1LL;
LABEL_74:
    v74 = v106;
    v73->Ptr = (ULONGLONG)&v91;
    v75 = 2LL * v72;
    *((_QWORD *)&UserData.Size + v75) = 2LL;
    *(&UserData.Ptr + v75) = (ULONGLONG)v93;
    goto LABEL_75;
  }
  v71 = *(_QWORD *)(v7 + 32);
LABEL_80:
  v72 = v69 + 1;
  v73 = &UserData + v69;
  if ( !v71 )
    goto LABEL_73;
  v80 = SepFlattenAcl(v71, &v106, &v103, v94);
  *(_QWORD *)&v73->Size = 1LL;
  if ( v80 < 0 )
    goto LABEL_74;
  v73->Ptr = v71;
  v74 = v106;
  v81 = v72++;
  v81 *= 2LL;
  *(&UserData.Ptr + v81) = (ULONGLONG)v94;
  *((_QWORD *)&UserData.Size + v81) = 2LL;
  v82 = &UserData + v72;
  LODWORD(v81) = v103;
  v82->Ptr = (ULONGLONG)v74;
  *(_QWORD *)&v82->Size = (unsigned int)v81;
LABEL_75:
  v76 = *(_WORD *)(v7 + 2);
  v77 = v72 + 1;
  if ( (v76 & 0x10) == 0 )
    goto LABEL_87;
  if ( v76 < 0 )
  {
    v78 = *(unsigned int *)(v7 + 12);
    if ( (_DWORD)v78 )
    {
      v79 = v7 + v78;
      goto LABEL_84;
    }
LABEL_87:
    v83 = v72 + 2;
    v84 = &UserData + v77;
    goto LABEL_88;
  }
  v79 = *(_QWORD *)(v7 + 24);
LABEL_84:
  v83 = v72 + 2;
  v84 = &UserData + v77;
  if ( !v79 )
  {
LABEL_88:
    *(_QWORD *)&v84->Size = 1LL;
    goto LABEL_89;
  }
  v85 = SepFlattenAcl(v79, &v107, &v104, v95);
  *(_QWORD *)&v84->Size = 1LL;
  if ( v85 < 0 )
  {
LABEL_89:
    v84->Ptr = (ULONGLONG)&v91;
    v86 = v107;
    v89 = 2LL * v83;
    *((_QWORD *)&UserData.Size + v89) = 2LL;
    *(&UserData.Ptr + v89) = (ULONGLONG)v93;
    goto LABEL_90;
  }
  v84->Ptr = v79;
  v86 = v107;
  v87 = v83++;
  v87 *= 2LL;
  *(&UserData.Ptr + v87) = (ULONGLONG)v95;
  *((_QWORD *)&UserData.Size + v87) = 2LL;
  v88 = &UserData + v83;
  LODWORD(v87) = v104;
  v88->Ptr = (ULONGLONG)v86;
  *(_QWORD *)&v88->Size = (unsigned int)v87;
LABEL_90:
  EtwWriteEx(EtwKernelProvRegHandle, &AccessCheckLog, 0LL, 0, 0LL, 0LL, v83 + 1, &UserData);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( v74 )
    ExFreePoolWithTag(v74, 0);
  if ( v86 )
    ExFreePoolWithTag(v86, 0);
  if ( v8 )
    ObfDereferenceObjectWithTag(v10, 0x67446553u);
  if ( v92[0] )
  {
    v90 = (PVOID *)v112;
    ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)v112 + 2) + 8LL), 0);
    ExFreePoolWithTag(v90[2], 0);
    ExFreePoolWithTag(*((PVOID *)v90[3] + 1), 0);
    ExFreePoolWithTag(v90[3], 0);
    ExFreePoolWithTag(v90, 0);
  }
}
