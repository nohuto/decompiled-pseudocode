/*
 * XREFs of sub_14095C450 @ 0x14095C450
 * Callers:
 *     Callout @ 0x140A24720 (Callout.c)
 * Callees:
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     RtlUIntAdd @ 0x14044B380 (RtlUIntAdd.c)
 *     sub_1404B4658 @ 0x1404B4658 (sub_1404B4658.c)
 *     sub_1404CC81C @ 0x1404CC81C (sub_1404CC81C.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1406A7A70 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     sub_1406F3224 @ 0x1406F3224 (sub_1406F3224.c)
 *     sub_1406F3B20 @ 0x1406F3B20 (sub_1406F3B20.c)
 *     sub_1406F3DBC @ 0x1406F3DBC (sub_1406F3DBC.c)
 *     sub_1406F418C @ 0x1406F418C (sub_1406F418C.c)
 *     sub_1406F7C28 @ 0x1406F7C28 (sub_1406F7C28.c)
 *     sub_1406F81C4 @ 0x1406F81C4 (sub_1406F81C4.c)
 *     sub_1406F857C @ 0x1406F857C (sub_1406F857C.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x140911480 (RtlpAddKnownAce.c)
 *     sub_14095C060 @ 0x14095C060 (sub_14095C060.c)
 *     sub_14095C140 @ 0x14095C140 (sub_14095C140.c)
 *     sub_14095C220 @ 0x14095C220 (sub_14095C220.c)
 *     sub_14095C250 @ 0x14095C250 (sub_14095C250.c)
 *     sub_14095C2E0 @ 0x14095C2E0 (sub_14095C2E0.c)
 *     sub_14095C310 @ 0x14095C310 (sub_14095C310.c)
 *     sub_14095C340 @ 0x14095C340 (sub_14095C340.c)
 *     sub_14095C3C0 @ 0x14095C3C0 (sub_14095C3C0.c)
 *     SPCallServerHandleQueryPolicy @ 0x14095F70C (SPCallServerHandleQueryPolicy.c)
 *     sub_140960848 @ 0x140960848 (sub_140960848.c)
 *     sub_1409F4D38 @ 0x1409F4D38 (sub_1409F4D38.c)
 *     sub_1409F5164 @ 0x1409F5164 (sub_1409F5164.c)
 *     sub_1409F581C @ 0x1409F581C (sub_1409F581C.c)
 *     sub_140A278DC @ 0x140A278DC (sub_140A278DC.c)
 *     sub_140A3273C @ 0x140A3273C (sub_140A3273C.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x140A4D140 (SPCallServerHandleGetAppPolicyValue.c)
 *     sub_140A4F33C @ 0x140A4F33C (sub_140A4F33C.c)
 *     SPCallServerHandleUpdatePolicies @ 0x140A6354C (SPCallServerHandleUpdatePolicies.c)
 *     SPCallServerHandleCallbackPaintComplete @ 0x140A859A4 (SPCallServerHandleCallbackPaintComplete.c)
 *     SPCallServerHandleUpdateLicense @ 0x140A89540 (SPCallServerHandleUpdateLicense.c)
 *     sub_140AABC38 @ 0x140AABC38 (sub_140AABC38.c)
 *     sub_140AB32DC @ 0x140AB32DC (sub_140AB32DC.c)
 *     sub_140AB5278 @ 0x140AB5278 (sub_140AB5278.c)
 *     sub_140AB56C0 @ 0x140AB56C0 (sub_140AB56C0.c)
 *     sub_140AB5CF0 @ 0x140AB5CF0 (sub_140AB5CF0.c)
 *     sub_140AB8F9C @ 0x140AB8F9C (sub_140AB8F9C.c)
 *     sub_140AB9580 @ 0x140AB9580 (sub_140AB9580.c)
 *     sub_140ABB360 @ 0x140ABB360 (sub_140ABB360.c)
 *     sub_140ABC324 @ 0x140ABC324 (sub_140ABC324.c)
 *     sub_140ABDBD0 @ 0x140ABDBD0 (sub_140ABDBD0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14095C450(unsigned int *a1, unsigned int a2, int a3, char **a4, unsigned int *a5)
{
  unsigned __int8 *v5; // r15
  void *v6; // rsi
  unsigned int *v7; // r12
  __int64 v8; // r13
  PVOID v9; // r14
  ULONG_PTR v10; // r13
  unsigned int *v11; // r8
  unsigned int *v12; // rcx
  ULONG_PTR v13; // r14
  char *v14; // r15
  unsigned int v15; // r9d
  unsigned int *v16; // rcx
  unsigned int v17; // r8d
  ULONG_PTR v18; // rsi
  const void *v19; // r12
  int Acl; // edi
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  void *v25; // rcx
  void *v26; // rcx
  unsigned int v28; // ecx
  __int64 Pool2; // rax
  unsigned int *v30; // rbx
  void *v31; // rax
  void *v32; // rax
  unsigned __int8 *v33; // r14
  unsigned __int64 v34; // rcx
  __int64 *v35; // rbx
  unsigned int v36; // edx
  __int64 v37; // rsi
  unsigned int v38; // eax
  __int64 v39; // rbx
  unsigned __int8 v40; // di
  void *v41; // rax
  unsigned __int64 v42; // r9
  unsigned __int8 *v43; // r12
  unsigned __int8 *v44; // r11
  unsigned int v45; // r13d
  unsigned __int8 *v46; // r8
  int v47; // edx
  int v48; // eax
  unsigned int v49; // r15d
  int v50; // edx
  int v51; // r8d
  unsigned int v52; // r13d
  int v53; // r15d
  int v54; // r13d
  int v55; // r15d
  int v56; // r13d
  int v57; // r15d
  int v58; // r13d
  __int64 v59; // r12
  unsigned __int64 v60; // r14
  unsigned __int8 *v61; // rsi
  int v62; // r15d
  int v63; // r13d
  unsigned int v64; // r15d
  unsigned __int8 *v65; // rbx
  unsigned int v66; // r13d
  unsigned int v67; // r15d
  __int64 v68; // rax
  __int64 (__fastcall *v69)(char, unsigned __int64, unsigned __int64, __int64, int, __int64, unsigned int); // rax
  int v70; // ecx
  __int64 v71; // r9
  unsigned __int64 v72; // r12
  unsigned __int64 v73; // r11
  unsigned int v74; // r9d
  __int64 v75; // rax
  __int64 (__fastcall *v76)(unsigned __int64, __int64, __int64, __int64, int, __int64, int); // rax
  __int64 v77; // rdx
  int v78; // edx
  _BYTE *v79; // r11
  int v80; // edi
  bool v81; // zf
  unsigned int v82; // eax
  int v83; // eax
  unsigned __int64 i; // rax
  void *v85; // rcx
  void *v86; // rcx
  void *v87; // rcx
  void *v88; // rax
  const void *v89; // rdx
  ULONG_PTR v90; // rsi
  char *v91; // rbx
  unsigned __int64 v92; // rdx
  size_t v93; // r11
  char *v94; // rcx
  unsigned int v95; // eax
  char *v96; // r8
  void *v97; // rcx
  void *v98; // rcx
  void *v99; // rcx
  int v100; // r9d
  int v101; // r10d
  int v102; // r8d
  int v103; // r13d
  char v104; // dl
  int v105; // eax
  __int64 v106; // rdi
  __int64 v107; // rbx
  _BYTE *v108; // rsi
  __int64 v109; // rcx
  int v110; // eax
  int v111; // eax
  unsigned int v112; // r10d
  unsigned int v113; // r13d
  unsigned int v114; // r8d
  unsigned int v115; // r14d
  unsigned int v116; // r9d
  _BYTE *v117; // rdx
  _BYTE *v118; // r11
  char v119; // al
  unsigned int v120; // r13d
  __int64 v121; // rax
  char *v122; // r12
  unsigned int v123; // r14d
  unsigned __int8 *v124; // rsi
  _BYTE *v125; // r15
  unsigned __int64 v126; // rbx
  unsigned __int8 *v127; // rdx
  unsigned __int8 *v128; // rcx
  unsigned __int8 *v129; // rbx
  unsigned __int8 *v130; // rdi
  int v131; // r13d
  int v132; // r14d
  int v133; // r13d
  int v134; // r12d
  unsigned __int64 v135; // rsi
  __int64 v136; // r15
  __int64 v137; // rax
  __int64 (__fastcall *v138)(unsigned __int64, __int64, unsigned __int64, unsigned __int64, int, __int64, unsigned int); // rax
  int v139; // ecx
  unsigned __int64 v140; // r9
  unsigned __int64 v141; // r8
  unsigned __int64 v142; // rdx
  int v143; // eax
  __int64 v144; // rax
  __int64 (__fastcall *v145)(unsigned __int64, __int64, unsigned __int64, unsigned __int64, int, __int64, unsigned int); // rax
  int v146; // ecx
  unsigned __int64 v147; // r9
  unsigned __int64 v148; // r8
  unsigned __int64 v149; // rdx
  int v150; // eax
  int v151; // eax
  int v152; // ebx
  unsigned int v153; // r14d
  int v154; // r12d
  int v155; // r14d
  int v156; // r12d
  int v157; // r14d
  int v158; // r12d
  int v159; // r14d
  unsigned int v160; // r12d
  int v161; // r14d
  int v162; // r12d
  _BYTE *v163; // r9
  int v164; // r13d
  int v165; // r14d
  int v166; // r12d
  unsigned int v167; // r12d
  void *v168; // rax
  void *v169; // rbx
  _DWORD *v170; // r14
  _DWORD *v171; // rsi
  unsigned int v172; // r11d
  unsigned int v173; // r10d
  unsigned int v174; // ecx
  unsigned int v175; // eax
  unsigned int v176; // ebx
  _DWORD *v177; // rax
  char *v178; // rcx
  _DWORD *v179; // rdi
  _DWORD *v180; // rcx
  _DWORD *v181; // rdi
  _DWORD *v182; // rcx
  _DWORD *v183; // rdi
  __int64 v184; // rax
  int v185; // r8d
  int v186; // r9d
  int v187; // edx
  char v188; // r13
  unsigned __int8 *v189; // rdi
  int v190; // eax
  __int64 v191; // rcx
  _BYTE *v192; // r13
  unsigned __int8 *v193; // r12
  int v194; // edi
  __int64 v195; // r15
  int v196; // eax
  int v197; // eax
  unsigned int v198; // eax
  unsigned int v199; // r9d
  unsigned int v200; // ebx
  unsigned int v201; // edx
  unsigned int v202; // r8d
  unsigned __int8 *v203; // rdi
  char v204; // al
  __int64 *v205; // rdx
  int v206; // ecx
  int v207; // eax
  unsigned __int64 v208; // r8
  __int64 v209; // rbx
  unsigned __int64 v210; // rax
  unsigned __int8 v211; // si
  int *v212; // rsi
  int v213; // esi
  unsigned int *v214; // rax
  int j; // r9d
  unsigned int *v216; // rcx
  PVOID v217; // r8
  ULONG_PTR v218; // r14
  void *v219; // r11
  const void *v220; // r12
  unsigned int *v221; // r10
  unsigned int v222; // r9d
  unsigned int *v223; // rax
  ULONG_PTR v224; // r15
  unsigned int *v225; // rcx
  const void *v226; // r13
  _OWORD *v227; // rax
  __int64 v228; // r8
  _OWORD *v229; // rbx
  unsigned int *v230; // rax
  PVOID v231; // rcx
  void *v232; // rax
  void *v233; // rax
  void *v234; // rcx
  void *v235; // rcx
  void *v236; // rcx
  unsigned __int64 v237; // rdi
  __int64 v238; // rbx
  unsigned __int8 *v239; // rax
  __int64 v240; // r14
  ULONG v241; // ebx
  ULONG v242; // ebx
  ULONG v243; // ebx
  ACL *v244; // rax
  ACL *v245; // rsi
  BOOLEAN v246; // bl
  size_t v247; // rbx
  const void *v248; // rsi
  const void *v249; // rdi
  int updated; // eax
  __int64 v251; // rdx
  __int64 v252; // r8
  __int64 v253; // r14
  ULONG v254; // ebx
  ULONG v255; // ebx
  ULONG v256; // ebx
  ACL *v257; // rax
  ACL *v258; // rsi
  BOOLEAN v259; // bl
  const void *v260; // rdi
  unsigned int *v261; // rax
  unsigned int v262; // edx
  __int64 v263; // r8
  unsigned int *v264; // rcx
  __int64 *v265; // rbx
  __int64 v266; // rbx
  unsigned int *v267; // rax
  unsigned int k; // edx
  size_t v269; // rdi
  unsigned int *v270; // rcx
  unsigned int *v271; // rsi
  void *v272; // rax
  unsigned int *v273; // rax
  unsigned int v274; // edx
  unsigned int *v275; // rcx
  PVOID v276; // r10
  ULONG_PTR v277; // r14
  __int64 v278; // r8
  size_t v279; // rbx
  const void *v280; // r14
  const void *v281; // rsi
  _QWORD *v282; // rdi
  void *v283; // rax
  int v284; // edi
  _DWORD *v285; // rax
  int v286; // edi
  unsigned int v287; // ecx
  unsigned __int64 v288; // rdx
  unsigned int m; // r8d
  unsigned int v290; // eax
  int v291; // edx
  ACCESS_MASK PreviouslyGrantedAccess[2]; // [rsp+28h] [rbp-E0h]
  PPRIVILEGE_SET *Privileges; // [rsp+30h] [rbp-D8h]
  unsigned __int8 *v294; // [rsp+58h] [rbp-B0h]
  PVOID v295; // [rsp+60h] [rbp-A8h]
  PVOID v296; // [rsp+60h] [rbp-A8h]
  PVOID v297; // [rsp+60h] [rbp-A8h]
  char *v298; // [rsp+68h] [rbp-A0h]
  unsigned int *v299; // [rsp+70h] [rbp-98h]
  unsigned int *v300; // [rsp+78h] [rbp-90h]
  PVOID v301[2]; // [rsp+80h] [rbp-88h] BYREF
  PVOID P[2]; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int8 v303; // [rsp+A0h] [rbp-68h]
  int v304; // [rsp+A4h] [rbp-64h]
  int v305; // [rsp+A8h] [rbp-60h]
  int v306; // [rsp+ACh] [rbp-5Ch]
  unsigned __int8 *v307; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v308; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v309; // [rsp+C0h] [rbp-48h]
  int v310; // [rsp+C8h] [rbp-40h]
  __int64 v311; // [rsp+D0h] [rbp-38h]
  PVOID v312; // [rsp+D8h] [rbp-30h]
  char *v313; // [rsp+E0h] [rbp-28h]
  int v314; // [rsp+E8h] [rbp-20h]
  __int64 v315; // [rsp+F0h] [rbp-18h]
  unsigned __int8 *v316; // [rsp+F8h] [rbp-10h]
  NTSTATUS AccessStatus; // [rsp+100h] [rbp-8h] BYREF
  int v318; // [rsp+104h] [rbp-4h] BYREF
  _BYTE *v319; // [rsp+108h] [rbp+0h]
  NTSTATUS v320; // [rsp+110h] [rbp+8h] BYREF
  unsigned int *v321; // [rsp+118h] [rbp+10h]
  ACCESS_MASK v322; // [rsp+120h] [rbp+18h] BYREF
  ULONG v323; // [rsp+124h] [rbp+1Ch] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+128h] [rbp+20h] BYREF
  ULONG ReturnLength; // [rsp+12Ch] [rbp+24h] BYREF
  ULONG v326; // [rsp+130h] [rbp+28h] BYREF
  unsigned __int8 *v327; // [rsp+138h] [rbp+30h]
  __int64 v328; // [rsp+140h] [rbp+38h] BYREF
  __int64 SystemInformation; // [rsp+148h] [rbp+40h] BYREF
  __int64 v330; // [rsp+150h] [rbp+48h] BYREF
  void *v331; // [rsp+158h] [rbp+50h]
  char **v332; // [rsp+168h] [rbp+60h]
  unsigned int *v333; // [rsp+170h] [rbp+68h]
  _OWORD v334[2]; // [rsp+178h] [rbp+70h] BYREF
  ACL *v335; // [rsp+198h] [rbp+90h]
  _OWORD SecurityDescriptor[2]; // [rsp+1A0h] [rbp+98h] BYREF
  ACL *v337; // [rsp+1C0h] [rbp+B8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+1C8h] [rbp+C0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v340; // [rsp+210h] [rbp+108h] BYREF
  __int64 v341; // [rsp+218h] [rbp+110h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v308 = (unsigned __int64)a1;
  v332 = a4;
  LODWORD(v313) = a3;
  v333 = a5;
  v307 = 0LL;
  v331 = 0LL;
  v321 = 0LL;
  *(_OWORD *)P = 0LL;
  *(_OWORD *)v301 = 0LL;
  if ( a2 < 4 )
  {
    Acl = -1073741762;
    goto LABEL_19;
  }
  v10 = *a1;
  v11 = a1 + 1;
  if ( a1 + 1 < a1 )
    goto LABEL_17;
  if ( a2 - 4 < (unsigned int)v10 )
  {
    Acl = -1073741762;
    goto LABEL_18;
  }
  v12 = (unsigned int *)((char *)v11 + v10);
  if ( (unsigned int *)((char *)v11 + v10) < v11 || (unsigned int)v10 >= 0xFFFFFFFC )
  {
LABEL_17:
    Acl = -1073741675;
LABEL_18:
    v8 = 0LL;
    goto LABEL_19;
  }
  if ( a2 - ((_DWORD)v10 + 4) < 4 )
  {
    Acl = -1073741762;
    goto LABEL_18;
  }
  v13 = *v12;
  v14 = (char *)(v12 + 1);
  if ( v12 + 1 < v12 )
    goto LABEL_16;
  v15 = v10 + 8;
  if ( (int)v10 + 8 < (unsigned int)(v10 + 4) )
    goto LABEL_16;
  if ( a2 - v15 < (unsigned int)v13 )
  {
    Acl = -1073741762;
    v9 = 0LL;
    v5 = 0LL;
    goto LABEL_18;
  }
  v16 = (unsigned int *)&v14[v13];
  if ( &v14[v13] < v14 || (v17 = v13 + v15, (unsigned int)v13 + v15 < v15) )
  {
LABEL_16:
    v5 = 0LL;
    v9 = 0LL;
    goto LABEL_17;
  }
  if ( a2 - v17 < 4 )
  {
    Acl = -1073741762;
    v9 = 0LL;
    v5 = 0LL;
    goto LABEL_18;
  }
  v18 = *v16;
  v19 = v16 + 1;
  if ( v16 + 1 < v16 )
    goto LABEL_14;
  v28 = v17 + 4;
  if ( v17 + 4 < v17 )
    goto LABEL_14;
  if ( a2 - v28 < (unsigned int)v18 )
  {
LABEL_119:
    Acl = -1073741762;
    goto LABEL_15;
  }
  if ( (unsigned int)v18 + v28 < v28 )
  {
LABEL_14:
    Acl = -1073741675;
LABEL_15:
    v7 = 0LL;
    v9 = 0LL;
    v8 = 0LL;
    v5 = 0LL;
    v6 = 0LL;
    goto LABEL_19;
  }
  if ( a2 != (_DWORD)v18 + v28 || (unsigned int)(v10 + v18 + v13) + 12LL != a2 )
    goto LABEL_119;
  Pool2 = ExAllocatePool2(0x100uLL, 0x30uLL, 0x20534C53u);
  v30 = (unsigned int *)Pool2;
  if ( !Pool2 )
  {
    Acl = -1073741801;
    goto LABEL_15;
  }
  *(_OWORD *)Pool2 = 0LL;
  *(_OWORD *)(Pool2 + 16) = 0LL;
  *(_OWORD *)(Pool2 + 32) = 0LL;
  Acl = 0;
  if ( v308 == -4LL )
  {
    *(_DWORD *)Pool2 = 0;
    *(_QWORD *)(Pool2 + 8) = 0LL;
  }
  else
  {
    *(_DWORD *)Pool2 = v10;
    if ( !(_DWORD)v10 )
    {
      Acl = -1073741762;
      LODWORD(v14) = 0;
      goto LABEL_108;
    }
    v88 = (void *)ExAllocatePool2(0x100uLL, v10, 0x20534C53u);
    if ( !v88 )
    {
      LODWORD(v14) = 0;
      goto LABEL_107;
    }
    v89 = (const void *)(v308 + 4);
    *((_QWORD *)v30 + 1) = v88;
    memmove(v88, v89, v10);
  }
  if ( v14 )
  {
    v30[4] = v13;
    if ( !(_DWORD)v13 )
    {
      Acl = -1073741762;
      LODWORD(v14) = 0;
      goto LABEL_108;
    }
    v31 = (void *)ExAllocatePool2(0x100uLL, v13, 0x20534C53u);
    if ( !v31 )
    {
      LODWORD(v14) = 0;
      goto LABEL_107;
    }
    *((_QWORD *)v30 + 3) = v31;
    Acl = 0;
    memmove(v31, v14, v13);
    LODWORD(v14) = 0;
  }
  else
  {
    v30[4] = 0;
    *((_QWORD *)v30 + 3) = 0LL;
  }
  if ( !v19 )
  {
    v30[8] = 0;
    *((_QWORD *)v30 + 5) = 0LL;
    goto LABEL_62;
  }
  v30[8] = v18;
  if ( !(_DWORD)v18 )
  {
    Acl = -1073741762;
    goto LABEL_108;
  }
  v32 = (void *)ExAllocatePool2(0x100uLL, v18, 0x20534C53u);
  if ( v32 )
  {
    *((_QWORD *)v30 + 5) = v32;
    Acl = 0;
    memmove(v32, v19, v18);
    goto LABEL_62;
  }
LABEL_107:
  Acl = -1073741801;
LABEL_108:
  v85 = (void *)*((_QWORD *)v30 + 1);
  if ( v85 )
  {
    ExFreePoolWithTag(v85, 0);
    *((_QWORD *)v30 + 1) = 0LL;
  }
  v86 = (void *)*((_QWORD *)v30 + 3);
  if ( v86 )
  {
    ExFreePoolWithTag(v86, 0);
    *((_QWORD *)v30 + 3) = 0LL;
  }
  v87 = (void *)*((_QWORD *)v30 + 5);
  if ( v87 )
  {
    ExFreePoolWithTag(v87, 0);
    *((_QWORD *)v30 + 5) = 0LL;
  }
  ExFreePoolWithTag(v30, 0);
  v30 = v321;
LABEL_62:
  if ( Acl < 0 )
  {
    if ( v30 )
    {
      v97 = (void *)*((_QWORD *)v30 + 1);
      if ( v97 )
      {
        ExFreePoolWithTag(v97, 0);
        *((_QWORD *)v30 + 1) = 0LL;
      }
      v98 = (void *)*((_QWORD *)v30 + 3);
      if ( v98 )
      {
        ExFreePoolWithTag(v98, 0);
        *((_QWORD *)v30 + 3) = 0LL;
      }
      v99 = (void *)*((_QWORD *)v30 + 5);
      if ( v99 )
      {
        ExFreePoolWithTag(v99, 0);
        *((_QWORD *)v30 + 5) = 0LL;
      }
      ExFreePoolWithTag(v30, 0);
    }
    goto LABEL_15;
  }
  v300 = v30;
  v7 = v30;
  if ( !v30
    || (v33 = (unsigned __int8 *)*((_QWORD *)v30 + 1), (v319 = v33) == 0LL)
    || (v34 = *v30, !(_DWORD)v34)
    || (v35 = (__int64 *)*((_QWORD *)v30 + 5)) == 0LL
    || (v36 = v7[8]) == 0
    || (v37 = *((_QWORD *)v7 + 3)) == 0
    || (v38 = v7[4]) == 0 )
  {
    Acl = -1073741811;
    goto LABEL_149;
  }
  if ( v36 != 8
    || v38 != 160
    || v34 <= 8
    || (v39 = *v35,
        v315 = v34 - 8,
        v40 = 0,
        v41 = (void *)ExAllocatePool2(0x100uLL, v34 - 8, 0x20534C53u),
        (v312 = v41) == 0LL) )
  {
LABEL_148:
    Acl = -1073741823;
LABEL_149:
    v9 = 0LL;
    v8 = 0LL;
    v5 = 0LL;
    v6 = 0LL;
    goto LABEL_19;
  }
  v42 = v315;
  v43 = v33;
  v340 = v39;
  v308 = (unsigned __int64)v41;
  v309 = v315 & 7;
  if ( (v315 & 7) != 0 )
  {
    v100 = 0;
    v101 = 0;
    v305 = 0;
    v102 = 0;
    v306 = -1;
    v304 = 0;
    v103 = -1;
    v104 = 56;
    do
    {
      v105 = *v43++;
      if ( (unsigned int)v102 >= 4 )
        v100 |= v105 << v104;
      else
        v101 |= v105 << (v104 - 32);
      ++v102;
      v104 -= 8;
    }
    while ( v102 < (v315 & 7) );
    v304 = v101;
    v305 = v100;
    v106 = 30LL;
    v316 = (unsigned __int8 *)(v37 + 158);
    v321 = (unsigned int *)(v37 + 126);
    v107 = v37 + 126;
    v108 = (_BYTE *)(v37 + 158);
    v109 = 16LL;
    v311 = 16LL;
    do
    {
      if ( v108[1] < 0x1Fu )
      {
        Privileges = (PPRIVILEGE_SET *)&v340;
        *(_QWORD *)PreviouslyGrantedAccess = *(unsigned __int8 *)(v107 + 1);
        v110 = guard_dispatch_icall_no_overrides(v106 + 1, *(unsigned __int8 *)(v107 - 2));
        v109 = v311;
        v103 ^= v110;
      }
      if ( *v108 < 0x1Fu )
      {
        Privileges = (PPRIVILEGE_SET *)&v340;
        *(_QWORD *)PreviouslyGrantedAccess = *(unsigned __int8 *)(v107 - 3);
        v111 = guard_dispatch_icall_no_overrides(v106, *(unsigned __int8 *)(v107 - 6));
        v109 = v311;
        LODWORD(v14) = v111 ^ (unsigned int)v14;
      }
      v106 -= 2LL;
      v108 -= 2;
      v107 -= 8LL;
      v311 = --v109;
    }
    while ( v109 );
    LODWORD(v14) = v304 ^ (unsigned int)v14;
    v112 = 0;
    v113 = v305 ^ v103;
    v114 = (unsigned int)v14;
    v115 = v309;
    v116 = v113;
    v40 = 0;
    if ( (_DWORD)v309 )
    {
      v117 = (_BYTE *)v308;
      do
      {
        v118 = v117 + 1;
        if ( v112 >= 4 )
        {
          v116 = (v116 << 8) | HIBYTE(v116);
          v119 = v116;
        }
        else
        {
          v114 = (v114 << 8) | HIBYTE(v114);
          v119 = v114;
        }
        ++v112;
        *v117++ = v119;
      }
      while ( (int)v112 < (int)v115 );
      v41 = v118;
    }
    else
    {
      v41 = (void *)v308;
    }
    if ( v115 <= 4 )
    {
      v45 = 0;
      if ( v115 < 4 )
        LODWORD(v14) = (unsigned int)v14 >> (8 * (4 - v115)) << (8 * (4 - v115));
    }
    else
    {
      v45 = v113 >> (8 * (8 - v115)) << (8 * (8 - v115));
    }
    LODWORD(v39) = v340;
    v42 = v315;
    v44 = v316;
  }
  else
  {
    v304 = 0;
    v306 = -1;
    v44 = (unsigned __int8 *)(v37 + 158);
    v305 = -1;
    v45 = 0;
    v316 = (unsigned __int8 *)(v37 + 158);
    v321 = (unsigned int *)(v37 + 126);
  }
  v309 = v42 >> 3;
  if ( !(v42 >> 3) )
    goto LABEL_101;
  v46 = v43 + 2;
  v311 = (__int64)v41 + 7;
  while ( 2 )
  {
    v47 = v46[2] << 8;
    v48 = v46[3];
    v49 = (v46[1] | ((*v46 | ((*(v46 - 1) | (*(v46 - 2) << 8)) << 8)) << 8)) ^ (unsigned int)v14;
    v314 = v46[1] | ((*v46 | ((*(v46 - 1) | (*(v46 - 2) << 8)) << 8)) << 8);
    v50 = v46[5] | ((v46[4] | ((v48 | v47) << 8)) << 8);
    v327 = v46 + 8;
    v310 = v50;
    v51 = (unsigned __int16)v39;
    v52 = v49 ^ v39 ^ HIDWORD(v340) ^ v50 ^ v45;
    v53 = (v52 >> 8) ^ (WORD2(v340) * (WORD1(v340) ^ v52)) ^ v49;
    v54 = (WORD1(v340) * __ROR4__(HIDWORD(v340) - v53, 11) - __ROR4__(v53, 12)) ^ v52;
    v55 = ((unsigned __int16)v39 * __ROR4__(v54 ^ HIDWORD(v340), 24) - __ROR4__(v54, 30)) ^ v53;
    v56 = __ROR4__(v55, 9) ^ (HIWORD(v340) * __ROR4__(v55 - v39, 4)) ^ v54;
    v57 = (__ROR4__(v56, 4) + WORD2(v340) * __ROR4__(v39 - v56, 10)) ^ v55;
    v58 = (WORD1(v340) * __ROR4__(v57 ^ HIWORD(v340), 28) - __ROR4__(v57, 16)) ^ v56;
    v59 = 16LL;
    v60 = 30LL;
    v61 = v44;
    v308 = 16LL;
    v62 = ((unsigned __int16)v39 * (v58 ^ WORD1(v340)) - __ROR4__(v58, 7)) ^ v57;
    v63 = (v62 - v39 - HIWORD(v340)) ^ v58;
    v64 = __ROR4__(v63, 11) ^ (WORD2(v340) * __ROR4__(v39 - v63, 9)) ^ v62;
    v65 = (unsigned __int8 *)v321;
    v66 = (WORD1(v340) * (v64 - WORD2(v340)) - (v64 >> 13)) ^ v63;
    v67 = (v66 >> 15) ^ (v51 * ((8 * (v66 - WORD2(v340))) | ((unsigned __int64)(v66 - WORD2(v340)) >> 29))) ^ v64;
    do
    {
      v68 = v61[1];
      if ( (unsigned __int8)v68 >= 0x1Fu )
        goto LABEL_83;
      v69 = (__int64 (__fastcall *)(char, unsigned __int64, unsigned __int64, __int64, int, __int64, unsigned int))off_140FD84C0[v68];
      v70 = v65[1];
      v71 = *v65;
      v72 = *(v65 - 1);
      v73 = *(v65 - 2);
      if ( (char *)v69 == (char *)sub_1409DE070 )
      {
        v74 = *((unsigned __int16 *)&v340 + ((*(v65 - 1) + *(v65 - 1) / 3u + (((_BYTE)v60 + 1) & 3) + 1) & 3))
            * (*((unsigned __int16 *)&v340 + (((_BYTE)v60 + 1) & 3))
             + ((~v67 << (15 * (*(v65 - 2) / 0xFu) - *(v65 - 2) + 31)) | (~v67 >> (*(v65 - 2) % 0xFu + 1))));
      }
      else
      {
        if ( v69 == sub_14095C340 )
        {
          v82 = sub_14095C340((unsigned __int8)v60 + 1, v73, v72, v71, v70, (__int64)&v340, v67);
        }
        else
        {
          if ( v69 == sub_14095C3C0 )
          {
            v74 = sub_14095C3C0((unsigned __int8)v60 + 1, v73, v72, v71, v70, (__int64)&v340, v67);
            goto LABEL_82;
          }
          Privileges = (PPRIVILEGE_SET *)&v340;
          *(_QWORD *)PreviouslyGrantedAccess = v65[1];
          v82 = guard_dispatch_icall_no_overrides(v60 + 1, v73);
        }
        v74 = v82;
      }
LABEL_82:
      v59 = v308;
      v66 ^= v74;
LABEL_83:
      v75 = *v61;
      if ( (unsigned __int8)v75 < 0x1Fu )
      {
        v76 = (__int64 (__fastcall *)(unsigned __int64, __int64, __int64, __int64, int, __int64, int))off_140FD84C0[v75];
        v77 = *(v65 - 6);
        if ( (char *)v76 == (char *)sub_1409F87D0 )
        {
          v78 = *((_DWORD *)&v340 + (((v60 & 1) - 1) & 1)) - (*((_DWORD *)&v340 + (v60 & 1)) ^ v66);
        }
        else if ( v76 == sub_14095C220 )
        {
          v78 = *((_DWORD *)&v340 + (((unsigned __int8)(v60 >> 1) - 1) & 1)) ^ (v66
                                                                              - *((unsigned __int16 *)&v340 + (v60 & 3)));
        }
        else
        {
          if ( v76 == sub_14095C310 )
          {
            v83 = sub_14095C310(v60, v77, *(v65 - 5), *(v65 - 4), *(v65 - 3), (__int64)&v340, v66);
          }
          else
          {
            Privileges = (PPRIVILEGE_SET *)&v340;
            *(_QWORD *)PreviouslyGrantedAccess = *(v65 - 3);
            v83 = guard_dispatch_icall_no_overrides(v60, v77);
          }
          v78 = v83;
        }
        v67 ^= v78;
      }
      v60 -= 2LL;
      v61 -= 2;
      v65 -= 8;
      v308 = --v59;
    }
    while ( v59 );
    v79 = (_BYTE *)v311;
    LODWORD(v14) = v304 ^ v67;
    v45 = v305 ^ v66;
    v80 = v310;
    *(_BYTE *)(v311 - 4) = (_BYTE)v14;
    *v79 = v45;
    *(v79 - 5) = BYTE1(v14);
    *(v79 - 1) = BYTE1(v45);
    *(v79 - 6) = (unsigned __int16)((unsigned int)v14 >> 8) >> 8;
    *(v79 - 2) = (unsigned __int16)(v45 >> 8) >> 8;
    *(v79 - 7) = __ROR4__(
                   ((((unsigned int)v14 >> 8) | ((_DWORD)v14 << 24)) >> 8) | ((((unsigned int)v14 >> 8) | ((_DWORD)v14 << 24)) << 24),
                   8);
    *(v79 - 3) = __ROR4__((((v45 >> 8) | (v45 << 24)) >> 8) | (((v45 >> 8) | (v45 << 24)) << 24), 8);
    v81 = v309-- == 1;
    v304 = v314;
    v305 = v80;
    v311 = (__int64)(v79 + 8);
    if ( !v81 )
    {
      LODWORD(v39) = v340;
      v46 = v327;
      v44 = v316;
      continue;
    }
    break;
  }
  v42 = v315;
  v40 = 0;
LABEL_101:
  v5 = 0LL;
  for ( i = 0LL; i < v42; ++i )
    v40 ^= *((_BYTE *)v312 + i);
  v7 = v300;
  if ( v40 != *(_QWORD *)&v319[v42] )
  {
    ExFreePoolWithTag(v312, 0);
    goto LABEL_148;
  }
  v9 = v312;
  if ( (unsigned int)v42 < 4 )
    goto LABEL_588;
  v310 = *(_DWORD *)v312;
  if ( (char *)v312 + 4 < v312 )
  {
LABEL_106:
    Acl = -1073741675;
    v8 = 0LL;
    v6 = 0LL;
    goto LABEL_19;
  }
  if ( (unsigned int)(v42 - 4) < 4 )
  {
    Acl = -1073741762;
    v8 = 0LL;
    v6 = 0LL;
    goto LABEL_19;
  }
  v90 = *((unsigned int *)v312 + 1);
  v91 = (char *)v312 + 8;
  if ( (char *)v312 + 8 < (char *)v312 + 4 )
    goto LABEL_106;
  if ( (int)v42 - 8 < (unsigned int)v90 )
  {
    Acl = -1073741762;
    v8 = 0LL;
    v6 = 0LL;
    goto LABEL_19;
  }
  if ( (unsigned int)v90 >= 0xFFFFFFF8 )
    goto LABEL_106;
  v92 = (unsigned __int64)&v91[v90];
  v93 = (unsigned int)v90;
  if ( (char *)v312 + (unsigned int)v42 < &v91[v90] || (unsigned __int64)(unsigned int)v42 + -(__int64)v90 - 8 >= 8 )
  {
LABEL_588:
    Acl = -1073741762;
    v8 = 0LL;
    v6 = 0LL;
    goto LABEL_19;
  }
  v295 = v312;
  v8 = 0LL;
  if ( v312 != (PVOID)-8LL )
  {
    v94 = (char *)v312 + 8;
    if ( v92 < (unsigned __int64)v91 )
    {
      Acl = -1073741675;
      v6 = 0LL;
      goto LABEL_19;
    }
    v295 = v312;
    while ( (unsigned __int64)v94 < v92 )
    {
      if ( v94 + 4 < v94 )
        goto LABEL_131;
      v295 = v312;
      if ( (unsigned __int64)(v94 + 4) > v92 )
        goto LABEL_192;
      v95 = *(_DWORD *)v94 + 4;
      if ( *(_DWORD *)v94 >= 0xFFFFFFFC || (v96 = &v94[v95], v96 < v94) )
      {
LABEL_131:
        Acl = -1073741675;
LABEL_132:
        v5 = 0LL;
        v6 = 0LL;
        goto LABEL_19;
      }
      v94 += v95;
      if ( (unsigned __int64)v96 > v92 )
        goto LABEL_192;
      LODWORD(v5) = (_DWORD)v5 + 1;
    }
    if ( v94 != (char *)v92 )
    {
LABEL_192:
      Acl = -1073741811;
      v5 = 0LL;
      v6 = 0LL;
      goto LABEL_19;
    }
  }
  if ( (_DWORD)v90 )
  {
    v8 = ExAllocatePool2(0x100uLL, v90, 0x20534C53u);
    if ( v8 )
    {
      v93 = v90;
      goto LABEL_142;
    }
    Acl = -1073741801;
LABEL_332:
    v8 = 0LL;
    goto LABEL_132;
  }
LABEL_142:
  if ( v312 != (PVOID)-8LL )
    memmove((void *)v8, v91, v93);
  P[1] = (PVOID)v8;
  P[0] = (PVOID)__PAIR64__(v90, (unsigned int)v5);
  if ( v310 != (_DWORD)v5 )
  {
    v8 = 0LL;
    Acl = -1073741762;
    v5 = 0LL;
    v7 = v300;
    v6 = 0LL;
    v9 = v295;
    goto LABEL_19;
  }
  if ( !P[1] )
  {
    v7 = v300;
    Acl = -1073741811;
    v9 = v295;
    v8 = 0LL;
    goto LABEL_132;
  }
  if ( !(_DWORD)v5 )
  {
    v7 = v300;
    Acl = -1073741811;
    v9 = v295;
    v8 = 0LL;
    goto LABEL_132;
  }
  v7 = v300;
  v9 = v295;
  v291 = *(_DWORD *)P[1];
  if ( (char *)P[1] + 4 < P[1] )
  {
LABEL_284:
    v8 = 0LL;
    Acl = -1073741675;
    v5 = 0LL;
    v6 = 0LL;
    goto LABEL_19;
  }
  v212 = 0LL;
  if ( v291 )
    v212 = (int *)((char *)P[1] + 4);
  if ( v291 != 4 )
  {
    v8 = 0LL;
    Acl = -1073741789;
    v5 = 0LL;
    v6 = 0LL;
    goto LABEL_19;
  }
  v213 = *v212;
  if ( (unsigned int)v5 <= 1 )
  {
    v8 = 0LL;
    Acl = -1073741811;
    v5 = 0LL;
    v6 = 0LL;
    goto LABEL_19;
  }
  v214 = (unsigned int *)P[1];
  for ( j = 0; ; j = 1 )
  {
    v216 = v214 + 1;
    v217 = v9;
    v218 = *v214;
    if ( j )
      break;
    if ( v216 < v214 )
      goto LABEL_285;
    v214 = (unsigned int *)((char *)v216 + v218);
    v295 = v217;
    v9 = v217;
    if ( v214 < v216 )
      goto LABEL_284;
  }
  if ( v216 < v214 )
  {
LABEL_285:
    v8 = 0LL;
    Acl = -1073741675;
    v9 = v295;
    v5 = 0LL;
    v6 = 0LL;
    goto LABEL_19;
  }
  v219 = v295;
  v220 = 0LL;
  if ( (_DWORD)v218 )
    v220 = v214 + 1;
  if ( (unsigned int)v5 <= 2 )
  {
    v8 = 0LL;
    Acl = -1073741811;
    v7 = v300;
    v5 = 0LL;
    v6 = 0LL;
    v9 = v295;
    goto LABEL_19;
  }
  v221 = v300;
  v222 = 0;
  v223 = (unsigned int *)P[1];
  while ( 1 )
  {
    v224 = *v223;
    v225 = v223 + 1;
    if ( v222 >= 2 )
      break;
    if ( v225 < v223 )
    {
      v8 = 0LL;
      Acl = -1073741675;
      v9 = v295;
      v5 = 0LL;
      v7 = v300;
      v6 = 0LL;
      goto LABEL_19;
    }
    v223 = (unsigned int *)((char *)v225 + v224);
    v300 = v221;
    v295 = v219;
    if ( (unsigned int *)((char *)v225 + v224) < v225 )
    {
      v8 = 0LL;
      Acl = -1073741675;
      v5 = 0LL;
      v6 = 0LL;
      v9 = v219;
      v7 = v221;
      goto LABEL_19;
    }
    ++v222;
  }
  if ( v225 < v223 )
  {
    Acl = -1073741675;
LABEL_331:
    v7 = v300;
    v9 = v295;
    goto LABEL_332;
  }
  v226 = 0LL;
  v300 = v221;
  v295 = v219;
  v309 = (unsigned __int64)v221;
  if ( (_DWORD)v224 )
    v226 = v223 + 1;
  v312 = v219;
  v227 = (_OWORD *)ExAllocatePool2(0x100uLL, 0x30uLL, 0x20534C53u);
  v229 = v227;
  if ( !v227 )
  {
    Acl = -1073741801;
    goto LABEL_331;
  }
  *v227 = 0LL;
  v227[1] = 0LL;
  v227[2] = 0LL;
  v230 = (unsigned int *)v309;
  v231 = v312;
  Acl = 0;
  *(_DWORD *)v229 = 0;
  *((_QWORD *)v229 + 1) = 0LL;
  v300 = v230;
  v296 = v231;
  if ( v220 )
  {
    *((_DWORD *)v229 + 4) = v218;
    if ( (_DWORD)v218 )
    {
      v232 = (void *)ExAllocatePool2(0x100uLL, v218, 0x20534C53u);
      if ( v232 )
      {
        *((_QWORD *)v229 + 3) = v232;
        memmove(v232, v220, v218);
        v7 = v300;
        v9 = v296;
        goto LABEL_306;
      }
      v9 = v312;
      v7 = (unsigned int *)v309;
      v296 = v312;
LABEL_312:
      Acl = -1073741801;
    }
    else
    {
      Acl = -1073741762;
      v296 = v231;
      v9 = v231;
      v7 = v230;
    }
LABEL_313:
    v234 = (void *)*((_QWORD *)v229 + 1);
    if ( v234 )
    {
      ExFreePoolWithTag(v234, 0);
      *((_QWORD *)v229 + 1) = 0LL;
    }
    v235 = (void *)*((_QWORD *)v229 + 3);
    if ( v235 )
    {
      ExFreePoolWithTag(v235, 0);
      *((_QWORD *)v229 + 3) = 0LL;
    }
    v236 = (void *)*((_QWORD *)v229 + 5);
    if ( v236 )
    {
      ExFreePoolWithTag(v236, 0);
      *((_QWORD *)v229 + 5) = 0LL;
    }
    ExFreePoolWithTag(v229, 0);
    v8 = 0LL;
  }
  else
  {
    *((_DWORD *)v229 + 4) = 0;
    v9 = v231;
    *((_QWORD *)v229 + 3) = 0LL;
    v7 = v230;
    v296 = v231;
LABEL_306:
    if ( v226 )
    {
      *((_DWORD *)v229 + 8) = v224;
      if ( !(_DWORD)v224 )
      {
        Acl = -1073741762;
        goto LABEL_313;
      }
      v233 = (void *)ExAllocatePool2(0x100uLL, v224, 0x20534C53u);
      if ( !v233 )
      {
        v9 = v296;
        goto LABEL_312;
      }
      Acl = 0;
      *((_QWORD *)v229 + 5) = v233;
      memmove(v233, v226, v224);
      v9 = v296;
    }
    else
    {
      *((_DWORD *)v229 + 8) = 0;
      *((_QWORD *)v229 + 5) = 0LL;
    }
    v8 = (__int64)v229;
  }
  if ( Acl < 0 )
  {
LABEL_551:
    v5 = 0LL;
    v9 = v296;
    v6 = 0LL;
    goto LABEL_19;
  }
  if ( v213 )
  {
    switch ( v213 )
    {
      case 1:
        v253 = qword_140FD8458;
        v5 = 0LL;
        memset(v334, 0, sizeof(v334));
        v335 = 0LL;
        v322 = 0;
        memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
        v320 = 0;
        v254 = RtlLengthSid(*(PSID *)(qword_140FD8458 + 384));
        v255 = RtlLengthSid(*(PSID *)(v253 + 272)) + v254;
        v256 = RtlLengthSid(*(PSID *)(v253 + 392)) + 32 + v255;
        v257 = (ACL *)ExAllocatePool2(0x100uLL, v256, 0x20534C53u);
        v258 = v257;
        if ( !v257 )
        {
          v9 = v296;
          Acl = -1073741801;
          v6 = 0LL;
          goto LABEL_19;
        }
        Acl = RtlCreateAcl(v257, v256, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce(v258, 2u, 0, 32, *(unsigned __int8 **)(v253 + 384), 0);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce(v258, 2u, 0, 32, *(unsigned __int8 **)(v253 + 392), 0);
            if ( Acl >= 0 )
            {
              Acl = RtlpAddKnownAce(v258, 2u, 0, 32, *(unsigned __int8 **)(v253 + 272), 0);
              if ( Acl >= 0 )
              {
                LOBYTE(v334[0]) = 1;
                if ( SWORD1(v334[0]) < 0 )
                {
                  Acl = -1073741703;
                }
                else
                {
                  v335 = v258;
                  Acl = 0;
                  WORD1(v334[0]) = WORD1(v334[0]) & 0xFFF3 | 4;
                  SeCaptureSubjectContext(&SubjectSecurityContext);
                  v259 = SeAccessCheck(
                           v334,
                           &SubjectSecurityContext,
                           0,
                           0x20u,
                           0,
                           0LL,
                           (PGENERIC_MAPPING)&IopFileMapping,
                           1,
                           &v322,
                           &v320);
                  SeReleaseSubjectContext(&SubjectSecurityContext);
                  if ( !v259 )
                    Acl = v320;
                }
              }
            }
          }
        }
        ExFreePoolWithTag(v258, 0);
        if ( Acl < 0 )
          goto LABEL_551;
        v323 = 0;
        v328 = 8LL;
        ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v328, 8u, &v323);
        if ( v7[4] != 160 )
          goto LABEL_384;
        v260 = (const void *)*((_QWORD *)v7 + 3);
        if ( (memcmp(qword_140B41BC0, v260, 0xA0uLL)
           || *(_DWORD *)(v8 + 16) != 160
           || memcmp(qword_140B41D00, *(const void **)(v8 + 24), 0xA0uLL)
           || v7[8] != 8
           || memcmp(&qword_140B3D2B0, *((const void **)v7 + 5), 8uLL)
           || *(_DWORD *)(v8 + 32) != 8
           || memcmp(sub_140B3D248, *(const void **)(v8 + 40), 8uLL))
          && (memcmp(qword_140B41F80, v260, 0xA0uLL)
           || *(_DWORD *)(v8 + 16) != 160
           || memcmp(qword_140B418A0, *(const void **)(v8 + 24), 0xA0uLL)
           || v7[8] != 8
           || memcmp(&qword_140B3D2D8, *((const void **)v7 + 5), 8uLL)
           || *(_DWORD *)(v8 + 32) != 8
           || memcmp(&qword_140B3D280, *(const void **)(v8 + 40), 8uLL)) )
        {
          goto LABEL_384;
        }
        Acl = 0;
        if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x70000) == 0 )
          Acl = -2147024891;
        if ( Acl >= 0 )
        {
          Acl = SPCallServerHandleUpdatePolicies(
                  P,
                  v8,
                  (unsigned int)v313,
                  v301,
                  *(_QWORD *)PreviouslyGrantedAccess,
                  Privileges);
          if ( Acl >= 0 )
          {
            v9 = v296;
            goto LABEL_323;
          }
        }
        goto LABEL_551;
      case 2:
        Acl = sub_140AABC38(v231, v8, (unsigned int)v313, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 4:
        Acl = SPCallServerHandleCallbackPaintComplete(P, v8, v228, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 5:
        Acl = sub_140960848(P, v8, v228, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 6:
        Acl = sub_1406F857C((__int64)P, v8, v228, (__int64)v301);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 7:
        Acl = sub_1406F81C4((__int64)P, v8, v228, (__int64)v301);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 22:
        Acl = sub_1409F4D38(P, 0x140000000uLL, v228, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 23:
        v240 = qword_140FD8458;
        v5 = 0LL;
        memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
        v337 = 0LL;
        GrantedAccess = 0;
        memset(&SubjectContext, 0, sizeof(SubjectContext));
        AccessStatus = 0;
        v241 = RtlLengthSid(*(PSID *)(qword_140FD8458 + 392));
        v242 = RtlLengthSid(*(PSID *)(v240 + 384)) + v241;
        v243 = RtlLengthSid(*(PSID *)(v240 + 272)) + 32 + v242;
        v244 = (ACL *)ExAllocatePool2(0x100uLL, v243, 0x20534C53u);
        v245 = v244;
        if ( !v244 )
        {
          v9 = v296;
          Acl = -1073741801;
          v6 = 0LL;
          goto LABEL_19;
        }
        Acl = RtlCreateAcl(v244, v243, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce(v245, 2u, 0, 32, *(unsigned __int8 **)(v240 + 384), 0);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce(v245, 2u, 0, 32, *(unsigned __int8 **)(v240 + 392), 0);
            if ( Acl >= 0 )
            {
              Acl = RtlpAddKnownAce(v245, 2u, 0, 32, *(unsigned __int8 **)(v240 + 272), 0);
              if ( Acl >= 0 )
              {
                LOBYTE(SecurityDescriptor[0]) = 1;
                if ( SWORD1(SecurityDescriptor[0]) < 0 )
                {
                  Acl = -1073741703;
                }
                else
                {
                  v337 = v245;
                  Acl = 0;
                  WORD1(SecurityDescriptor[0]) = WORD1(SecurityDescriptor[0]) & 0xFFF3 | 4;
                  SeCaptureSubjectContext(&SubjectContext);
                  v246 = SeAccessCheck(
                           SecurityDescriptor,
                           &SubjectContext,
                           0,
                           0x20u,
                           0,
                           0LL,
                           (PGENERIC_MAPPING)&IopFileMapping,
                           1,
                           &GrantedAccess,
                           &AccessStatus);
                  SeReleaseSubjectContext(&SubjectContext);
                  if ( !v246 )
                    Acl = AccessStatus;
                }
              }
            }
          }
        }
        ExFreePoolWithTag(v245, 0);
        if ( Acl >= 0 )
        {
          ReturnLength = 0;
          SystemInformation = 8LL;
          ZwQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, &ReturnLength);
          v247 = v7[4];
          if ( (_DWORD)v247 != 160
            || ((v248 = (const void *)*((_QWORD *)v7 + 3), memcmp(qword_140B41B20, v248, 0xA0uLL))
             || *(_DWORD *)(v8 + 16) != 160
             || memcmp(qword_140B41A80, *(const void **)(v8 + 24), 0xA0uLL)
             || v7[8] != 8
             || memcmp(&qword_140B3D288, *((const void **)v7 + 5), 8uLL)
             || *(_DWORD *)(v8 + 32) != 8
             || memcmp((char *)&loc_140B3D259 + 7, *(const void **)(v8 + 40), 8uLL))
            && (memcmp(qword_140B41E40, v248, v247)
             || *(_DWORD *)(v8 + 16) != 160
             || memcmp(qword_140B422A0, *(const void **)(v8 + 24), 0xA0uLL)
             || v7[8] != 8
             || memcmp((char *)&loc_140B3D264 + 4, *((const void **)v7 + 5), 8uLL)
             || *(_DWORD *)(v8 + 32) != 8
             || memcmp(&qword_140B3D2B8, *(const void **)(v8 + 40), 8uLL))
            && ((v249 = (const void *)*((_QWORD *)v7 + 3), memcmp(qword_140B42340, v249, v247))
             || *(_DWORD *)(v8 + 16) != 160
             || memcmp(sub_140B41800, *(const void **)(v8 + 24), 0xA0uLL)
             || v7[8] != 8
             || memcmp(&qword_140B3D290, *((const void **)v7 + 5), 8uLL)
             || *(_DWORD *)(v8 + 32) != 8
             || memcmp(&loc_140B3D270, *(const void **)(v8 + 40), 8uLL))
            && (memcmp(qword_140B42020, v249, v247)
             || *(_DWORD *)(v8 + 16) != 160
             || memcmp(qword_140B41EE0, *(const void **)(v8 + 24), 0xA0uLL)
             || v7[8] != 8
             || memcmp(&qword_140B3D2C8, *((const void **)v7 + 5), 8uLL)
             || *(_DWORD *)(v8 + 32) != 8
             || memcmp((char *)&loc_140B3D256 + 2, *(const void **)(v8 + 40), 8uLL)) )
          {
LABEL_384:
            v9 = v296;
            Acl = -2147024891;
            v6 = 0LL;
            goto LABEL_19;
          }
          v318 = 0;
          Acl = 0;
          updated = QueryUpdateFileEaAllowedExt(&v318);
          if ( updated == -1073741637 || (Acl = updated, updated >= 0) && v318 != 1 )
          {
            if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x70000) == 0 )
              Acl = -2147024891;
          }
          if ( Acl >= 0 )
          {
            Acl = sub_1409F5164(P, v251, v252, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
            if ( Acl >= 0 )
            {
              v9 = v296;
              goto LABEL_323;
            }
          }
        }
        goto LABEL_551;
      case 24:
        Acl = sub_1409F581C(P, 0x140000000uLL, v228, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 100:
        Acl = SPCallServerHandleUpdateLicense(P, v8, v228, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 101:
        Acl = sub_1406F7C28((__int64)P, v8, v228, (__int64)v301);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 102:
        v5 = 0LL;
        Acl = -1073741822;
        v6 = 0LL;
        goto LABEL_19;
      case 103:
        Acl = sub_140AB56C0(P, v8, v228, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 104:
        Acl = sub_140AB8F9C(P, v8, v228, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 105:
        Acl = sub_1406F3DBC((__int64)P, v8, v228, (__int64)v301);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 106:
        Acl = sub_140AB32DC(P, v8, v228, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 107:
        Acl = sub_1404CC81C((__int64)P, v8, v228, (__int64)v301);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 109:
        Acl = sub_140A278DC(P, v8, v228, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 110:
        Acl = sub_140ABC324(P, v8, v228, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 111:
        Acl = sub_1406F3B20((__int64)P, v8, v228, (__int64)v301);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 112:
        Acl = sub_140AB5278(P, v8, v228, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 113:
        Acl = sub_140A3273C(P, v8, v228, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 204:
        Acl = sub_140ABB360(P, v8, v228, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 205:
        Acl = sub_140A4F33C(P, v8, v228, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 206:
        v326 = 0;
        Acl = 0;
        v330 = 8LL;
        ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v330, 8u, &v326);
        v279 = v7[4];
        if ( (_DWORD)v279 != 160
          || ((v280 = (const void *)*((_QWORD *)v7 + 3), memcmp(qword_140B420C0, v280, 0xA0uLL))
           || *(_DWORD *)(v8 + 16) != 160
           || memcmp(qword_140B42160, *(const void **)(v8 + 24), 0xA0uLL)
           || v7[8] != 8
           || memcmp(&qword_140B3D298, *((const void **)v7 + 5), 8uLL)
           || *(_DWORD *)(v8 + 32) != 8
           || memcmp(&qword_140B3D2D0, *(const void **)(v8 + 40), 8uLL))
          && (memcmp(qword_140B41DA0, v280, v279)
           || *(_DWORD *)(v8 + 16) != 160
           || memcmp(qword_140B42200, *(const void **)(v8 + 24), 0xA0uLL)
           || v7[8] != 8
           || memcmp(&loc_140B3D250, *((const void **)v7 + 5), 8uLL)
           || *(_DWORD *)(v8 + 32) != 8
           || memcmp(&qword_140B3D2A0, *(const void **)(v8 + 40), 8uLL))
          && ((v281 = (const void *)*((_QWORD *)v7 + 3), memcmp(qword_140B41C60, v281, v279))
           || *(_DWORD *)(v8 + 16) != 160
           || memcmp(qword_140B419E0, *(const void **)(v8 + 24), 0xA0uLL)
           || v7[8] != 8
           || memcmp(&qword_140B3D278, *((const void **)v7 + 5), 8uLL)
           || *(_DWORD *)(v8 + 32) != 8
           || memcmp(&qword_140B3D2C0, *(const void **)(v8 + 40), 8uLL))
          && (memcmp(qword_140B41940, v281, v279)
           || *(_DWORD *)(v8 + 16) != 160
           || memcmp(qword_140B41760, *(const void **)(v8 + 24), 0xA0uLL)
           || v7[8] != 8
           || memcmp(&qword_140B3D2E0, *((const void **)v7 + 5), 8uLL)
           || *(_DWORD *)(v8 + 32) != 8
           || memcmp(&qword_140B3D2A8, *(const void **)(v8 + 40), 8uLL)) )
        {
          Acl = -2147024891;
        }
        if ( Acl < 0 )
          goto LABEL_551;
        Acl = sub_1404B4658((__int64)P, v8, v278, (__int64)v301);
        if ( Acl < 0 )
          goto LABEL_551;
        v9 = v296;
        goto LABEL_323;
      case 207:
        Acl = sub_140AB5CF0(P, v8, v228, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 208:
        Acl = SPCallServerHandleGetAppPolicyValue(P, v8, v228, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 209:
        Acl = sub_140AB9580(P, v8, v228, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 210:
        Acl = sub_1406F418C((__int64)P, v8, v228, (__int64)v301);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 211:
        Acl = sub_140ABDBD0(P, v8, v228, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v296;
        v6 = 0LL;
        goto LABEL_19;
      case 212:
        if ( !P[1] )
        {
          v5 = 0LL;
          Acl = -1073741811;
          v6 = 0LL;
          goto LABEL_19;
        }
        if ( LODWORD(P[0]) <= 3 )
        {
          v5 = 0LL;
          Acl = -1073741811;
          v6 = 0LL;
          goto LABEL_19;
        }
        v261 = (unsigned int *)P[1];
        v262 = 0;
        break;
      default:
        Acl = sub_1406F3224((__int64)v231, (unsigned int *)v301);
        if ( Acl < 0 )
          goto LABEL_339;
        goto LABEL_323;
    }
    while ( 1 )
    {
      v263 = *v261;
      v264 = v261 + 1;
      if ( v262 >= 3 )
        break;
      if ( v264 < v261 )
        goto LABEL_329;
      v261 = (unsigned int *)((char *)v264 + v263);
      if ( (unsigned int *)((char *)v264 + v263) < v264 )
        goto LABEL_329;
      ++v262;
    }
    if ( v264 < v261 )
      goto LABEL_329;
    v265 = 0LL;
    if ( (_DWORD)v263 )
      v265 = (__int64 *)(v261 + 1);
    if ( (_DWORD)v263 != 8 )
    {
      v5 = 0LL;
      Acl = -1073741789;
      v6 = 0LL;
      goto LABEL_19;
    }
    v266 = *v265;
    if ( LODWORD(P[0]) <= 4 )
    {
      v5 = 0LL;
      Acl = -1073741811;
      v6 = 0LL;
      goto LABEL_19;
    }
    v267 = (unsigned int *)P[1];
    for ( k = 0; ; ++k )
    {
      v269 = *v267;
      v270 = v267 + 1;
      if ( k >= 4 )
        break;
      if ( v270 < v267 )
        goto LABEL_329;
      v267 = (unsigned int *)((char *)v270 + v269);
      if ( (unsigned int *)((char *)v270 + v269) < v270 )
        goto LABEL_329;
    }
    if ( v270 < v267 )
      goto LABEL_329;
    if ( !(_DWORD)v269 )
    {
      v5 = 0LL;
      Acl = -1073741762;
      v6 = 0LL;
      goto LABEL_19;
    }
    v271 = v267 + 1;
    v272 = (void *)ExAllocatePool2(0x100uLL, *v267, 0x20534C53u);
    if ( !v272 )
    {
      v5 = 0LL;
      Acl = -1073741801;
      v6 = 0LL;
      goto LABEL_19;
    }
    memmove(v272, v271, v269);
    if ( (_DWORD)v269 != 4 )
    {
      v5 = 0LL;
      Acl = -1073741306;
      v6 = 0LL;
      goto LABEL_19;
    }
    if ( LODWORD(P[0]) <= 5 )
    {
      v5 = 0LL;
      Acl = -1073741811;
      v6 = 0LL;
      goto LABEL_19;
    }
    v273 = (unsigned int *)P[1];
    v274 = 0;
    v296 = v9;
    while ( 1 )
    {
      v275 = v273 + 1;
      v276 = v9;
      v277 = *v273;
      if ( v274 >= 5 )
        break;
      if ( v275 < v273 )
        goto LABEL_457;
      v273 = (unsigned int *)((char *)v275 + v277);
      v296 = v276;
      v9 = v276;
      if ( v273 < v275 )
        goto LABEL_329;
      ++v274;
    }
    if ( v275 < v273 )
    {
LABEL_457:
      v5 = 0LL;
      Acl = -1073741675;
      v9 = v296;
      v6 = 0LL;
      goto LABEL_19;
    }
    if ( !(_DWORD)v277 )
    {
      v5 = 0LL;
      v9 = v296;
      v6 = 0LL;
      Acl = -1073741762;
      goto LABEL_19;
    }
    v282 = v273 + 1;
    v283 = (void *)ExAllocatePool2(0x100uLL, v277, 0x20534C53u);
    if ( !v283 )
    {
      v5 = 0LL;
      v9 = v296;
      v6 = 0LL;
      Acl = -1073741801;
      goto LABEL_19;
    }
    memmove(v283, v282, v277);
    if ( (_DWORD)v277 != 8 )
    {
      Acl = -1073741306;
      goto LABEL_551;
    }
    v284 = guard_dispatch_icall_no_overrides(*v271, *v282);
    HIDWORD(v301[0]) = 20;
    v285 = (_DWORD *)ExAllocatePool2(0x100uLL, 0x14uLL, 0x20534C53u);
    v9 = v296;
    if ( !v285 )
    {
      v5 = 0LL;
      Acl = -1073741801;
      v6 = 0LL;
      goto LABEL_19;
    }
    v5 = 0LL;
    v301[1] = v285;
    v286 = v284 | 0x10000000;
    LODWORD(v301[0]) = 0;
    if ( v285 + 1 < v285 )
    {
      Acl = -1073741675;
      v6 = 0LL;
      goto LABEL_19;
    }
    if ( v285 + 2 > (_DWORD *)((char *)v301[1] + HIDWORD(v301[0])) )
    {
      Acl = -1073741789;
      v6 = 0LL;
      goto LABEL_19;
    }
    *v285 = 4;
    v285[1] = v286;
    v287 = ++LODWORD(v301[0]);
    if ( v301[1] )
    {
      v288 = (unsigned __int64)v301[1];
      for ( m = 0; m < v287; ++m )
      {
        v290 = *(_DWORD *)v288 + 4;
        if ( *(_DWORD *)v288 >= 0xFFFFFFFC || v288 + v290 < v288 )
          goto LABEL_541;
        v288 += v290;
      }
      if ( v288 + 4 < v288 )
      {
LABEL_541:
        Acl = -1073741675;
        goto LABEL_542;
      }
      Acl = 0;
      if ( (PVOID)(v288 + 12) > (char *)v301[1] + HIDWORD(v301[0]) )
      {
        Acl = -1073741789;
      }
      else
      {
        *(_DWORD *)v288 = 8;
        *(_QWORD *)(v288 + 4) = v266;
        ++LODWORD(v301[0]);
      }
    }
    else
    {
      Acl = RtlUIntAdd(HIDWORD(v301[0]), 0xCu, (UINT *)v301 + 1);
      if ( Acl >= 0 )
      {
        ++LODWORD(v301[0]);
        Acl = 0;
      }
    }
LABEL_542:
    if ( Acl < 0 )
    {
      v6 = 0LL;
      goto LABEL_19;
    }
LABEL_323:
    v237 = __rdtsc();
    if ( HIDWORD(v301[0]) >= 0xFFFFFFF8
      || (v238 = (HIDWORD(v301[0]) + 15) & 0xFFFFFFF8, (unsigned int)v238 < HIDWORD(v301[0]) + 8) )
    {
LABEL_329:
      v5 = 0LL;
      Acl = -1073741675;
      v6 = 0LL;
      goto LABEL_19;
    }
    if ( !(_DWORD)v238 )
    {
      v5 = 0LL;
      Acl = -1073741762;
      v6 = 0LL;
      goto LABEL_19;
    }
    v239 = (unsigned __int8 *)ExAllocatePool2(0x100uLL, (unsigned int)v238, 0x20534C53u);
    if ( !v239 )
    {
      v5 = 0LL;
      Acl = -1073741801;
      v6 = 0LL;
      goto LABEL_19;
    }
    v294 = v239;
    v299 = (unsigned int *)v8;
    v300 = v7;
    v297 = v9;
    *(_DWORD *)v239 = v301[0];
    if ( v239 + 4 < v239 || (*((_DWORD *)v239 + 1) = HIDWORD(v301[0]), v239 + 8 < v239 + 4) )
    {
      Acl = -1073741675;
      ExFreePoolWithTag(v239, 0);
      v5 = v307;
      v6 = 0LL;
      goto LABEL_19;
    }
    *(_QWORD *)&v239[v238 - 8] = v237;
    v5 = v239;
    memmove(v239 + 8, v301[1], HIDWORD(v301[0]));
    v205 = *(__int64 **)(v8 + 40);
    if ( v205 )
    {
      v206 = *(_DWORD *)(v8 + 32);
      if ( !v206 )
      {
        v6 = 0LL;
        Acl = -1073741811;
        goto LABEL_19;
      }
      v203 = *(unsigned __int8 **)(v8 + 24);
      v316 = v203;
      if ( !v203 )
      {
        v6 = 0LL;
        Acl = -1073741811;
        goto LABEL_19;
      }
      v207 = *(_DWORD *)(v8 + 16);
      if ( !v207 )
      {
        v6 = 0LL;
        Acl = -1073741811;
        goto LABEL_19;
      }
      v208 = (unsigned int)v238;
      v308 = (unsigned int)v238;
      if ( v206 == 8 && v207 == 160 )
      {
        v209 = *v205;
        v210 = 0LL;
        v303 = 0;
        v211 = 0;
        do
          v211 ^= v5[v210++];
        while ( v210 < v208 );
        v303 = v211;
        v120 = v208 + 8;
        v311 = v208 + 8;
        v327 = v203 + 128;
        v121 = ExAllocatePool2(0x100uLL, v208 + 8, 0x20534C53u);
        v313 = (char *)v121;
        v122 = (char *)v121;
        if ( v121 )
        {
          v123 = 0;
          v341 = v209;
          v124 = v5;
          v319 = (_BYTE *)v121;
          v307 = (unsigned __int8 *)(v308 & 7);
          v125 = (_BYTE *)v121;
          v304 = 0;
          v305 = 0;
          if ( (v308 & 7) != 0 )
          {
            v185 = 0;
            v186 = 0;
            v187 = 0;
            v304 = 0;
            v305 = 0;
            v188 = 56;
            v189 = v124;
            do
            {
              v190 = *v124++;
              if ( (unsigned int)v187 >= 4 )
                v185 |= v190 << v188;
              else
                v186 |= v190 << (v188 - 32);
              ++v187;
              v188 -= 8;
            }
            while ( v187 < (unsigned __int8)(v308 & 7) );
            v294 = v189;
            v305 = v186;
            v304 = v185;
            v191 = 16LL;
            v192 = v316 + 158;
            v193 = v316 + 126;
            v315 = 16LL;
            v194 = -1;
            v195 = 30LL;
            do
            {
              if ( v192[1] < 0x1Fu )
              {
                v196 = guard_dispatch_icall_no_overrides(v195 + 1, *(v193 - 2));
                v191 = v315;
                v194 ^= v196;
              }
              if ( *v192 < 0x1Fu )
              {
                v197 = guard_dispatch_icall_no_overrides(v195, *(v193 - 6));
                v191 = v315;
                v123 ^= v197;
              }
              v195 -= 2LL;
              v192 -= 2;
              v193 -= 8;
              v315 = --v191;
            }
            while ( v191 );
            v123 ^= v305;
            v198 = v304 ^ v194;
            v199 = 0;
            v200 = (unsigned int)v307;
            v201 = v123;
            v125 = v319;
            v202 = v198;
            v203 = v316;
            v306 = v198;
            if ( (_DWORD)v307 )
            {
              do
              {
                if ( v199 >= 4 )
                {
                  v202 = (v202 << 8) | HIBYTE(v202);
                  v204 = v202;
                }
                else
                {
                  v201 = (v201 << 8) | HIBYTE(v201);
                  v204 = v201;
                }
                ++v199;
                *v125++ = v204;
              }
              while ( (int)v199 < (int)v200 );
              v198 = v306;
              v203 = v316;
            }
            if ( v200 <= 4 )
            {
              v306 = 0;
              if ( v200 < 4 )
                v123 = v123 >> (8 * (4 - v200)) << (8 * (4 - v200));
            }
            else
            {
              v306 = v198 >> (8 * (8 - v200)) << (8 * (8 - v200));
            }
            v122 = v313;
            v120 = v311;
          }
          v126 = v308;
          v309 = v308 >> 3;
          if ( v308 >> 3 )
          {
            v127 = v203 + 2;
            v319 = v203 + 2;
            v128 = v124 + 2;
            v312 = v125 + 7;
            do
            {
              v129 = v127;
              v130 = v327;
              v131 = v128[3] | (v128[2] << 8);
              v310 = v128[1] | ((*v128 | ((*(v128 - 1) | (*(v128 - 2) << 8)) << 8)) << 8);
              v132 = v310 ^ v123;
              v133 = v128[5] | ((v128[4] | (v131 << 8)) << 8);
              v307 = v128 + 8;
              v134 = v133 ^ v306;
              v314 = v133;
              v135 = 0LL;
              v136 = 16LL;
              do
              {
                v137 = *v130;
                if ( (unsigned __int8)v137 < 0x1Fu )
                {
                  v138 = (__int64 (__fastcall *)(unsigned __int64, __int64, unsigned __int64, unsigned __int64, int, __int64, unsigned int))off_140FD84C0[v137];
                  v139 = v129[1];
                  v140 = *v129;
                  v141 = *(v129 - 1);
                  v142 = *(v129 - 2);
                  if ( (char *)v138 == (char *)sub_14095C2E0 )
                  {
                    v143 = sub_14095C2E0(v135, v142, v141, v140, v139, (__int64)&v341, v134);
                  }
                  else if ( (char *)v138 == (char *)sub_14095C250 )
                  {
                    v143 = sub_14095C250(v135, v142, v141, v140, v139, (__int64)&v341, v134);
                  }
                  else if ( v138 == sub_14095C060 )
                  {
                    v143 = sub_14095C060(v135, v142, v141, v140, v139, (__int64)&v341, v134);
                  }
                  else
                  {
                    v143 = guard_dispatch_icall_no_overrides(v135, v142);
                  }
                  v132 ^= v143;
                }
                v144 = v130[1];
                if ( (unsigned __int8)v144 < 0x1Fu )
                {
                  v145 = (__int64 (__fastcall *)(unsigned __int64, __int64, unsigned __int64, unsigned __int64, int, __int64, unsigned int))off_140FD84C0[v144];
                  v146 = v129[5];
                  v147 = v129[4];
                  v148 = v129[3];
                  v149 = v129[2];
                  if ( (char *)v145 == (char *)sub_14095C3C0 )
                  {
                    v150 = sub_14095C3C0((unsigned __int8)v135 + 1, v149, v148, v147, v146, (__int64)&v341, v132);
                  }
                  else if ( (char *)v145 == (char *)sub_14095C220 )
                  {
                    v150 = sub_14095C220(v135 + 1, v149, v148, v147, v146, (__int64)&v341, v132);
                  }
                  else if ( v145 == sub_14095C140 )
                  {
                    v150 = sub_14095C140(v135 + 1, v149, v148, v147, v146, (__int64)&v341, v132);
                  }
                  else
                  {
                    v150 = guard_dispatch_icall_no_overrides(v135 + 1, v149);
                  }
                  v134 ^= v150;
                }
                v135 += 2LL;
                v130 += 2;
                v129 += 8;
                --v136;
              }
              while ( v136 );
              v151 = v341;
              v152 = HIDWORD(v341);
              v153 = (HIWORD(v341) * ((unsigned __int16)v341 + __ROR4__(~v134, 5))) ^ v132;
              v154 = (v153 >> 10) ^ (WORD1(v341) * (v153 ^ HIWORD(v341))) ^ v134;
              v155 = __ROR4__(v154, 10) ^ (WORD2(v341) * __ROR4__(v341 ^ v154, 12)) ^ v153;
              v156 = (HIWORD(v341) * __ROR4__(v155 - v341, 14) - __ROR4__(v155, 24)) ^ v154;
              v157 = (__ROR4__(v156, 30) + (unsigned __int16)v341 * __ROR4__(v156 + HIDWORD(v341), 15)) ^ v155;
              v158 = (WORD1(v341) * (v157 ^ WORD2(v341))) ^ __ROR4__(v157, 6) ^ v156;
              v159 = (HIDWORD(v341) - (v341 ^ v158)) ^ v157;
              v160 = (HIWORD(v341) * __ROR4__(v159 ^ WORD1(v341), 26) - __ROR4__(v159, 30)) ^ v158;
              v161 = ((unsigned __int16)v341 * (v160 - WORD2(v341)) - (v160 >> 13)) ^ v159;
              v162 = (WORD1(v341) * __ROR4__(v161 + HIDWORD(v341), 9) - __ROR4__(v161, 30)) ^ v160;
              v163 = v312;
              v164 = v314;
              v165 = (__ROR4__(v162, 22) + WORD2(v341) * __ROR4__(v162 - v341, 27)) ^ v161;
              v166 = v165 ^ v162;
              v123 = v305 ^ v165;
              *((char *)v312 - 4) = v123;
              v167 = v304 ^ v151 ^ v152 ^ v166;
              *v163 = v167;
              *(v163 - 5) = (unsigned __int64)v123 >> 8;
              *(v163 - 1) = BYTE1(v167);
              v128 = v307;
              *(v163 - 6) = (unsigned __int16)((unsigned __int64)v123 >> 8) >> 8;
              v127 = v319;
              *(v163 - 2) = (unsigned __int16)(v167 >> 8) >> 8;
              *(v163 - 7) = __ROR4__(
                              ((((unsigned __int64)v123 >> 8) | (v123 << 24)) >> 8) | ((((unsigned __int64)v123 >> 8) | (v123 << 24)) << 24),
                              8);
              *(v163 - 3) = __ROR4__((((v167 >> 8) | (v167 << 24)) >> 8) | (((v167 >> 8) | (v167 << 24)) << 24), 8);
              v81 = v309-- == 1;
              v306 = v167;
              v305 = v310;
              v304 = v164;
              v312 = v163 + 8;
            }
            while ( !v81 );
            v126 = v308;
            v122 = v313;
            v120 = v311;
          }
          Acl = 0;
          *(_QWORD *)&v122[v126] = v303;
          if ( v120 )
          {
            v168 = (void *)ExAllocatePool2(0x100uLL, v120, 0x20534C53u);
            v169 = v168;
            if ( v168 )
            {
              memmove(v168, v122, v120);
              *((_QWORD *)v299 + 1) = v169;
              *v299 = v120;
            }
            else
            {
              Acl = -1073741801;
            }
          }
          else
          {
            Acl = -1073741762;
          }
          v5 = v294;
          v9 = v297;
          v8 = (__int64)v299;
          ExFreePoolWithTag(v122, 0);
          v7 = v300;
          if ( Acl >= 0 )
          {
            v170 = v299 + 8;
            v171 = v299 + 4;
            v172 = v299[4];
            if ( *v299 >= 0xFFFFFFFC
              || (v173 = *v299 + 8, v173 < *v299 + 4)
              || (v174 = v173 + v172, v173 + v172 < v173)
              || (v175 = v174 + 4, v174 + 4 < v174)
              || (v176 = v175 + v299[8], v176 < v175) )
            {
              v6 = 0LL;
              Acl = -1073741675;
              v9 = v297;
              goto LABEL_19;
            }
            v307 = v294;
            if ( v176 )
            {
              v177 = (_DWORD *)ExAllocatePool2(0x100uLL, v176, 0x20534C53u);
              if ( v177 )
              {
                v178 = (char *)v177;
                v298 = (char *)v177;
                v179 = v177 + 1;
                *v177 = *v299;
                if ( v178 + 4 < v178 )
                {
                  v9 = v297;
                  v8 = (__int64)v299;
                  v5 = v307;
                }
                else
                {
                  v8 = (__int64)v299;
                  memmove(v177 + 1, *((const void **)v299 + 1), *v299);
                  v180 = (_DWORD *)((char *)v179 + *v299);
                  if ( v180 < v179
                    || (v181 = v180 + 1, *v180 = *v171, v180 + 1 < v180)
                    || (memmove(v180 + 1, *((const void **)v299 + 3), (unsigned int)*v171),
                        v182 = (_DWORD *)((char *)v181 + (unsigned int)*v171),
                        v182 < v181)
                    || (v183 = v182 + 1, *v182 = *v170, v182 + 1 < v182) )
                  {
                    v178 = v298;
                    v5 = v294;
                    v9 = v297;
                  }
                  else
                  {
                    memmove(v182 + 1, *((const void **)v299 + 5), (unsigned int)*v170);
                    v184 = (unsigned int)*v170;
                    v9 = v297;
                    v5 = v294;
                    if ( (_DWORD *)((char *)v183 + v184) >= v183 )
                    {
                      Acl = 0;
                      *v332 = v298;
                      v6 = 0LL;
                      *v333 = v176;
                      goto LABEL_19;
                    }
                    v178 = v298;
                  }
                }
                Acl = -1073741675;
                ExFreePoolWithTag(v178, 0);
                v6 = v331;
                goto LABEL_19;
              }
              v5 = v294;
              v9 = v297;
              v8 = (__int64)v299;
              Acl = -1073741801;
              v6 = 0LL;
            }
            else
            {
              v6 = 0LL;
              v8 = (__int64)v299;
              v5 = v294;
              Acl = -1073741762;
              v9 = v297;
            }
            goto LABEL_19;
          }
LABEL_217:
          v6 = 0LL;
          goto LABEL_19;
        }
        v7 = v300;
        v8 = (__int64)v299;
      }
      v6 = 0LL;
      Acl = -1073741823;
      goto LABEL_19;
    }
    Acl = -1073741811;
    goto LABEL_217;
  }
  Acl = SPCallServerHandleQueryPolicy(P, v8, (unsigned int)v313, v301, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
  if ( Acl >= 0 )
    goto LABEL_323;
LABEL_339:
  v5 = 0LL;
  v6 = 0LL;
LABEL_19:
  P[0] = 0LL;
  if ( P[1] )
  {
    ExFreePoolWithTag(P[1], 0);
    P[1] = 0LL;
  }
  v301[0] = 0LL;
  if ( v301[1] )
  {
    ExFreePoolWithTag(v301[1], 0);
    v301[1] = 0LL;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v7 )
  {
    v21 = (void *)*((_QWORD *)v7 + 1);
    if ( v21 )
    {
      ExFreePoolWithTag(v21, 0);
      *((_QWORD *)v7 + 1) = 0LL;
    }
    v22 = (void *)*((_QWORD *)v7 + 3);
    if ( v22 )
    {
      ExFreePoolWithTag(v22, 0);
      *((_QWORD *)v7 + 3) = 0LL;
    }
    v23 = (void *)*((_QWORD *)v7 + 5);
    if ( v23 )
    {
      ExFreePoolWithTag(v23, 0);
      *((_QWORD *)v7 + 5) = 0LL;
    }
    ExFreePoolWithTag(v7, 0);
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v8 )
  {
    v24 = *(void **)(v8 + 8);
    if ( v24 )
    {
      ExFreePoolWithTag(v24, 0);
      *(_QWORD *)(v8 + 8) = 0LL;
    }
    v25 = *(void **)(v8 + 24);
    if ( v25 )
    {
      ExFreePoolWithTag(v25, 0);
      *(_QWORD *)(v8 + 24) = 0LL;
    }
    v26 = *(void **)(v8 + 40);
    if ( v26 )
    {
      ExFreePoolWithTag(v26, 0);
      *(_QWORD *)(v8 + 40) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v8, 0);
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)Acl;
}
