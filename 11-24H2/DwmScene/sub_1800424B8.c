/*
 * XREFs of sub_1800424B8 @ 0x1800424B8
 * Callers:
 *     sub_180075220 @ 0x180075220 (sub_180075220.c)
 *     sub_180076DD0 @ 0x180076DD0 (sub_180076DD0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_180042074 @ 0x180042074 (sub_180042074.c)
 *     sub_180042348 @ 0x180042348 (sub_180042348.c)
 *     sub_180042490 @ 0x180042490 (sub_180042490.c)
 *     sub_18004C380 @ 0x18004C380 (sub_18004C380.c)
 *     sub_18005C2CC @ 0x18005C2CC (sub_18005C2CC.c)
 *     sub_1800796F0 @ 0x1800796F0 (sub_1800796F0.c)
 *     sub_1800797BC @ 0x1800797BC (sub_1800797BC.c)
 *     sub_180079E2C @ 0x180079E2C (sub_180079E2C.c)
 *     sub_18007A394 @ 0x18007A394 (sub_18007A394.c)
 *     sub_18007A9C4 @ 0x18007A9C4 (sub_18007A9C4.c)
 */

// Hidden C++ exception states: #wind=46
__int64 __fastcall sub_1800424B8(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // r13
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // r12
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // r15
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // r14
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rbx
  __int64 v60; // rdi
  _QWORD *v61; // rax
  __int64 v62; // r8
  __int64 v63; // rsi
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // r8
  __int64 v81; // rbx
  __int64 v82; // rax
  __int64 v83; // rbx
  __int64 v84; // rax
  __int64 v85; // rbx
  __int64 v86; // rax
  __int64 v87; // rbx
  __int64 v88; // rax
  __int64 v89; // rbx
  __int64 v90; // rax
  __int64 v91; // rbx
  __int64 v92; // rax
  __int64 v93; // rbx
  __int64 v94; // rax
  _QWORD *v95; // rax
  __int64 v96; // r8
  __int64 v97; // rbx
  __int64 v98; // rax
  _QWORD *v99; // rax
  __int64 v100; // r8
  __int64 result; // rax
  __int64 v102; // rcx
  _QWORD v103[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v104; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v105; // [rsp+40h] [rbp-C8h]
  _BYTE v106[32]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int16 v107; // [rsp+68h] [rbp-A0h]
  _BYTE v108[32]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v109[32]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v110[32]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v111[2]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v112; // [rsp+E0h] [rbp-28h]
  __int64 v113; // [rsp+E8h] [rbp-20h]
  _BYTE v114[32]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v115[32]; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v116[32]; // [rsp+130h] [rbp+28h] BYREF
  _BYTE v117[40]; // [rsp+150h] [rbp+48h] BYREF
  _BYTE v118[64]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v119[64]; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v120[64]; // [rsp+1F8h] [rbp+F0h] BYREF
  _BYTE v121[64]; // [rsp+238h] [rbp+130h] BYREF
  _BYTE v122[64]; // [rsp+278h] [rbp+170h] BYREF
  _BYTE v123[64]; // [rsp+2B8h] [rbp+1B0h] BYREF
  _BYTE v124[64]; // [rsp+2F8h] [rbp+1F0h] BYREF
  _BYTE v125[64]; // [rsp+338h] [rbp+230h] BYREF
  _BYTE v126[64]; // [rsp+378h] [rbp+270h] BYREF
  _BYTE v127[64]; // [rsp+3B8h] [rbp+2B0h] BYREF
  _BYTE v128[64]; // [rsp+3F8h] [rbp+2F0h] BYREF
  _BYTE v129[64]; // [rsp+438h] [rbp+330h] BYREF
  _BYTE v130[64]; // [rsp+478h] [rbp+370h] BYREF
  _BYTE v131[64]; // [rsp+4B8h] [rbp+3B0h] BYREF
  _BYTE v132[64]; // [rsp+4F8h] [rbp+3F0h] BYREF
  _BYTE v133[64]; // [rsp+538h] [rbp+430h] BYREF
  _BYTE v134[64]; // [rsp+578h] [rbp+470h] BYREF
  _BYTE v135[64]; // [rsp+5B8h] [rbp+4B0h] BYREF
  _BYTE v136[64]; // [rsp+5F8h] [rbp+4F0h] BYREF
  _BYTE v137[64]; // [rsp+638h] [rbp+530h] BYREF
  _BYTE v138[64]; // [rsp+678h] [rbp+570h] BYREF
  _BYTE v139[64]; // [rsp+6B8h] [rbp+5B0h] BYREF
  _BYTE v140[64]; // [rsp+6F8h] [rbp+5F0h] BYREF
  _BYTE v141[64]; // [rsp+738h] [rbp+630h] BYREF
  _BYTE v142[64]; // [rsp+778h] [rbp+670h] BYREF
  _BYTE v143[64]; // [rsp+7B8h] [rbp+6B0h] BYREF
  _BYTE v144[64]; // [rsp+7F8h] [rbp+6F0h] BYREF
  _BYTE v145[64]; // [rsp+838h] [rbp+730h] BYREF
  _BYTE v146[64]; // [rsp+878h] [rbp+770h] BYREF
  _BYTE v147[64]; // [rsp+8B8h] [rbp+7B0h] BYREF
  _BYTE v148[64]; // [rsp+8F8h] [rbp+7F0h] BYREF
  _BYTE v149[64]; // [rsp+938h] [rbp+830h] BYREF
  _BYTE v150[64]; // [rsp+978h] [rbp+870h] BYREF
  _BYTE v151[64]; // [rsp+9B8h] [rbp+8B0h] BYREF
  _BYTE v152[64]; // [rsp+9F8h] [rbp+8F0h] BYREF
  _BYTE v153[64]; // [rsp+A38h] [rbp+930h] BYREF
  _BYTE v154[64]; // [rsp+A78h] [rbp+970h] BYREF
  _BYTE v155[64]; // [rsp+AB8h] [rbp+9B0h] BYREF
  _BYTE v156[64]; // [rsp+AF8h] [rbp+9F0h] BYREF
  _BYTE v157[64]; // [rsp+B38h] [rbp+A30h] BYREF
  _BYTE v158[64]; // [rsp+B78h] [rbp+A70h] BYREF
  _BYTE v159[64]; // [rsp+BB8h] [rbp+AB0h] BYREF

  v112 = a2;
  v111[0] = a1;
  v113 = a2;
  sub_18004C380(a1, &v104, 6LL);
  v2 = sub_180017054((__int64)v108, (__int64)&unk_1801C8458);
  sub_180042074((__int64)v126, v2, 2);
  v3 = sub_180017054((__int64)v109, (__int64)&unk_1801C83F8);
  sub_180042074((__int64)v127, v3, 2);
  v4 = sub_180017054((__int64)v108, (__int64)&unk_1801C8438);
  sub_180042348((__int64)v128, v4, v5, 1.0);
  v6 = sub_180017054((__int64)v109, (__int64)&unk_1801C8418);
  sub_180042074((__int64)v129, v6, 2);
  v7 = sub_180017054((__int64)v108, (__int64)&unk_1801C85B8);
  sub_180042074((__int64)v130, v7, 5);
  v8 = sub_180017054((__int64)v109, (__int64)&unk_1801C8298);
  sub_180042074((__int64)v131, v8, 5);
  v9 = sub_180017054((__int64)v108, (__int64)&unk_1801C82B8);
  sub_180042074((__int64)v132, v9, 5);
  v10 = sub_180017054((__int64)v109, (__int64)&unk_1801C82D8);
  sub_180042074((__int64)v133, v10, 5);
  v11 = sub_180017054((__int64)v108, (__int64)&unk_1801C82F8);
  sub_180042074((__int64)v134, v11, 5);
  v12 = sub_180017054((__int64)v109, (__int64)&unk_1801C8318);
  sub_180042074((__int64)v135, v12, 5);
  v13 = sub_180017054((__int64)v108, (__int64)&unk_1801C8898);
  sub_180042074((__int64)v136, v13, 5);
  v14 = sub_180017054((__int64)v109, (__int64)&unk_1801C88B8);
  sub_180042074((__int64)v137, v14, 5);
  v15 = sub_180017054((__int64)v108, (__int64)&unk_1801C88D8);
  sub_180042074((__int64)v138, v15, 6);
  v16 = sub_180017054((__int64)v109, (__int64)&unk_1801C83B8);
  sub_180042074((__int64)v139, v16, 2);
  v17 = sub_180017054((__int64)v108, (__int64)&unk_1801C83D8);
  sub_180042348((__int64)v140, v17, v18, 1.0);
  v19 = sub_180017054((__int64)v109, (__int64)&unk_1801C8478);
  sub_180042074((__int64)v141, v19, 2);
  v20 = sub_180017054((__int64)v108, (__int64)&unk_1801C8498);
  sub_180042074((__int64)v142, v20, 2);
  v21 = sub_180017054((__int64)v109, (__int64)&unk_1801C8518);
  sub_180042074((__int64)v143, v21, 2);
  v22 = sub_180017054((__int64)v108, (__int64)&unk_1801C8538);
  sub_180042074((__int64)v144, v22, 2);
  v23 = sub_180017054((__int64)v109, (__int64)&unk_1801C8558);
  sub_180042074((__int64)v145, v23, 2);
  v24 = sub_180017054((__int64)v108, (__int64)&unk_1801C8578);
  sub_180042074((__int64)v146, v24, 2);
  v25 = sub_180017054((__int64)v109, (__int64)&unk_1801C8598);
  sub_180042074((__int64)v147, v25, 2);
  v26 = sub_180017054((__int64)v108, (__int64)&unk_1801C84B8);
  sub_180042074((__int64)v148, v26, 2);
  v27 = sub_180017054((__int64)v109, (__int64)&unk_1801C84D8);
  sub_180042074((__int64)v149, v27, 2);
  v28 = sub_180017054((__int64)v108, (__int64)&unk_1801C84F8);
  sub_180042074((__int64)v150, v28, 2);
  v29 = sub_180017054((__int64)v109, (__int64)&unk_1801C8338);
  sub_180042348((__int64)v151, v29, v30, 2.0);
  v31 = sub_180017054((__int64)v108, (__int64)&unk_1801C8358);
  sub_180042348((__int64)v152, v31, v32, 1.0);
  v33 = sub_180017054((__int64)v109, (__int64)&unk_1801C8378);
  sub_180042348((__int64)v153, v33, v34, 1.0);
  v35 = sub_180017054((__int64)v108, (__int64)&unk_1801C8398);
  sub_180042348((__int64)v154, v35, v36, 1.0);
  sub_1800796F0(v104, v126, 29LL, 1LL);
  v37 = v104;
  v38 = sub_180017054((__int64)v109, (__int64)&unk_1801C87D8);
  sub_180042074((__int64)v119, v38, 8);
  v107 = sub_1800797BC(v37, v119, 1LL);
  sub_180042490((__int64)v119);
  v39 = v104;
  v40 = sub_180017054((__int64)v108, (__int64)&unk_1801C87F8);
  sub_180042074((__int64)v120, v40, 8);
  v41 = (unsigned __int16)sub_1800797BC(v39, v120, 1LL);
  sub_180042490((__int64)v120);
  v42 = v104;
  v43 = sub_180017054((__int64)v114, (__int64)&unk_1801C8818);
  sub_180042074((__int64)v121, v43, 8);
  v44 = (unsigned __int16)sub_1800797BC(v42, v121, 1LL);
  sub_180042490((__int64)v121);
  v45 = v104;
  v46 = sub_180017054((__int64)v115, (__int64)&unk_1801C8838);
  sub_180042074((__int64)v122, v46, 8);
  v47 = (unsigned __int16)sub_1800797BC(v45, v122, 1LL);
  sub_180042490((__int64)v122);
  v48 = v104;
  v49 = sub_180017054((__int64)v116, (__int64)&unk_1801C8858);
  sub_180042074((__int64)v123, v49, 8);
  v50 = (unsigned __int16)sub_1800797BC(v48, v123, 1LL);
  sub_180042490((__int64)v123);
  v51 = v104;
  v52 = sub_180017054((__int64)v117, (__int64)&unk_1801C8878);
  sub_180042074((__int64)v124, v52, 8);
  v53 = (unsigned __int16)sub_1800797BC(v51, v124, 1LL);
  sub_180042490((__int64)v124);
  v54 = v104;
  v55 = sub_180017054((__int64)v110, (__int64)&unk_1801C88F8);
  sub_180042074((__int64)v125, v55, 8);
  v56 = (unsigned __int16)sub_1800797BC(v54, v125, 1LL);
  sub_180042490((__int64)v125);
  v57 = v104;
  v58 = sub_180017054((__int64)v106, (__int64)&unk_1801C8938);
  sub_180042074((__int64)v118, v58, 8);
  v59 = (unsigned __int16)sub_1800797BC(v57, v118, 1LL);
  sub_180042490((__int64)v118);
  *(_DWORD *)(*(_QWORD *)(v104 + 104)
            + 40LL
            * *(unsigned int *)(*(_QWORD *)(v104 + 56) + 56LL * *(unsigned __int16 *)(v104 + 2LL * v107 + 128) + 40)
            + 32) = 5;
  *(_DWORD *)(*(_QWORD *)(v104 + 104)
            + 40LL * *(unsigned int *)(*(_QWORD *)(v104 + 56) + 56LL * *(unsigned __int16 *)(v104 + 2 * v41 + 128) + 40)
            + 32) = 6;
  *(_DWORD *)(*(_QWORD *)(v104 + 104)
            + 40LL * *(unsigned int *)(*(_QWORD *)(v104 + 56) + 56LL * *(unsigned __int16 *)(v104 + 2 * v44 + 128) + 40)
            + 32) = 7;
  *(_DWORD *)(*(_QWORD *)(v104 + 104)
            + 40LL * *(unsigned int *)(*(_QWORD *)(v104 + 56) + 56LL * *(unsigned __int16 *)(v104 + 2 * v47 + 128) + 40)
            + 32) = 13;
  *(_DWORD *)(*(_QWORD *)(v104 + 104)
            + 40LL * *(unsigned int *)(*(_QWORD *)(v104 + 56) + 56LL * *(unsigned __int16 *)(v104 + 2 * v50 + 128) + 40)
            + 32) = 14;
  *(_DWORD *)(*(_QWORD *)(v104 + 104)
            + 40LL * *(unsigned int *)(*(_QWORD *)(v104 + 56) + 56LL * *(unsigned __int16 *)(v104 + 2 * v53 + 128) + 40)
            + 32) = 15;
  *(_DWORD *)(*(_QWORD *)(v104 + 104)
            + 40LL * *(unsigned int *)(*(_QWORD *)(v104 + 56) + 56LL * *(unsigned __int16 *)(v104 + 2 * v59 + 128) + 40)
            + 32) = 8;
  *(_DWORD *)(*(_QWORD *)(v104 + 104)
            + 40LL * *(unsigned int *)(*(_QWORD *)(v104 + 56) + 56LL * *(unsigned __int16 *)(v104 + 2 * v56 + 128) + 40)
            + 32) = 11;
  sub_180079E2C(v104);
  v60 = v112;
  v61 = unknown_libname_81(v103, &v104);
  sub_18005C2CC(v62, v61);
  sub_18000B6A4((__int64)v126, 64LL, 29LL, (void (__fastcall *)(__int64))sub_180042490);
  if ( v105 )
    sub_18001060C(v105);
  v63 = v111[0];
  sub_18004C380(v111[0], &v104, 5LL);
  v64 = sub_180017054((__int64)v106, (__int64)&unk_1801C85D8);
  sub_180042074((__int64)v126, v64, 1);
  v65 = sub_180017054((__int64)v110, (__int64)&unk_1801C85F8);
  sub_180042074((__int64)v127, v65, 1);
  v66 = sub_180017054((__int64)v106, (__int64)&unk_1801C8618);
  sub_180042074((__int64)v128, v66, 0);
  v67 = sub_180017054((__int64)v110, (__int64)&unk_1801C8638);
  sub_180042074((__int64)v129, v67, 0);
  v68 = sub_180017054((__int64)v106, (__int64)&unk_1801C8658);
  sub_180042074((__int64)v130, v68, 0);
  v69 = sub_180017054((__int64)v110, (__int64)&unk_1801C8678);
  sub_180042074((__int64)v131, v69, 0);
  v70 = sub_180017054((__int64)v106, (__int64)&unk_1801C8698);
  sub_180042074((__int64)v132, v70, 0);
  v71 = sub_180017054((__int64)v110, (__int64)&unk_1801C86B8);
  sub_180042074((__int64)v133, v71, 0);
  v72 = sub_180017054((__int64)v106, (__int64)&unk_1801C86D8);
  sub_180042074((__int64)v134, v72, 0);
  v73 = sub_180017054((__int64)v110, (__int64)&unk_1801C8798);
  sub_180042074((__int64)v135, v73, 0);
  sub_1800796F0(v104, v126, 10LL, 1LL);
  sub_18007A394(v104, 16LL);
  v74 = sub_180017054((__int64)v106, (__int64)&unk_1801C86F8);
  sub_180042074((__int64)v155, v74, 5);
  v75 = sub_180017054((__int64)v110, (__int64)&unk_1801C8718);
  sub_180042074((__int64)v156, v75, 5);
  v76 = sub_180017054((__int64)v106, (__int64)&unk_1801C8738);
  sub_180042074((__int64)v157, v76, 5);
  v77 = sub_180017054((__int64)v110, (__int64)&unk_1801C8758);
  sub_180042074((__int64)v158, v77, 5);
  v78 = sub_180017054((__int64)v106, (__int64)&unk_1801C8778);
  sub_180042074((__int64)v159, v78, 5);
  sub_1800796F0(v104, v155, 5LL, 1LL);
  sub_180079E2C(v104);
  v79 = unknown_libname_81(v103, &v104);
  sub_18005C2CC(v80, v79);
  sub_18000B6A4((__int64)v155, 64LL, 5LL, (void (__fastcall *)(__int64))sub_180042490);
  sub_18000B6A4((__int64)v126, 64LL, 10LL, (void (__fastcall *)(__int64))sub_180042490);
  if ( v105 )
    sub_18001060C(v105);
  sub_18004C380(v63, &v104, 4LL);
  v81 = v104;
  v82 = sub_180017054((__int64)v106, (__int64)&unk_1801C8958);
  sub_180042074((__int64)v118, v82, 7);
  sub_1800797BC(v81, v118, 1LL);
  sub_180042490((__int64)v118);
  v83 = v104;
  v84 = sub_180017054((__int64)v106, (__int64)&unk_1801C8978);
  sub_180042074((__int64)v118, v84, 5);
  sub_1800797BC(v83, v118, 1LL);
  sub_180042490((__int64)v118);
  v85 = v104;
  v86 = sub_180017054((__int64)v106, (__int64)&unk_1801C8998);
  sub_180042074((__int64)v118, v86, 7);
  sub_1800797BC(v85, v118, 1LL);
  sub_180042490((__int64)v118);
  v87 = v104;
  v88 = sub_180017054((__int64)v106, (__int64)&unk_1801C89B8);
  sub_180042074((__int64)v118, v88, 5);
  sub_1800797BC(v87, v118, 1LL);
  sub_180042490((__int64)v118);
  v89 = v104;
  v90 = sub_180017054((__int64)v106, (__int64)&unk_1801C89D8);
  sub_180042074((__int64)v118, v90, 2);
  sub_1800797BC(v89, v118, 1LL);
  sub_180042490((__int64)v118);
  v91 = v104;
  v92 = sub_180017054((__int64)v106, (__int64)&unk_1801C89F8);
  sub_180042074((__int64)v118, v92, 8);
  sub_1800797BC(v91, v118, 1LL);
  sub_180042490((__int64)v118);
  sub_18007A9C4(v104, &unk_1801C89F8, 9LL);
  v93 = v104;
  v94 = sub_180017054((__int64)v106, (__int64)&unk_1801C8A18);
  sub_180042074((__int64)v118, v94, 8);
  sub_1800797BC(v93, v118, 1LL);
  sub_180042490((__int64)v118);
  sub_18007A9C4(v104, &unk_1801C8A18, 10LL);
  sub_180079E2C(v104);
  v95 = unknown_libname_81(v111, &v104);
  sub_18005C2CC(v96, v95);
  if ( v105 )
    sub_18001060C(v105);
  sub_18004C380(v63, &v104, 1LL);
  v97 = v104;
  v98 = sub_180017054((__int64)v106, (__int64)&unk_1801C87B8);
  sub_180042074((__int64)v118, v98, 2);
  sub_1800797BC(v97, v118, 1LL);
  sub_180042490((__int64)v118);
  sub_180079E2C(v104);
  v99 = unknown_libname_81(v111, &v104);
  result = sub_18005C2CC(v100, v99);
  if ( v105 )
    result = sub_18001060C(v105);
  v102 = *(_QWORD *)(v60 + 8);
  if ( v102 )
    return sub_18001060C(v102);
  return result;
}
