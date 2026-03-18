/*
 * XREFs of ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800129B0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?PushConstant@CExpressionValueStack@@QEAAJM@Z @ 0x18000C810 (-PushConstant@CExpressionValueStack@@QEAAJM@Z.c)
 *     ?AddAndSet@?$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z @ 0x18000D670 (-AddAndSet@-$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x1800EB510 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x1800EBD58 (-Scale@CExpressionValueStack@@QEAAJXZ.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x1801274EC (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18012ADD4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Lerp@CExpressionValueStack@@QEAAJXZ @ 0x18015A898 (-Lerp@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix3x2FromScale@CExpressionValueStack@@QEAAJI@Z @ 0x18015AA24 (-Matrix3x2FromScale@CExpressionValueStack@@QEAAJI@Z.c)
 *     ?ColorHsl@CExpressionValueStack@@QEAAJXZ @ 0x18015ABB4 (-ColorHsl@CExpressionValueStack@@QEAAJXZ.c)
 *     ?D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18015AEA8 (-D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z @ 0x18015AFA8 (-D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z.c)
 *     ?D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z @ 0x18015B0EC (-D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z.c)
 *     ?Min@CExpressionValueStack@@QEAAJXZ @ 0x18015B244 (-Min@CExpressionValueStack@@QEAAJXZ.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015B3A0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x18015B40C (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z @ 0x18015BDE0 (-D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x18015C07C (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?ColorLerpHsl@CExpressionValueStack@@QEAAJXZ @ 0x18017C7E8 (-ColorLerpHsl@CExpressionValueStack@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Matrix3x2FromTranslation@CExpressionValueStack@@QEAAJI@Z @ 0x1801CDF60 (-Matrix3x2FromTranslation@CExpressionValueStack@@QEAAJI@Z.c)
 *     ?Divide@CExpressionValueStack@@QEAAJXZ @ 0x1801CE150 (-Divide@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Subtract@CExpressionValueStack@@QEAAJXZ @ 0x1801D2190 (-Subtract@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Negate@CExpressionValueStack@@QEAAJXZ @ 0x1801D581C (-Negate@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Add@CExpressionValueStack@@QEAAJXZ @ 0x1801D5B80 (-Add@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix4x4@CExpressionValueStack@@QEAAJXZ @ 0x1801D6A5C (-Matrix4x4@CExpressionValueStack@@QEAAJXZ.c)
 *     ?LessThan@CExpressionValueStack@@QEAAJXZ @ 0x1801DB580 (-LessThan@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix4x4FromTranslation@CExpressionValueStack@@QEAAJI@Z @ 0x1801DFD78 (-Matrix4x4FromTranslation@CExpressionValueStack@@QEAAJI@Z.c)
 *     ?GreaterThan@CExpressionValueStack@@QEAAJXZ @ 0x1801E02E4 (-GreaterThan@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Vector3@CExpressionValueStack@@QEAAJXZ @ 0x1801E2BB8 (-Vector3@CExpressionValueStack@@QEAAJXZ.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z @ 0x1801E45A4 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z.c)
 *     ?ColorRgb@CExpressionValueStack@@QEAAJXZ @ 0x1801E9E40 (-ColorRgb@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Round@CExpressionValueStack@@QEAAJXZ @ 0x1801EB0E8 (-Round@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Transform@CExpressionValueStack@@QEAAJXZ @ 0x1801ED3A8 (-Transform@CExpressionValueStack@@QEAAJXZ.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1801EF690 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?And@CExpressionValueStack@@QEAAJXZ @ 0x1801F0180 (-And@CExpressionValueStack@@QEAAJXZ.c)
 *     ?GreaterThanEquals@CExpressionValueStack@@QEAAJXZ @ 0x1801F0458 (-GreaterThanEquals@CExpressionValueStack@@QEAAJXZ.c)
 *     ?LessThanEquals@CExpressionValueStack@@QEAAJXZ @ 0x1801F0990 (-LessThanEquals@CExpressionValueStack@@QEAAJXZ.c)
 *     ?QuaternionFromLerp@CExpressionValueStack@@QEAAJXZ @ 0x1801F2FBC (-QuaternionFromLerp@CExpressionValueStack@@QEAAJXZ.c)
 *     ?D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z @ 0x1801F6734 (-D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z.c)
 *     ?Equals@CExpressionValueStack@@QEAAJXZ @ 0x1801F9C1C (-Equals@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Clamp@CExpressionValueStack@@QEAAJXZ @ 0x1801FCB60 (-Clamp@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Max@CExpressionValueStack@@QEAAJXZ @ 0x1801FFF54 (-Max@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix4x4FromScale@CExpressionValueStack@@QEAAJI@Z @ 0x1802199E0 (-Matrix4x4FromScale@CExpressionValueStack@@QEAAJI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z @ 0x180249018 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z.c)
 *     ?D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z @ 0x18024B2AC (-D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x18024C228 (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     ?Matrix4x4FromPerspectiveOffCenter@CExpressionValueStack@@QEAAJXZ @ 0x18024C414 (-Matrix4x4FromPerspectiveOffCenter@CExpressionValueStack@@QEAAJXZ.c)
 *     ?D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z @ 0x18024C914 (-D3DXVec2Normalize@@YAPEAUD2DVector2@@PEAU1@PEBU1@@Z.c)
 *     ?NotEquals@CExpressionValueStack@@QEAAJXZ @ 0x18024CC4C (-NotEquals@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix4x4FromPerspectiveFieldOfView@CExpressionValueStack@@QEAAJXZ @ 0x18024D3F8 (-Matrix4x4FromPerspectiveFieldOfView@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix4x4FromPerspective@CExpressionValueStack@@QEAAJXZ @ 0x18024D564 (-Matrix4x4FromPerspective@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Vector4Transform@CExpressionValueStack@@QEAAJXZ @ 0x18024D798 (-Vector4Transform@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Distance@CExpressionValueStack@@QEAAJXZ @ 0x18024DFA8 (-Distance@CExpressionValueStack@@QEAAJXZ.c)
 *     ?DistanceSquared@CExpressionValueStack@@QEAAJXZ @ 0x18024E15C (-DistanceSquared@CExpressionValueStack@@QEAAJXZ.c)
 *     ?TimeSpanFrom@CExpressionValueStack@@QEAAJI@Z @ 0x18024EE6C (-TimeSpanFrom@CExpressionValueStack@@QEAAJI@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@stdext@@_J@Z @ 0x18025990C (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$com_ptr_t@UIUnknown@@Uerr_returncode_poli.c)
 *     ??H?$checked_array_iterator@PEAUNodesDataBookmark@CExpression@@@stdext@@QEBA?AV01@_J@Z @ 0x18029A56C (--H-$checked_array_iterator@PEAUNodesDataBookmark@CExpression@@@stdext@@QEBA-AV01@_J@Z.c)
 *     ?ReadValueFromCache@CExpression@@AEBA_NPEBUExpressionReferenceInfoWithCache@@PEAVCExpressionValue@@@Z @ 0x18029B0A0 (-ReadValueFromCache@CExpression@@AEBA_NPEBUExpressionReferenceInfoWithCache@@PEAVCExpressionValu.c)
 *     ?ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z @ 0x18029B124 (-ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z.c)
 *     ?StoreValueToCache@CExpression@@AEBAXPEBUExpressionReferenceInfoWithCache@@PEBVCExpressionValue@@@Z @ 0x18029B2B0 (-StoreValueToCache@CExpression@@AEBAXPEBUExpressionReferenceInfoWithCache@@PEBVCExpressionValue@.c)
 *     ?clear_region@?$vector_facade@UNodesDataBookmark@CExpression@@V?$buffer_impl@UNodesDataBookmark@CExpression@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18029B924 (-clear_region@-$vector_facade@UNodesDataBookmark@CExpression@@V-$buffer_impl@UNodesDataBookmark@.c)
 *     ?Swizzle@CExpressionValueStack@@QEAAJPEBUExpressionNode@@@Z @ 0x1802AA5C4 (-Swizzle@CExpressionValueStack@@QEAAJPEBUExpressionNode@@@Z.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x1802B561C (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 *     acosf_0 @ 0x1802DF59C (acosf_0.c)
 *     asinf_0 @ 0x1802DF5A8 (asinf_0.c)
 *     atan2f_0 @ 0x1802DF5B4 (atan2f_0.c)
 *     atanf_0 @ 0x1802DF5C0 (atanf_0.c)
 *     ceilf_0 @ 0x1802DF5CC (ceilf_0.c)
 *     cosf_0 @ 0x1802DF5D8 (cosf_0.c)
 *     floorf_0 @ 0x1802DF608 (floorf_0.c)
 *     fmodf_0 @ 0x1802DF620 (fmodf_0.c)
 *     log10f_0 @ 0x1802DF638 (log10f_0.c)
 *     logf_0 @ 0x1802DF644 (logf_0.c)
 *     powf_0 @ 0x1802DF65C (powf_0.c)
 *     sinf_0 @ 0x1802DF680 (sinf_0.c)
 *     sqrtf_0 @ 0x1802DF698 (sqrtf_0.c)
 *     tanf_0 @ 0x1802DF6B0 (tanf_0.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExpression::CalculateValueWorker(
        CExpression *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  int v4; // xmm8_4
  CExpression *v5; // rbx
  int v6; // xmm6_4
  float v8; // xmm14_4
  float v9; // xmm9_4
  unsigned int v10; // edi
  __m128 v11; // xmm15
  __int64 v12; // rax
  float v13; // xmm7_4
  float v14; // xmm10_4
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int16 *v17; // r8
  __int64 v18; // r9
  __int64 v19; // r14
  int v20; // edi
  char v21; // bl
  int v22; // eax
  int v23; // esi
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // ebx
  unsigned int v28; // eax
  int v29; // eax
  int v30; // esi
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // eax
  int v35; // esi
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // eax
  int v40; // esi
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // eax
  int v45; // esi
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  int v49; // eax
  int v50; // esi
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rax
  struct CExpressionValue *v58; // rsi
  __int64 v59; // rdi
  int v60; // esi
  unsigned int v61; // eax
  int v62; // eax
  CExpression *v63; // rcx
  LARGE_INTEGER v64; // rbx
  __int64 v65; // r14
  LARGE_INTEGER v66; // rax
  struct CExpressionValue *v67; // rcx
  int v68; // eax
  __m128 v69; // xmm2
  int v70; // xmm0_4
  int v71; // xmm1_4
  int v72; // xmm0_4
  int v73; // xmm0_4
  unsigned int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rdx
  int v77; // eax
  __int64 v78; // rcx
  __int128 *v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rdx
  int v82; // eax
  __int64 v83; // rcx
  __int128 *v84; // rax
  int v85; // ecx
  float v86; // xmm0_4
  unsigned int v87; // eax
  __int64 v88; // rax
  int v89; // eax
  __int64 v90; // rcx
  __int128 *v91; // rbx
  __int64 v92; // rax
  int v93; // eax
  __int64 v94; // rcx
  __int128 *v95; // rax
  int v96; // ecx
  struct CExpressionValue *v97; // rax
  struct CExpressionValue *v98; // rbx
  int v99; // eax
  __int128 v100; // xmm0
  __int128 v101; // xmm1
  __int128 v102; // xmm0
  __int128 v103; // xmm1
  struct CExpressionValue *v104; // rbx
  struct CExpressionValue *v105; // rdi
  struct CExpressionValue *v106; // rax
  int v107; // ecx
  float v108; // xmm0_4
  __m128 v109; // xmm5
  __m128 v110; // xmm4
  float v111; // xmm3_4
  float v112; // xmm0_4
  float v113; // xmm1_4
  float v114; // xmm0_4
  struct CExpressionValue *v115; // rbx
  int v116; // eax
  float v117; // xmm0_4
  float v118; // xmm3_4
  float v119; // xmm1_4
  float v120; // xmm2_4
  float v121; // xmm3_4
  __m128 v122; // xmm2
  float v123; // xmm3_4
  float v124; // xmm1_4
  float v125; // xmm3_4
  float v126; // xmm0_4
  float v127; // xmm2_4
  float v128; // xmm2_4
  float v129; // xmm1_4
  float v130; // xmm0_4
  float v131; // xmm1_4
  int v132; // xmm0_4
  struct CExpressionValue *v133; // rcx
  int v134; // eax
  float v135; // xmm3_4
  float v136; // xmm0_4
  float v137; // xmm1_4
  float v138; // xmm2_4
  __m128 v139; // xmm3
  float v140; // xmm0_4
  float v141; // xmm1_4
  float v142; // xmm2_4
  float v143; // xmm2_4
  float v144; // xmm0_4
  float v145; // xmm1_4
  float v146; // xmm0_4
  float v147; // xmm0_4
  struct CExpressionValue *v148; // rbx
  int v149; // eax
  __int128 v150; // xmm0
  __int128 v151; // xmm0
  __int64 v152; // xmm0_8
  int v153; // eax
  __int64 v154; // xmm0_8
  struct CExpressionValue *v155; // rbx
  struct CExpressionValue *v156; // rdi
  struct CExpressionValue *v157; // rax
  int v158; // ecx
  float v159; // xmm3_4
  float v160; // xmm2_4
  float v161; // xmm4_4
  float v162; // xmm5_4
  float v163; // xmm11_4
  float v164; // xmm10_4
  float v165; // xmm12_4
  float v166; // xmm13_4
  float v167; // xmm8_4
  float v168; // xmm9_4
  float v169; // xmm6_4
  float v170; // xmm6_4
  float v171; // xmm15_4
  float v172; // xmm6_4
  float v173; // xmm1_4
  float v174; // xmm14_4
  float v175; // xmm0_4
  float v176; // xmm6_4
  float v177; // xmm0_4
  float v178; // xmm8_4
  struct CExpressionValue *v179; // rbx
  struct CExpressionValue *v180; // rax
  int v181; // ecx
  __int128 v182; // xmm0
  struct CExpressionValue *v183; // rax
  struct CExpressionValue *v184; // rbx
  float v185; // xmm0_4
  struct CExpressionValue *v186; // rax
  float v187; // xmm0_4
  struct CExpressionValue *v188; // rax
  struct CExpressionValue *v189; // rbx
  float v190; // xmm0_4
  struct CExpressionValue *v191; // rax
  float v192; // xmm0_4
  struct CExpressionValue *v193; // rax
  struct CExpressionValue *v194; // rbx
  float v195; // xmm6_4
  struct CExpressionValue *v196; // rax
  struct CExpressionValue *v197; // rbx
  float v198; // xmm0_4
  struct CExpressionValue *v199; // rax
  struct CExpressionValue *v200; // rbx
  float v201; // xmm0_4
  struct CExpressionValue *v202; // rax
  struct CExpressionValue *v203; // rbx
  float v204; // xmm0_4
  struct CExpressionValue *v205; // rax
  struct CExpressionValue *v206; // rbx
  struct CExpressionValue *v207; // rax
  int v208; // ecx
  float v209; // xmm6_4
  struct CExpressionValue *v210; // rax
  float v211; // xmm0_4
  struct CExpressionValue *v212; // rax
  struct CExpressionValue *v213; // rbx
  float v214; // xmm6_4
  struct CExpressionValue *v215; // rax
  struct CExpressionValue *v216; // rbx
  float v217; // xmm6_4
  struct CExpressionValue *v218; // rax
  float v219; // xmm0_4
  struct CExpressionValue *v220; // rax
  float v221; // xmm0_4
  struct CExpressionValue *v222; // rbx
  struct CExpressionValue *v223; // rax
  int v224; // xmm0_4
  int v225; // xmm1_4
  struct CExpressionValue *v226; // rbx
  struct CExpressionValue *v227; // rdi
  struct CExpressionValue *v228; // rsi
  struct CExpressionValue *v229; // rax
  int v230; // xmm0_4
  int v231; // xmm1_4
  int v232; // xmm2_4
  int v233; // xmm3_4
  struct CExpressionValue *v234; // rdi
  struct CExpressionValue *v235; // rsi
  struct CExpressionValue *v236; // rax
  bool v237; // cf
  int v238; // ebx
  __int128 **v239; // rdi
  __int64 v240; // rcx
  __int64 v241; // rcx
  int v242; // eax
  __int128 *v243; // rax
  bool v244; // zf
  _DWORD *v245; // rcx
  int v246; // xmm4_4
  int v247; // xmm5_4
  int v248; // xmm3_4
  int v249; // xmm2_4
  int v250; // xmm1_4
  int v251; // xmm0_4
  unsigned int v252; // edi
  struct CExpressionValue *v253; // rbx
  struct CExpressionValue *v254; // rax
  __int64 v255; // xmm1_8
  struct CExpressionValue *v256; // rsi
  struct CExpressionValue *v257; // rax
  int v258; // eax
  _BYTE *v259; // r8
  _BYTE *v260; // rcx
  unsigned int v261; // edi
  struct CExpressionValue *v262; // rax
  struct CExpressionValue *v263; // rbx
  struct CExpressionValue *v264; // rbx
  struct CExpressionValue *v265; // rax
  struct CExpressionValue *v266; // rbx
  struct CExpressionValue *v267; // rax
  __m128 v268; // xmm2
  float v269; // xmm6_4
  float v270; // xmm7_4
  float v271; // xmm0_4
  float v272; // xmm8_4
  float v273; // xmm6_4
  float v274; // xmm10_4
  float v275; // xmm3_4
  float v276; // xmm6_4
  float v277; // xmm5_4
  float v278; // xmm9_4
  float v279; // xmm3_4
  unsigned int v280; // esi
  struct CExpressionValue *v281; // rax
  struct CExpressionValue *v282; // rbx
  float v283; // xmm6_4
  float v284; // xmm7_4
  float v285; // xmm0_4
  struct CExpressionValue *v286; // rdi
  struct CExpressionValue *v287; // rax
  float v288; // xmm6_4
  float v289; // ebx
  float v290; // xmm0_4
  float v291; // xmm7_4
  float v292; // xmm0_4
  float v293; // xmm4_4
  unsigned int v294; // esi
  struct CExpressionValue *v295; // rax
  struct CExpressionValue *v296; // rbx
  float v297; // xmm6_4
  float v298; // xmm7_4
  float v299; // xmm0_4
  struct CExpressionValue *v300; // rdi
  struct CExpressionValue *v301; // rax
  float v302; // xmm6_4
  float v303; // ebx
  float v304; // xmm0_4
  float v305; // xmm7_4
  float v306; // xmm0_4
  float v307; // xmm3_4
  unsigned int v308; // edi
  struct CExpressionValue *v309; // rax
  struct CExpressionValue *v310; // rbx
  __int128 v311; // xmm0
  __int128 v312; // xmm1
  __int128 v313; // xmm0
  __int128 v314; // xmm1
  struct CExpressionValue *v315; // rbx
  struct CExpressionValue *v316; // rax
  float v317; // xmm6_4
  float v318; // xmm0_4
  float v319; // xmm7_4
  float v320; // xmm0_4
  float v321; // xmm3_4
  struct CExpressionValue *v322; // rax
  __int128 v323; // xmm0
  __int128 v324; // xmm1
  __int64 v325; // r8
  __int128 v326; // xmm0
  __int128 v327; // xmm1
  struct CExpressionValue *v328; // rbx
  struct CExpressionValue *v329; // rdi
  struct CExpressionValue *v330; // rax
  __int128 v331; // xmm0
  __int128 v332; // xmm1
  __int128 v333; // xmm0
  __int128 v334; // xmm1
  struct CExpressionValue *v335; // rbx
  struct CExpressionValue *v336; // rax
  __int64 v337; // xmm0_8
  float v338; // xmm2_4
  __int128 v339; // xmm0
  struct CExpressionValue *v340; // rax
  struct CExpressionValue *v341; // rbx
  __int128 v342; // xmm1
  __int128 v343; // xmm0
  __int128 v344; // xmm1
  __int128 v345; // xmm0
  struct CExpressionValue *v346; // rbx
  struct CExpressionValue *v347; // rdi
  struct CExpressionValue *v348; // rax
  __int128 v349; // xmm0
  struct CExpressionValue *v350; // rbx
  struct CExpressionValue *v351; // rax
  float v352; // xmm3_4
  float v353; // xmm2_4
  float v354; // xmm0_4
  float v355; // xmm1_4
  struct CExpressionValue *v356; // rbx
  __m128 *v357; // rax
  __int32 v358; // ecx
  float v359; // xmm8_4
  float v360; // xmm9_4
  __m128 v361; // xmm2
  float v362; // xmm1_4
  __m128 v363; // xmm0
  float v364; // xmm7_4
  float v365; // xmm6_4
  __m128 v366; // xmm1
  __m128 v367; // xmm3
  float v368; // xmm2_4
  float v369; // xmm5_4
  float v370; // xmm0_4
  float v371; // xmm3_4
  float v372; // xmm5_4
  float v373; // xmm4_4
  struct CExpressionValue *v374; // rbx
  __m128 *v375; // rax
  __int32 v376; // ecx
  float v377; // xmm5_4
  float v378; // xmm6_4
  __m128 v379; // xmm2
  float v380; // xmm4_4
  float v381; // xmm5_4
  float v382; // xmm1_4
  __m128 v383; // xmm2
  struct CExpressionValue *v384; // rbx
  struct CExpressionValue *v385; // rax
  __m128 v386; // xmm5
  float v387; // eax
  __m128 v388; // xmm6
  float v389; // xmm2_4
  struct CExpressionValue *v390; // rbx
  struct CExpressionValue *v391; // rax
  __m128 v392; // xmm2
  __m128 v393; // xmm1
  float v394; // eax
  struct CExpressionValue *v395; // rbx
  struct CExpressionValue *v396; // rax
  int v397; // ecx
  __m128 v398; // xmm5
  __m128 v399; // xmm6
  __m128 v400; // xmm7
  float v401; // xmm14_4
  float v402; // xmm13_4
  float v403; // xmm8_4
  __m128 v404; // xmm4
  float v405; // xmm1_4
  float v406; // xmm2_4
  float v407; // xmm0_4
  float v408; // xmm6_4
  float v409; // xmm13_4
  float v410; // xmm9_4
  float v411; // xmm5_4
  float v412; // xmm8_4
  float v413; // xmm11_4
  float v414; // xmm7_4
  float v415; // xmm10_4
  float v416; // xmm12_4
  struct CExpressionValue *v417; // rbx
  struct CExpressionValue *v418; // rax
  __int128 v419; // xmm1
  int v420; // ecx
  __int128 v421; // xmm0
  __int128 v422; // xmm1
  __int128 v423; // xmm0
  int v424; // eax
  struct CExpressionValue *v425; // rbx
  struct CExpressionValue *v426; // rax
  __m128 v427; // xmm5
  __m128 v428; // xmm4
  _BYTE *v429; // rdi
  _QWORD *v430; // rax
  unsigned __int64 v431; // rsi
  SIZE_T v432; // r9
  unsigned __int64 v433; // r15
  SIZE_T v434; // rax
  LPVOID v435; // rax
  void *v436; // rbx
  void *v437; // r14
  size_t v438; // rsi
  void *v439; // rdi
  void *v440; // rcx
  __int64 v441; // r8
  unsigned __int64 v442; // rbx
  __int64 v443; // rdx
  __int64 v444; // rdx
  _QWORD *v445; // rcx
  unsigned __int64 v446; // r11
  unsigned __int64 v447; // r8
  __int64 v448; // r9
  unsigned __int64 v449; // r10
  __int64 v450; // rax
  char *v451; // rbx
  signed __int64 v452; // rdi
  __int64 v453; // rax
  void *v454; // rax
  unsigned int v455; // ebx
  struct CExpressionValue *v456; // rax
  char v457; // al
  int v458; // ecx
  __int64 v459; // rcx
  __int64 v460; // rcx
  __int64 v461; // rcx
  __int64 v462; // rcx
  __int64 v463; // rcx
  __int64 v464; // rcx
  __int64 v465; // rcx
  unsigned int v466; // eax
  unsigned int v467; // eax
  unsigned int v468; // eax
  unsigned int v469; // eax
  unsigned int v470; // eax
  unsigned int v471; // eax
  unsigned int v472; // eax
  unsigned int v473; // eax
  unsigned int v474; // eax
  unsigned int v475; // eax
  unsigned int v476; // eax
  unsigned int v477; // eax
  unsigned int v478; // eax
  unsigned int v479; // eax
  unsigned int v480; // eax
  unsigned int v481; // eax
  unsigned int v482; // eax
  unsigned int v483; // eax
  unsigned int v484; // eax
  unsigned int v485; // eax
  unsigned int v486; // eax
  unsigned int v487; // eax
  unsigned int v488; // eax
  unsigned int v489; // eax
  unsigned int v490; // eax
  unsigned int v491; // eax
  unsigned int v492; // eax
  unsigned int v493; // eax
  unsigned int v494; // eax
  unsigned int v495; // eax
  unsigned int v496; // eax
  unsigned int v497; // eax
  unsigned int v498; // eax
  unsigned int v499; // eax
  unsigned int v500; // eax
  unsigned int v501; // eax
  unsigned int v502; // eax
  unsigned int v503; // eax
  unsigned int v504; // eax
  unsigned int v505; // eax
  unsigned int v506; // eax
  unsigned int v507; // eax
  unsigned int v508; // eax
  unsigned int v509; // eax
  unsigned int v510; // eax
  unsigned int v511; // eax
  unsigned int v512; // eax
  unsigned int v513; // eax
  unsigned int v514; // eax
  unsigned int v515; // eax
  __int64 v516; // rax
  int v518; // [rsp+38h] [rbp-D0h]
  unsigned int v520; // [rsp+48h] [rbp-C0h]
  unsigned int v521; // [rsp+4Ch] [rbp-BCh]
  __int64 v522; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v523[3]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v524; // [rsp+70h] [rbp-98h]
  float v525; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int32 v526; // [rsp+7Ch] [rbp-8Ch]
  float v527; // [rsp+80h] [rbp-88h]
  _BYTE *v528; // [rsp+88h] [rbp-80h]
  int v529; // [rsp+90h] [rbp-78h] BYREF
  int TracingCookie; // [rsp+94h] [rbp-74h] BYREF
  __int64 i; // [rsp+98h] [rbp-70h]
  int v532; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v533; // [rsp+A8h] [rbp-60h] BYREF
  int v534; // [rsp+B0h] [rbp-58h]
  __int64 v535; // [rsp+B8h] [rbp-50h]
  __int64 v536; // [rsp+C8h] [rbp-40h] BYREF
  int v537; // [rsp+D0h] [rbp-38h]
  LARGE_INTEGER PerformanceCount; // [rsp+D8h] [rbp-30h] BYREF
  LARGE_INTEGER v539; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v540; // [rsp+E8h] [rbp-20h]
  __int64 v541; // [rsp+F8h] [rbp-10h] BYREF
  int v542; // [rsp+100h] [rbp-8h]
  __int64 v543; // [rsp+108h] [rbp+0h] BYREF
  int v544; // [rsp+110h] [rbp+8h]
  __int128 v545; // [rsp+118h] [rbp+10h]
  __int64 v546; // [rsp+128h] [rbp+20h]
  __int128 v547; // [rsp+138h] [rbp+30h]
  __int64 v548; // [rsp+148h] [rbp+40h]
  __int128 v549; // [rsp+158h] [rbp+50h] BYREF
  __int64 v550; // [rsp+168h] [rbp+60h]
  __int128 v551; // [rsp+178h] [rbp+70h]
  __int64 v552; // [rsp+188h] [rbp+80h]
  __int128 v553; // [rsp+198h] [rbp+90h] BYREF
  __int64 v554; // [rsp+1A8h] [rbp+A0h]
  _QWORD v555[5]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v556; // [rsp+1E0h] [rbp+D8h]
  __int64 v557; // [rsp+1E8h] [rbp+E0h]
  unsigned __int64 v558; // [rsp+1F8h] [rbp+F0h]
  __int64 v559; // [rsp+208h] [rbp+100h]
  __int64 v560; // [rsp+218h] [rbp+110h]
  __int64 v561; // [rsp+228h] [rbp+120h]
  unsigned __int64 v562; // [rsp+238h] [rbp+130h]
  unsigned __int64 v563; // [rsp+248h] [rbp+140h]
  _OWORD v564[4]; // [rsp+258h] [rbp+150h] BYREF
  __int64 v565; // [rsp+298h] [rbp+190h]
  int v566; // [rsp+2A0h] [rbp+198h]
  _OWORD v567[4]; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int64 v568; // [rsp+2E8h] [rbp+1E0h]
  int v569; // [rsp+2F0h] [rbp+1E8h]
  _OWORD v570[4]; // [rsp+2F8h] [rbp+1F0h] BYREF
  __int64 v571; // [rsp+338h] [rbp+230h]
  int v572; // [rsp+340h] [rbp+238h]
  _OWORD v573[4]; // [rsp+348h] [rbp+240h] BYREF
  __int64 v574; // [rsp+388h] [rbp+280h]
  int v575; // [rsp+390h] [rbp+288h]
  _OWORD v576[4]; // [rsp+398h] [rbp+290h] BYREF
  __int64 v577; // [rsp+3D8h] [rbp+2D0h]
  int v578; // [rsp+3E0h] [rbp+2D8h]
  _OWORD v579[4]; // [rsp+3E8h] [rbp+2E0h] BYREF
  __int64 v580; // [rsp+428h] [rbp+320h]
  int v581; // [rsp+430h] [rbp+328h]
  _OWORD v582[4]; // [rsp+438h] [rbp+330h] BYREF
  __int64 v583; // [rsp+478h] [rbp+370h]
  int v584; // [rsp+480h] [rbp+378h]
  __int128 v585; // [rsp+498h] [rbp+390h] BYREF
  __int128 v586; // [rsp+4A8h] [rbp+3A0h] BYREF
  _BYTE v587[16]; // [rsp+4B8h] [rbp+3B0h] BYREF
  __int128 v588; // [rsp+4C8h] [rbp+3C0h] BYREF
  __int128 v589; // [rsp+4D8h] [rbp+3D0h] BYREF
  _OWORD v590[5]; // [rsp+4E8h] [rbp+3E0h] BYREF
  __int64 v591; // [rsp+538h] [rbp+430h]
  int v592; // [rsp+540h] [rbp+438h]
  __int128 v593; // [rsp+548h] [rbp+440h]
  __int128 v594; // [rsp+558h] [rbp+450h]
  __int128 v595; // [rsp+568h] [rbp+460h]
  __int128 v596; // [rsp+578h] [rbp+470h]
  __int64 v597; // [rsp+588h] [rbp+480h]
  int v598; // [rsp+590h] [rbp+488h]
  __int128 v599; // [rsp+598h] [rbp+490h]
  __int128 v600; // [rsp+5A8h] [rbp+4A0h]
  __int128 v601; // [rsp+5B8h] [rbp+4B0h]
  __int128 v602; // [rsp+5C8h] [rbp+4C0h]
  __int64 v603; // [rsp+5D8h] [rbp+4D0h]
  int v604; // [rsp+5E0h] [rbp+4D8h]
  __int128 v605; // [rsp+5E8h] [rbp+4E0h]
  __int128 v606; // [rsp+5F8h] [rbp+4F0h]
  __int128 v607; // [rsp+608h] [rbp+500h]
  __int128 v608; // [rsp+618h] [rbp+510h]
  __int64 v609; // [rsp+628h] [rbp+520h]
  int v610; // [rsp+630h] [rbp+528h]
  __int128 v611; // [rsp+638h] [rbp+530h]
  __int128 v612; // [rsp+648h] [rbp+540h]
  __int128 v613; // [rsp+658h] [rbp+550h]
  __int128 v614; // [rsp+668h] [rbp+560h]
  CPathData *v615; // [rsp+678h] [rbp+570h] BYREF
  int v616; // [rsp+680h] [rbp+578h]
  _OWORD v617[4]; // [rsp+688h] [rbp+580h] BYREF
  _OWORD v618[4]; // [rsp+6C8h] [rbp+5C0h] BYREF
  _OWORD v619[4]; // [rsp+708h] [rbp+600h] BYREF
  _OWORD v620[4]; // [rsp+748h] [rbp+640h] BYREF
  _OWORD v621[8]; // [rsp+788h] [rbp+680h] BYREF
  char v622[24]; // [rsp+808h] [rbp+700h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+820h] [rbp+718h] BYREF
  void *Src; // [rsp+838h] [rbp+730h] BYREF
  _BYTE *v625; // [rsp+840h] [rbp+738h]
  char *v626; // [rsp+848h] [rbp+740h]
  _BYTE v627[128]; // [rsp+850h] [rbp+748h] BYREF
  char v628; // [rsp+8D0h] [rbp+7C8h] BYREF
  D2D1_MATRIX_3X2_F v629; // [rsp+8D8h] [rbp+7D0h] BYREF
  D2D1_MATRIX_3X2_F v630; // [rsp+8F0h] [rbp+7E8h] BYREF
  D2D1_MATRIX_3X2_F v631; // [rsp+908h] [rbp+800h] BYREF
  D2D1_MATRIX_3X2_F v632; // [rsp+920h] [rbp+818h] BYREF
  _OWORD v633[4]; // [rsp+938h] [rbp+830h] BYREF
  __int128 v634; // [rsp+978h] [rbp+870h] BYREF
  __int128 v635; // [rsp+988h] [rbp+880h]
  __int128 v636; // [rsp+998h] [rbp+890h]
  struct _EVENT_DATA_DESCRIPTOR v637; // [rsp+9A8h] [rbp+8A0h] BYREF
  int *p_TracingCookie; // [rsp+9C8h] [rbp+8C0h]
  __int64 v639; // [rsp+9D0h] [rbp+8C8h]
  int *v640; // [rsp+9D8h] [rbp+8D0h]
  __int64 v641; // [rsp+9E0h] [rbp+8D8h]
  int *v642; // [rsp+9E8h] [rbp+8E0h]
  __int64 v643; // [rsp+9F0h] [rbp+8E8h]
  wil::details::in1diag3 *retaddr; // [rsp+AE0h] [rbp+9D8h]

  v4 = _xmm;
  v5 = this;
  v6 = _xmm;
  v8 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v9 = FLOAT_N1_0;
  v10 = *((_DWORD *)this + 90);
  v11 = 0LL;
  v12 = *((_QWORD *)this + 41);
  v13 = FLOAT_57_295776;
  v14 = FLOAT_0_017453292;
  Src = v627;
  v625 = v627;
  v15 = 0;
  v16 = (__int64)&v628;
  v520 = 0;
  v626 = &v628;
  *a4 = 0;
  v521 = v10;
  for ( i = v12; ; v12 = i )
  {
    v17 = &_ImageBase;
    v18 = -1LL;
    if ( v15 < v10 )
      break;
LABEL_351:
    v259 = v625;
    v260 = Src;
    if ( v625 == Src )
    {
      v27 = *((_DWORD *)a2 + 2) == 0;
      goto LABEL_720;
    }
    v10 = *((_DWORD *)v625 - 1);
    v520 = *((_DWORD *)v625 - 2);
    v521 = v10;
    detail::vector_facade<CExpression::NodesDataBookmark,detail::buffer_impl<CExpression::NodesDataBookmark,16,1,detail::liberal_expansion_policy>>::clear_region(
      &Src,
      (v625 - 8 - (_BYTE *)Src) >> 3);
    v15 = v520;
  }
  while ( 2 )
  {
    v19 = v12 + v15;
    v518 = 4;
    v522 = v19;
    switch ( *(_DWORD *)v19 )
    {
      case 0:
        v20 = 8;
        v21 = *(_BYTE *)(v19 + 4);
        if ( (unsigned int)~*((_DWORD *)a2 + 2) < 5 )
        {
          v23 = -2147418113;
          MilInstrumentationCheckHR_MaybeFailFast(
            20,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            -2147418113,
            0x54u,
            0LL);
        }
        else
        {
          if ( *((_DWORD *)a2 + 10) != *((_DWORD *)a2 + 2) )
          {
LABEL_9:
            v25 = *((unsigned int *)a2 + 2);
            *((_DWORD *)a2 + 2) = v25 + 1;
            v26 = *((_QWORD *)a2 + 2) + 80 * v25;
            *(_DWORD *)(v26 + 72) = 17;
            *(_BYTE *)v26 = v21;
            goto LABEL_349;
          }
          v580 = 0LL;
          v581 = 0;
          memset(v579, 0, sizeof(v579));
          v22 = DynArray<CExpressionValue,1>::AddAndSet((__int64)a2 + 16, v16, (__int64)v579, -1);
          v23 = v22;
          if ( v22 >= 0 )
          {
            v24 = v580;
            if ( v580 )
            {
              v580 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
            }
            goto LABEL_9;
          }
          MilInstrumentationCheckHR_MaybeFailFast(
            20,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            v22,
            0x5Du,
            0LL);
          v459 = v580;
          if ( v580 )
          {
            v580 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v459 + 16LL))(v459);
          }
        }
        v27 = v23;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          v23,
          0xAFu,
          0LL);
        v28 = 537;
        goto LABEL_710;
      case 1:
        v20 = 8;
        v27 = CExpressionValueStack::PushConstant(a2, *(float *)(v19 + 4));
        if ( v27 >= 0 )
          goto LABEL_349;
        v28 = 545;
        goto LABEL_710;
      case 2:
        v20 = 12;
        v27 = CExpressionValueStack::PushConstant(a2, (const struct D2DVector2 *)(v19 + 4));
        if ( v27 >= 0 )
          goto LABEL_349;
        v28 = 553;
        goto LABEL_710;
      case 3:
        v20 = 16;
        v27 = CExpressionValueStack::PushConstant(a2, (const struct D2DVector3 *)(v19 + 4));
        if ( v27 >= 0 )
          goto LABEL_349;
        v28 = 561;
        goto LABEL_710;
      case 4:
        v20 = 20;
        if ( (unsigned int)~*((_DWORD *)a2 + 2) < 5 )
        {
          v30 = -2147418113;
          MilInstrumentationCheckHR_MaybeFailFast(
            20,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            -2147418113,
            0x54u,
            0LL);
          v27 = -2147418113;
LABEL_507:
          MilInstrumentationCheckHR_MaybeFailFast(
            20,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            v30,
            0xF3u,
            0LL);
          v28 = 569;
          goto LABEL_710;
        }
        if ( *((_DWORD *)a2 + 10) == *((_DWORD *)a2 + 2) )
        {
          v577 = 0LL;
          v578 = 0;
          memset(v576, 0, sizeof(v576));
          v29 = DynArray<CExpressionValue,1>::AddAndSet((__int64)a2 + 16, v16, (__int64)v576, -1);
          v30 = v29;
          v27 = v29;
          if ( v29 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              20,
              &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
              1u,
              v29,
              0x5Du,
              0LL);
            v460 = v577;
            if ( v577 )
            {
              v577 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v460 + 16LL))(v460);
            }
            goto LABEL_507;
          }
          v31 = v577;
          if ( v577 )
          {
            v577 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
          }
          v5 = this;
        }
        v32 = *((unsigned int *)a2 + 2);
        *((_DWORD *)a2 + 2) = v32 + 1;
        v33 = *((_QWORD *)a2 + 2) + 80 * v32;
        *(_DWORD *)(v33 + 72) = 69;
        *(_OWORD *)v33 = *(_OWORD *)(v19 + 4);
LABEL_350:
        v17 = &_ImageBase;
        v8 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
        v15 = v20 + v520;
        v18 = -1LL;
        v6 = _xmm;
        v13 = FLOAT_57_295776;
        v9 = FLOAT_N1_0;
        v14 = FLOAT_0_017453292;
        v12 = i;
        v520 = v15;
        if ( v15 >= v521 )
          goto LABEL_351;
        continue;
      case 5:
        v20 = 20;
        if ( (unsigned int)~*((_DWORD *)a2 + 2) < 5 )
        {
          v35 = -2147418113;
          MilInstrumentationCheckHR_MaybeFailFast(
            20,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            -2147418113,
            0x54u,
            0LL);
          v27 = -2147418113;
LABEL_511:
          MilInstrumentationCheckHR_MaybeFailFast(
            20,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            v35,
            0x104u,
            0LL);
          v28 = 577;
          goto LABEL_710;
        }
        if ( *((_DWORD *)a2 + 10) == *((_DWORD *)a2 + 2) )
        {
          v574 = 0LL;
          v575 = 0;
          memset(v573, 0, sizeof(v573));
          v34 = DynArray<CExpressionValue,1>::AddAndSet((__int64)a2 + 16, v16, (__int64)v573, -1);
          v35 = v34;
          v27 = v34;
          if ( v34 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              20,
              &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
              1u,
              v34,
              0x5Du,
              0LL);
            v461 = v574;
            if ( v574 )
            {
              v574 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v461 + 16LL))(v461);
            }
            goto LABEL_511;
          }
          v36 = v574;
          if ( v574 )
          {
            v574 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
          }
          v5 = this;
        }
        v37 = *((unsigned int *)a2 + 2);
        *((_DWORD *)a2 + 2) = v37 + 1;
        v38 = *((_QWORD *)a2 + 2) + 80 * v37;
        *(_DWORD *)(v38 + 72) = 70;
        *(_OWORD *)v38 = *(_OWORD *)(v19 + 4);
        goto LABEL_350;
      case 6:
        v20 = 20;
        if ( (unsigned int)~*((_DWORD *)a2 + 2) < 5 )
        {
          v40 = -2147418113;
          MilInstrumentationCheckHR_MaybeFailFast(
            20,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            -2147418113,
            0x54u,
            0LL);
          v27 = -2147418113;
LABEL_515:
          MilInstrumentationCheckHR_MaybeFailFast(
            20,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            v40,
            0x115u,
            0LL);
          v28 = 585;
          goto LABEL_710;
        }
        if ( *((_DWORD *)a2 + 10) == *((_DWORD *)a2 + 2) )
        {
          v571 = 0LL;
          v572 = 0;
          memset(v570, 0, sizeof(v570));
          v39 = DynArray<CExpressionValue,1>::AddAndSet((__int64)a2 + 16, v16, (__int64)v570, -1);
          v40 = v39;
          v27 = v39;
          if ( v39 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              20,
              &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
              1u,
              v39,
              0x5Du,
              0LL);
            v462 = v571;
            if ( v571 )
            {
              v571 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v462 + 16LL))(v462);
            }
            goto LABEL_515;
          }
          v41 = v571;
          if ( v571 )
          {
            v571 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
          }
          v5 = this;
        }
        v42 = *((unsigned int *)a2 + 2);
        *((_DWORD *)a2 + 2) = v42 + 1;
        v43 = *((_QWORD *)a2 + 2) + 80 * v42;
        *(_DWORD *)(v43 + 72) = 71;
        *(_OWORD *)v43 = *(_OWORD *)(v19 + 4);
        goto LABEL_350;
      case 7:
        v20 = 28;
        if ( (unsigned int)~*((_DWORD *)a2 + 2) < 5 )
        {
          v45 = -2147418113;
          MilInstrumentationCheckHR_MaybeFailFast(
            20,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            -2147418113,
            0x54u,
            0LL);
          v27 = -2147418113;
LABEL_519:
          MilInstrumentationCheckHR_MaybeFailFast(
            20,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            v45,
            0x126u,
            0LL);
          v28 = 593;
          goto LABEL_710;
        }
        if ( *((_DWORD *)a2 + 10) == *((_DWORD *)a2 + 2) )
        {
          v568 = 0LL;
          v569 = 0;
          memset(v567, 0, sizeof(v567));
          v44 = DynArray<CExpressionValue,1>::AddAndSet((__int64)a2 + 16, v16, (__int64)v567, -1);
          v45 = v44;
          v27 = v44;
          if ( v44 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              20,
              &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
              1u,
              v44,
              0x5Du,
              0LL);
            v463 = v568;
            if ( v568 )
            {
              v568 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v463 + 16LL))(v463);
            }
            goto LABEL_519;
          }
          v46 = v568;
          if ( v568 )
          {
            v568 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
          }
          v5 = this;
        }
        v47 = *((unsigned int *)a2 + 2);
        *((_DWORD *)a2 + 2) = v47 + 1;
        v48 = *((_QWORD *)a2 + 2) + 80 * v47;
        *(_DWORD *)(v48 + 72) = 104;
        *(_OWORD *)v48 = *(_OWORD *)(v19 + 4);
        *(_QWORD *)(v48 + 16) = *(_QWORD *)(v19 + 20);
        goto LABEL_350;
      case 8:
        v20 = 68;
        if ( (unsigned int)~*((_DWORD *)a2 + 2) < 5 )
        {
          v50 = -2147418113;
          MilInstrumentationCheckHR_MaybeFailFast(
            20,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            -2147418113,
            0x54u,
            0LL);
          v27 = -2147418113;
LABEL_523:
          MilInstrumentationCheckHR_MaybeFailFast(
            20,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            v50,
            0x137u,
            0LL);
          v28 = 601;
          goto LABEL_710;
        }
        if ( *((_DWORD *)a2 + 10) == *((_DWORD *)a2 + 2) )
        {
          v583 = 0LL;
          v584 = 0;
          memset(v582, 0, sizeof(v582));
          v49 = DynArray<CExpressionValue,1>::AddAndSet((__int64)a2 + 16, v16, (__int64)v582, -1);
          v50 = v49;
          v27 = v49;
          if ( v49 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              20,
              &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
              1u,
              v49,
              0x5Du,
              0LL);
            v464 = v583;
            if ( v583 )
            {
              v583 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v464 + 16LL))(v464);
            }
            goto LABEL_523;
          }
          v51 = v583;
          if ( v583 )
          {
            v583 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
          }
          v5 = this;
        }
        v52 = *((unsigned int *)a2 + 2);
        *((_DWORD *)a2 + 2) = v52 + 1;
        v53 = *((_QWORD *)a2 + 2) + 80 * v52;
        *(_DWORD *)(v53 + 72) = 265;
        *(_OWORD *)v53 = *(_OWORD *)(v19 + 4);
        *(_OWORD *)(v53 + 16) = *(_OWORD *)(v19 + 20);
        *(_OWORD *)(v53 + 32) = *(_OWORD *)(v19 + 36);
        *(_OWORD *)(v53 + 48) = *(_OWORD *)(v19 + 52);
        goto LABEL_350;
      case 9:
        v518 = 8;
        if ( (unsigned int)~*((_DWORD *)a2 + 2) < 5 )
        {
          v27 = -2147418113;
          MilInstrumentationCheckHR_MaybeFailFast(
            20,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            -2147418113,
            0x54u,
            0LL);
LABEL_530:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x40,
            (int)"onecoreuap\\windows\\DWM\\dwmcore\\resources\\ExpressionValueStack.h",
            (const char *)(unsigned int)v27);
          v28 = 611;
          goto LABEL_710;
        }
        if ( *((_DWORD *)a2 + 10) == *((_DWORD *)a2 + 2) )
        {
          v565 = 0LL;
          v566 = 0;
          memset(v564, 0, sizeof(v564));
          v54 = DynArray<CExpressionValue,1>::AddAndSet((__int64)a2 + 16, v16, (__int64)v564, -1);
          v27 = v54;
          if ( v54 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              20,
              &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
              1u,
              v54,
              0x5Du,
              0LL);
            v465 = v565;
            if ( v565 )
            {
              v565 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v465 + 16LL))(v465);
            }
            goto LABEL_530;
          }
          v55 = v565;
          if ( v565 )
          {
            v565 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
          }
          v5 = this;
        }
        v56 = *((unsigned int *)a2 + 2);
        *((_DWORD *)a2 + 2) = v56 + 1;
        v57 = *(unsigned int *)(v19 + 4);
        v58 = (struct CExpressionValue *)(*((_QWORD *)a2 + 2) + 80 * v56);
        if ( (unsigned int)v57 >= *((_DWORD *)v5 + 93) )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x5BF,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
            (const char *)v18);
        v59 = *((_QWORD *)v5 + 44) + 28 * v57;
        if ( *(_DWORD *)(v59 + 8) == 1 )
        {
          if ( CExpression::ReadValueFromCache(
                 v5,
                 (const struct ExpressionReferenceInfoWithCache *)(*((_QWORD *)v5 + 44) + 28 * v57),
                 v58) )
          {
            goto LABEL_71;
          }
          v62 = CExpression::ResolveReference(v5, (const struct ExpressionReferenceInfo *)v59, v58);
          v27 = v62;
          if ( v62 < 0 )
          {
            v60 = v62;
            v61 = 1511;
            goto LABEL_528;
          }
        }
        else
        {
          if ( *(_DWORD *)(v59 + 8) != 2 )
          {
            v60 = -2147418113;
            v61 = 1517;
            v27 = -2147418113;
LABEL_528:
            MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803BC5C0, 2u, v60, v61, 0LL);
            v28 = 613;
            goto LABEL_710;
          }
          v27 = CExpression::ResolveReference(
                  v5,
                  (const struct ExpressionReferenceInfo *)(*((_QWORD *)v5 + 44) + 28 * v57),
                  v58);
          if ( v27 < 0 )
          {
            if ( CExpression::ReadValueFromCache(this, (const struct ExpressionReferenceInfoWithCache *)v59, v58) )
              goto LABEL_348;
            v60 = v27;
            v61 = 1492;
            goto LABEL_528;
          }
        }
        v63 = this;
        v64.QuadPart = 0LL;
        v65 = 0LL;
        if ( (*(_DWORD *)(*((_QWORD *)this + 39) + 4LL) & 0x40000000) == 0 )
          goto LABEL_68;
        v5 = this;
        v65 = *(_QWORD *)(*((_QWORD *)this + 3) + 824LL) + 80LL;
        PerformanceCount.QuadPart = 0LL;
        if ( QueryPerformanceCounter(&PerformanceCount) )
        {
          v64 = PerformanceCount;
          v63 = this;
LABEL_68:
          CExpression::StoreValueToCache(v63, (const struct ExpressionReferenceInfoWithCache *)v59, v58);
          if ( v64.QuadPart )
          {
            v539.QuadPart = 0LL;
            QueryPerformanceCounter(&v539);
            v66 = v539;
            ++*(_DWORD *)(v65 + 16);
            *(_QWORD *)(v65 + 56) += v66.QuadPart - v64.QuadPart;
          }
LABEL_348:
          v20 = v518;
LABEL_349:
          v5 = this;
          goto LABEL_350;
        }
        CExpression::StoreValueToCache(this, (const struct ExpressionReferenceInfoWithCache *)v59, v58);
LABEL_71:
        v20 = 8;
        goto LABEL_350;
      case 0xB:
        if ( !*((_DWORD *)a2 + 2) )
        {
          v466 = 400;
          goto LABEL_533;
        }
        v67 = CExpressionValueStack::PeekStackValue(a2, 0);
        v68 = *((_DWORD *)v67 + 18);
        switch ( v68 )
        {
          case 18:
            v20 = 4;
            v73 = *(_DWORD *)v67 & v6;
            *((_DWORD *)v67 + 18) = 18;
            *(_DWORD *)v67 = v73;
            break;
          case 35:
            v71 = *(_DWORD *)v67 & v6;
            v20 = 4;
            v72 = *((_DWORD *)v67 + 1) & v6;
            *((_DWORD *)v67 + 18) = 35;
            *(_DWORD *)v67 = v71;
            *((_DWORD *)v67 + 1) = v72;
            break;
          case 52:
            v20 = 4;
            v557 = *(_QWORD *)v67;
            v70 = v557;
            *((_DWORD *)v67 + 18) = 52;
            *(_DWORD *)v67 = v70 & v6;
            *((_DWORD *)v67 + 1) = HIDWORD(v557) & v6;
            *((_DWORD *)v67 + 2) &= v6;
            break;
          case 69:
            v69 = *(__m128 *)v67;
            v20 = 4;
            *((_DWORD *)v67 + 18) = 69;
            *(_DWORD *)v67 = v69.m128_i32[0] & v6;
            *((_DWORD *)v67 + 1) = _mm_shuffle_ps(v69, v69, 85).m128_u32[0] & v6;
            *((_DWORD *)v67 + 2) = _mm_shuffle_ps(v69, v69, 170).m128_u32[0] & v6;
            *((_DWORD *)v67 + 3) = _mm_shuffle_ps(v69, v69, 255).m128_u32[0] & v6;
            break;
          default:
            v466 = 458;
LABEL_533:
            v27 = -2147467259;
            MilInstrumentationCheckHR_MaybeFailFast(
              20,
              &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
              1u,
              -2147467259,
              v466,
              0LL);
            v28 = 618;
            goto LABEL_710;
        }
        goto LABEL_350;
      case 0xC:
        v27 = CExpressionValueStack::Negate(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 622;
        goto LABEL_710;
      case 0xD:
        v27 = CExpressionValueStack::Add(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 626;
        goto LABEL_710;
      case 0xE:
        v27 = CExpressionValueStack::Subtract(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 630;
        goto LABEL_710;
      case 0xF:
        v27 = CExpressionValueStack::Multiply(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 634;
        goto LABEL_710;
      case 0x10:
        v27 = CExpressionValueStack::Divide(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 638;
        goto LABEL_710;
      case 0x11:
        v74 = *((_DWORD *)a2 + 2);
        if ( v74 < 2 )
        {
          v467 = 1152;
        }
        else
        {
          v75 = v74 - 2;
          if ( (unsigned int)v75 < *((_DWORD *)a2 + 10) )
          {
            v79 = (__int128 *)(*((_QWORD *)a2 + 2) + 80 * v75);
          }
          else
          {
            v76 = qword_1803FA990;
            memset(&v590[1], 0, 64);
            v77 = 0;
            v78 = 0LL;
            v592 = 0;
            CExpressionValueStack::s_emptyValue = 0LL;
            xmmword_1803FA960 = 0LL;
            xmmword_1803FA970 = 0LL;
            xmmword_1803FA980 = 0LL;
            v591 = 0LL;
            qword_1803FA990 = 0LL;
            if ( v76 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
              v77 = v592;
              v78 = v591;
            }
            dword_1803FA998 = v77;
            if ( v78 )
              (*(void (__fastcall **)(__int64, __int64, __int16 *, __int64))(*(_QWORD *)v78 + 16LL))(v78, v76, v17, v18);
            v79 = &CExpressionValueStack::s_emptyValue;
          }
          v80 = (unsigned int)(*((_DWORD *)a2 + 2) - 1);
          if ( (unsigned int)v80 < *((_DWORD *)a2 + 10) )
          {
            v84 = (__int128 *)(*((_QWORD *)a2 + 2) + 80 * v80);
          }
          else
          {
            v81 = qword_1803FA990;
            v593 = 0LL;
            v82 = 0;
            v594 = 0LL;
            v83 = 0LL;
            v595 = 0LL;
            v596 = 0LL;
            v598 = 0;
            CExpressionValueStack::s_emptyValue = 0LL;
            xmmword_1803FA960 = 0LL;
            xmmword_1803FA970 = 0LL;
            xmmword_1803FA980 = 0LL;
            v597 = 0LL;
            qword_1803FA990 = 0LL;
            if ( v81 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 16LL))(v81);
              v82 = v598;
              v83 = v597;
            }
            dword_1803FA998 = v82;
            if ( v83 )
              (*(void (__fastcall **)(__int64, __int64, __int16 *, __int64))(*(_QWORD *)v83 + 16LL))(v83, v81, v17, v18);
            v84 = &CExpressionValueStack::s_emptyValue;
          }
          v85 = *((_DWORD *)v79 + 18);
          if ( v85 == *((_DWORD *)v84 + 18) )
          {
            if ( v85 == 18 )
            {
              if ( v11.m128_f32[0] < *(float *)v84 )
              {
                v86 = fmodf_0(*(float *)v79, *(float *)v84);
                *((_DWORD *)v79 + 18) = 18;
                *(float *)v79 = v86;
                --*((_DWORD *)a2 + 2);
                goto LABEL_348;
              }
              v467 = 1190;
            }
            else
            {
              v467 = 1206;
            }
          }
          else
          {
            v467 = 1175;
          }
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v467,
          0LL);
        v28 = 642;
        goto LABEL_710;
      case 0x12:
        v27 = CExpressionValueStack::Min(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 682;
        goto LABEL_710;
      case 0x13:
        v27 = CExpressionValueStack::Max(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 686;
        goto LABEL_710;
      case 0x14:
        v27 = CExpressionValueStack::Clamp(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 690;
        goto LABEL_710;
      case 0x15:
        v27 = CExpressionValueStack::Scale(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 694;
        goto LABEL_710;
      case 0x16:
        v27 = CExpressionValueStack::Transform(a2, v16, (__int64)&_ImageBase, 0xFFFFFFFF);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 698;
        goto LABEL_710;
      case 0x17:
        if ( *((_DWORD *)a2 + 2) )
        {
          v98 = CExpressionValueStack::PeekStackValue(a2, 0);
          v99 = *((_DWORD *)v98 + 18);
          if ( v99 == 104 )
          {
            matrix = *(D2D1_MATRIX_3X2_F *)v98;
            if ( D2D1InvertMatrix(&matrix) )
            {
              *((_DWORD *)v98 + 18) = 104;
              *(D2D1_MATRIX_3X2_F *)v98 = matrix;
              goto LABEL_348;
            }
            v470 = 2652;
          }
          else if ( v99 == 265 )
          {
            LODWORD(v522) = 0;
            D2DMatrixInverse((struct D2DMatrix *)v617, (float *)&v522, v98);
            if ( *(float *)&v522 != v11.m128_f32[0] )
            {
              v100 = v617[0];
              v101 = v617[1];
              *((_DWORD *)v98 + 18) = 265;
              *(_OWORD *)v98 = v100;
              v102 = v617[2];
              *((_OWORD *)v98 + 1) = v101;
              v103 = v617[3];
              *((_OWORD *)v98 + 2) = v102;
              *((_OWORD *)v98 + 3) = v103;
              goto LABEL_348;
            }
            v470 = 2676;
          }
          else
          {
            v470 = 2691;
          }
        }
        else
        {
          v470 = 2626;
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v470,
          0LL);
        v28 = 702;
        goto LABEL_710;
      case 0x18:
        v27 = CExpressionValueStack::Lerp(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 706;
        goto LABEL_710;
      case 0x19:
        v27 = CExpressionValueStack::ColorLerpHsl(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 710;
        goto LABEL_710;
      case 0x1A:
        v27 = CExpressionValueStack::ColorLerpHsl(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 714;
        goto LABEL_710;
      case 0x1B:
        if ( *((_DWORD *)a2 + 2) < 3u )
        {
          v471 = 3021;
        }
        else
        {
          v104 = CExpressionValueStack::PeekStackValue(a2, -2);
          v105 = CExpressionValueStack::PeekStackValue(a2, -1);
          v106 = CExpressionValueStack::PeekStackValue(a2, 0);
          v107 = *((_DWORD *)v104 + 18);
          v108 = *(float *)v106;
          if ( *((_DWORD *)v106 + 18) == 18 && v107 == *((_DWORD *)v105 + 18) )
          {
            if ( v107 == 70 )
            {
              v109 = *(__m128 *)v104;
              v110 = *(__m128 *)v105;
              *((_DWORD *)v104 + 18) = 70;
              v111 = fmaxf(v11.m128_f32[0], fminf(v108, v8));
              *(float *)v104 = (float)((float)(v110.m128_f32[0] - v109.m128_f32[0]) * v111) + v109.m128_f32[0];
              v112 = _mm_shuffle_ps(v109, v109, 85).m128_f32[0];
              v113 = (float)((float)(_mm_shuffle_ps(v110, v110, 85).m128_f32[0] - v112) * v111) + v112;
              v114 = _mm_shuffle_ps(v109, v109, 170).m128_f32[0];
              v109.m128_f32[0] = _mm_shuffle_ps(v109, v109, 255).m128_f32[0];
              *((float *)v104 + 1) = v113;
              *((float *)v104 + 2) = (float)((float)(_mm_shuffle_ps(v110, v110, 170).m128_f32[0] - v114) * v111) + v114;
              *((float *)v104 + 3) = (float)((float)(_mm_shuffle_ps(v110, v110, 255).m128_f32[0] - v109.m128_f32[0])
                                           * v111)
                                   + v109.m128_f32[0];
              *((_DWORD *)a2 + 2) -= 2;
              goto LABEL_348;
            }
            v471 = 3078;
          }
          else
          {
            v471 = 3047;
          }
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v471,
          0LL);
        v28 = 718;
        goto LABEL_710;
      case 0x1C:
        if ( !*((_DWORD *)a2 + 2) )
        {
          v472 = 3114;
          goto LABEL_557;
        }
        v115 = CExpressionValueStack::PeekStackValue(a2, 0);
        v116 = *((_DWORD *)v115 + 18);
        if ( v116 == 18 )
        {
          v132 = *(_DWORD *)v115 & v6;
          *((_DWORD *)v115 + 18) = 18;
          *(_DWORD *)v115 = v132;
          goto LABEL_348;
        }
        if ( v116 != 35 )
        {
          switch ( v116 )
          {
            case '4':
              v558 = *(_QWORD *)v115;
              v126 = *(float *)&v558;
              v127 = _mm_shuffle_ps((__m128)v558, (__m128)v558, 85).m128_f32[0];
              *((_DWORD *)v115 + 18) = 18;
              v128 = (float)((float)(v127 * v127) + (float)(v126 * v126))
                   + (float)(*((float *)v115 + 2) * *((float *)v115 + 2));
              if ( v128 < 0.0 )
                *(float *)v115 = sqrtf_0(v128);
              else
                *(float *)v115 = fsqrt(v128);
              goto LABEL_348;
            case 'E':
              v122 = *(__m128 *)v115;
              *((_DWORD *)v115 + 18) = 18;
              v123 = _mm_shuffle_ps(v122, v122, 85).m128_f32[0];
              v124 = _mm_shuffle_ps(v122, v122, 170).m128_f32[0];
              v125 = (float)(v123 * v123) + (float)(v122.m128_f32[0] * v122.m128_f32[0]);
              v122.m128_f32[0] = _mm_shuffle_ps(v122, v122, 255).m128_f32[0];
              v121 = (float)(v125 + (float)(v124 * v124)) + (float)(v122.m128_f32[0] * v122.m128_f32[0]);
              if ( v121 >= 0.0 )
                goto LABEL_183;
              goto LABEL_184;
            case 'G':
              v117 = *(float *)v115;
              v118 = *((float *)v115 + 1);
              v119 = *((float *)v115 + 2);
              v120 = *((float *)v115 + 3);
              *((_DWORD *)v115 + 18) = 18;
              v121 = (float)((float)((float)(v118 * v118) + (float)(v117 * v117)) + (float)(v119 * v119))
                   + (float)(v120 * v120);
              if ( v121 >= 0.0 )
              {
LABEL_183:
                *(float *)v115 = fsqrt(v121);
                goto LABEL_348;
              }
LABEL_184:
              *(float *)v115 = sqrtf_0(v121);
              goto LABEL_348;
          }
          v472 = 3172;
LABEL_557:
          v27 = -2147467259;
          MilInstrumentationCheckHR_MaybeFailFast(
            20,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            -2147467259,
            v472,
            0LL);
          v28 = 722;
          goto LABEL_710;
        }
        v129 = *(float *)v115;
        v130 = *((float *)v115 + 1);
        *((_DWORD *)v115 + 18) = 18;
        v131 = (float)(v129 * v129) + (float)(v130 * v130);
        goto LABEL_191;
      case 0x1D:
        if ( !*((_DWORD *)a2 + 2) )
        {
          v473 = 3205;
          goto LABEL_560;
        }
        v133 = CExpressionValueStack::PeekStackValue(a2, 0);
        v134 = *((_DWORD *)v133 + 18);
        switch ( v134 )
        {
          case 18:
            v20 = 4;
            v147 = *(float *)v133 * *(float *)v133;
            *((_DWORD *)v133 + 18) = 18;
            *(float *)v133 = v147;
            break;
          case 35:
            v145 = *(float *)v133;
            v146 = *((float *)v133 + 1);
            v20 = 4;
            *((_DWORD *)v133 + 18) = 18;
            *(float *)v133 = (float)(v145 * v145) + (float)(v146 * v146);
            break;
          case 52:
            v20 = 4;
            v143 = _mm_shuffle_ps((__m128)*(unsigned __int64 *)v133, (__m128)*(unsigned __int64 *)v133, 85).m128_f32[0];
            v559 = *(_QWORD *)v133;
            v144 = *(float *)&v559;
            *((_DWORD *)v133 + 18) = 18;
            *(float *)v133 = (float)((float)(v143 * v143) + (float)(v144 * v144))
                           + (float)(*((float *)v133 + 2) * *((float *)v133 + 2));
            break;
          case 69:
            v139 = *(__m128 *)v133;
            v20 = 4;
            *((_DWORD *)v133 + 18) = 18;
            v140 = _mm_shuffle_ps(v139, v139, 85).m128_f32[0];
            v141 = _mm_shuffle_ps(v139, v139, 170).m128_f32[0];
            v142 = (float)(v139.m128_f32[0] * v139.m128_f32[0]) + (float)(v140 * v140);
            v139.m128_f32[0] = _mm_shuffle_ps(v139, v139, 255).m128_f32[0];
            *(float *)v133 = (float)(v142 + (float)(v141 * v141)) + (float)(v139.m128_f32[0] * v139.m128_f32[0]);
            break;
          case 71:
            v135 = *((float *)v133 + 1);
            v136 = *(float *)v133;
            v137 = *((float *)v133 + 2);
            v138 = *((float *)v133 + 3);
            v20 = 4;
            *((_DWORD *)v133 + 18) = 18;
            *(float *)v133 = (float)((float)((float)(v135 * v135) + (float)(v136 * v136)) + (float)(v137 * v137))
                           + (float)(v138 * v138);
            break;
          default:
            v473 = 3265;
LABEL_560:
            v27 = -2147467259;
            MilInstrumentationCheckHR_MaybeFailFast(
              20,
              &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
              1u,
              -2147467259,
              v473,
              0LL);
            v28 = 726;
            goto LABEL_710;
        }
        goto LABEL_350;
      case 0x1E:
        v27 = CExpressionValueStack::Distance(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 730;
        goto LABEL_710;
      case 0x1F:
        v27 = CExpressionValueStack::DistanceSquared(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 734;
        goto LABEL_710;
      case 0x20:
        if ( *((_DWORD *)a2 + 2) )
        {
          v148 = CExpressionValueStack::PeekStackValue(a2, 0);
          v149 = *((_DWORD *)v148 + 18);
          switch ( v149 )
          {
            case '#':
              v523[1] = 0LL;
              D3DXVec2Normalize((struct D2DVector2 *)&v523[1], v148);
              v154 = v523[1];
              *((_DWORD *)v148 + 18) = 35;
              *(_QWORD *)v148 = v154;
              goto LABEL_348;
            case '4':
              v533 = 0LL;
              v534 = 0;
              D3DXVec3Normalize((struct D2DVector3 *)&v533, v148);
              v152 = v533;
              v153 = v534;
              *((_DWORD *)v148 + 18) = 52;
              *(_QWORD *)v148 = v152;
              *((_DWORD *)v148 + 2) = v153;
              goto LABEL_348;
            case 'E':
              *(_OWORD *)&v523[1] = 0LL;
              D3DXVec4Normalize((struct D2DVector4 *)&v523[1], v148);
              v151 = *(_OWORD *)&v523[1];
              *((_DWORD *)v148 + 18) = 69;
              *(_OWORD *)v148 = v151;
              goto LABEL_348;
            case 'G':
              D3DXQuaternionNormalize((struct D2DQuaternion *)&v589, v148);
              v150 = v589;
              *((_DWORD *)v148 + 18) = 71;
              *(_OWORD *)v148 = v150;
              goto LABEL_348;
          }
          v474 = 3580;
        }
        else
        {
          v474 = 3523;
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v474,
          0LL);
        v28 = 738;
        goto LABEL_710;
      case 0x21:
        if ( *((_DWORD *)a2 + 2) < 3u )
        {
          v475 = 3611;
        }
        else
        {
          v155 = CExpressionValueStack::PeekStackValue(a2, -2);
          v156 = CExpressionValueStack::PeekStackValue(a2, -1);
          v157 = CExpressionValueStack::PeekStackValue(a2, 0);
          v158 = *((_DWORD *)v155 + 18);
          if ( *((_DWORD *)v157 + 18) == 18 && v158 == *((_DWORD *)v156 + 18) )
          {
            if ( v158 == 71 )
            {
              v159 = *((float *)v156 + 1);
              v160 = *(float *)v156;
              v161 = *((float *)v156 + 2);
              v162 = *((float *)v156 + 3);
              v163 = *((float *)v155 + 1);
              v164 = *(float *)v155;
              v165 = *((float *)v155 + 2);
              v166 = *((float *)v155 + 3);
              v167 = *(float *)v157;
              v168 = v8 - *(float *)v157;
              v169 = (float)(*(float *)v155 * *(float *)v156) + (float)(v163 * v159);
              *(float *)&v528 = v159;
              *(float *)&v522 = v160;
              *(float *)v523 = v161;
              *(float *)&v523[1] = v162;
              v170 = (float)(v169 + (float)(v165 * v161)) + (float)(v166 * v162);
              if ( v170 < v11.m128_f32[0] )
                v171 = FLOAT_N1_0;
              else
                v171 = v8;
              v172 = v170 * v171;
              if ( (float)(v8 - v172) > 0.00000011920929 )
              {
                v173 = v8 - (float)(v172 * v172);
                if ( v173 < 0.0 )
                  v174 = sqrtf_0(v173);
                else
                  v174 = fsqrt(v173);
                v175 = atan2f_0(v174, v172);
                v176 = v175 * v167;
                v168 = sinf_0(v175 * v168) * (float)(1.0 / v174);
                v177 = sinf_0(v176);
                v160 = *(float *)&v522;
                v159 = *(float *)&v528;
                v161 = *(float *)v523;
                v162 = *(float *)&v523[1];
                v167 = v177 * (float)(1.0 / v174);
              }
              v178 = v167 * v171;
              v11 = 0LL;
              *((_DWORD *)v155 + 18) = 71;
              *(float *)v155 = (float)(v164 * v168) + (float)(v160 * v178);
              *((float *)v155 + 1) = (float)(v163 * v168) + (float)(v159 * v178);
              *((float *)v155 + 2) = (float)(v165 * v168) + (float)(v161 * v178);
              *((float *)v155 + 3) = (float)(v166 * v168) + (float)(v162 * v178);
              *((_DWORD *)a2 + 2) -= 2;
              v4 = _xmm;
              goto LABEL_348;
            }
            v475 = 3668;
          }
          else
          {
            v475 = 3636;
          }
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v475,
          0LL);
        v28 = 742;
        goto LABEL_710;
      case 0x22:
        if ( *((_DWORD *)a2 + 2) < 2u )
        {
          v476 = 3701;
        }
        else
        {
          v179 = CExpressionValueStack::PeekStackValue(a2, -1);
          v180 = CExpressionValueStack::PeekStackValue(a2, 0);
          v181 = *((_DWORD *)v179 + 18);
          if ( v181 == *((_DWORD *)v180 + 18) )
          {
            if ( v181 == 71 )
            {
              D3DXQuaternionMultiply((struct D2DQuaternion *)&v588, v179, v180);
              v182 = v588;
              *((_DWORD *)v179 + 18) = 71;
              *(_OWORD *)v179 = v182;
              --*((_DWORD *)a2 + 2);
              goto LABEL_348;
            }
            v476 = 3754;
          }
          else
          {
            v476 = 3724;
          }
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v476,
          0LL);
        v28 = 746;
        goto LABEL_710;
      case 0x23:
        if ( *((_DWORD *)a2 + 2) )
        {
          v183 = CExpressionValueStack::PeekStackValue(a2, 0);
          v184 = v183;
          if ( *((_DWORD *)v183 + 18) == 18 )
          {
            v185 = sinf_0(*(float *)v183);
            *((_DWORD *)v184 + 18) = 18;
            *(float *)v184 = v185;
            goto LABEL_348;
          }
          v477 = 3816;
        }
        else
        {
          v477 = 3790;
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v477,
          0LL);
        v28 = 750;
        goto LABEL_710;
      case 0x24:
        if ( *((_DWORD *)a2 + 2) )
        {
          v186 = CExpressionValueStack::PeekStackValue(a2, 0);
          if ( *((_DWORD *)v186 + 18) == 18 )
          {
            v187 = *(float *)v186;
            if ( *(float *)v186 >= v9 && v8 >= v187 )
            {
              *((_DWORD *)v186 + 18) = 18;
              *(float *)v186 = asinf_0(v187);
              goto LABEL_348;
            }
            v478 = 3877;
          }
          else
          {
            v478 = 3892;
          }
        }
        else
        {
          v478 = 3850;
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v478,
          0LL);
        v28 = 754;
        goto LABEL_710;
      case 0x25:
        if ( *((_DWORD *)a2 + 2) )
        {
          v188 = CExpressionValueStack::PeekStackValue(a2, 0);
          v189 = v188;
          if ( *((_DWORD *)v188 + 18) == 18 )
          {
            v190 = cosf_0(*(float *)v188);
            *((_DWORD *)v189 + 18) = 18;
            *(float *)v189 = v190;
            goto LABEL_348;
          }
          v479 = 3954;
        }
        else
        {
          v479 = 3926;
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v479,
          0LL);
        v28 = 758;
        goto LABEL_710;
      case 0x26:
        if ( *((_DWORD *)a2 + 2) )
        {
          v191 = CExpressionValueStack::PeekStackValue(a2, 0);
          if ( *((_DWORD *)v191 + 18) == 18 )
          {
            v192 = *(float *)v191;
            if ( *(float *)v191 >= v9 && v8 >= v192 )
            {
              *((_DWORD *)v191 + 18) = 18;
              *(float *)v191 = acosf_0(v192);
              goto LABEL_348;
            }
            v480 = 4015;
          }
          else
          {
            v480 = 4030;
          }
        }
        else
        {
          v480 = 3988;
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v480,
          0LL);
        v28 = 762;
        goto LABEL_710;
      case 0x27:
        if ( *((_DWORD *)a2 + 2) )
        {
          v193 = CExpressionValueStack::PeekStackValue(a2, 0);
          v194 = v193;
          if ( *((_DWORD *)v193 + 18) == 18 )
          {
            v195 = tanf_0(*(float *)v193);
            if ( !_isnan(v195) )
            {
              *((_DWORD *)v194 + 18) = 18;
              *(float *)v194 = v195;
              goto LABEL_348;
            }
            v481 = 4091;
          }
          else
          {
            v481 = 4106;
          }
        }
        else
        {
          v481 = 4064;
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v481,
          0LL);
        v28 = 766;
        goto LABEL_710;
      case 0x28:
        if ( *((_DWORD *)a2 + 2) )
        {
          v196 = CExpressionValueStack::PeekStackValue(a2, 0);
          v197 = v196;
          if ( *((_DWORD *)v196 + 18) == 18 )
          {
            v198 = atanf_0(*(float *)v196);
            *((_DWORD *)v197 + 18) = 18;
            *(float *)v197 = v198;
            goto LABEL_348;
          }
          v482 = 4169;
        }
        else
        {
          v482 = 4140;
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v482,
          0LL);
        v28 = 770;
        goto LABEL_710;
      case 0x29:
        if ( *((_DWORD *)a2 + 2) )
        {
          v199 = CExpressionValueStack::PeekStackValue(a2, 0);
          v200 = v199;
          if ( *((_DWORD *)v199 + 18) == 18 )
          {
            v201 = ceilf_0(*(float *)v199);
            *((_DWORD *)v200 + 18) = 18;
            *(float *)v200 = v201;
            goto LABEL_348;
          }
          v483 = 4231;
        }
        else
        {
          v483 = 4203;
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v483,
          0LL);
        v28 = 774;
        goto LABEL_710;
      case 0x2A:
        if ( *((_DWORD *)a2 + 2) )
        {
          v202 = CExpressionValueStack::PeekStackValue(a2, 0);
          v203 = v202;
          if ( *((_DWORD *)v202 + 18) == 18 )
          {
            v204 = floorf_0(*(float *)v202);
            *((_DWORD *)v203 + 18) = 18;
            *(float *)v203 = v204;
            goto LABEL_348;
          }
          v484 = 4293;
        }
        else
        {
          v484 = 4265;
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v484,
          0LL);
        v28 = 778;
        goto LABEL_710;
      case 0x2B:
        v27 = CExpressionValueStack::Round(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 782;
        goto LABEL_710;
      case 0x2C:
        if ( *((_DWORD *)a2 + 2) )
        {
          v205 = CExpressionValueStack::PeekStackValue(a2, 0);
          v115 = v205;
          if ( *((_DWORD *)v205 + 18) == 18 )
          {
            v131 = *(float *)v205;
            if ( *(float *)v205 >= v11.m128_f32[0] )
            {
              *((_DWORD *)v205 + 18) = 18;
LABEL_191:
              if ( v131 < 0.0 )
                *(float *)v115 = sqrtf_0(v131);
              else
                *(float *)v115 = fsqrt(v131);
              goto LABEL_348;
            }
            v485 = 4428;
          }
          else
          {
            v485 = 4443;
          }
        }
        else
        {
          v485 = 4406;
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v485,
          0LL);
        v28 = 786;
        goto LABEL_710;
      case 0x2D:
        if ( *((_DWORD *)a2 + 2) < 2u )
        {
          v486 = 4474;
        }
        else
        {
          v206 = CExpressionValueStack::PeekStackValue(a2, -1);
          v207 = CExpressionValueStack::PeekStackValue(a2, 0);
          v208 = *((_DWORD *)v206 + 18);
          if ( v208 == *((_DWORD *)v207 + 18) )
          {
            if ( v208 == 18 )
            {
              v209 = powf_0(*(float *)v206, *(float *)v207);
              if ( !_isnan(v209) )
              {
                *((_DWORD *)v206 + 18) = 18;
                *(float *)v206 = v209;
                --*((_DWORD *)a2 + 2);
                goto LABEL_348;
              }
              v486 = 4517;
            }
            else
            {
              v486 = 4531;
            }
          }
          else
          {
            v486 = 4497;
          }
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v486,
          0LL);
        v28 = 790;
        goto LABEL_710;
      case 0x2E:
        if ( !*((_DWORD *)a2 + 2) )
        {
          v487 = 4560;
          goto LABEL_610;
        }
        v210 = CExpressionValueStack::PeekStackValue(a2, 0);
        if ( *((_DWORD *)v210 + 18) != 18 )
        {
          v487 = 4587;
LABEL_610:
          v27 = -2147467259;
          MilInstrumentationCheckHR_MaybeFailFast(
            20,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            -2147467259,
            v487,
            0LL);
          v28 = 794;
          goto LABEL_710;
        }
        v20 = 4;
        v211 = *(float *)v210 * *(float *)v210;
        *((_DWORD *)v210 + 18) = 18;
        *(float *)v210 = v211;
        goto LABEL_350;
      case 0x2F:
        if ( *((_DWORD *)a2 + 2) )
        {
          v212 = CExpressionValueStack::PeekStackValue(a2, 0);
          v213 = v212;
          if ( *((_DWORD *)v212 + 18) == 18 )
          {
            v214 = log10f_0(*(float *)v212);
            if ( !_isnan(v214) )
            {
              *((_DWORD *)v213 + 18) = 18;
              *(float *)v213 = v214;
              goto LABEL_348;
            }
            v488 = 4640;
          }
          else
          {
            v488 = 4655;
          }
        }
        else
        {
          v488 = 4614;
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v488,
          0LL);
        v28 = 798;
        goto LABEL_710;
      case 0x30:
        if ( *((_DWORD *)a2 + 2) )
        {
          v215 = CExpressionValueStack::PeekStackValue(a2, 0);
          v216 = v215;
          if ( *((_DWORD *)v215 + 18) == 18 )
          {
            v217 = logf_0(*(float *)v215);
            if ( !_isnan(v217) )
            {
              *((_DWORD *)v216 + 18) = 18;
              *(float *)v216 = v217;
              goto LABEL_348;
            }
            v489 = 4708;
          }
          else
          {
            v489 = 4723;
          }
        }
        else
        {
          v489 = 4682;
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v489,
          0LL);
        v28 = 802;
        goto LABEL_710;
      case 0x31:
        if ( !*((_DWORD *)a2 + 2) )
        {
          v490 = 4750;
          goto LABEL_621;
        }
        v218 = CExpressionValueStack::PeekStackValue(a2, 0);
        if ( *((_DWORD *)v218 + 18) != 18 )
        {
          v490 = 4776;
LABEL_621:
          v27 = -2147467259;
          MilInstrumentationCheckHR_MaybeFailFast(
            20,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            -2147467259,
            v490,
            0LL);
          v28 = 806;
          goto LABEL_710;
        }
        v20 = 4;
        v219 = *(float *)v218 * v13;
        *((_DWORD *)v218 + 18) = 18;
        *(float *)v218 = v219;
        goto LABEL_350;
      case 0x32:
        if ( !*((_DWORD *)a2 + 2) )
        {
          v491 = 4802;
          goto LABEL_624;
        }
        v220 = CExpressionValueStack::PeekStackValue(a2, 0);
        if ( *((_DWORD *)v220 + 18) != 18 )
        {
          v491 = 4829;
LABEL_624:
          v27 = -2147467259;
          MilInstrumentationCheckHR_MaybeFailFast(
            20,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            -2147467259,
            v491,
            0LL);
          v28 = 810;
          goto LABEL_710;
        }
        v20 = 4;
        v221 = *(float *)v220 * v14;
        *((_DWORD *)v220 + 18) = 18;
        *(float *)v220 = v221;
        goto LABEL_350;
      case 0x33:
        v429 = Src;
        LODWORD(v523[1]) = v520 + 12 + *(_DWORD *)(v19 + 4) + *(_DWORD *)(v19 + 8);
        v430 = v625;
        v528 = Src;
        v431 = (v625 - (_BYTE *)Src) >> 3;
        v523[0] = v431;
        if ( (v626 - v625) >> 3 )
          goto LABEL_483;
        if ( v431 + 1 >= v431 )
        {
          v433 = detail::liberal_expansion_policy::expand(0LL, (v626 - (_BYTE *)Src) >> 3, v431 + 1);
          v434 = 8 * v433;
          if ( !is_mul_ok(v433, 8uLL) )
            v434 = v432;
          v435 = operator new[](v434);
          v436 = Src;
          *((_QWORD *)&v551 + 1) = v431;
          v437 = v435;
          *(_QWORD *)&v551 = v435;
          v438 = v625 - (_BYTE *)Src;
          v552 = 0LL;
          v549 = v551;
          v550 = 0LL;
          v439 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<wil::com_ptr_t<IUnknown,wil::err_returncode_policy> *> &,__int64>(
                           &v549,
                           (v625 - (_BYTE *)Src) >> 3);
          memmove_0(v439, v436, v438);
          v440 = Src;
          v244 = Src == v627;
          v550 = (__int64)((__int64)v439 + v438 - v549) >> 3;
          Src = v437;
          if ( v244 )
            v440 = 0LL;
          operator delete(v440);
          v429 = Src;
          v431 = v523[0];
          v19 = v522;
          v528 = Src;
          v430 = (char *)Src + 8 * v523[0];
          v626 = (char *)Src + 8 * v433;
          v625 = v430;
LABEL_483:
          *((_QWORD *)&v547 + 1) = 1LL;
          v548 = 0LL;
          v441 = ((char *)v430 - v429) >> 3;
          v523[0] = v441;
          v442 = v441 - v431;
          v556 = 0LL;
          *(_QWORD *)&v547 = &v429[8 * v441];
          if ( !(_QWORD)v547 )
LABEL_718:
            _invalid_parameter_noinfo_noreturn();
          v556 = 1LL;
          v443 = v441 - v431;
          if ( v442 > 1 )
            v443 = 1LL;
          v545 = v547;
          v546 = 1LL;
          v444 = 8 * v443;
          v445 = &v430[v444 / 0xFFFFFFFFFFFFFFF8uLL];
          if ( v430 != &v430[v444 / 0xFFFFFFFFFFFFFFF8uLL] )
          {
            v446 = *((_QWORD *)&v545 + 1);
            v447 = 1LL;
            v448 = v545;
            v449 = v546;
            do
            {
              --v430;
              if ( !v448 )
                goto LABEL_718;
              if ( !v447 )
                goto LABEL_718;
              v447 = v449 - 1;
              v449 = v447;
              if ( v447 >= v446 )
                goto LABEL_718;
              *(_QWORD *)(v448 + 8 * v447) = *v430;
            }
            while ( v430 != v445 );
            v430 = v625;
            v441 = v523[0];
          }
          if ( v442 > 1 )
          {
            v555[0] = v429;
            v555[1] = v441;
            v555[2] = 0LL;
            v450 = stdext::checked_array_iterator<CExpression::NodesDataBookmark *>::operator+(v555, v622);
            v451 = &v429[8 * v431];
            v553 = *(_OWORD *)v450;
            v554 = *(_QWORD *)(v450 + 16);
            v452 = 8LL * v523[0] - 8 * v431 - 8;
            v453 = std::_Get_unwrapped_n<stdext::checked_array_iterator<wil::com_ptr_t<IUnknown,wil::err_returncode_policy> *> &,__int64>(
                     &v553,
                     -(v452 >> 3));
            v454 = memmove_0((void *)(v453 - v452), v451, v452);
            v429 = v528;
            v554 = ((__int64)v454 - (__int64)v553) >> 3;
            v430 = v625;
          }
          v455 = v523[1];
          v625 = v430 + 1;
          *(_DWORD *)&v429[8 * v431] = v523[1];
          *(_DWORD *)&v429[8 * v431 + 4] = v521;
          if ( !*((_DWORD *)a2 + 2) )
          {
            v515 = 7727;
            goto LABEL_709;
          }
          v456 = CExpressionValueStack::PeekStackValue(a2, 0);
          if ( *((_DWORD *)v456 + 18) != 17 )
            goto LABEL_707;
          v457 = *(_BYTE *)v456;
          --*((_DWORD *)a2 + 2);
          v458 = *(_DWORD *)(v19 + 4);
          if ( v457 )
          {
            v20 = 12;
            v521 = v520 + 12 + v458;
          }
          else
          {
            v20 = v458 + 12;
            v521 = v455;
          }
          goto LABEL_349;
        }
        std::_Xoverflow_error("overflow");
        __debugbreak();
LABEL_707:
        v515 = 7746;
LABEL_709:
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v515,
          0LL);
        v28 = 1033;
LABEL_710:
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803BC5C0, 2u, v27, v28, 0LL);
        if ( (*(_DWORD *)(*((_QWORD *)this + 39) + 4LL) & 0x40000000) != 0 )
        {
          v516 = *((unsigned int *)this + 90);
          if ( (unsigned int)v516 >= 4
            && v520 <= (unsigned __int64)(v516 - 4)
            && (unsigned int)dword_1803F8D18 > 4
            && (byte_1803F8D28 & 4) != 0
            && (qword_1803F8D30 & 4) == qword_1803F8D30 )
          {
            v529 = v27;
            v532 = *(_DWORD *)(v520 + i);
            TracingCookie = CBaseExpression::GetTracingCookie(this);
            v643 = 4LL;
            v642 = &v529;
            v641 = 4LL;
            v640 = &v532;
            v639 = 4LL;
            p_TracingCookie = &TracingCookie;
            tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803F8D18, byte_1803CDF17, 0LL, 0LL, 5u, &v637);
          }
        }
        v259 = v625;
        v260 = Src;
LABEL_720:
        if ( (v259 - v260) >> 3 )
        {
          detail::vector_facade<CExpression::NodesDataBookmark,detail::buffer_impl<CExpression::NodesDataBookmark,16,1,detail::liberal_expansion_policy>>::clear_region(
            &Src,
            0LL);
          v260 = Src;
        }
        Src = 0LL;
        if ( v260 == v627 )
          v260 = 0LL;
        operator delete(v260);
        return (unsigned int)v27;
      case 0x35:
        v27 = CExpressionValueStack::Equals(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 646;
        goto LABEL_710;
      case 0x36:
        v27 = CExpressionValueStack::NotEquals(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 650;
        goto LABEL_710;
      case 0x37:
        v27 = CExpressionValueStack::LessThan(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 654;
        goto LABEL_710;
      case 0x38:
        v27 = CExpressionValueStack::LessThanEquals(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 658;
        goto LABEL_710;
      case 0x39:
        v27 = CExpressionValueStack::GreaterThan(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 662;
        goto LABEL_710;
      case 0x3A:
        v27 = CExpressionValueStack::GreaterThanEquals(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 666;
        goto LABEL_710;
      case 0x3B:
        v27 = CExpressionValueStack::And(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 670;
        goto LABEL_710;
      case 0x3C:
        v87 = *((_DWORD *)a2 + 2);
        if ( v87 < 2 )
        {
          v468 = 1888;
        }
        else
        {
          v88 = v87 - 2;
          if ( (unsigned int)v88 < *((_DWORD *)a2 + 10) )
          {
            v91 = (__int128 *)(*((_QWORD *)a2 + 2) + 80 * v88);
          }
          else
          {
            v16 = qword_1803FA990;
            v599 = 0LL;
            v89 = 0;
            v600 = 0LL;
            v90 = 0LL;
            v601 = 0LL;
            v602 = 0LL;
            v604 = 0;
            CExpressionValueStack::s_emptyValue = 0LL;
            xmmword_1803FA960 = 0LL;
            xmmword_1803FA970 = 0LL;
            xmmword_1803FA980 = 0LL;
            v603 = 0LL;
            qword_1803FA990 = 0LL;
            if ( v16 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
              v89 = v604;
              v90 = v603;
            }
            dword_1803FA998 = v89;
            if ( v90 )
              (*(void (__fastcall **)(__int64, __int64, __int16 *, __int64))(*(_QWORD *)v90 + 16LL))(v90, v16, v17, v18);
            v91 = &CExpressionValueStack::s_emptyValue;
          }
          v92 = (unsigned int)(*((_DWORD *)a2 + 2) - 1);
          if ( (unsigned int)v92 < *((_DWORD *)a2 + 10) )
          {
            v95 = (__int128 *)(*((_QWORD *)a2 + 2) + 80 * v92);
          }
          else
          {
            v16 = qword_1803FA990;
            v605 = 0LL;
            v93 = 0;
            v606 = 0LL;
            v94 = 0LL;
            v607 = 0LL;
            v608 = 0LL;
            v610 = 0;
            CExpressionValueStack::s_emptyValue = 0LL;
            xmmword_1803FA960 = 0LL;
            xmmword_1803FA970 = 0LL;
            xmmword_1803FA980 = 0LL;
            v609 = 0LL;
            qword_1803FA990 = 0LL;
            if ( v16 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
              v93 = v610;
              v94 = v609;
            }
            dword_1803FA998 = v93;
            if ( v94 )
              (*(void (__fastcall **)(__int64, __int64, __int16 *, __int64))(*(_QWORD *)v94 + 16LL))(v94, v16, v17, v18);
            v95 = &CExpressionValueStack::s_emptyValue;
          }
          v96 = *((_DWORD *)v91 + 18);
          if ( v96 == *((_DWORD *)v95 + 18) )
          {
            if ( v96 == 17 )
            {
              if ( *(_BYTE *)v91 || *(_BYTE *)v95 )
              {
                *((_DWORD *)v91 + 18) = 17;
                *(_BYTE *)v91 = 1;
                --*((_DWORD *)a2 + 2);
              }
              else
              {
                *((_DWORD *)v91 + 18) = 17;
                *(_BYTE *)v91 = 0;
                --*((_DWORD *)a2 + 2);
              }
              goto LABEL_348;
            }
            v468 = 1935;
          }
          else
          {
            v468 = 1916;
          }
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v468,
          0LL);
        v28 = 674;
        goto LABEL_710;
      case 0x3D:
        if ( !*((_DWORD *)a2 + 2) )
        {
          v469 = 1973;
          goto LABEL_545;
        }
        v97 = CExpressionValueStack::PeekStackValue(a2, 0);
        if ( *((_DWORD *)v97 + 18) != 17 )
        {
          v469 = 2004;
LABEL_545:
          v27 = -2147467259;
          MilInstrumentationCheckHR_MaybeFailFast(
            20,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            -2147467259,
            v469,
            0LL);
          v28 = 678;
          goto LABEL_710;
        }
        v20 = 4;
        *((_DWORD *)v97 + 18) = 17;
        *(_BYTE *)v97 = *(_BYTE *)v97 == 0;
        goto LABEL_350;
      case 0x3E:
        if ( *((_DWORD *)a2 + 2) < 2u )
        {
          v492 = 4858;
        }
        else
        {
          v222 = CExpressionValueStack::PeekStackValue(a2, -1);
          v223 = CExpressionValueStack::PeekStackValue(a2, 0);
          if ( *((_DWORD *)v222 + 18) == 18 && *((_DWORD *)v223 + 18) == 18 )
          {
            v224 = *(_DWORD *)v222;
            v225 = *(_DWORD *)v223;
            *((_DWORD *)v222 + 18) = 35;
            *(_DWORD *)v222 = v224;
            *((_DWORD *)v222 + 1) = v225;
            --*((_DWORD *)a2 + 2);
            goto LABEL_348;
          }
          v492 = 4872;
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v492,
          0LL);
        v28 = 814;
        goto LABEL_710;
      case 0x3F:
        v27 = CExpressionValueStack::Vector3(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 818;
        goto LABEL_710;
      case 0x40:
        if ( *((_DWORD *)a2 + 2) < 4u )
        {
          v493 = 4970;
        }
        else
        {
          v226 = CExpressionValueStack::PeekStackValue(a2, -3);
          v227 = CExpressionValueStack::PeekStackValue(a2, -2);
          v228 = CExpressionValueStack::PeekStackValue(a2, -1);
          v229 = CExpressionValueStack::PeekStackValue(a2, 0);
          if ( *((_DWORD *)v226 + 18) == 18
            && *((_DWORD *)v227 + 18) == 18
            && *((_DWORD *)v228 + 18) == 18
            && *((_DWORD *)v229 + 18) == 18 )
          {
            v230 = *(_DWORD *)v226;
            v231 = *(_DWORD *)v227;
            v232 = *(_DWORD *)v228;
            v233 = *(_DWORD *)v229;
            *((_DWORD *)v226 + 18) = 69;
LABEL_305:
            *(_DWORD *)v226 = v230;
            *((_DWORD *)v226 + 1) = v231;
            *((_DWORD *)v226 + 2) = v232;
            *((_DWORD *)v226 + 3) = v233;
            *((_DWORD *)a2 + 2) -= 3;
            goto LABEL_348;
          }
          v493 = 4988;
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v493,
          0LL);
        v28 = 822;
        goto LABEL_710;
      case 0x41:
        v27 = CExpressionValueStack::ColorHsl(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 826;
        goto LABEL_710;
      case 0x42:
        v27 = CExpressionValueStack::ColorRgb(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 830;
        goto LABEL_710;
      case 0x43:
        if ( *((_DWORD *)a2 + 2) < 4u )
        {
          v494 = 5198;
        }
        else
        {
          v226 = CExpressionValueStack::PeekStackValue(a2, -3);
          v234 = CExpressionValueStack::PeekStackValue(a2, -2);
          v235 = CExpressionValueStack::PeekStackValue(a2, -1);
          v236 = CExpressionValueStack::PeekStackValue(a2, 0);
          if ( *((_DWORD *)v226 + 18) == 18
            && *((_DWORD *)v234 + 18) == 18
            && *((_DWORD *)v235 + 18) == 18
            && *((_DWORD *)v236 + 18) == 18 )
          {
            v230 = *(_DWORD *)v226;
            v231 = *(_DWORD *)v234;
            v232 = *(_DWORD *)v235;
            v233 = *(_DWORD *)v236;
            *((_DWORD *)v226 + 18) = 71;
            goto LABEL_305;
          }
          v494 = 5216;
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v494,
          0LL);
        v28 = 834;
        goto LABEL_710;
      case 0x44:
        v237 = *((_DWORD *)a2 + 2) < 6u;
        v634 = 0LL;
        v635 = 0LL;
        v636 = 0LL;
        if ( v237 )
        {
          v495 = 5255;
        }
        else
        {
          v238 = 0;
          v239 = (__int128 **)&v634;
          while ( 1 )
          {
            v240 = (unsigned int)(v238 + *((_DWORD *)a2 + 2) - 6);
            if ( (unsigned int)v240 < *((_DWORD *)a2 + 10) )
            {
              v243 = (__int128 *)(*((_QWORD *)a2 + 2) + 80 * v240);
            }
            else
            {
              v241 = qword_1803FA990;
              v611 = 0LL;
              v242 = 0;
              v612 = 0LL;
              v613 = 0LL;
              v614 = 0LL;
              v616 = 0;
              CExpressionValueStack::s_emptyValue = 0LL;
              xmmword_1803FA960 = 0LL;
              xmmword_1803FA970 = 0LL;
              xmmword_1803FA980 = 0LL;
              v615 = 0LL;
              qword_1803FA990 = 0LL;
              if ( v241 )
              {
                (*(void (__fastcall **)(__int64, __int64, __int16 *, __int64))(*(_QWORD *)v241 + 16LL))(
                  v241,
                  v16,
                  v17,
                  v18);
                v242 = v616;
              }
              dword_1803FA998 = v242;
              Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v615);
              v243 = &CExpressionValueStack::s_emptyValue;
            }
            v244 = *((_DWORD *)v243 + 18) == 18;
            *v239 = v243;
            if ( !v244 )
              break;
            ++v238;
            ++v239;
            if ( v238 >= 6 )
            {
              v245 = (_DWORD *)v634;
              v246 = **((_DWORD **)&v634 + 1);
              v247 = *(_DWORD *)v634;
              v248 = *(_DWORD *)v635;
              v249 = **((_DWORD **)&v635 + 1);
              v250 = *(_DWORD *)v636;
              v251 = **((_DWORD **)&v636 + 1);
              *(_DWORD *)(v634 + 72) = 104;
              *v245 = v247;
              v245[1] = v246;
              v245[2] = v248;
              v245[3] = v249;
              v245[4] = v250;
              v245[5] = v251;
              *((_DWORD *)a2 + 2) -= 5;
              goto LABEL_348;
            }
          }
          v495 = 5269;
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v495,
          0LL);
        v28 = 838;
        goto LABEL_710;
      case 0x45:
        v27 = CExpressionValueStack::Matrix4x4(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 842;
        goto LABEL_710;
      case 0x46:
        v261 = *(_DWORD *)(v19 + 4);
        v518 = 8;
        if ( *((_DWORD *)a2 + 2) < v261 )
        {
          v497 = 5788;
        }
        else
        {
          if ( v261 == 1 )
          {
            v262 = CExpressionValueStack::PeekStackValue(a2, 0);
            v263 = v262;
            if ( *((_DWORD *)v262 + 18) != 18 )
              goto LABEL_640;
            D2D1MakeRotateMatrix(*(float *)v262 * v13, (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps(v11, v11), &v632);
            *((_DWORD *)v263 + 18) = 104;
            *(D2D1_MATRIX_3X2_F *)v263 = v632;
            *((_DWORD *)a2 + 2) = *((_DWORD *)a2 + 2);
            goto LABEL_348;
          }
          if ( v261 == 2 )
          {
            v264 = CExpressionValueStack::PeekStackValue(a2, -1);
            v265 = CExpressionValueStack::PeekStackValue(a2, 0);
            if ( *((_DWORD *)v264 + 18) == 18 && *((_DWORD *)v265 + 18) == 35 )
            {
              D2D1MakeRotateMatrix(
                *(float *)v264 * v13,
                (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps(
                                             (__m128)*(unsigned int *)v265,
                                             (__m128)*((unsigned int *)v265 + 1)),
                &v631);
              *((_DWORD *)v264 + 18) = 104;
              *(D2D1_MATRIX_3X2_F *)v264 = v631;
              --*((_DWORD *)a2 + 2);
              goto LABEL_348;
            }
          }
LABEL_640:
          v497 = 5830;
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v497,
          0LL);
        v28 = 889;
        goto LABEL_710;
      case 0x47:
        v518 = 8;
        v27 = CExpressionValueStack::Matrix3x2FromScale(a2, *(_DWORD *)(v19 + 4));
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 865;
        goto LABEL_710;
      case 0x48:
        v252 = *(_DWORD *)(v19 + 4);
        v518 = 8;
        if ( *((_DWORD *)a2 + 2) < v252 )
        {
          v496 = 5692;
        }
        else
        {
          if ( v252 == 2 )
          {
            v253 = CExpressionValueStack::PeekStackValue(a2, -1);
            v254 = CExpressionValueStack::PeekStackValue(a2, 0);
            if ( *((_DWORD *)v253 + 18) != 18 || *((_DWORD *)v254 + 18) != 18 )
              goto LABEL_637;
            D2D1MakeSkewMatrix(
              *(float *)v253 * v13,
              *(float *)v254 * v13,
              (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps(v11, v11),
              &v630);
            *((_DWORD *)v253 + 18) = 104;
            *(_OWORD *)v253 = *(_OWORD *)&v630.m11;
            v255 = *(_QWORD *)&v630.m[2][0];
            goto LABEL_346;
          }
          if ( v252 == 3 )
          {
            v253 = CExpressionValueStack::PeekStackValue(a2, -2);
            v256 = CExpressionValueStack::PeekStackValue(a2, -1);
            v257 = CExpressionValueStack::PeekStackValue(a2, 0);
            if ( *((_DWORD *)v253 + 18) == 18 && *((_DWORD *)v256 + 18) == 18 && *((_DWORD *)v257 + 18) == 35 )
            {
              D2D1MakeSkewMatrix(
                *(float *)v253 * v13,
                *(float *)v256 * v13,
                (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps(
                                             (__m128)*(unsigned int *)v257,
                                             (__m128)*((unsigned int *)v257 + 1)),
                &v629);
              *((_DWORD *)v253 + 18) = 104;
              *(_OWORD *)v253 = *(_OWORD *)&v629.m11;
              v255 = *(_QWORD *)&v629.m[2][0];
LABEL_346:
              *((_QWORD *)v253 + 2) = v255;
              v258 = 1 - v252;
LABEL_347:
              *((_DWORD *)a2 + 2) += v258;
              goto LABEL_348;
            }
          }
LABEL_637:
          v496 = 5754;
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v496,
          0LL);
        v28 = 881;
        goto LABEL_710;
      case 0x49:
        v518 = 8;
        v27 = CExpressionValueStack::Matrix3x2FromTranslation(a2, *(_DWORD *)(v19 + 4));
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 849;
        goto LABEL_710;
      case 0x4A:
        v518 = 8;
        v27 = CExpressionValueStack::Matrix4x4FromScale(a2, *(_DWORD *)(v19 + 4));
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 873;
        goto LABEL_710;
      case 0x4B:
        v518 = 8;
        v27 = CExpressionValueStack::Matrix4x4FromTranslation(a2, *(_DWORD *)(v19 + 4));
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 857;
        goto LABEL_710;
      case 0x4C:
        if ( *((_DWORD *)a2 + 2) < 2u )
        {
          v498 = 5867;
        }
        else
        {
          v266 = CExpressionValueStack::PeekStackValue(a2, -1);
          v267 = CExpressionValueStack::PeekStackValue(a2, 0);
          if ( *((_DWORD *)v266 + 18) == 52 && *((_DWORD *)v267 + 18) == 18 )
          {
            v268 = (__m128)*(unsigned __int64 *)v266;
            v269 = *(float *)v267;
            LODWORD(v525) = *(_QWORD *)v266;
            v526 = _mm_shuffle_ps(v268, v268, 85).m128_u32[0];
            v527 = *((float *)v266 + 2);
            v523[1] = v268.m128_u64[0];
            D3DXVec3Normalize((struct D2DVector3 *)&v525, (const struct D2DVector3 *)&v525);
            v270 = sinf_0(v269);
            v271 = cosf_0(v269);
            v272 = *(float *)&v526;
            v273 = *(float *)&v526;
            v274 = v527;
            v275 = v525;
            *((_DWORD *)v266 + 18) = 265;
            v276 = (float)(v273 * v275) * (float)(v8 - v271);
            v277 = (float)(v274 * v275) * (float)(v8 - v271);
            v278 = (float)(v274 * v272) * (float)(v8 - v271);
            *(float *)v266 = (float)((float)(v275 * v275) * (float)(v8 - v271)) + v271;
            *((float *)v266 + 1) = (float)(v274 * v270) + v276;
            v279 = v275 * v270;
            *((float *)v266 + 2) = v277 - (float)(v272 * v270);
            *((_DWORD *)v266 + 3) = 0;
            *((float *)v266 + 4) = v276 - (float)(v274 * v270);
            *((float *)v266 + 5) = (float)((float)(v8 - v271) * (float)(v272 * v272)) + v271;
            *((float *)v266 + 6) = v279 + v278;
            *((_DWORD *)v266 + 7) = 0;
            *((float *)v266 + 8) = (float)(v272 * v270) + v277;
            *((float *)v266 + 9) = v278 - v279;
            *((float *)v266 + 10) = (float)((float)(v8 - v271) * (float)(v274 * v274)) + v271;
            *(_QWORD *)((char *)v266 + 44) = 0LL;
            *(_QWORD *)((char *)v266 + 52) = 0LL;
            *((_DWORD *)v266 + 15) = 1065353216;
            --*((_DWORD *)a2 + 2);
            v4 = _xmm;
            goto LABEL_348;
          }
          v498 = 5881;
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v498,
          0LL);
        v28 = 894;
        goto LABEL_710;
      case 0x4D:
        v280 = *(_DWORD *)(v19 + 4);
        v518 = 8;
        if ( *((_DWORD *)a2 + 2) < v280 )
        {
          v499 = 6091;
        }
        else
        {
          if ( v280 == 1 )
          {
            v281 = CExpressionValueStack::PeekStackValue(a2, 0);
            v282 = v281;
            if ( *((_DWORD *)v281 + 18) != 18 )
              goto LABEL_646;
            v283 = *(float *)v281;
            v284 = sinf_0(*(float *)v281);
            v285 = cosf_0(v283);
            *((_DWORD *)v282 + 18) = 265;
            *(_QWORD *)v282 = 1065353216LL;
            *((_QWORD *)v282 + 1) = 0LL;
            *((_DWORD *)v282 + 4) = 0;
            *((float *)v282 + 5) = v285;
            *((float *)v282 + 6) = v284;
            *(_QWORD *)((char *)v282 + 28) = 0LL;
            *((_DWORD *)v282 + 9) = LODWORD(v284) ^ v4;
            *((float *)v282 + 10) = v285;
            *(_QWORD *)((char *)v282 + 44) = 0LL;
            *(_QWORD *)((char *)v282 + 52) = 0LL;
            v258 = 0;
            *((_DWORD *)v282 + 15) = 1065353216;
            goto LABEL_347;
          }
          if ( v280 == 2 )
          {
            v286 = CExpressionValueStack::PeekStackValue(a2, -1);
            v287 = CExpressionValueStack::PeekStackValue(a2, 0);
            if ( *((_DWORD *)v286 + 18) == 18 && *((_DWORD *)v287 + 18) == 52 )
            {
              v288 = *(float *)v286;
              v289 = *((float *)v287 + 2);
              v290 = *(float *)v286;
              v560 = *(_QWORD *)v287;
              v291 = sinf_0(v290);
              v292 = cosf_0(v288);
              *((_DWORD *)v286 + 18) = 265;
              *(_QWORD *)v286 = 1065353216LL;
              *((_QWORD *)v286 + 1) = 0LL;
              *((_DWORD *)v286 + 4) = 0;
              *((float *)v286 + 5) = v292;
              *((float *)v286 + 6) = v291;
              *(_QWORD *)((char *)v286 + 28) = 0LL;
              *((_DWORD *)v286 + 9) = LODWORD(v291) ^ v4;
              *((float *)v286 + 10) = v292;
              *(_QWORD *)((char *)v286 + 44) = 0LL;
              v258 = -1;
              v293 = (float)((float)(v8 - v292) * v289) - (float)(*((float *)&v560 + 1) * v291);
              *((float *)v286 + 13) = (float)(v289 * v291) + (float)((float)(v8 - v292) * *((float *)&v560 + 1));
              *((float *)v286 + 14) = v293;
              *((_DWORD *)v286 + 15) = 1065353216;
              goto LABEL_347;
            }
          }
LABEL_646:
          v499 = 6137;
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v499,
          0LL);
        v28 = 901;
        goto LABEL_710;
      case 0x4E:
        v294 = *(_DWORD *)(v19 + 4);
        v518 = 8;
        if ( *((_DWORD *)a2 + 2) < v294 )
        {
          v500 = 6174;
        }
        else
        {
          if ( v294 == 1 )
          {
            v295 = CExpressionValueStack::PeekStackValue(a2, 0);
            v296 = v295;
            if ( *((_DWORD *)v295 + 18) != 18 )
              goto LABEL_649;
            v297 = *(float *)v295;
            v298 = sinf_0(*(float *)v295);
            v299 = cosf_0(v297);
            *((_DWORD *)v296 + 18) = 265;
            *(float *)v296 = v299;
            *((_DWORD *)v296 + 1) = 0;
            *((_DWORD *)v296 + 2) = LODWORD(v298) ^ v4;
            *(_QWORD *)((char *)v296 + 12) = 0LL;
            *(_QWORD *)((char *)v296 + 20) = 1065353216LL;
            *((_DWORD *)v296 + 7) = 0;
            *((float *)v296 + 8) = v298;
            *((_DWORD *)v296 + 9) = 0;
            *((float *)v296 + 10) = v299;
            *(_QWORD *)((char *)v296 + 44) = 0LL;
            *(_QWORD *)((char *)v296 + 52) = 0LL;
            v258 = 0;
            *((_DWORD *)v296 + 15) = 1065353216;
            goto LABEL_347;
          }
          if ( v294 == 2 )
          {
            v300 = CExpressionValueStack::PeekStackValue(a2, -1);
            v301 = CExpressionValueStack::PeekStackValue(a2, 0);
            if ( *((_DWORD *)v300 + 18) == 18 && *((_DWORD *)v301 + 18) == 52 )
            {
              v302 = *(float *)v300;
              v303 = *((float *)v301 + 2);
              v304 = *(float *)v300;
              v561 = *(_QWORD *)v301;
              v305 = sinf_0(v304);
              v306 = cosf_0(v302);
              *((_DWORD *)v300 + 18) = 265;
              *(float *)v300 = v306;
              *((_DWORD *)v300 + 1) = 0;
              *((_DWORD *)v300 + 2) = LODWORD(v305) ^ v4;
              *(_QWORD *)((char *)v300 + 12) = 0LL;
              *(_QWORD *)((char *)v300 + 20) = 1065353216LL;
              *((_DWORD *)v300 + 7) = 0;
              *((float *)v300 + 8) = v305;
              *((_DWORD *)v300 + 9) = 0;
              *((float *)v300 + 10) = v306;
              *((_DWORD *)v300 + 11) = 0;
              v307 = (float)(*(float *)&v561 * v305) + (float)(v303 * (float)(v8 - v306));
              *((float *)v300 + 12) = (float)(*(float *)&v561 * (float)(v8 - v306)) - (float)(v303 * v305);
              *((_DWORD *)v300 + 13) = 0;
              v258 = -1;
              *((float *)v300 + 14) = v307;
              *((_DWORD *)v300 + 15) = 1065353216;
              goto LABEL_347;
            }
          }
LABEL_649:
          v500 = 6220;
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v500,
          0LL);
        v28 = 909;
        goto LABEL_710;
      case 0x4F:
        v308 = *(_DWORD *)(v19 + 4);
        v518 = 8;
        if ( *((_DWORD *)a2 + 2) < v308 )
        {
          v501 = 6257;
        }
        else
        {
          if ( v308 == 1 )
          {
            v309 = CExpressionValueStack::PeekStackValue(a2, 0);
            v310 = v309;
            if ( *((_DWORD *)v309 + 18) != 18 )
              goto LABEL_652;
            D2DMatrixRotationZ((struct D2DMatrix *)v618, *(float *)v309);
            v311 = v618[0];
            v312 = v618[1];
            *((_DWORD *)v310 + 18) = 265;
            *(_OWORD *)v310 = v311;
            v313 = v618[2];
            *((_OWORD *)v310 + 1) = v312;
            v314 = v618[3];
            *((_OWORD *)v310 + 2) = v313;
            *((_OWORD *)v310 + 3) = v314;
            *((_DWORD *)a2 + 2) = *((_DWORD *)a2 + 2);
            goto LABEL_348;
          }
          if ( v308 == 2 )
          {
            v315 = CExpressionValueStack::PeekStackValue(a2, -1);
            v316 = CExpressionValueStack::PeekStackValue(a2, 0);
            if ( *((_DWORD *)v315 + 18) == 18 && *((_DWORD *)v316 + 18) == 52 )
            {
              v317 = *(float *)v315;
              v318 = *(float *)v315;
              v540 = *(_QWORD *)v316;
              v319 = sinf_0(v318);
              v320 = cosf_0(v317);
              *((_DWORD *)v315 + 18) = 265;
              *(float *)v315 = v320;
              *((float *)v315 + 1) = v319;
              *((_QWORD *)v315 + 1) = 0LL;
              *((_DWORD *)v315 + 4) = LODWORD(v319) ^ v4;
              *((float *)v315 + 5) = v320;
              *((_QWORD *)v315 + 3) = 0LL;
              *((_QWORD *)v315 + 4) = 0LL;
              *((_QWORD *)v315 + 5) = 1065353216LL;
              v321 = (float)(*((float *)&v540 + 1) * (float)(v8 - v320)) - (float)(*(float *)&v540 * v319);
              *((float *)v315 + 12) = (float)(v319 * *((float *)&v540 + 1))
                                    + (float)(*(float *)&v540 * (float)(v8 - v320));
              *((float *)v315 + 13) = v321;
              *((_DWORD *)v315 + 14) = 0;
              *((_DWORD *)v315 + 15) = 1065353216;
              --*((_DWORD *)a2 + 2);
              goto LABEL_348;
            }
          }
LABEL_652:
          v501 = 6303;
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v501,
          0LL);
        v28 = 917;
        goto LABEL_710;
      case 0x50:
        v27 = CExpressionValueStack::Matrix4x4FromPerspective(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 922;
        goto LABEL_710;
      case 0x51:
        v27 = CExpressionValueStack::Matrix4x4FromPerspectiveFieldOfView(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 926;
        goto LABEL_710;
      case 0x52:
        v27 = CExpressionValueStack::Matrix4x4FromPerspectiveOffCenter(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 930;
        goto LABEL_710;
      case 0x53:
        if ( *((_DWORD *)a2 + 2) )
        {
          v322 = CExpressionValueStack::PeekStackValue(a2, 0);
          if ( *((_DWORD *)v322 + 18) == 71 )
          {
            *(_OWORD *)&v523[1] = *(_OWORD *)v322;
            D2DMatrixRotationQuaternion((struct D2DMatrix *)v619, (const struct D2DQuaternion *)&v523[1]);
            v323 = v619[0];
            v324 = v619[1];
            v20 = 4;
            *(_DWORD *)(v325 + 72) = 265;
            *(_OWORD *)v325 = v323;
            v326 = v619[2];
            *(_OWORD *)(v325 + 16) = v324;
            v327 = v619[3];
            *(_OWORD *)(v325 + 32) = v326;
            *(_OWORD *)(v325 + 48) = v327;
            goto LABEL_350;
          }
          v502 = 6575;
        }
        else
        {
          v502 = 6570;
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v502,
          0LL);
        v28 = 934;
        goto LABEL_710;
      case 0x54:
        if ( *((_DWORD *)a2 + 2) < 3u )
        {
          v503 = 6614;
        }
        else
        {
          v328 = CExpressionValueStack::PeekStackValue(a2, -2);
          v329 = CExpressionValueStack::PeekStackValue(a2, -1);
          v330 = CExpressionValueStack::PeekStackValue(a2, 0);
          if ( *((_DWORD *)v328 + 18) == 18 )
          {
            if ( *((_DWORD *)v329 + 18) == 18 )
            {
              if ( *((_DWORD *)v330 + 18) == 18 )
              {
                D3DXQuaternionRotationYawPitchRoll(
                  (struct D2DQuaternion *)v587,
                  *(float *)v328,
                  *(float *)v329,
                  *(float *)v330);
                D2DMatrixRotationQuaternion((struct D2DMatrix *)v620, (const struct D2DQuaternion *)v587);
                v331 = v620[0];
                v332 = v620[1];
                *((_DWORD *)v328 + 18) = 265;
                *(_OWORD *)v328 = v331;
                v333 = v620[2];
                *((_OWORD *)v328 + 1) = v332;
                v334 = v620[3];
                *((_OWORD *)v328 + 2) = v333;
                *((_OWORD *)v328 + 3) = v334;
                *((_DWORD *)a2 + 2) -= 2;
                goto LABEL_348;
              }
              v503 = 6623;
            }
            else
            {
              v503 = 6622;
            }
          }
          else
          {
            v503 = 6621;
          }
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v503,
          0LL);
        v28 = 938;
        goto LABEL_710;
      case 0x55:
        if ( *((_DWORD *)a2 + 2) < 2u )
        {
          v504 = 6674;
        }
        else
        {
          v335 = CExpressionValueStack::PeekStackValue(a2, -1);
          v336 = CExpressionValueStack::PeekStackValue(a2, 0);
          if ( *((_DWORD *)v335 + 18) == 52 && *((_DWORD *)v336 + 18) == 18 )
          {
            v337 = *(_QWORD *)v335;
            v338 = *(float *)v336;
            v542 = *((_DWORD *)v335 + 2);
            v541 = v337;
            D3DXQuaternionRotationAxis((struct D2DQuaternion *)&v586, (const struct D2DVector3 *)&v541, v338);
            v339 = v586;
            *((_DWORD *)v335 + 18) = 71;
            *(_OWORD *)v335 = v339;
            --*((_DWORD *)a2 + 2);
            goto LABEL_348;
          }
          v504 = 6688;
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v504,
          0LL);
        v28 = 942;
        goto LABEL_710;
      case 0x56:
        v27 = CExpressionValueStack::QuaternionFromLerp(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 946;
        goto LABEL_710;
      case 0x57:
        if ( *((_DWORD *)a2 + 2) )
        {
          v340 = CExpressionValueStack::PeekStackValue(a2, 0);
          v341 = v340;
          if ( *((_DWORD *)v340 + 18) == 265 )
          {
            v342 = *((_OWORD *)v340 + 1);
            v633[0] = *(_OWORD *)v340;
            v343 = *((_OWORD *)v340 + 2);
            v633[1] = v342;
            v344 = *((_OWORD *)v340 + 3);
            v633[2] = v343;
            v633[3] = v344;
            D3DXQuaternionRotationMatrix((struct D2DQuaternion *)&v585, (const struct D2DMatrix *)v633);
            v345 = v585;
            *((_DWORD *)v341 + 18) = 71;
            *(_OWORD *)v341 = v345;
            goto LABEL_348;
          }
          v505 = 6794;
        }
        else
        {
          v505 = 6789;
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v505,
          0LL);
        v28 = 950;
        goto LABEL_710;
      case 0x58:
        if ( *((_DWORD *)a2 + 2) < 3u )
        {
          v506 = 6834;
        }
        else
        {
          v346 = CExpressionValueStack::PeekStackValue(a2, -2);
          v347 = CExpressionValueStack::PeekStackValue(a2, -1);
          v348 = CExpressionValueStack::PeekStackValue(a2, 0);
          if ( *((_DWORD *)v346 + 18) == 18 )
          {
            if ( *((_DWORD *)v347 + 18) == 18 )
            {
              if ( *((_DWORD *)v348 + 18) == 18 )
              {
                D3DXQuaternionRotationYawPitchRoll(
                  (struct D2DQuaternion *)v590,
                  *(float *)v346,
                  *(float *)v347,
                  *(float *)v348);
                v349 = v590[0];
                *((_DWORD *)v346 + 18) = 71;
                *(_OWORD *)v346 = v349;
                *((_DWORD *)a2 + 2) -= 2;
                goto LABEL_348;
              }
              v506 = 6843;
            }
            else
            {
              v506 = 6842;
            }
          }
          else
          {
            v506 = 6841;
          }
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v506,
          0LL);
        v28 = 954;
        goto LABEL_710;
      case 0x59:
        v27 = CExpressionValueStack::TimeSpanFrom(a2, 1u);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 958;
        goto LABEL_710;
      case 0x5A:
        v27 = CExpressionValueStack::TimeSpanFrom(a2, 0x3E8u);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 962;
        goto LABEL_710;
      case 0x5B:
        v27 = CExpressionValueStack::TimeSpanFrom(a2, 0xEA60u);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 966;
        goto LABEL_710;
      case 0x5C:
        if ( *((_DWORD *)a2 + 2) < 2u )
        {
          v507 = 6979;
        }
        else
        {
          v350 = CExpressionValueStack::PeekStackValue(a2, -1);
          v351 = CExpressionValueStack::PeekStackValue(a2, 0);
          if ( *((_DWORD *)v350 + 18) == 35 )
          {
            if ( *((_DWORD *)v351 + 18) == 35 )
            {
              v352 = *(float *)v350;
              v353 = *((float *)v350 + 1);
              v354 = *(float *)v351;
              v355 = *((float *)v351 + 1);
              *((_DWORD *)v350 + 18) = 18;
              *(float *)v350 = (float)(v352 * v354) + (float)(v353 * v355);
              --*((_DWORD *)a2 + 2);
              goto LABEL_348;
            }
            v507 = 6986;
          }
          else
          {
            v507 = 6985;
          }
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v507,
          0LL);
        v28 = 970;
        goto LABEL_710;
      case 0x5D:
        if ( *((_DWORD *)a2 + 2) < 2u )
        {
          v508 = 7027;
        }
        else
        {
          v356 = CExpressionValueStack::PeekStackValue(a2, -1);
          v357 = (__m128 *)CExpressionValueStack::PeekStackValue(a2, 0);
          if ( *((_DWORD *)v356 + 18) == 35 )
          {
            v358 = v357[4].m128_i32[2];
            if ( v358 == 71 || v358 == 104 || v358 == 265 )
            {
              v359 = *(float *)v356;
              v360 = *((float *)v356 + 1);
              if ( v358 == 104 )
              {
                v361 = *v357;
                v362 = v359 * COERCE_FLOAT(*v357);
                v363 = *v357;
                v524 = v357[1].m128_u64[0];
                v364 = (float)((float)(v360 * _mm_shuffle_ps(v361, v361, 170).m128_f32[0]) + v362) + *(float *)&v524;
                v365 = (float)((float)(v360 * _mm_shuffle_ps(v363, v361, 255).m128_f32[0])
                             + (float)(v359 * _mm_shuffle_ps(v361, v361, 85).m128_f32[0]))
                     + _mm_shuffle_ps((__m128)v524, (__m128)v524, 85).m128_f32[0];
              }
              else if ( v358 == 265 )
              {
                v366 = v357[1];
                v367 = v357[3];
                v364 = (float)((float)(v359 * COERCE_FLOAT(*v357)) + (float)(v360 * v366.m128_f32[0]))
                     + v367.m128_f32[0];
                v365 = (float)((float)(v360 * _mm_shuffle_ps(v366, v366, 85).m128_f32[0])
                             + (float)(v359 * _mm_shuffle_ps(*v357, *v357, 85).m128_f32[0]))
                     + _mm_shuffle_ps(v367, v367, 85).m128_f32[0];
              }
              else
              {
                v368 = _mm_shuffle_ps(*v357, *v357, 85).m128_f32[0];
                v369 = _mm_shuffle_ps(*v357, *v357, 170).m128_f32[0];
                v370 = v369 + v369;
                v371 = COERCE_FLOAT(*v357) * (float)(v368 + v368);
                v372 = v369 * (float)(v369 + v369);
                v373 = _mm_shuffle_ps(*v357, *v357, 255).m128_f32[0] * v370;
                v364 = (float)((float)((float)(v8 - (float)(v368 * (float)(v368 + v368))) - v372) * v359)
                     + (float)((float)(v371 - v373) * v360);
                v365 = (float)((float)((float)(v8
                                             - (float)((float)(COERCE_FLOAT(*v357) + COERCE_FLOAT(*v357))
                                                     * COERCE_FLOAT(*v357)))
                                     - v372)
                             * v360)
                     + (float)((float)(v371 + v373) * v359);
              }
              v4 = _xmm;
              *((_DWORD *)v356 + 18) = 35;
              *(float *)v356 = v364;
              *((float *)v356 + 1) = v365;
              --*((_DWORD *)a2 + 2);
              goto LABEL_348;
            }
            v508 = 7042;
          }
          else
          {
            v508 = 7033;
          }
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v508,
          0LL);
        v28 = 974;
        goto LABEL_710;
      case 0x5E:
        if ( *((_DWORD *)a2 + 2) < 2u )
        {
          v509 = 7104;
        }
        else
        {
          v374 = CExpressionValueStack::PeekStackValue(a2, -1);
          v375 = (__m128 *)CExpressionValueStack::PeekStackValue(a2, 0);
          if ( *((_DWORD *)v374 + 18) == 35 )
          {
            v376 = v375[4].m128_i32[2];
            if ( v376 == 104 || v376 == 265 )
            {
              v377 = *(float *)v374;
              v378 = *((float *)v374 + 1);
              if ( v376 == 104 )
              {
                v379 = *v375;
                v524 = v375[1].m128_u64[0];
                v380 = (float)(v378 * _mm_shuffle_ps(v379, v379, 170).m128_f32[0]) + (float)(v377 * v379.m128_f32[0]);
                v381 = v377 * _mm_shuffle_ps(v379, v379, 85).m128_f32[0];
                v382 = v378 * _mm_shuffle_ps(v379, v379, 255).m128_f32[0];
              }
              else
              {
                v383 = v375[1];
                v380 = (float)(v377 * COERCE_FLOAT(*v375)) + (float)(v378 * v383.m128_f32[0]);
                v382 = v378 * _mm_shuffle_ps(v383, v383, 85).m128_f32[0];
                v381 = v377 * _mm_shuffle_ps(*v375, *v375, 85).m128_f32[0];
              }
              *((_DWORD *)v374 + 18) = 35;
              *(float *)v374 = v380;
              *((float *)v374 + 1) = v382 + v381;
              --*((_DWORD *)a2 + 2);
              goto LABEL_348;
            }
            v509 = 7118;
          }
          else
          {
            v509 = 7110;
          }
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v509,
          0LL);
        v28 = 978;
        goto LABEL_710;
      case 0x5F:
        if ( *((_DWORD *)a2 + 2) < 2u )
        {
          v510 = 7174;
        }
        else
        {
          v384 = CExpressionValueStack::PeekStackValue(a2, -1);
          v385 = CExpressionValueStack::PeekStackValue(a2, 0);
          if ( *((_DWORD *)v384 + 18) == 52 )
          {
            if ( *((_DWORD *)v385 + 18) == 52 )
            {
              v386 = (__m128)*(unsigned __int64 *)v385;
              v387 = *((float *)v385 + 2);
              v563 = *(_QWORD *)v384;
              v388 = (__m128)v563;
              *((_DWORD *)v384 + 18) = 52;
              v389 = *((float *)v384 + 2);
              v562 = v386.m128_u64[0];
              v386.m128_f32[0] = _mm_shuffle_ps(v386, v386, 85).m128_f32[0];
              v388.m128_f32[0] = _mm_shuffle_ps(v388, v388, 85).m128_f32[0];
              *(float *)v384 = (float)(v387 * v388.m128_f32[0]) - (float)(v386.m128_f32[0] * v389);
              v386.m128_f32[0] = (float)(v386.m128_f32[0] * *(float *)&v563)
                               - (float)(v388.m128_f32[0] * *(float *)&v562);
              *((float *)v384 + 1) = (float)(v389 * *(float *)&v562) - (float)(v387 * *(float *)&v563);
              *((_DWORD *)v384 + 2) = v386.m128_i32[0];
              --*((_DWORD *)a2 + 2);
              goto LABEL_348;
            }
            v510 = 7181;
          }
          else
          {
            v510 = 7180;
          }
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v510,
          0LL);
        v28 = 982;
        goto LABEL_710;
      case 0x60:
        if ( *((_DWORD *)a2 + 2) < 2u )
        {
          v511 = 7226;
        }
        else
        {
          v390 = CExpressionValueStack::PeekStackValue(a2, -1);
          v391 = CExpressionValueStack::PeekStackValue(a2, 0);
          if ( *((_DWORD *)v390 + 18) == 52 )
          {
            if ( *((_DWORD *)v391 + 18) == 52 )
            {
              v392 = (__m128)*(unsigned __int64 *)v391;
              v393 = (__m128)*(unsigned __int64 *)v390;
              v394 = *((float *)v391 + 2);
              *((_DWORD *)v390 + 18) = 18;
              v523[1] = v392.m128_u64[0];
              *(float *)v390 = (float)((float)(v392.m128_f32[0] * v393.m128_f32[0])
                                     + (float)(_mm_shuffle_ps(v393, v393, 85).m128_f32[0]
                                             * _mm_shuffle_ps(v392, v392, 85).m128_f32[0]))
                             + (float)(*((float *)v390 + 2) * v394);
              --*((_DWORD *)a2 + 2);
              goto LABEL_348;
            }
            v511 = 7233;
          }
          else
          {
            v511 = 7232;
          }
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v511,
          0LL);
        v28 = 986;
        goto LABEL_710;
      case 0x61:
        if ( *((_DWORD *)a2 + 2) < 2u )
        {
          v512 = 7274;
        }
        else
        {
          v395 = CExpressionValueStack::PeekStackValue(a2, -1);
          v396 = CExpressionValueStack::PeekStackValue(a2, 0);
          if ( *((_DWORD *)v395 + 18) == 52 )
          {
            v397 = *((_DWORD *)v396 + 18);
            if ( v397 == 71 || v397 == 265 )
            {
              v16 = *((unsigned int *)v395 + 2);
              v535 = *(_QWORD *)v395;
              if ( v397 == 265 )
              {
                v398 = *((__m128 *)v396 + 1);
                v399 = *((__m128 *)v396 + 2);
                v400 = *((__m128 *)v396 + 3);
                v401 = (float)((float)((float)(*(float *)&v535
                                             * _mm_shuffle_ps(*(__m128 *)v396, *(__m128 *)v396, 170).m128_f32[0])
                                     + (float)(_mm_shuffle_ps(v398, v398, 170).m128_f32[0] * *((float *)&v535 + 1)))
                             + (float)(_mm_shuffle_ps(v399, v399, 170).m128_f32[0] * *(float *)&v16))
                     + _mm_shuffle_ps(v400, v400, 170).m128_f32[0];
                v402 = (float)((float)((float)(*(float *)&v535
                                             * _mm_shuffle_ps(*(__m128 *)v396, *(__m128 *)v396, 85).m128_f32[0])
                                     + (float)(_mm_shuffle_ps(v398, v398, 85).m128_f32[0] * *((float *)&v535 + 1)))
                             + (float)(_mm_shuffle_ps(v399, v399, 85).m128_f32[0] * *(float *)&v16))
                     + _mm_shuffle_ps(v400, v400, 85).m128_f32[0];
                v403 = (float)((float)((float)(COERCE_FLOAT(*(_OWORD *)v396) * *(float *)&v535)
                                     + (float)(v398.m128_f32[0] * *((float *)&v535 + 1)))
                             + (float)(v399.m128_f32[0] * *(float *)&v16))
                     + v400.m128_f32[0];
              }
              else
              {
                v404 = *(__m128 *)v396;
                v405 = _mm_shuffle_ps(*(__m128 *)v396, *(__m128 *)v396, 170).m128_f32[0];
                v406 = _mm_shuffle_ps(*(__m128 *)v396, *(__m128 *)v396, 85).m128_f32[0];
                v407 = _mm_shuffle_ps(*(__m128 *)v396, *(__m128 *)v396, 255).m128_f32[0];
                v408 = (float)(v404.m128_f32[0] + v404.m128_f32[0]) * v407;
                v409 = 1.0 - (float)((float)(v404.m128_f32[0] + v404.m128_f32[0]) * v404.m128_f32[0]);
                v410 = (float)(v405 + v405) * COERCE_FLOAT(*(_OWORD *)v396);
                v411 = (float)(v405 + v405) * v406;
                v412 = (float)(v406 + v406) * COERCE_FLOAT(*(_OWORD *)v396);
                v413 = (float)(v406 + v406) * v407;
                v414 = (float)(v405 + v405) * v407;
                v415 = (float)(v405 + v405) * v405;
                v416 = (float)(v406 + v406) * v406;
                v401 = (float)((float)((float)(v411 + v408) * *((float *)&v535 + 1))
                             + (float)((float)(v410 - v413) * *(float *)&v535))
                     + (float)((float)(v409 - v416) * *(float *)&v16);
                v402 = (float)((float)((float)(v409 - v415) * *((float *)&v535 + 1))
                             + (float)((float)(v412 + v414) * *(float *)&v535))
                     + (float)((float)(v411 - v408) * *(float *)&v16);
                v403 = (float)((float)((float)((float)(1.0 - v416) - v415) * *(float *)&v535)
                             + (float)((float)(v412 - v414) * *((float *)&v535 + 1)))
                     + (float)((float)(v410 + v413) * *(float *)&v16);
              }
              *((_DWORD *)v395 + 18) = 52;
              *(float *)v395 = v403;
              *((float *)v395 + 1) = v402;
              *((float *)v395 + 2) = v401;
              --*((_DWORD *)a2 + 2);
              v4 = _xmm;
              goto LABEL_348;
            }
            v512 = 7288;
          }
          else
          {
            v512 = 7280;
          }
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v512,
          0LL);
        v28 = 990;
        goto LABEL_710;
      case 0x62:
        if ( *((_DWORD *)a2 + 2) < 2u )
        {
          v513 = 7342;
        }
        else
        {
          v417 = CExpressionValueStack::PeekStackValue(a2, -1);
          v418 = CExpressionValueStack::PeekStackValue(a2, 0);
          if ( *((_DWORD *)v417 + 18) == 52 )
          {
            if ( *((_DWORD *)v418 + 18) == 265 )
            {
              v419 = *((_OWORD *)v418 + 1);
              v420 = *((_DWORD *)v417 + 2);
              v543 = *(_QWORD *)v417;
              v421 = *(_OWORD *)v418;
              v544 = v420;
              v621[1] = v419;
              v422 = *((_OWORD *)v418 + 3);
              v621[0] = v421;
              v423 = *((_OWORD *)v418 + 2);
              v621[3] = v422;
              v621[2] = v423;
              v536 = 0LL;
              v537 = 0;
              D3DXVec3TransformNormal(
                (struct D2DVector3 *)&v536,
                (const struct D2DVector3 *)&v543,
                (const struct D2DMatrix *)v621);
              *(_QWORD *)&v423 = v536;
              v424 = v537;
              *((_DWORD *)v417 + 18) = 52;
              *(_QWORD *)v417 = v423;
              *((_DWORD *)v417 + 2) = v424;
              --*((_DWORD *)a2 + 2);
              goto LABEL_348;
            }
            v513 = 7349;
          }
          else
          {
            v513 = 7348;
          }
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v513,
          0LL);
        v28 = 994;
        goto LABEL_710;
      case 0x63:
        if ( *((_DWORD *)a2 + 2) < 2u )
        {
          v514 = 7393;
        }
        else
        {
          v425 = CExpressionValueStack::PeekStackValue(a2, -1);
          v426 = CExpressionValueStack::PeekStackValue(a2, 0);
          if ( *((_DWORD *)v425 + 18) == 69 )
          {
            if ( *((_DWORD *)v426 + 18) == 69 )
            {
              v427 = *(__m128 *)v425;
              v428 = *(__m128 *)v426;
              *((_DWORD *)v425 + 18) = 18;
              *(float *)v425 = (float)((float)((float)(v427.m128_f32[0] * v428.m128_f32[0])
                                             + (float)(_mm_shuffle_ps(v427, v427, 85).m128_f32[0]
                                                     * _mm_shuffle_ps(v428, v428, 85).m128_f32[0]))
                                     + (float)(_mm_shuffle_ps(v427, v427, 170).m128_f32[0]
                                             * _mm_shuffle_ps(v428, v428, 170).m128_f32[0]))
                             + (float)(_mm_shuffle_ps(v427, v427, 255).m128_f32[0]
                                     * _mm_shuffle_ps(v428, v428, 255).m128_f32[0]);
              --*((_DWORD *)a2 + 2);
              goto LABEL_348;
            }
            v514 = 7400;
          }
          else
          {
            v514 = 7399;
          }
        }
        v27 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(
          20,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          -2147467259,
          v514,
          0LL);
        v28 = 998;
        goto LABEL_710;
      case 0x64:
        v27 = CExpressionValueStack::Vector4Transform(a2);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 1002;
        goto LABEL_710;
      case 0x65:
        v518 = 16;
        v27 = CExpressionValueStack::Swizzle(a2, (const struct ExpressionNode *)v19);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 1009;
        goto LABEL_710;
      case 0x66:
        v518 = 24;
        v27 = CExpressionValueStack::Swizzle(a2, (const struct ExpressionNode *)v19);
        if ( v27 >= 0 )
          goto LABEL_348;
        v28 = 1017;
        goto LABEL_710;
      default:
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x41C,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
          (const char *)0xFFFFFFFFFFFFFFFFLL);
    }
  }
}
