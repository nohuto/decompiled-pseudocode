/*
 * XREFs of sub_140973C40 @ 0x140973C40
 * Callers:
 *     Callout @ 0x140A2FCE0 (Callout.c)
 * Callees:
 *     SeAccessCheck @ 0x14035A5B0 (SeAccessCheck.c)
 *     RtlLengthSid @ 0x140456300 (RtlLengthSid.c)
 *     RtlUIntAdd @ 0x1404563B0 (RtlUIntAdd.c)
 *     sub_1404B97B8 @ 0x1404B97B8 (sub_1404B97B8.c)
 *     sub_1404D3618 @ 0x1404D3618 (sub_1404D3618.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1406A6AD0 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memcmp @ 0x1406BFF10 (memcmp.c)
 *     sub_1406F5224 @ 0x1406F5224 (sub_1406F5224.c)
 *     sub_1406F5B20 @ 0x1406F5B20 (sub_1406F5B20.c)
 *     sub_1406F5DBC @ 0x1406F5DBC (sub_1406F5DBC.c)
 *     sub_1406F618C @ 0x1406F618C (sub_1406F618C.c)
 *     sub_1406F9FE8 @ 0x1406F9FE8 (sub_1406F9FE8.c)
 *     sub_1406FA584 @ 0x1406FA584 (sub_1406FA584.c)
 *     sub_1406FA93C @ 0x1406FA93C (sub_1406FA93C.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     RtlCreateAcl @ 0x14085CAA0 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x14091DA10 (RtlpAddKnownAce.c)
 *     sub_140973850 @ 0x140973850 (sub_140973850.c)
 *     sub_140973930 @ 0x140973930 (sub_140973930.c)
 *     sub_140973A10 @ 0x140973A10 (sub_140973A10.c)
 *     sub_140973A40 @ 0x140973A40 (sub_140973A40.c)
 *     sub_140973AD0 @ 0x140973AD0 (sub_140973AD0.c)
 *     sub_140973B00 @ 0x140973B00 (sub_140973B00.c)
 *     sub_140973B30 @ 0x140973B30 (sub_140973B30.c)
 *     sub_140973BB0 @ 0x140973BB0 (sub_140973BB0.c)
 *     SPCallServerHandleQueryPolicy @ 0x140976EFC (SPCallServerHandleQueryPolicy.c)
 *     sub_140978038 @ 0x140978038 (sub_140978038.c)
 *     sub_1409FBFF8 @ 0x1409FBFF8 (sub_1409FBFF8.c)
 *     sub_1409FC424 @ 0x1409FC424 (sub_1409FC424.c)
 *     sub_1409FCADC @ 0x1409FCADC (sub_1409FCADC.c)
 *     sub_140A338CC @ 0x140A338CC (sub_140A338CC.c)
 *     sub_140A3CE2C @ 0x140A3CE2C (sub_140A3CE2C.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x140A551F0 (SPCallServerHandleGetAppPolicyValue.c)
 *     sub_140A57B94 @ 0x140A57B94 (sub_140A57B94.c)
 *     SPCallServerHandleUpdatePolicies @ 0x140A6A19C (SPCallServerHandleUpdatePolicies.c)
 *     SPCallServerHandleCallbackPaintComplete @ 0x140A895A4 (SPCallServerHandleCallbackPaintComplete.c)
 *     SPCallServerHandleUpdateLicense @ 0x140A8D010 (SPCallServerHandleUpdateLicense.c)
 *     sub_140AB0CC8 @ 0x140AB0CC8 (sub_140AB0CC8.c)
 *     sub_140AB8E18 @ 0x140AB8E18 (sub_140AB8E18.c)
 *     sub_140ABA258 @ 0x140ABA258 (sub_140ABA258.c)
 *     sub_140ABA6A0 @ 0x140ABA6A0 (sub_140ABA6A0.c)
 *     sub_140ABACD0 @ 0x140ABACD0 (sub_140ABACD0.c)
 *     sub_140ABDF2C @ 0x140ABDF2C (sub_140ABDF2C.c)
 *     sub_140ABE510 @ 0x140ABE510 (sub_140ABE510.c)
 *     sub_140AC0280 @ 0x140AC0280 (sub_140AC0280.c)
 *     sub_140AC11C4 @ 0x140AC11C4 (sub_140AC11C4.c)
 *     sub_140AC28E8 @ 0x140AC28E8 (sub_140AC28E8.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140973C40(unsigned int *a1, unsigned int a2, int a3, char **a4, unsigned int *a5)
{
  unsigned __int8 *v5; // r15
  void *v6; // rsi
  unsigned int *v7; // r12
  __int64 v8; // r13
  PVOID v9; // r14
  size_t v10; // r13
  unsigned int *v11; // r8
  unsigned int *v12; // rcx
  size_t v13; // r14
  char *v14; // r15
  unsigned int v15; // r9d
  unsigned int *v16; // rcx
  unsigned int v17; // r8d
  size_t v18; // rsi
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
  __int64 v77; // r9
  __int64 v78; // r8
  __int64 v79; // rdx
  int v80; // edx
  _BYTE *v81; // r11
  int v82; // edi
  bool v83; // zf
  unsigned int v84; // eax
  int v85; // eax
  unsigned __int64 i; // rax
  void *v87; // rcx
  void *v88; // rcx
  void *v89; // rcx
  void *v90; // rax
  const void *v91; // rdx
  size_t v92; // rsi
  char *v93; // rbx
  unsigned __int64 v94; // rdx
  size_t v95; // r11
  char *v96; // rcx
  unsigned int v97; // eax
  char *v98; // r8
  void *v99; // rcx
  void *v100; // rcx
  void *v101; // rcx
  int v102; // r9d
  int v103; // r10d
  int v104; // r8d
  int v105; // r13d
  char v106; // dl
  int v107; // eax
  __int64 v108; // rdi
  unsigned __int8 *v109; // rbx
  _BYTE *v110; // rsi
  __int64 v111; // rcx
  int v112; // eax
  int v113; // eax
  unsigned int v114; // r10d
  unsigned int v115; // r13d
  unsigned int v116; // r8d
  unsigned int v117; // r14d
  unsigned int v118; // r9d
  _BYTE *v119; // rdx
  _BYTE *v120; // r11
  char v121; // al
  unsigned int v122; // r13d
  __int64 v123; // rax
  char *v124; // r12
  unsigned int v125; // r14d
  unsigned __int8 *v126; // rsi
  _BYTE *v127; // r15
  unsigned __int64 v128; // rbx
  unsigned __int8 *v129; // rdx
  unsigned __int8 *v130; // rcx
  unsigned __int8 *v131; // rbx
  unsigned __int8 *v132; // rdi
  int v133; // r13d
  int v134; // r14d
  int v135; // r13d
  int v136; // r12d
  unsigned __int64 v137; // rsi
  __int64 v138; // r15
  __int64 v139; // rax
  __int64 (__fastcall *v140)(unsigned __int64, __int64, unsigned __int64, unsigned __int64, int, __int64, unsigned int); // rax
  int v141; // ecx
  unsigned __int64 v142; // r9
  unsigned __int64 v143; // r8
  unsigned __int64 v144; // rdx
  int v145; // eax
  __int64 v146; // rax
  __int64 (__fastcall *v147)(unsigned __int64, __int64, unsigned __int64, unsigned __int64, int, __int64, unsigned int); // rax
  int v148; // ecx
  unsigned __int64 v149; // r9
  unsigned __int64 v150; // r8
  unsigned __int64 v151; // rdx
  int v152; // eax
  int v153; // eax
  int v154; // ebx
  unsigned int v155; // r14d
  int v156; // r12d
  int v157; // r14d
  int v158; // r12d
  int v159; // r14d
  int v160; // r12d
  int v161; // r14d
  unsigned int v162; // r12d
  int v163; // r14d
  int v164; // r12d
  _BYTE *v165; // r9
  int v166; // r13d
  int v167; // r14d
  int v168; // r12d
  unsigned int v169; // r12d
  void *v170; // rax
  void *v171; // rbx
  _DWORD *v172; // r14
  _DWORD *v173; // rsi
  unsigned int v174; // r11d
  unsigned int v175; // r10d
  unsigned int v176; // ecx
  unsigned int v177; // eax
  unsigned int v178; // ebx
  _DWORD *v179; // rax
  char *v180; // rcx
  _DWORD *v181; // rdi
  _DWORD *v182; // rcx
  _DWORD *v183; // rdi
  _DWORD *v184; // rcx
  _DWORD *v185; // rdi
  __int64 v186; // rax
  int v187; // r8d
  int v188; // r9d
  int v189; // edx
  char v190; // r13
  unsigned __int8 *v191; // rdi
  int v192; // eax
  __int64 v193; // rcx
  _BYTE *v194; // r13
  unsigned __int8 *v195; // r12
  int v196; // edi
  __int64 v197; // r15
  int v198; // eax
  int v199; // eax
  unsigned int v200; // eax
  unsigned int v201; // r9d
  unsigned int v202; // ebx
  unsigned int v203; // edx
  unsigned int v204; // r8d
  unsigned __int8 *v205; // rdi
  char v206; // al
  __int64 *v207; // rdx
  int v208; // ecx
  int v209; // eax
  unsigned __int64 v210; // r8
  __int64 v211; // rbx
  unsigned __int64 v212; // rax
  unsigned __int8 v213; // si
  int *v214; // rsi
  int v215; // esi
  unsigned int *v216; // rax
  int j; // r9d
  unsigned int *v218; // rcx
  PVOID v219; // r8
  size_t v220; // r14
  void *v221; // r11
  const void *v222; // r12
  unsigned int *v223; // r10
  unsigned int v224; // r9d
  unsigned int *v225; // rax
  size_t v226; // r15
  unsigned int *v227; // rcx
  const void *v228; // r13
  _OWORD *v229; // rax
  __int64 v230; // r8
  _OWORD *v231; // rbx
  unsigned int *v232; // rax
  PVOID v233; // rcx
  void *v234; // rax
  void *v235; // rax
  void *v236; // rcx
  void *v237; // rcx
  void *v238; // rcx
  unsigned __int64 v239; // rdi
  __int64 v240; // rbx
  unsigned __int8 *v241; // rax
  __int64 v242; // r14
  ULONG v243; // ebx
  ULONG v244; // ebx
  ULONG v245; // ebx
  ACL *v246; // rax
  ACL *v247; // rsi
  BOOLEAN v248; // bl
  size_t v249; // rbx
  const void *v250; // rsi
  const void *v251; // rdi
  int updated; // eax
  __int64 v253; // rdx
  __int64 v254; // r8
  __int64 v255; // r14
  ULONG v256; // ebx
  ULONG v257; // ebx
  ULONG v258; // ebx
  ACL *v259; // rax
  ACL *v260; // rsi
  BOOLEAN v261; // bl
  const void *v262; // rdi
  unsigned int *v263; // rax
  unsigned int v264; // edx
  __int64 v265; // r8
  unsigned int *v266; // rcx
  __int64 *v267; // rbx
  __int64 v268; // rbx
  unsigned int *v269; // rax
  unsigned int k; // edx
  size_t v271; // rdi
  unsigned int *v272; // rcx
  unsigned int *v273; // rsi
  void *v274; // rax
  unsigned int *v275; // rax
  unsigned int v276; // edx
  unsigned int *v277; // rcx
  PVOID v278; // r10
  size_t v279; // r14
  int v280; // r8d
  size_t v281; // rbx
  const void *v282; // r14
  const void *v283; // rsi
  _QWORD *v284; // rdi
  void *v285; // rax
  __int64 v286; // r8
  __int64 v287; // r9
  int v288; // edi
  _DWORD *v289; // rax
  int v290; // edi
  unsigned int v291; // ecx
  unsigned __int64 v292; // rdx
  unsigned int m; // r8d
  unsigned int v294; // eax
  int v295; // edx
  ACCESS_MASK PreviouslyGrantedAccess[2]; // [rsp+28h] [rbp-E0h]
  PPRIVILEGE_SET *Privileges; // [rsp+30h] [rbp-D8h]
  unsigned __int8 *v298; // [rsp+58h] [rbp-B0h]
  PVOID v299; // [rsp+60h] [rbp-A8h]
  PVOID v300; // [rsp+60h] [rbp-A8h]
  PVOID v301; // [rsp+60h] [rbp-A8h]
  char *v302; // [rsp+68h] [rbp-A0h]
  unsigned int *v303; // [rsp+70h] [rbp-98h]
  unsigned int *v304; // [rsp+78h] [rbp-90h]
  PVOID v305[2]; // [rsp+80h] [rbp-88h] BYREF
  PVOID P[2]; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int8 v307; // [rsp+A0h] [rbp-68h]
  int v308; // [rsp+A4h] [rbp-64h]
  int v309; // [rsp+A8h] [rbp-60h]
  int v310; // [rsp+ACh] [rbp-5Ch]
  unsigned __int8 *v311; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v312; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v313; // [rsp+C0h] [rbp-48h]
  int v314; // [rsp+C8h] [rbp-40h]
  __int64 v315; // [rsp+D0h] [rbp-38h]
  PVOID v316; // [rsp+D8h] [rbp-30h]
  char *v317; // [rsp+E0h] [rbp-28h]
  int v318; // [rsp+E8h] [rbp-20h]
  __int64 v319; // [rsp+F0h] [rbp-18h]
  unsigned __int8 *v320; // [rsp+F8h] [rbp-10h]
  NTSTATUS AccessStatus; // [rsp+100h] [rbp-8h] BYREF
  int v322; // [rsp+104h] [rbp-4h] BYREF
  _BYTE *v323; // [rsp+108h] [rbp+0h]
  NTSTATUS v324; // [rsp+110h] [rbp+8h] BYREF
  unsigned int *v325; // [rsp+118h] [rbp+10h]
  ACCESS_MASK v326[2]; // [rsp+120h] [rbp+18h] BYREF
  ACCESS_MASK GrantedAccess[4]; // [rsp+128h] [rbp+20h] BYREF
  unsigned __int8 *v328; // [rsp+138h] [rbp+30h]
  __int64 v329; // [rsp+140h] [rbp+38h] BYREF
  __int64 v330; // [rsp+148h] [rbp+40h] BYREF
  __int64 v331; // [rsp+150h] [rbp+48h] BYREF
  void *v332; // [rsp+158h] [rbp+50h]
  char **v333; // [rsp+168h] [rbp+60h]
  unsigned int *v334; // [rsp+170h] [rbp+68h]
  _OWORD v335[2]; // [rsp+178h] [rbp+70h] BYREF
  ACL *v336; // [rsp+198h] [rbp+90h]
  _OWORD SecurityDescriptor[2]; // [rsp+1A0h] [rbp+98h] BYREF
  ACL *v338; // [rsp+1C0h] [rbp+B8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+1C8h] [rbp+C0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v341; // [rsp+210h] [rbp+108h] BYREF
  __int64 v342; // [rsp+218h] [rbp+110h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v312 = (unsigned __int64)a1;
  v333 = a4;
  LODWORD(v317) = a3;
  v334 = a5;
  v311 = 0LL;
  v332 = 0LL;
  v325 = 0LL;
  *(_OWORD *)P = 0LL;
  *(_OWORD *)v305 = 0LL;
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
  Pool2 = ExAllocatePool2(0x100uLL);
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
  if ( v312 == -4LL )
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
    v90 = (void *)ExAllocatePool2(0x100uLL);
    if ( !v90 )
    {
      LODWORD(v14) = 0;
      goto LABEL_107;
    }
    v91 = (const void *)(v312 + 4);
    *((_QWORD *)v30 + 1) = v90;
    memmove(v90, v91, v10);
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
    v31 = (void *)ExAllocatePool2(0x100uLL);
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
  v32 = (void *)ExAllocatePool2(0x100uLL);
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
  v87 = (void *)*((_QWORD *)v30 + 1);
  if ( v87 )
  {
    ExFreePoolWithTag(v87, 0);
    *((_QWORD *)v30 + 1) = 0LL;
  }
  v88 = (void *)*((_QWORD *)v30 + 3);
  if ( v88 )
  {
    ExFreePoolWithTag(v88, 0);
    *((_QWORD *)v30 + 3) = 0LL;
  }
  v89 = (void *)*((_QWORD *)v30 + 5);
  if ( v89 )
  {
    ExFreePoolWithTag(v89, 0);
    *((_QWORD *)v30 + 5) = 0LL;
  }
  ExFreePoolWithTag(v30, 0);
  v30 = v325;
LABEL_62:
  if ( Acl < 0 )
  {
    if ( v30 )
    {
      v99 = (void *)*((_QWORD *)v30 + 1);
      if ( v99 )
      {
        ExFreePoolWithTag(v99, 0);
        *((_QWORD *)v30 + 1) = 0LL;
      }
      v100 = (void *)*((_QWORD *)v30 + 3);
      if ( v100 )
      {
        ExFreePoolWithTag(v100, 0);
        *((_QWORD *)v30 + 3) = 0LL;
      }
      v101 = (void *)*((_QWORD *)v30 + 5);
      if ( v101 )
      {
        ExFreePoolWithTag(v101, 0);
        *((_QWORD *)v30 + 5) = 0LL;
      }
      ExFreePoolWithTag(v30, 0);
    }
    goto LABEL_15;
  }
  v304 = v30;
  v7 = v30;
  if ( !v30
    || (v33 = (unsigned __int8 *)*((_QWORD *)v30 + 1), (v323 = v33) == 0LL)
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
    || (v39 = *v35, v319 = v34 - 8, v40 = 0, v41 = (void *)ExAllocatePool2(0x100uLL), (v316 = v41) == 0LL) )
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
  v42 = v319;
  v43 = v33;
  v341 = v39;
  v312 = (unsigned __int64)v41;
  v313 = v319 & 7;
  if ( (v319 & 7) != 0 )
  {
    v102 = 0;
    v103 = 0;
    v309 = 0;
    v104 = 0;
    v310 = -1;
    v308 = 0;
    v105 = -1;
    v106 = 56;
    do
    {
      v107 = *v43++;
      if ( (unsigned int)v104 >= 4 )
        v102 |= v107 << v106;
      else
        v103 |= v107 << (v106 - 32);
      ++v104;
      v106 -= 8;
    }
    while ( v104 < (v319 & 7) );
    v308 = v103;
    v309 = v102;
    v108 = 30LL;
    v320 = (unsigned __int8 *)(v37 + 158);
    v325 = (unsigned int *)(v37 + 126);
    v109 = (unsigned __int8 *)(v37 + 126);
    v110 = (_BYTE *)(v37 + 158);
    v111 = 16LL;
    v315 = 16LL;
    do
    {
      if ( v110[1] < 0x1Fu )
      {
        Privileges = (PPRIVILEGE_SET *)&v341;
        *(_QWORD *)PreviouslyGrantedAccess = v109[1];
        v112 = guard_dispatch_icall_no_overrides(v108 + 1, *(v109 - 2), *(v109 - 1), *v109);
        v111 = v315;
        v105 ^= v112;
      }
      if ( *v110 < 0x1Fu )
      {
        Privileges = (PPRIVILEGE_SET *)&v341;
        *(_QWORD *)PreviouslyGrantedAccess = *(v109 - 3);
        v113 = guard_dispatch_icall_no_overrides(v108, *(v109 - 6), *(v109 - 5), *(v109 - 4));
        v111 = v315;
        LODWORD(v14) = v113 ^ (unsigned int)v14;
      }
      v108 -= 2LL;
      v110 -= 2;
      v109 -= 8;
      v315 = --v111;
    }
    while ( v111 );
    LODWORD(v14) = v308 ^ (unsigned int)v14;
    v114 = 0;
    v115 = v309 ^ v105;
    v116 = (unsigned int)v14;
    v117 = v313;
    v118 = v115;
    v40 = 0;
    if ( (_DWORD)v313 )
    {
      v119 = (_BYTE *)v312;
      do
      {
        v120 = v119 + 1;
        if ( v114 >= 4 )
        {
          v118 = (v118 << 8) | HIBYTE(v118);
          v121 = v118;
        }
        else
        {
          v116 = (v116 << 8) | HIBYTE(v116);
          v121 = v116;
        }
        ++v114;
        *v119++ = v121;
      }
      while ( (int)v114 < (int)v117 );
      v41 = v120;
    }
    else
    {
      v41 = (void *)v312;
    }
    if ( v117 <= 4 )
    {
      v45 = 0;
      if ( v117 < 4 )
        LODWORD(v14) = (unsigned int)v14 >> (8 * (4 - v117)) << (8 * (4 - v117));
    }
    else
    {
      v45 = v115 >> (8 * (8 - v117)) << (8 * (8 - v117));
    }
    LODWORD(v39) = v341;
    v42 = v319;
    v44 = v320;
  }
  else
  {
    v308 = 0;
    v310 = -1;
    v44 = (unsigned __int8 *)(v37 + 158);
    v309 = -1;
    v45 = 0;
    v320 = (unsigned __int8 *)(v37 + 158);
    v325 = (unsigned int *)(v37 + 126);
  }
  v313 = v42 >> 3;
  if ( !(v42 >> 3) )
    goto LABEL_101;
  v46 = v43 + 2;
  v315 = (__int64)v41 + 7;
  while ( 2 )
  {
    v47 = v46[2] << 8;
    v48 = v46[3];
    v49 = (v46[1] | ((*v46 | ((*(v46 - 1) | (*(v46 - 2) << 8)) << 8)) << 8)) ^ (unsigned int)v14;
    v318 = v46[1] | ((*v46 | ((*(v46 - 1) | (*(v46 - 2) << 8)) << 8)) << 8);
    v50 = v46[5] | ((v46[4] | ((v48 | v47) << 8)) << 8);
    v328 = v46 + 8;
    v314 = v50;
    v51 = (unsigned __int16)v39;
    v52 = v49 ^ v39 ^ HIDWORD(v341) ^ v50 ^ v45;
    v53 = (v52 >> 8) ^ (WORD2(v341) * (WORD1(v341) ^ v52)) ^ v49;
    v54 = (WORD1(v341) * __ROR4__(HIDWORD(v341) - v53, 11) - __ROR4__(v53, 12)) ^ v52;
    v55 = ((unsigned __int16)v39 * __ROR4__(v54 ^ HIDWORD(v341), 24) - __ROR4__(v54, 30)) ^ v53;
    v56 = __ROR4__(v55, 9) ^ (HIWORD(v341) * __ROR4__(v55 - v39, 4)) ^ v54;
    v57 = (__ROR4__(v56, 4) + WORD2(v341) * __ROR4__(v39 - v56, 10)) ^ v55;
    v58 = (WORD1(v341) * __ROR4__(v57 ^ HIWORD(v341), 28) - __ROR4__(v57, 16)) ^ v56;
    v59 = 16LL;
    v60 = 30LL;
    v61 = v44;
    v312 = 16LL;
    v62 = ((unsigned __int16)v39 * (v58 ^ WORD1(v341)) - __ROR4__(v58, 7)) ^ v57;
    v63 = (v62 - v39 - HIWORD(v341)) ^ v58;
    v64 = __ROR4__(v63, 11) ^ (WORD2(v341) * __ROR4__(v39 - v63, 9)) ^ v62;
    v65 = (unsigned __int8 *)v325;
    v66 = (WORD1(v341) * (v64 - WORD2(v341)) - (v64 >> 13)) ^ v63;
    v67 = (v66 >> 15) ^ (v51 * ((8 * (v66 - WORD2(v341))) | ((unsigned __int64)(v66 - WORD2(v341)) >> 29))) ^ v64;
    do
    {
      v68 = v61[1];
      if ( (unsigned __int8)v68 >= 0x1Fu )
        goto LABEL_83;
      v69 = (__int64 (__fastcall *)(char, unsigned __int64, unsigned __int64, __int64, int, __int64, unsigned int))off_140FD74B0[v68];
      v70 = v65[1];
      v71 = *v65;
      v72 = *(v65 - 1);
      v73 = *(v65 - 2);
      if ( (char *)v69 == (char *)sub_1409E3610 )
      {
        v74 = *((unsigned __int16 *)&v341 + ((*(v65 - 1) + *(v65 - 1) / 3u + (((_BYTE)v60 + 1) & 3) + 1) & 3))
            * (*((unsigned __int16 *)&v341 + (((_BYTE)v60 + 1) & 3))
             + ((~v67 << (15 * (*(v65 - 2) / 0xFu) - *(v65 - 2) + 31)) | (~v67 >> (*(v65 - 2) % 0xFu + 1))));
      }
      else
      {
        if ( v69 == sub_140973B30 )
        {
          v84 = sub_140973B30((unsigned __int8)v60 + 1, v73, v72, v71, v70, (__int64)&v341, v67);
        }
        else
        {
          if ( v69 == sub_140973BB0 )
          {
            v74 = sub_140973BB0((unsigned __int8)v60 + 1, v73, v72, v71, v70, (__int64)&v341, v67);
            goto LABEL_82;
          }
          Privileges = (PPRIVILEGE_SET *)&v341;
          *(_QWORD *)PreviouslyGrantedAccess = v65[1];
          v84 = guard_dispatch_icall_no_overrides(v60 + 1, v73, v72, v71);
        }
        v74 = v84;
      }
LABEL_82:
      v59 = v312;
      v66 ^= v74;
LABEL_83:
      v75 = *v61;
      if ( (unsigned __int8)v75 < 0x1Fu )
      {
        v76 = (__int64 (__fastcall *)(unsigned __int64, __int64, __int64, __int64, int, __int64, int))off_140FD74B0[v75];
        v77 = *(v65 - 4);
        v78 = *(v65 - 5);
        v79 = *(v65 - 6);
        if ( (char *)v76 == (char *)sub_1409FF880 )
        {
          v80 = *((_DWORD *)&v341 + (((v60 & 1) - 1) & 1)) - (*((_DWORD *)&v341 + (v60 & 1)) ^ v66);
        }
        else if ( v76 == sub_140973A10 )
        {
          v80 = *((_DWORD *)&v341 + (((unsigned __int8)(v60 >> 1) - 1) & 1)) ^ (v66
                                                                              - *((unsigned __int16 *)&v341 + (v60 & 3)));
        }
        else
        {
          if ( v76 == sub_140973B00 )
          {
            v85 = sub_140973B00(v60, v79, v78, v77, *(v65 - 3), (__int64)&v341, v66);
          }
          else
          {
            Privileges = (PPRIVILEGE_SET *)&v341;
            *(_QWORD *)PreviouslyGrantedAccess = *(v65 - 3);
            v85 = guard_dispatch_icall_no_overrides(v60, v79, v78, v77);
          }
          v80 = v85;
        }
        v67 ^= v80;
      }
      v60 -= 2LL;
      v61 -= 2;
      v65 -= 8;
      v312 = --v59;
    }
    while ( v59 );
    v81 = (_BYTE *)v315;
    LODWORD(v14) = v308 ^ v67;
    v45 = v309 ^ v66;
    v82 = v314;
    *(_BYTE *)(v315 - 4) = (_BYTE)v14;
    *v81 = v45;
    *(v81 - 5) = BYTE1(v14);
    *(v81 - 1) = BYTE1(v45);
    *(v81 - 6) = (unsigned __int16)((unsigned int)v14 >> 8) >> 8;
    *(v81 - 2) = (unsigned __int16)(v45 >> 8) >> 8;
    *(v81 - 7) = __ROR4__(
                   ((((unsigned int)v14 >> 8) | ((_DWORD)v14 << 24)) >> 8) | ((((unsigned int)v14 >> 8) | ((_DWORD)v14 << 24)) << 24),
                   8);
    *(v81 - 3) = __ROR4__((((v45 >> 8) | (v45 << 24)) >> 8) | (((v45 >> 8) | (v45 << 24)) << 24), 8);
    v83 = v313-- == 1;
    v308 = v318;
    v309 = v82;
    v315 = (__int64)(v81 + 8);
    if ( !v83 )
    {
      LODWORD(v39) = v341;
      v46 = v328;
      v44 = v320;
      continue;
    }
    break;
  }
  v42 = v319;
  v40 = 0;
LABEL_101:
  v5 = 0LL;
  for ( i = 0LL; i < v42; ++i )
    v40 ^= *((_BYTE *)v316 + i);
  v7 = v304;
  if ( v40 != *(_QWORD *)&v323[v42] )
  {
    ExFreePoolWithTag(v316, 0);
    goto LABEL_148;
  }
  v9 = v316;
  if ( (unsigned int)v42 < 4 )
    goto LABEL_588;
  v314 = *(_DWORD *)v316;
  if ( (char *)v316 + 4 < v316 )
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
  v92 = *((unsigned int *)v316 + 1);
  v93 = (char *)v316 + 8;
  if ( (char *)v316 + 8 < (char *)v316 + 4 )
    goto LABEL_106;
  if ( (int)v42 - 8 < (unsigned int)v92 )
  {
    Acl = -1073741762;
    v8 = 0LL;
    v6 = 0LL;
    goto LABEL_19;
  }
  if ( (unsigned int)v92 >= 0xFFFFFFF8 )
    goto LABEL_106;
  v94 = (unsigned __int64)&v93[v92];
  v95 = (unsigned int)v92;
  if ( (char *)v316 + (unsigned int)v42 < &v93[v92] || (unsigned __int64)(unsigned int)v42 + -(__int64)v92 - 8 >= 8 )
  {
LABEL_588:
    Acl = -1073741762;
    v8 = 0LL;
    v6 = 0LL;
    goto LABEL_19;
  }
  v299 = v316;
  v8 = 0LL;
  if ( v316 != (PVOID)-8LL )
  {
    v96 = (char *)v316 + 8;
    if ( v94 < (unsigned __int64)v93 )
    {
      Acl = -1073741675;
      v6 = 0LL;
      goto LABEL_19;
    }
    v299 = v316;
    while ( (unsigned __int64)v96 < v94 )
    {
      if ( v96 + 4 < v96 )
        goto LABEL_131;
      v299 = v316;
      if ( (unsigned __int64)(v96 + 4) > v94 )
        goto LABEL_192;
      v97 = *(_DWORD *)v96 + 4;
      if ( *(_DWORD *)v96 >= 0xFFFFFFFC || (v98 = &v96[v97], v98 < v96) )
      {
LABEL_131:
        Acl = -1073741675;
LABEL_132:
        v5 = 0LL;
        v6 = 0LL;
        goto LABEL_19;
      }
      v96 += v97;
      if ( (unsigned __int64)v98 > v94 )
        goto LABEL_192;
      LODWORD(v5) = (_DWORD)v5 + 1;
    }
    if ( v96 != (char *)v94 )
    {
LABEL_192:
      Acl = -1073741811;
      v5 = 0LL;
      v6 = 0LL;
      goto LABEL_19;
    }
  }
  if ( (_DWORD)v92 )
  {
    v8 = ExAllocatePool2(0x100uLL);
    if ( v8 )
    {
      v95 = v92;
      goto LABEL_142;
    }
    Acl = -1073741801;
LABEL_332:
    v8 = 0LL;
    goto LABEL_132;
  }
LABEL_142:
  if ( v316 != (PVOID)-8LL )
    memmove((void *)v8, v93, v95);
  P[1] = (PVOID)v8;
  P[0] = (PVOID)__PAIR64__(v92, (unsigned int)v5);
  if ( v314 != (_DWORD)v5 )
  {
    v8 = 0LL;
    Acl = -1073741762;
    v5 = 0LL;
    v7 = v304;
    v6 = 0LL;
    v9 = v299;
    goto LABEL_19;
  }
  if ( !P[1] )
  {
    v7 = v304;
    Acl = -1073741811;
    v9 = v299;
    v8 = 0LL;
    goto LABEL_132;
  }
  if ( !(_DWORD)v5 )
  {
    v7 = v304;
    Acl = -1073741811;
    v9 = v299;
    v8 = 0LL;
    goto LABEL_132;
  }
  v7 = v304;
  v9 = v299;
  v295 = *(_DWORD *)P[1];
  if ( (char *)P[1] + 4 < P[1] )
  {
LABEL_284:
    v8 = 0LL;
    Acl = -1073741675;
    v5 = 0LL;
    v6 = 0LL;
    goto LABEL_19;
  }
  v214 = 0LL;
  if ( v295 )
    v214 = (int *)((char *)P[1] + 4);
  if ( v295 != 4 )
  {
    v8 = 0LL;
    Acl = -1073741789;
    v5 = 0LL;
    v6 = 0LL;
    goto LABEL_19;
  }
  v215 = *v214;
  if ( (unsigned int)v5 <= 1 )
  {
    v8 = 0LL;
    Acl = -1073741811;
    v5 = 0LL;
    v6 = 0LL;
    goto LABEL_19;
  }
  v216 = (unsigned int *)P[1];
  for ( j = 0; ; j = 1 )
  {
    v218 = v216 + 1;
    v219 = v9;
    v220 = *v216;
    if ( j )
      break;
    if ( v218 < v216 )
      goto LABEL_285;
    v216 = (unsigned int *)((char *)v218 + v220);
    v299 = v219;
    v9 = v219;
    if ( v216 < v218 )
      goto LABEL_284;
  }
  if ( v218 < v216 )
  {
LABEL_285:
    v8 = 0LL;
    Acl = -1073741675;
    v9 = v299;
    v5 = 0LL;
    v6 = 0LL;
    goto LABEL_19;
  }
  v221 = v299;
  v222 = 0LL;
  if ( (_DWORD)v220 )
    v222 = v216 + 1;
  if ( (unsigned int)v5 <= 2 )
  {
    v8 = 0LL;
    Acl = -1073741811;
    v7 = v304;
    v5 = 0LL;
    v6 = 0LL;
    v9 = v299;
    goto LABEL_19;
  }
  v223 = v304;
  v224 = 0;
  v225 = (unsigned int *)P[1];
  while ( 1 )
  {
    v226 = *v225;
    v227 = v225 + 1;
    if ( v224 >= 2 )
      break;
    if ( v227 < v225 )
    {
      v8 = 0LL;
      Acl = -1073741675;
      v9 = v299;
      v5 = 0LL;
      v7 = v304;
      v6 = 0LL;
      goto LABEL_19;
    }
    v225 = (unsigned int *)((char *)v227 + v226);
    v304 = v223;
    v299 = v221;
    if ( (unsigned int *)((char *)v227 + v226) < v227 )
    {
      v8 = 0LL;
      Acl = -1073741675;
      v5 = 0LL;
      v6 = 0LL;
      v9 = v221;
      v7 = v223;
      goto LABEL_19;
    }
    ++v224;
  }
  if ( v227 < v225 )
  {
    Acl = -1073741675;
LABEL_331:
    v7 = v304;
    v9 = v299;
    goto LABEL_332;
  }
  v228 = 0LL;
  v304 = v223;
  v299 = v221;
  v313 = (unsigned __int64)v223;
  if ( (_DWORD)v226 )
    v228 = v225 + 1;
  v316 = v221;
  v229 = (_OWORD *)ExAllocatePool2(0x100uLL);
  v231 = v229;
  if ( !v229 )
  {
    Acl = -1073741801;
    goto LABEL_331;
  }
  *v229 = 0LL;
  v229[1] = 0LL;
  v229[2] = 0LL;
  v232 = (unsigned int *)v313;
  v233 = v316;
  Acl = 0;
  *(_DWORD *)v231 = 0;
  *((_QWORD *)v231 + 1) = 0LL;
  v304 = v232;
  v300 = v233;
  if ( v222 )
  {
    *((_DWORD *)v231 + 4) = v220;
    if ( (_DWORD)v220 )
    {
      v234 = (void *)ExAllocatePool2(0x100uLL);
      if ( v234 )
      {
        *((_QWORD *)v231 + 3) = v234;
        memmove(v234, v222, v220);
        v7 = v304;
        v9 = v300;
        goto LABEL_306;
      }
      v9 = v316;
      v7 = (unsigned int *)v313;
      v300 = v316;
LABEL_312:
      Acl = -1073741801;
    }
    else
    {
      Acl = -1073741762;
      v300 = v233;
      v9 = v233;
      v7 = v232;
    }
LABEL_313:
    v236 = (void *)*((_QWORD *)v231 + 1);
    if ( v236 )
    {
      ExFreePoolWithTag(v236, 0);
      *((_QWORD *)v231 + 1) = 0LL;
    }
    v237 = (void *)*((_QWORD *)v231 + 3);
    if ( v237 )
    {
      ExFreePoolWithTag(v237, 0);
      *((_QWORD *)v231 + 3) = 0LL;
    }
    v238 = (void *)*((_QWORD *)v231 + 5);
    if ( v238 )
    {
      ExFreePoolWithTag(v238, 0);
      *((_QWORD *)v231 + 5) = 0LL;
    }
    ExFreePoolWithTag(v231, 0);
    v8 = 0LL;
  }
  else
  {
    *((_DWORD *)v231 + 4) = 0;
    v9 = v233;
    *((_QWORD *)v231 + 3) = 0LL;
    v7 = v232;
    v300 = v233;
LABEL_306:
    if ( v228 )
    {
      *((_DWORD *)v231 + 8) = v226;
      if ( !(_DWORD)v226 )
      {
        Acl = -1073741762;
        goto LABEL_313;
      }
      v235 = (void *)ExAllocatePool2(0x100uLL);
      if ( !v235 )
      {
        v9 = v300;
        goto LABEL_312;
      }
      Acl = 0;
      *((_QWORD *)v231 + 5) = v235;
      memmove(v235, v228, v226);
      v9 = v300;
    }
    else
    {
      *((_DWORD *)v231 + 8) = 0;
      *((_QWORD *)v231 + 5) = 0LL;
    }
    v8 = (__int64)v231;
  }
  if ( Acl < 0 )
  {
LABEL_551:
    v5 = 0LL;
    v9 = v300;
    v6 = 0LL;
    goto LABEL_19;
  }
  if ( v215 )
  {
    switch ( v215 )
    {
      case 1:
        v255 = qword_140FD7448;
        v5 = 0LL;
        memset(v335, 0, sizeof(v335));
        v336 = 0LL;
        v326[0] = 0;
        memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
        v324 = 0;
        v256 = RtlLengthSid(*(PSID *)(qword_140FD7448 + 384));
        v257 = RtlLengthSid(*(PSID *)(v255 + 272)) + v256;
        v258 = RtlLengthSid(*(PSID *)(v255 + 392)) + 32 + v257;
        v259 = (ACL *)ExAllocatePool2(0x100uLL);
        v260 = v259;
        if ( !v259 )
        {
          v9 = v300;
          Acl = -1073741801;
          v6 = 0LL;
          goto LABEL_19;
        }
        Acl = RtlCreateAcl(v259, v258, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce((__int64)v260, 2u, 0, 32, *(unsigned __int8 **)(v255 + 384), 0);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce((__int64)v260, 2u, 0, 32, *(unsigned __int8 **)(v255 + 392), 0);
            if ( Acl >= 0 )
            {
              Acl = RtlpAddKnownAce((__int64)v260, 2u, 0, 32, *(unsigned __int8 **)(v255 + 272), 0);
              if ( Acl >= 0 )
              {
                LOBYTE(v335[0]) = 1;
                if ( SWORD1(v335[0]) < 0 )
                {
                  Acl = -1073741703;
                }
                else
                {
                  v336 = v260;
                  Acl = 0;
                  WORD1(v335[0]) = WORD1(v335[0]) & 0xFFF3 | 4;
                  SeCaptureSubjectContext(&SubjectSecurityContext);
                  v261 = SeAccessCheck(
                           v335,
                           &SubjectSecurityContext,
                           0,
                           0x20u,
                           0,
                           0LL,
                           (PGENERIC_MAPPING)&IopFileMapping,
                           1,
                           v326,
                           &v324);
                  SeReleaseSubjectContext(&SubjectSecurityContext);
                  if ( !v261 )
                    Acl = v324;
                }
              }
            }
          }
        }
        ExFreePoolWithTag(v260, 0);
        if ( Acl < 0 )
          goto LABEL_551;
        v326[1] = 0;
        v329 = 8LL;
        ZwQuerySystemInformation(103LL, (__int64)&v329);
        if ( v7[4] != 160 )
          goto LABEL_384;
        v262 = (const void *)*((_QWORD *)v7 + 3);
        if ( (memcmp(qword_140B3FAA0, v262, 0xA0uLL)
           || *(_DWORD *)(v8 + 16) != 160
           || memcmp(qword_140B40180, *(const void **)(v8 + 24), 0xA0uLL)
           || v7[8] != 8
           || memcmp(&qword_140B3B500, *((const void **)v7 + 5), 8uLL)
           || *(_DWORD *)(v8 + 32) != 8
           || memcmp(&qword_140B3B4A8, *(const void **)(v8 + 40), 8uLL))
          && (memcmp(qword_140B3FD20, v262, 0xA0uLL)
           || *(_DWORD *)(v8 + 16) != 160
           || memcmp(qword_140B3F960, *(const void **)(v8 + 24), 0xA0uLL)
           || v7[8] != 8
           || memcmp(&qword_140B3B528, *((const void **)v7 + 5), 8uLL)
           || *(_DWORD *)(v8 + 32) != 8
           || memcmp(&qword_140B3B4E8, *(const void **)(v8 + 40), 8uLL)) )
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
                  (unsigned int)v317,
                  v305,
                  *(_QWORD *)PreviouslyGrantedAccess,
                  Privileges);
          if ( Acl >= 0 )
          {
            v9 = v300;
            goto LABEL_323;
          }
        }
        goto LABEL_551;
      case 2:
        Acl = sub_140AB0CC8(v233, v8, (unsigned int)v317, v305, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v300;
        v6 = 0LL;
        goto LABEL_19;
      case 4:
        Acl = SPCallServerHandleCallbackPaintComplete(P, v8, v230, v305, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v300;
        v6 = 0LL;
        goto LABEL_19;
      case 5:
        Acl = sub_140978038(P, v8, v230, v305, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v300;
        v6 = 0LL;
        goto LABEL_19;
      case 6:
        Acl = sub_1406FA93C((__int64)P, v8, v230, (__int64)v305);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v300;
        v6 = 0LL;
        goto LABEL_19;
      case 7:
        Acl = sub_1406FA584((__int64)P, v8, v230, (__int64)v305);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v300;
        v6 = 0LL;
        goto LABEL_19;
      case 22:
        Acl = sub_1409FBFF8(P, 0x140000000uLL, v230, v305, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v300;
        v6 = 0LL;
        goto LABEL_19;
      case 23:
        v242 = qword_140FD7448;
        v5 = 0LL;
        memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
        v338 = 0LL;
        GrantedAccess[0] = 0;
        memset(&SubjectContext, 0, sizeof(SubjectContext));
        AccessStatus = 0;
        v243 = RtlLengthSid(*(PSID *)(qword_140FD7448 + 392));
        v244 = RtlLengthSid(*(PSID *)(v242 + 384)) + v243;
        v245 = RtlLengthSid(*(PSID *)(v242 + 272)) + 32 + v244;
        v246 = (ACL *)ExAllocatePool2(0x100uLL);
        v247 = v246;
        if ( !v246 )
        {
          v9 = v300;
          Acl = -1073741801;
          v6 = 0LL;
          goto LABEL_19;
        }
        Acl = RtlCreateAcl(v246, v245, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce((__int64)v247, 2u, 0, 32, *(unsigned __int8 **)(v242 + 384), 0);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce((__int64)v247, 2u, 0, 32, *(unsigned __int8 **)(v242 + 392), 0);
            if ( Acl >= 0 )
            {
              Acl = RtlpAddKnownAce((__int64)v247, 2u, 0, 32, *(unsigned __int8 **)(v242 + 272), 0);
              if ( Acl >= 0 )
              {
                LOBYTE(SecurityDescriptor[0]) = 1;
                if ( SWORD1(SecurityDescriptor[0]) < 0 )
                {
                  Acl = -1073741703;
                }
                else
                {
                  v338 = v247;
                  Acl = 0;
                  WORD1(SecurityDescriptor[0]) = WORD1(SecurityDescriptor[0]) & 0xFFF3 | 4;
                  SeCaptureSubjectContext(&SubjectContext);
                  v248 = SeAccessCheck(
                           SecurityDescriptor,
                           &SubjectContext,
                           0,
                           0x20u,
                           0,
                           0LL,
                           (PGENERIC_MAPPING)&IopFileMapping,
                           1,
                           GrantedAccess,
                           &AccessStatus);
                  SeReleaseSubjectContext(&SubjectContext);
                  if ( !v248 )
                    Acl = AccessStatus;
                }
              }
            }
          }
        }
        ExFreePoolWithTag(v247, 0);
        if ( Acl >= 0 )
        {
          GrantedAccess[1] = 0;
          v330 = 8LL;
          ZwQuerySystemInformation(103LL, (__int64)&v330);
          v249 = v7[4];
          if ( (_DWORD)v249 != 160
            || ((v250 = (const void *)*((_QWORD *)v7 + 3), memcmp(qword_140B40040, v250, 0xA0uLL))
             || *(_DWORD *)(v8 + 16) != 160
             || memcmp(qword_140B3FFA0, *(const void **)(v8 + 24), 0xA0uLL)
             || v7[8] != 8
             || memcmp(&qword_140B3B4B8, *((const void **)v7 + 5), 8uLL)
             || *(_DWORD *)(v8 + 32) != 8
             || memcmp(&qword_140B3B490, *(const void **)(v8 + 40), 8uLL))
            && (memcmp(qword_140B40360, v250, v249)
             || *(_DWORD *)(v8 + 16) != 160
             || memcmp(qword_140B40540, *(const void **)(v8 + 24), 0xA0uLL)
             || v7[8] != 8
             || memcmp(&qword_140B3B4A0, *((const void **)v7 + 5), 8uLL)
             || *(_DWORD *)(v8 + 32) != 8
             || memcmp(&qword_140B3B508, *(const void **)(v8 + 40), 8uLL))
            && ((v251 = (const void *)*((_QWORD *)v7 + 3), memcmp(qword_140B404A0, v251, v249))
             || *(_DWORD *)(v8 + 16) != 160
             || memcmp(sub_140B3FC80, *(const void **)(v8 + 24), 0xA0uLL)
             || v7[8] != 8
             || memcmp(&qword_140B3B4C0, *((const void **)v7 + 5), 8uLL)
             || *(_DWORD *)(v8 + 32) != 8
             || memcmp(sub_140B3B4C8, *(const void **)(v8 + 40), 8uLL))
            && (memcmp(qword_140B3FE60, v251, v249)
             || *(_DWORD *)(v8 + 16) != 160
             || memcmp(qword_140B402C0, *(const void **)(v8 + 24), 0xA0uLL)
             || v7[8] != 8
             || memcmp(&qword_140B3B520, *((const void **)v7 + 5), 8uLL)
             || *(_DWORD *)(v8 + 32) != 8
             || memcmp(&qword_140B3B498, *(const void **)(v8 + 40), 8uLL)) )
          {
LABEL_384:
            v9 = v300;
            Acl = -2147024891;
            v6 = 0LL;
            goto LABEL_19;
          }
          v322 = 0;
          Acl = 0;
          updated = QueryUpdateFileEaAllowedExt(&v322);
          if ( updated == -1073741637 || (Acl = updated, updated >= 0) && v322 != 1 )
          {
            if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x70000) == 0 )
              Acl = -2147024891;
          }
          if ( Acl >= 0 )
          {
            Acl = sub_1409FC424(P, v253, v254, v305, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
            if ( Acl >= 0 )
            {
              v9 = v300;
              goto LABEL_323;
            }
          }
        }
        goto LABEL_551;
      case 24:
        Acl = sub_1409FCADC(P, 0x140000000uLL, v230, v305, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v300;
        v6 = 0LL;
        goto LABEL_19;
      case 100:
        Acl = SPCallServerHandleUpdateLicense(P, v8, v230, v305, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v300;
        v6 = 0LL;
        goto LABEL_19;
      case 101:
        Acl = sub_1406F9FE8((__int64)P, v8, v230, (__int64)v305);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v300;
        v6 = 0LL;
        goto LABEL_19;
      case 102:
        v5 = 0LL;
        Acl = -1073741822;
        v6 = 0LL;
        goto LABEL_19;
      case 103:
        Acl = sub_140ABA6A0(P, v8, v230, v305, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v300;
        v6 = 0LL;
        goto LABEL_19;
      case 104:
        Acl = sub_140ABDF2C(P, v8, v230, v305, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v300;
        v6 = 0LL;
        goto LABEL_19;
      case 105:
        Acl = sub_1406F5DBC((__int64)P, v8, v230, (__int64)v305);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v300;
        v6 = 0LL;
        goto LABEL_19;
      case 106:
        Acl = sub_140AB8E18(P, v8, v230, v305, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v300;
        v6 = 0LL;
        goto LABEL_19;
      case 107:
        Acl = sub_1404D3618((__int64)P, v8, v230, (__int64)v305);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v300;
        v6 = 0LL;
        goto LABEL_19;
      case 109:
        Acl = sub_140A338CC(P, v8, v230, v305, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v300;
        v6 = 0LL;
        goto LABEL_19;
      case 110:
        Acl = sub_140AC11C4(P, v8, v230, v305, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v300;
        v6 = 0LL;
        goto LABEL_19;
      case 111:
        Acl = sub_1406F5B20((__int64)P, v8, v230, (__int64)v305);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v300;
        v6 = 0LL;
        goto LABEL_19;
      case 112:
        Acl = sub_140ABA258(P, v8, v230, v305, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v300;
        v6 = 0LL;
        goto LABEL_19;
      case 113:
        Acl = sub_140A3CE2C(P, v8, v230, v305, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v300;
        v6 = 0LL;
        goto LABEL_19;
      case 204:
        Acl = sub_140AC0280(P, v8, v230, v305, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v300;
        v6 = 0LL;
        goto LABEL_19;
      case 205:
        Acl = sub_140A57B94(P, v8, v230, v305, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v300;
        v6 = 0LL;
        goto LABEL_19;
      case 206:
        GrantedAccess[2] = 0;
        Acl = 0;
        v331 = 8LL;
        ZwQuerySystemInformation(103LL, (__int64)&v331);
        v281 = v7[4];
        if ( (_DWORD)v281 != 160
          || ((v282 = (const void *)*((_QWORD *)v7 + 3), memcmp(qword_140B3FDC0, v282, 0xA0uLL))
           || *(_DWORD *)(v8 + 16) != 160
           || memcmp(qword_140B40400, *(const void **)(v8 + 24), 0xA0uLL)
           || v7[8] != 8
           || memcmp(&qword_140B3B4F8, *((const void **)v7 + 5), 8uLL)
           || *(_DWORD *)(v8 + 32) != 8
           || memcmp(&qword_140B3B518, *(const void **)(v8 + 40), 8uLL))
          && (memcmp(qword_140B40220, v282, v281)
           || *(_DWORD *)(v8 + 16) != 160
           || memcmp(qword_140B400E0, *(const void **)(v8 + 24), 0xA0uLL)
           || v7[8] != 8
           || memcmp(&qword_140B3B4B0, *((const void **)v7 + 5), 8uLL)
           || *(_DWORD *)(v8 + 32) != 8
           || memcmp(&qword_140B3B4D8, *(const void **)(v8 + 40), 8uLL))
          && ((v283 = (const void *)*((_QWORD *)v7 + 3), memcmp(qword_140B3FB40, v283, v281))
           || *(_DWORD *)(v8 + 16) != 160
           || memcmp(qword_140B3FF00, *(const void **)(v8 + 24), 0xA0uLL)
           || v7[8] != 8
           || memcmp(&qword_140B3B4E0, *((const void **)v7 + 5), 8uLL)
           || *(_DWORD *)(v8 + 32) != 8
           || memcmp(&qword_140B3B510, *(const void **)(v8 + 40), 8uLL))
          && (memcmp(qword_140B3FA00, v283, v281)
           || *(_DWORD *)(v8 + 16) != 160
           || memcmp(qword_140B3FBE0, *(const void **)(v8 + 24), 0xA0uLL)
           || v7[8] != 8
           || memcmp(&qword_140B3B4F0, *((const void **)v7 + 5), 8uLL)
           || *(_DWORD *)(v8 + 32) != 8
           || memcmp(&qword_140B3B4D0, *(const void **)(v8 + 40), 8uLL)) )
        {
          Acl = -2147024891;
        }
        if ( Acl < 0 )
          goto LABEL_551;
        Acl = sub_1404B97B8((__int64)P, v8, v280, (__int64)v305);
        if ( Acl < 0 )
          goto LABEL_551;
        v9 = v300;
        goto LABEL_323;
      case 207:
        Acl = sub_140ABACD0(P, v8, v230, v305, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v300;
        v6 = 0LL;
        goto LABEL_19;
      case 208:
        Acl = SPCallServerHandleGetAppPolicyValue(P, v8, v230, v305, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v300;
        v6 = 0LL;
        goto LABEL_19;
      case 209:
        Acl = sub_140ABE510(P, v8, v230, v305, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v300;
        v6 = 0LL;
        goto LABEL_19;
      case 210:
        Acl = sub_1406F618C((__int64)P, v8, v230, (__int64)v305);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v300;
        v6 = 0LL;
        goto LABEL_19;
      case 211:
        Acl = sub_140AC28E8(P, v8, v230, v305, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
        if ( Acl >= 0 )
          goto LABEL_323;
        v5 = 0LL;
        v9 = v300;
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
        v263 = (unsigned int *)P[1];
        v264 = 0;
        break;
      default:
        Acl = sub_1406F5224((__int64)v233, (unsigned int *)v305);
        if ( Acl < 0 )
          goto LABEL_339;
        goto LABEL_323;
    }
    while ( 1 )
    {
      v265 = *v263;
      v266 = v263 + 1;
      if ( v264 >= 3 )
        break;
      if ( v266 < v263 )
        goto LABEL_329;
      v263 = (unsigned int *)((char *)v266 + v265);
      if ( (unsigned int *)((char *)v266 + v265) < v266 )
        goto LABEL_329;
      ++v264;
    }
    if ( v266 < v263 )
      goto LABEL_329;
    v267 = 0LL;
    if ( (_DWORD)v265 )
      v267 = (__int64 *)(v263 + 1);
    if ( (_DWORD)v265 != 8 )
    {
      v5 = 0LL;
      Acl = -1073741789;
      v6 = 0LL;
      goto LABEL_19;
    }
    v268 = *v267;
    if ( LODWORD(P[0]) <= 4 )
    {
      v5 = 0LL;
      Acl = -1073741811;
      v6 = 0LL;
      goto LABEL_19;
    }
    v269 = (unsigned int *)P[1];
    for ( k = 0; ; ++k )
    {
      v271 = *v269;
      v272 = v269 + 1;
      if ( k >= 4 )
        break;
      if ( v272 < v269 )
        goto LABEL_329;
      v269 = (unsigned int *)((char *)v272 + v271);
      if ( (unsigned int *)((char *)v272 + v271) < v272 )
        goto LABEL_329;
    }
    if ( v272 < v269 )
      goto LABEL_329;
    if ( !(_DWORD)v271 )
    {
      v5 = 0LL;
      Acl = -1073741762;
      v6 = 0LL;
      goto LABEL_19;
    }
    v273 = v269 + 1;
    v274 = (void *)ExAllocatePool2(0x100uLL);
    if ( !v274 )
    {
      v5 = 0LL;
      Acl = -1073741801;
      v6 = 0LL;
      goto LABEL_19;
    }
    memmove(v274, v273, v271);
    if ( (_DWORD)v271 != 4 )
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
    v275 = (unsigned int *)P[1];
    v276 = 0;
    v300 = v9;
    while ( 1 )
    {
      v277 = v275 + 1;
      v278 = v9;
      v279 = *v275;
      if ( v276 >= 5 )
        break;
      if ( v277 < v275 )
        goto LABEL_457;
      v275 = (unsigned int *)((char *)v277 + v279);
      v300 = v278;
      v9 = v278;
      if ( v275 < v277 )
        goto LABEL_329;
      ++v276;
    }
    if ( v277 < v275 )
    {
LABEL_457:
      v5 = 0LL;
      Acl = -1073741675;
      v9 = v300;
      v6 = 0LL;
      goto LABEL_19;
    }
    if ( !(_DWORD)v279 )
    {
      v5 = 0LL;
      v9 = v300;
      v6 = 0LL;
      Acl = -1073741762;
      goto LABEL_19;
    }
    v284 = v275 + 1;
    v285 = (void *)ExAllocatePool2(0x100uLL);
    if ( !v285 )
    {
      v5 = 0LL;
      v9 = v300;
      v6 = 0LL;
      Acl = -1073741801;
      goto LABEL_19;
    }
    memmove(v285, v284, v279);
    if ( (_DWORD)v279 != 8 )
    {
      Acl = -1073741306;
      goto LABEL_551;
    }
    v288 = guard_dispatch_icall_no_overrides(*v273, *v284, v286, v287);
    HIDWORD(v305[0]) = 20;
    v289 = (_DWORD *)ExAllocatePool2(0x100uLL);
    v9 = v300;
    if ( !v289 )
    {
      v5 = 0LL;
      Acl = -1073741801;
      v6 = 0LL;
      goto LABEL_19;
    }
    v5 = 0LL;
    v305[1] = v289;
    v290 = v288 | 0x10000000;
    LODWORD(v305[0]) = 0;
    if ( v289 + 1 < v289 )
    {
      Acl = -1073741675;
      v6 = 0LL;
      goto LABEL_19;
    }
    if ( v289 + 2 > (_DWORD *)((char *)v305[1] + HIDWORD(v305[0])) )
    {
      Acl = -1073741789;
      v6 = 0LL;
      goto LABEL_19;
    }
    *v289 = 4;
    v289[1] = v290;
    v291 = ++LODWORD(v305[0]);
    if ( v305[1] )
    {
      v292 = (unsigned __int64)v305[1];
      for ( m = 0; m < v291; ++m )
      {
        v294 = *(_DWORD *)v292 + 4;
        if ( *(_DWORD *)v292 >= 0xFFFFFFFC || v292 + v294 < v292 )
          goto LABEL_541;
        v292 += v294;
      }
      if ( v292 + 4 < v292 )
      {
LABEL_541:
        Acl = -1073741675;
        goto LABEL_542;
      }
      Acl = 0;
      if ( (PVOID)(v292 + 12) > (char *)v305[1] + HIDWORD(v305[0]) )
      {
        Acl = -1073741789;
      }
      else
      {
        *(_DWORD *)v292 = 8;
        *(_QWORD *)(v292 + 4) = v268;
        ++LODWORD(v305[0]);
      }
    }
    else
    {
      Acl = RtlUIntAdd(HIDWORD(v305[0]), 0xCu, (UINT *)v305 + 1);
      if ( Acl >= 0 )
      {
        ++LODWORD(v305[0]);
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
    v239 = __rdtsc();
    if ( HIDWORD(v305[0]) >= 0xFFFFFFF8
      || (v240 = (HIDWORD(v305[0]) + 15) & 0xFFFFFFF8, (unsigned int)v240 < HIDWORD(v305[0]) + 8) )
    {
LABEL_329:
      v5 = 0LL;
      Acl = -1073741675;
      v6 = 0LL;
      goto LABEL_19;
    }
    if ( !(_DWORD)v240 )
    {
      v5 = 0LL;
      Acl = -1073741762;
      v6 = 0LL;
      goto LABEL_19;
    }
    v241 = (unsigned __int8 *)ExAllocatePool2(0x100uLL);
    if ( !v241 )
    {
      v5 = 0LL;
      Acl = -1073741801;
      v6 = 0LL;
      goto LABEL_19;
    }
    v298 = v241;
    v303 = (unsigned int *)v8;
    v304 = v7;
    v301 = v9;
    *(_DWORD *)v241 = v305[0];
    if ( v241 + 4 < v241 || (*((_DWORD *)v241 + 1) = HIDWORD(v305[0]), v241 + 8 < v241 + 4) )
    {
      Acl = -1073741675;
      ExFreePoolWithTag(v241, 0);
      v5 = v311;
      v6 = 0LL;
      goto LABEL_19;
    }
    *(_QWORD *)&v241[v240 - 8] = v239;
    v5 = v241;
    memmove(v241 + 8, v305[1], HIDWORD(v305[0]));
    v207 = *(__int64 **)(v8 + 40);
    if ( v207 )
    {
      v208 = *(_DWORD *)(v8 + 32);
      if ( !v208 )
      {
        v6 = 0LL;
        Acl = -1073741811;
        goto LABEL_19;
      }
      v205 = *(unsigned __int8 **)(v8 + 24);
      v320 = v205;
      if ( !v205 )
      {
        v6 = 0LL;
        Acl = -1073741811;
        goto LABEL_19;
      }
      v209 = *(_DWORD *)(v8 + 16);
      if ( !v209 )
      {
        v6 = 0LL;
        Acl = -1073741811;
        goto LABEL_19;
      }
      v210 = (unsigned int)v240;
      v312 = (unsigned int)v240;
      if ( v208 == 8 && v209 == 160 )
      {
        v211 = *v207;
        v212 = 0LL;
        v307 = 0;
        v213 = 0;
        do
          v213 ^= v5[v212++];
        while ( v212 < v210 );
        v307 = v213;
        v122 = v210 + 8;
        v315 = v210 + 8;
        v328 = v205 + 128;
        v123 = ExAllocatePool2(0x100uLL);
        v317 = (char *)v123;
        v124 = (char *)v123;
        if ( v123 )
        {
          v125 = 0;
          v342 = v211;
          v126 = v5;
          v323 = (_BYTE *)v123;
          v311 = (unsigned __int8 *)(v312 & 7);
          v127 = (_BYTE *)v123;
          v308 = 0;
          v309 = 0;
          if ( (v312 & 7) != 0 )
          {
            v187 = 0;
            v188 = 0;
            v189 = 0;
            v308 = 0;
            v309 = 0;
            v190 = 56;
            v191 = v126;
            do
            {
              v192 = *v126++;
              if ( (unsigned int)v189 >= 4 )
                v187 |= v192 << v190;
              else
                v188 |= v192 << (v190 - 32);
              ++v189;
              v190 -= 8;
            }
            while ( v189 < (unsigned __int8)(v312 & 7) );
            v298 = v191;
            v309 = v188;
            v308 = v187;
            v193 = 16LL;
            v194 = v320 + 158;
            v195 = v320 + 126;
            v319 = 16LL;
            v196 = -1;
            v197 = 30LL;
            do
            {
              if ( v194[1] < 0x1Fu )
              {
                v198 = guard_dispatch_icall_no_overrides(v197 + 1, *(v195 - 2), *(v195 - 1), *v195);
                v193 = v319;
                v196 ^= v198;
              }
              if ( *v194 < 0x1Fu )
              {
                v199 = guard_dispatch_icall_no_overrides(v197, *(v195 - 6), *(v195 - 5), *(v195 - 4));
                v193 = v319;
                v125 ^= v199;
              }
              v197 -= 2LL;
              v194 -= 2;
              v195 -= 8;
              v319 = --v193;
            }
            while ( v193 );
            v125 ^= v309;
            v200 = v308 ^ v196;
            v201 = 0;
            v202 = (unsigned int)v311;
            v203 = v125;
            v127 = v323;
            v204 = v200;
            v205 = v320;
            v310 = v200;
            if ( (_DWORD)v311 )
            {
              do
              {
                if ( v201 >= 4 )
                {
                  v204 = (v204 << 8) | HIBYTE(v204);
                  v206 = v204;
                }
                else
                {
                  v203 = (v203 << 8) | HIBYTE(v203);
                  v206 = v203;
                }
                ++v201;
                *v127++ = v206;
              }
              while ( (int)v201 < (int)v202 );
              v200 = v310;
              v205 = v320;
            }
            if ( v202 <= 4 )
            {
              v310 = 0;
              if ( v202 < 4 )
                v125 = v125 >> (8 * (4 - v202)) << (8 * (4 - v202));
            }
            else
            {
              v310 = v200 >> (8 * (8 - v202)) << (8 * (8 - v202));
            }
            v124 = v317;
            v122 = v315;
          }
          v128 = v312;
          v313 = v312 >> 3;
          if ( v312 >> 3 )
          {
            v129 = v205 + 2;
            v323 = v205 + 2;
            v130 = v126 + 2;
            v316 = v127 + 7;
            do
            {
              v131 = v129;
              v132 = v328;
              v133 = v130[3] | (v130[2] << 8);
              v314 = v130[1] | ((*v130 | ((*(v130 - 1) | (*(v130 - 2) << 8)) << 8)) << 8);
              v134 = v314 ^ v125;
              v135 = v130[5] | ((v130[4] | (v133 << 8)) << 8);
              v311 = v130 + 8;
              v136 = v135 ^ v310;
              v318 = v135;
              v137 = 0LL;
              v138 = 16LL;
              do
              {
                v139 = *v132;
                if ( (unsigned __int8)v139 < 0x1Fu )
                {
                  v140 = (__int64 (__fastcall *)(unsigned __int64, __int64, unsigned __int64, unsigned __int64, int, __int64, unsigned int))off_140FD74B0[v139];
                  v141 = v131[1];
                  v142 = *v131;
                  v143 = *(v131 - 1);
                  v144 = *(v131 - 2);
                  if ( (char *)v140 == (char *)sub_140973AD0 )
                  {
                    v145 = sub_140973AD0(v137, v144, v143, v142, v141, (__int64)&v342, v136);
                  }
                  else if ( (char *)v140 == (char *)sub_140973A40 )
                  {
                    v145 = sub_140973A40(v137, v144, v143, v142, v141, (__int64)&v342, v136);
                  }
                  else if ( v140 == sub_140973850 )
                  {
                    v145 = sub_140973850(v137, v144, v143, v142, v141, (__int64)&v342, v136);
                  }
                  else
                  {
                    v145 = guard_dispatch_icall_no_overrides(v137, v144, v143, v142);
                  }
                  v134 ^= v145;
                }
                v146 = v132[1];
                if ( (unsigned __int8)v146 < 0x1Fu )
                {
                  v147 = (__int64 (__fastcall *)(unsigned __int64, __int64, unsigned __int64, unsigned __int64, int, __int64, unsigned int))off_140FD74B0[v146];
                  v148 = v131[5];
                  v149 = v131[4];
                  v150 = v131[3];
                  v151 = v131[2];
                  if ( (char *)v147 == (char *)sub_140973BB0 )
                  {
                    v152 = sub_140973BB0((unsigned __int8)v137 + 1, v151, v150, v149, v148, (__int64)&v342, v134);
                  }
                  else if ( (char *)v147 == (char *)sub_140973A10 )
                  {
                    v152 = sub_140973A10(v137 + 1, v151, v150, v149, v148, (__int64)&v342, v134);
                  }
                  else if ( v147 == sub_140973930 )
                  {
                    v152 = sub_140973930(v137 + 1, v151, v150, v149, v148, (__int64)&v342, v134);
                  }
                  else
                  {
                    v152 = guard_dispatch_icall_no_overrides(v137 + 1, v151, v150, v149);
                  }
                  v136 ^= v152;
                }
                v137 += 2LL;
                v132 += 2;
                v131 += 8;
                --v138;
              }
              while ( v138 );
              v153 = v342;
              v154 = HIDWORD(v342);
              v155 = (HIWORD(v342) * ((unsigned __int16)v342 + __ROR4__(~v136, 5))) ^ v134;
              v156 = (v155 >> 10) ^ (WORD1(v342) * (v155 ^ HIWORD(v342))) ^ v136;
              v157 = __ROR4__(v156, 10) ^ (WORD2(v342) * __ROR4__(v342 ^ v156, 12)) ^ v155;
              v158 = (HIWORD(v342) * __ROR4__(v157 - v342, 14) - __ROR4__(v157, 24)) ^ v156;
              v159 = (__ROR4__(v158, 30) + (unsigned __int16)v342 * __ROR4__(v158 + HIDWORD(v342), 15)) ^ v157;
              v160 = (WORD1(v342) * (v159 ^ WORD2(v342))) ^ __ROR4__(v159, 6) ^ v158;
              v161 = (HIDWORD(v342) - (v342 ^ v160)) ^ v159;
              v162 = (HIWORD(v342) * __ROR4__(v161 ^ WORD1(v342), 26) - __ROR4__(v161, 30)) ^ v160;
              v163 = ((unsigned __int16)v342 * (v162 - WORD2(v342)) - (v162 >> 13)) ^ v161;
              v164 = (WORD1(v342) * __ROR4__(v163 + HIDWORD(v342), 9) - __ROR4__(v163, 30)) ^ v162;
              v165 = v316;
              v166 = v318;
              v167 = (__ROR4__(v164, 22) + WORD2(v342) * __ROR4__(v164 - v342, 27)) ^ v163;
              v168 = v167 ^ v164;
              v125 = v309 ^ v167;
              *((char *)v316 - 4) = v125;
              v169 = v308 ^ v153 ^ v154 ^ v168;
              *v165 = v169;
              *(v165 - 5) = (unsigned __int64)v125 >> 8;
              *(v165 - 1) = BYTE1(v169);
              v130 = v311;
              *(v165 - 6) = (unsigned __int16)((unsigned __int64)v125 >> 8) >> 8;
              v129 = v323;
              *(v165 - 2) = (unsigned __int16)(v169 >> 8) >> 8;
              *(v165 - 7) = __ROR4__(
                              ((((unsigned __int64)v125 >> 8) | (v125 << 24)) >> 8) | ((((unsigned __int64)v125 >> 8) | (v125 << 24)) << 24),
                              8);
              *(v165 - 3) = __ROR4__((((v169 >> 8) | (v169 << 24)) >> 8) | (((v169 >> 8) | (v169 << 24)) << 24), 8);
              v83 = v313-- == 1;
              v310 = v169;
              v309 = v314;
              v308 = v166;
              v316 = v165 + 8;
            }
            while ( !v83 );
            v128 = v312;
            v124 = v317;
            v122 = v315;
          }
          Acl = 0;
          *(_QWORD *)&v124[v128] = v307;
          if ( v122 )
          {
            v170 = (void *)ExAllocatePool2(0x100uLL);
            v171 = v170;
            if ( v170 )
            {
              memmove(v170, v124, v122);
              *((_QWORD *)v303 + 1) = v171;
              *v303 = v122;
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
          v5 = v298;
          v9 = v301;
          v8 = (__int64)v303;
          ExFreePoolWithTag(v124, 0);
          v7 = v304;
          if ( Acl >= 0 )
          {
            v172 = v303 + 8;
            v173 = v303 + 4;
            v174 = v303[4];
            if ( *v303 >= 0xFFFFFFFC
              || (v175 = *v303 + 8, v175 < *v303 + 4)
              || (v176 = v175 + v174, v175 + v174 < v175)
              || (v177 = v176 + 4, v176 + 4 < v176)
              || (v178 = v177 + v303[8], v178 < v177) )
            {
              v6 = 0LL;
              Acl = -1073741675;
              v9 = v301;
              goto LABEL_19;
            }
            v311 = v298;
            if ( v178 )
            {
              v179 = (_DWORD *)ExAllocatePool2(0x100uLL);
              if ( v179 )
              {
                v180 = (char *)v179;
                v302 = (char *)v179;
                v181 = v179 + 1;
                *v179 = *v303;
                if ( v180 + 4 < v180 )
                {
                  v9 = v301;
                  v8 = (__int64)v303;
                  v5 = v311;
                }
                else
                {
                  v8 = (__int64)v303;
                  memmove(v179 + 1, *((const void **)v303 + 1), *v303);
                  v182 = (_DWORD *)((char *)v181 + *v303);
                  if ( v182 < v181
                    || (v183 = v182 + 1, *v182 = *v173, v182 + 1 < v182)
                    || (memmove(v182 + 1, *((const void **)v303 + 3), (unsigned int)*v173),
                        v184 = (_DWORD *)((char *)v183 + (unsigned int)*v173),
                        v184 < v183)
                    || (v185 = v184 + 1, *v184 = *v172, v184 + 1 < v184) )
                  {
                    v180 = v302;
                    v5 = v298;
                    v9 = v301;
                  }
                  else
                  {
                    memmove(v184 + 1, *((const void **)v303 + 5), (unsigned int)*v172);
                    v186 = (unsigned int)*v172;
                    v9 = v301;
                    v5 = v298;
                    if ( (_DWORD *)((char *)v185 + v186) >= v185 )
                    {
                      Acl = 0;
                      *v333 = v302;
                      v6 = 0LL;
                      *v334 = v178;
                      goto LABEL_19;
                    }
                    v180 = v302;
                  }
                }
                Acl = -1073741675;
                ExFreePoolWithTag(v180, 0);
                v6 = v332;
                goto LABEL_19;
              }
              v5 = v298;
              v9 = v301;
              v8 = (__int64)v303;
              Acl = -1073741801;
              v6 = 0LL;
            }
            else
            {
              v6 = 0LL;
              v8 = (__int64)v303;
              v5 = v298;
              Acl = -1073741762;
              v9 = v301;
            }
            goto LABEL_19;
          }
LABEL_217:
          v6 = 0LL;
          goto LABEL_19;
        }
        v7 = v304;
        v8 = (__int64)v303;
      }
      v6 = 0LL;
      Acl = -1073741823;
      goto LABEL_19;
    }
    Acl = -1073741811;
    goto LABEL_217;
  }
  Acl = SPCallServerHandleQueryPolicy(P, v8, (unsigned int)v317, v305, *(_QWORD *)PreviouslyGrantedAccess, Privileges);
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
  v305[0] = 0LL;
  if ( v305[1] )
  {
    ExFreePoolWithTag(v305[1], 0);
    v305[1] = 0LL;
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
