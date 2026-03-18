/*
 * XREFs of SeLogAccessFailure @ 0x1403CF70C
 * Callers:
 *     SeAccessCheckWithHint @ 0x140362560 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x1403CD1A0 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14092B360 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     SepFlattenAcl @ 0x1405FC4EC (SepFlattenAcl.c)
 *     SepGetLearningModeObjectInformation @ 0x1405FC644 (SepGetLearningModeObjectInformation.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     PsReferenceEffectiveToken @ 0x140969860 (PsReferenceEffectiveToken.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SeLogAccessFailure(char *Object, __int64 a2, __int64 a3, ULONGLONG a4, __int64 a5, char a6, char a7)
{
  char v7; // bl
  char v9; // cl
  unsigned __int8 CurrentIrql; // al
  const wchar_t *v11; // rax
  __int64 LearningModeObjectInformation; // rax
  __int64 v13; // r13
  const WCHAR *v14; // rdx
  unsigned __int16 *v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  int v18; // ebx
  unsigned __int16 *v19; // r8
  const WCHAR *v20; // rdx
  int v21; // eax
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  const WCHAR *v24; // r8
  unsigned __int64 LastRebalanceQpc; // rax
  int v26; // edx
  __int64 v27; // rax
  int *v28; // rax
  int v29; // edi
  _DWORD *Pool2; // rax
  _DWORD *v31; // rsi
  __int64 v32; // rcx
  unsigned int v33; // eax
  unsigned int v34; // edi
  ULONGLONG v35; // rcx
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // r10
  ULONG v39; // esi
  __int64 *v40; // r9
  __int64 v41; // rax
  void *v42; // rax
  PVOID v43; // rdx
  unsigned int v44; // ecx
  _DWORD *v45; // r12
  unsigned int v46; // r13d
  __int64 v47; // rbx
  unsigned __int8 *v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  ULONGLONG v52; // rdx
  __int64 v53; // rax
  unsigned int v54; // edi
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rax
  unsigned int v58; // edi
  __int64 v59; // rcx
  unsigned int v60; // edi
  __int16 v61; // r8
  __int64 v62; // rax
  unsigned __int8 *v63; // rdx
  __int64 v64; // rcx
  unsigned int v65; // edi
  int v66; // eax
  __int64 v67; // rax
  unsigned __int8 *v68; // rdx
  __int64 v69; // rcx
  int v70; // eax
  unsigned int v71; // ecx
  __int64 v72; // rax
  ULONGLONG v73; // rdi
  unsigned int v74; // ebx
  __int64 v75; // rsi
  int v76; // eax
  PVOID v77; // r12
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rax
  __int16 v81; // ax
  unsigned int v82; // ecx
  __int64 v83; // rax
  ULONGLONG v84; // rdi
  unsigned int v85; // ebx
  __int64 v86; // rsi
  int v87; // eax
  PVOID v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rax
  char v92; // [rsp+48h] [rbp-C0h] BYREF
  char v93; // [rsp+49h] [rbp-BFh]
  char v94[2]; // [rsp+4Ah] [rbp-BEh] BYREF
  _WORD v95[2]; // [rsp+4Ch] [rbp-BCh] BYREF
  __int16 v96[2]; // [rsp+50h] [rbp-B8h] BYREF
  int v97; // [rsp+54h] [rbp-B4h] BYREF
  int v98; // [rsp+58h] [rbp-B0h] BYREF
  int v99; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v100; // [rsp+60h] [rbp-A8h] BYREF
  int v101; // [rsp+64h] [rbp-A4h] BYREF
  int v102; // [rsp+68h] [rbp-A0h] BYREF
  int v103; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v104; // [rsp+70h] [rbp-98h] BYREF
  PVOID v105; // [rsp+78h] [rbp-90h] BYREF
  PVOID v106; // [rsp+80h] [rbp-88h] BYREF
  int v107; // [rsp+88h] [rbp-80h] BYREF
  PVOID v108; // [rsp+90h] [rbp-78h]
  __int64 v109; // [rsp+98h] [rbp-70h]
  ULONGLONG v110; // [rsp+A0h] [rbp-68h]
  PVOID P; // [rsp+A8h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B8h] [rbp-50h] BYREF
  const WCHAR *v113; // [rsp+C8h] [rbp-40h]
  int v114; // [rsp+D0h] [rbp-38h]
  int v115; // [rsp+D4h] [rbp-34h]
  const WCHAR *v116; // [rsp+D8h] [rbp-30h]
  int v117; // [rsp+E0h] [rbp-28h]
  int v118; // [rsp+E4h] [rbp-24h]
  const WCHAR *v119; // [rsp+E8h] [rbp-20h]
  int v120; // [rsp+F0h] [rbp-18h]
  int v121; // [rsp+F4h] [rbp-14h]
  const WCHAR *v122; // [rsp+F8h] [rbp-10h]
  __int64 v123; // [rsp+100h] [rbp-8h]
  char *v124; // [rsp+108h] [rbp+0h]
  __int64 v125; // [rsp+110h] [rbp+8h]
  int *v126; // [rsp+118h] [rbp+10h]
  __int64 v127; // [rsp+120h] [rbp+18h]
  int *v128; // [rsp+128h] [rbp+20h]
  __int64 v129; // [rsp+130h] [rbp+28h]
  char *v130; // [rsp+138h] [rbp+30h]
  __int64 v131; // [rsp+140h] [rbp+38h]
  int *v132; // [rsp+148h] [rbp+40h]
  __int64 v133; // [rsp+150h] [rbp+48h]
  int *v134; // [rsp+158h] [rbp+50h]
  __int64 v135; // [rsp+160h] [rbp+58h]
  _DWORD *v136; // [rsp+168h] [rbp+60h]
  int v137; // [rsp+170h] [rbp+68h]
  int v138; // [rsp+174h] [rbp+6Ch]

  v7 = a7;
  v9 = 0;
  v110 = a4;
  v93 = 0;
  v108 = 0LL;
  v100 = 0;
  LOBYTE(v96[0]) = 0;
  v105 = 0LL;
  LOWORD(v97) = 0;
  v104 = 0LL;
  v106 = 0LL;
  LOWORD(v98) = 0;
  v94[0] = 0;
  v102 = 0;
  v103 = 1;
  v101 = 0;
  v99 = 0;
  v92 = 0;
  v95[0] = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( !EtwKernelProvRegHandle || CurrentIrql >= 2u )
    return;
  if ( Object )
  {
    v101 = *((_DWORD *)Object + 48);
    v102 = *((_DWORD *)Object + 49);
  }
  else
  {
    Object = (char *)PsReferenceEffectiveToken(KeGetCurrentThread(), 1732535635LL, &v101, v96, &v102, 0LL);
    if ( !Object )
      return;
    v9 = 1;
    v93 = 1;
  }
  if ( (*((_DWORD *)Object + 50) & 0x1000000) == 0 )
  {
    if ( v9 )
      ObfDereferenceObjectWithTag(Object, 0x67446553u);
    return;
  }
  UserData.Reserved = 0;
  v11 = L"Normal";
  if ( v7 )
    v11 = L"Permissive";
  UserData.Ptr = (ULONGLONG)v11;
  UserData.Size = v7 != 0 ? 22 : 14;
  LearningModeObjectInformation = SepGetLearningModeObjectInformation(v94);
  v109 = LearningModeObjectInformation;
  v13 = LearningModeObjectInformation;
  v14 = &SourceString;
  if ( LearningModeObjectInformation && (v15 = *(unsigned __int16 **)(LearningModeObjectInformation + 16)) != 0LL )
  {
    v16 = *v15;
    v17 = v16 + 2;
    if ( v16 + 2 >= (unsigned __int64)v15[1] )
      v17 = v15[1];
    v14 = (const WCHAR *)*((_QWORD *)v15 + 1);
  }
  else
  {
    v17 = 2;
  }
  v113 = v14;
  v114 = v17;
  v115 = 0;
  v18 = 10;
  if ( v13 && (v19 = *(unsigned __int16 **)(v13 + 24)) != 0LL )
  {
    if ( *(_QWORD *)(v13 + 32) && (v20 = *(const WCHAR **)(v13 + 48)) != 0LL )
    {
      v21 = *(unsigned __int16 *)(v13 + 42);
      v118 = 0;
      LODWORD(v22) = v21;
    }
    else
    {
      v23 = *v19;
      v22 = v19[1];
      if ( v23 + 2 < v22 )
        LODWORD(v22) = v23 + 2;
      v20 = (const WCHAR *)*((_QWORD *)v19 + 1);
      v118 = 0;
    }
    v24 = &SourceString;
  }
  else
  {
    v24 = &SourceString;
    v118 = 0;
    v20 = &SourceString;
    LODWORD(v22) = 2;
  }
  v117 = v22;
  v116 = v20;
  LastRebalanceQpc = KeGetCurrentThread()->Process[1].LastRebalanceQpc;
  if ( LastRebalanceQpc )
  {
    v26 = *(unsigned __int16 *)(LastRebalanceQpc + 2);
    v24 = *(const WCHAR **)(LastRebalanceQpc + 8);
  }
  else
  {
    v26 = 2;
  }
  v119 = v24;
  v120 = v26;
  v121 = 0;
  v122 = &SourceString;
  v123 = 2LL;
  v124 = &a6;
  v125 = 4LL;
  v126 = &v101;
  v127 = 4LL;
  v128 = &v102;
  v129 = 4LL;
  v130 = Object + 120;
  v131 = 4LL;
  v27 = *((_QWORD *)Object + 135);
  if ( v27 )
    v28 = (int *)(v27 + 40);
  else
    v28 = &v99;
  v132 = v28;
  v133 = 4LL;
  v107 = 1;
  v29 = 4 * *(unsigned __int8 *)(**((_QWORD **)Object + 19) + 1LL) + 12;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  P = Pool2;
  v31 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = *(_DWORD *)(*((_QWORD *)Object + 19) + 8LL);
    memmove(
      Pool2 + 1,
      **((const void ***)Object + 19),
      4LL * *(unsigned __int8 *)(**((_QWORD **)Object + 19) + 1LL) + 8);
    v18 = 11;
    v134 = &v107;
    v135 = 4LL;
    v136 = v31;
    v137 = v29;
    v138 = 0;
  }
  else
  {
    v134 = &v99;
    v135 = 4LL;
  }
  v32 = *((_QWORD *)Object + 98);
  v33 = v18 + 1;
  v34 = v18 + 2;
  *((_QWORD *)&UserData.Size + 2 * (unsigned int)(v18 + 1)) = 4LL;
  if ( v32 )
  {
    *(&UserData.Ptr + 2 * v33) = (ULONGLONG)&v103;
    v35 = *((_QWORD *)Object + 98);
    v36 = 2LL * v34;
    v34 = v18 + 3;
    v37 = *(unsigned __int8 *)(v35 + 1);
    *(&UserData.Ptr + v36) = v35;
    *(&UserData.Reserved + 2 * v36) = 0;
    *(&UserData.Size + 2 * v36) = 4 * v37 + 8;
  }
  else
  {
    *(&UserData.Ptr + 2 * v33) = (ULONGLONG)&v99;
  }
  if ( !*((_DWORD *)Object + 200) )
  {
    v51 = 2LL * v34;
    *(&UserData.Ptr + v51) = (ULONGLONG)&v99;
    *((_QWORD *)&UserData.Size + v51) = 4LL;
    goto LABEL_53;
  }
  v38 = *((unsigned int *)Object + 200);
  v39 = 0;
  v40 = (__int64 *)*((_QWORD *)Object + 99);
  do
  {
    v41 = *v40;
    v40 += 2;
    v39 += 4 * *(unsigned __int8 *)(v41 + 1) + 12;
    --v38;
  }
  while ( v38 );
  v42 = (void *)ExAllocatePool2(0x100uLL);
  v108 = v42;
  v43 = v42;
  if ( v42 )
  {
    v44 = *((_DWORD *)Object + 200);
    v45 = v42;
    v100 = v44;
    if ( v44 )
    {
      v46 = 0;
      do
      {
        v47 = 2LL * v46;
        *v45 = *(_DWORD *)(*((_QWORD *)Object + 99) + 16LL * v46 + 8);
        v48 = *(unsigned __int8 **)(*((_QWORD *)Object + 99) + 16LL * v46);
        memmove(v45 + 1, v48, 4LL * v48[1] + 8);
        ++v46;
        v44 = v100;
        v45 += *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Object + 99) + 8 * v47) + 1LL) + 3;
      }
      while ( v46 < v100 );
      v13 = v109;
      v43 = v108;
    }
  }
  else
  {
    v44 = v100;
  }
  v49 = 2LL * v34++;
  *(&UserData.Ptr + v49) = (ULONGLONG)&v100;
  *((_QWORD *)&UserData.Size + v49) = 4LL;
  if ( v44 )
  {
    v50 = 2LL * v34;
    *(&UserData.Ptr + v50) = (ULONGLONG)v43;
    *(&UserData.Size + 2 * v50) = v39;
    *(&UserData.Reserved + 2 * v50) = 0;
LABEL_53:
    ++v34;
  }
  v52 = v110;
  v53 = 2LL * v34;
  v54 = v34 + 1;
  *((_QWORD *)&UserData.Size + v53) = 4LL;
  if ( v52 )
  {
    *(&UserData.Ptr + v53) = (ULONGLONG)&v103;
    v55 = 2LL * v54++;
    v56 = 4 * *(unsigned __int8 *)(v52 + 1) + 8;
    *(&UserData.Ptr + v55) = v52;
    *(&UserData.Size + 2 * v55) = v56;
    *(&UserData.Reserved + 2 * v55) = 0;
  }
  else
  {
    *(&UserData.Ptr + v53) = (ULONGLONG)&v99;
  }
  v57 = v54;
  v58 = v54 + 1;
  v57 *= 2LL;
  v59 = 2LL * v58;
  v60 = v58 + 1;
  *(&UserData.Ptr + v57) = a5;
  *((_QWORD *)&UserData.Size + v57) = 1LL;
  v61 = *(_WORD *)(a5 + 2);
  *(&UserData.Ptr + v59) = a5 + 2;
  *((_QWORD *)&UserData.Size + v59) = 2LL;
  if ( v61 >= 0 )
  {
    v63 = *(unsigned __int8 **)(a5 + 8);
LABEL_61:
    if ( v63 )
      goto LABEL_63;
    goto LABEL_62;
  }
  v62 = *(unsigned int *)(a5 + 4);
  if ( (_DWORD)v62 )
  {
    v63 = (unsigned __int8 *)(a5 + v62);
    goto LABEL_61;
  }
LABEL_62:
  v63 = (unsigned __int8 *)SeNullSid;
LABEL_63:
  v64 = v60;
  v65 = v60 + 1;
  v64 *= 2LL;
  v66 = 4 * v63[1] + 8;
  *(&UserData.Ptr + v64) = (ULONGLONG)v63;
  *(&UserData.Size + 2 * v64) = v66;
  *(&UserData.Reserved + 2 * v64) = 0;
  if ( v61 >= 0 )
  {
    v68 = *(unsigned __int8 **)(a5 + 8);
LABEL_67:
    if ( v68 )
      goto LABEL_69;
    goto LABEL_68;
  }
  v67 = *(unsigned int *)(a5 + 4);
  if ( (_DWORD)v67 )
  {
    v68 = (unsigned __int8 *)(a5 + v67);
    goto LABEL_67;
  }
LABEL_68:
  v68 = (unsigned __int8 *)SeNullSid;
LABEL_69:
  v69 = 2LL * v65;
  v70 = 4 * v68[1] + 8;
  *(&UserData.Ptr + v69) = (ULONGLONG)v68;
  *(&UserData.Size + 2 * v69) = v70;
  *(&UserData.Reserved + 2 * v69) = 0;
  v71 = v65 + 1;
  if ( (v61 & 4) == 0 )
  {
LABEL_73:
    v73 = 0LL;
    goto LABEL_75;
  }
  if ( v61 < 0 )
  {
    v72 = *(unsigned int *)(a5 + 16);
    if ( (_DWORD)v72 )
    {
      v73 = a5 + v72;
      goto LABEL_75;
    }
    goto LABEL_73;
  }
  v73 = *(_QWORD *)(a5 + 32);
LABEL_75:
  v74 = v71 + 1;
  v75 = 2LL * v71;
  if ( v73 )
  {
    v76 = SepFlattenAcl(v73, &v105, &v104, &v97);
    *((_QWORD *)&UserData.Size + v75) = 1LL;
    v77 = v105;
    if ( v76 >= 0 )
    {
      *(&UserData.Ptr + v75) = v73;
      v78 = v74++;
      v78 *= 2LL;
      *(&UserData.Ptr + v78) = (ULONGLONG)&v97;
      *((_QWORD *)&UserData.Size + v78) = 2LL;
      LODWORD(v78) = v104;
      v79 = 2LL * v74;
      *(&UserData.Ptr + v79) = (ULONGLONG)v77;
      *(&UserData.Size + 2 * v79) = v78;
      *(&UserData.Reserved + 2 * v79) = 0;
      goto LABEL_80;
    }
  }
  else
  {
    v77 = v105;
    *((_QWORD *)&UserData.Size + 2 * v71) = 1LL;
  }
  *(&UserData.Ptr + v75) = (ULONGLONG)&v92;
  v80 = 2LL * v74;
  *((_QWORD *)&UserData.Size + v80) = 2LL;
  *(&UserData.Ptr + v80) = (ULONGLONG)v95;
LABEL_80:
  v81 = *(_WORD *)(a5 + 2);
  v82 = v74 + 1;
  if ( (v81 & 0x10) == 0 )
  {
LABEL_84:
    v84 = 0LL;
    goto LABEL_86;
  }
  if ( v81 < 0 )
  {
    v83 = *(unsigned int *)(a5 + 12);
    if ( (_DWORD)v83 )
    {
      v84 = a5 + v83;
      goto LABEL_86;
    }
    goto LABEL_84;
  }
  v84 = *(_QWORD *)(a5 + 24);
LABEL_86:
  v85 = v74 + 2;
  v86 = 2LL * v82;
  if ( !v84 )
  {
    *((_QWORD *)&UserData.Size + 2 * v82) = 1LL;
    goto LABEL_90;
  }
  v87 = SepFlattenAcl(v84, &v106, (char *)&v104 + 4, &v98);
  *((_QWORD *)&UserData.Size + v86) = 1LL;
  if ( v87 < 0 )
  {
LABEL_90:
    v88 = v106;
    *(&UserData.Ptr + v86) = (ULONGLONG)&v92;
    v91 = 2LL * v85;
    *((_QWORD *)&UserData.Size + v91) = 2LL;
    *(&UserData.Ptr + v91) = (ULONGLONG)v95;
    goto LABEL_91;
  }
  *(&UserData.Ptr + v86) = v84;
  v88 = v106;
  v89 = v85++;
  v89 *= 2LL;
  *(&UserData.Ptr + v89) = (ULONGLONG)&v98;
  *((_QWORD *)&UserData.Size + v89) = 2LL;
  LODWORD(v89) = HIDWORD(v104);
  v90 = 2LL * v85;
  *(&UserData.Ptr + v90) = (ULONGLONG)v88;
  *(&UserData.Size + 2 * v90) = v89;
  *(&UserData.Reserved + 2 * v90) = 0;
LABEL_91:
  EtwWriteEx(EtwKernelProvRegHandle, &AccessCheckLog, 0LL, 0, 0LL, 0LL, v85 + 1, &UserData);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v108 )
    ExFreePoolWithTag(v108, 0);
  if ( v77 )
    ExFreePoolWithTag(v77, 0);
  if ( v88 )
    ExFreePoolWithTag(v88, 0);
  if ( v93 )
    ObfDereferenceObjectWithTag(Object, 0x67446553u);
  if ( v94[0] )
  {
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v13 + 16) + 8LL), 0);
    ExFreePoolWithTag(*(PVOID *)(v13 + 16), 0);
    ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v13 + 24) + 8LL), 0);
    ExFreePoolWithTag(*(PVOID *)(v13 + 24), 0);
    ExFreePoolWithTag((PVOID)v13, 0);
  }
}
