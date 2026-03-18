/*
 * XREFs of ?AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_NPEA_N@Z @ 0x1801999F0
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x1800DA040 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x180110290 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ @ 0x18016EC60 (-GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ.c)
 *     PrimitiveStorage::Alloc_16_ @ 0x18016EC80 (PrimitiveStorage--Alloc_16_.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?CopyTo@PrimitiveUVDesc@@QEBAXPEAU1@PEBVMatrix3x3@@@Z @ 0x180199480 (-CopyTo@PrimitiveUVDesc@@QEBAXPEAU1@PEBVMatrix3x3@@@Z.c)
 *     ?resize@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x180199740 (-resize@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expans.c)
 *     ??1?$unique_ptr@$$BY0A@UD2D_POINT_2F@@U?$default_delete@$$BY0A@UD2D_POINT_2F@@@std@@@std@@QEAA@XZ @ 0x1801999B4 (--1-$unique_ptr@$$BY0A@UD2D_POINT_2F@@U-$default_delete@$$BY0A@UD2D_POINT_2F@@@std@@@std@@QEAA@X.c)
 *     ?CreateUVData@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@_KIV?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@PEAPEAVUVData@1@@Z @ 0x18019B4C0 (-CreateUVData@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@_KIV-$span@$$CBUPrimitiveU.c)
 *     ?InternalRelease@?$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ @ 0x18019C0B4 (-InternalRelease@-$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCCpuClipAntialiasDrawListEntry@@V1@@@SAPEAX_K@Z @ 0x18019C0DC (-Alloc@-$CThreadLocalObjectCache@VCCpuClipAntialiasDrawListEntry@@V1@@@SAPEAX_K@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@Z @ 0x18019C1C4 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA-A_TA.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     sqrtf_0 @ 0x1802DF698 (sqrtf_0.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntryBuilder::AppendCpuClipAntialiasEntry(
        CDrawListEntryBuilder *this,
        const struct Mesh::MeshDesc *a2,
        const struct PrimitiveVertexAttributesDesc *a3,
        char a4,
        bool *a5)
{
  __int64 v6; // r10
  const struct Mesh::MeshDesc *v8; // r13
  __int64 v9; // rcx
  _QWORD *v10; // rsi
  float v11; // xmm5_4
  float v12; // xmm12_4
  float v13; // xmm4_4
  float v14; // xmm11_4
  float v15; // xmm7_4
  float v16; // xmm14_4
  float v17; // xmm6_4
  float v18; // xmm15_4
  float v19; // xmm8_4
  float v20; // xmm9_4
  float v21; // xmm3_4
  float v22; // xmm14_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  float v25; // xmm1_4
  float v26; // xmm2_4
  float v27; // xmm0_4
  float v28; // xmm3_4
  float v29; // xmm8_4
  float v30; // xmm8_4
  CCommonRenderingEffect *v31; // rcx
  int v32; // ebx
  __int64 (*v33)(void); // rax
  int UsedSamplersBitmask; // eax
  float v35; // xmm3_4
  float v36; // xmm4_4
  int v37; // xmm9_4
  unsigned int v38; // r15d
  unsigned __int64 v39; // rdx
  unsigned int v40; // edi
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned int v43; // r14d
  __int64 v44; // rax
  __int64 v45; // rax
  float *v46; // rcx
  float v47; // xmm12_4
  float v48; // xmm6_4
  float v49; // xmm14_4
  float v50; // xmm7_4
  float v51; // xmm0_4
  float v52; // xmm6_4
  float v53; // xmm3_4
  float v54; // xmm4_4
  float v55; // xmm3_4
  __int64 *v56; // rbx
  float *v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  unsigned int v60; // r9d
  float v61; // xmm2_4
  float v62; // xmm0_4
  int *v63; // rcx
  __int64 v64; // rax
  float v65; // xmm1_4
  __int64 v66; // rcx
  float v67; // xmm0_4
  __int64 v68; // rax
  unsigned int v69; // edx
  int *v70; // rcx
  __int64 v71; // rax
  __int64 *v72; // rdi
  __int64 v73; // rax
  int v74; // ebx
  unsigned __int64 v75; // r13
  __int64 *v76; // r15
  __int64 v77; // r11
  unsigned __int16 v78; // r14
  __int64 v79; // rax
  __int64 v80; // rcx
  float v81; // xmm3_4
  __int64 v82; // r8
  __int64 v83; // rax
  float v84; // xmm9_4
  float v85; // xmm8_4
  float v86; // xmm7_4
  float v87; // xmm6_4
  float v88; // xmm1_4
  float v89; // xmm0_4
  float v90; // xmm4_4
  float v91; // xmm3_4
  __int64 *v92; // r10
  float *v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rax
  unsigned int v96; // r9d
  float v97; // xmm2_4
  float v98; // xmm0_4
  int *v99; // rcx
  __int64 v100; // rax
  void *v101; // rbx
  void *v102; // rcx
  volatile signed __int32 *v103; // rcx
  _BYTE *v104; // rbx
  HANDLE ProcessHeap; // rax
  float v107; // xmm1_4
  float v108; // xmm0_4
  __int64 v109; // rcx
  __int64 v110; // rax
  unsigned int v111; // edx
  int *v112; // rcx
  __int64 v113; // rax
  float v114; // xmm12_4
  float v115; // xmm14_4
  unsigned __int64 v116; // rdx
  __int64 v117; // rax
  float v118; // xmm6_4
  float v119; // xmm7_4
  CMILRefCountImpl *v120; // rsi
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // rax
  float v124; // xmm4_4
  float v125; // xmm5_4
  float v126; // xmm2_4
  float v127; // xmm3_4
  float v128; // xmm6_4
  __m128i v129; // xmm11
  float v130; // xmm11_4
  __int64 v131; // rdx
  __int64 v132; // rax
  float v133; // xmm4_4
  float v134; // xmm5_4
  float v135; // xmm2_4
  float v136; // xmm3_4
  float v137; // xmm12_4
  __m128i v138; // xmm6
  float v139; // xmm6_4
  const struct PrimitiveVertexAttributesDesc *v140; // r13
  int v141; // edi
  CDrawListEntryBuilder *v142; // r15
  __int128 v143; // xmm0
  int v144; // r9d
  _QWORD *v145; // rdi
  void *v146; // rcx
  unsigned int v147; // ecx
  volatile signed __int32 *v148; // r12
  unsigned int v149; // r14d
  __int64 v150; // rdi
  char v151; // r15
  __int64 v152; // rsi
  int v153; // ebx
  float v154; // xmm0_4
  int v155; // eax
  __int64 v156; // rdx
  __int64 v157; // rdi
  unsigned __int64 v158; // rbx
  float v159; // xmm8_4
  unsigned int v160; // eax
  unsigned int v161; // eax
  const struct PrimitiveVertexAttributesDesc *v162; // r14
  unsigned __int64 v164; // rdx
  unsigned __int64 v165; // rcx
  unsigned int i; // r9d
  __int128 v167; // xmm0
  __int64 v168; // rax
  volatile signed __int32 *v169; // rcx
  int v170; // eax
  void *v171; // rbx
  float v172; // xmm0_4
  unsigned int v173; // ecx
  unsigned __int64 v174; // rax
  float v175; // xmm6_4
  float v176; // xmm7_4
  float v177; // xmm8_4
  float v178; // xmm9_4
  float v179; // xmm14_4
  unsigned int v180; // ecx
  unsigned __int64 v181; // rax
  float v182; // xmm4_4
  unsigned int v183; // ecx
  unsigned __int64 v184; // rax
  __int64 v185; // rdi
  char v186; // si
  char *v187; // rax
  char *v188; // rbx
  __int64 v189; // rax
  __int64 v190; // r15
  __int64 (__fastcall *v191)(CMILRefCountImpl *); // rax
  signed __int32 v192; // eax
  CMILRefCountImpl *v193; // r12
  __int64 v194; // rcx
  void *v195; // rax
  __int64 (__fastcall *v196)(CMILRefCountImpl *); // rax
  detail::liberal_expansion_policy *v197; // rcx
  float v198; // eax
  signed __int32 v199; // eax
  CDrawListEntryBuilder *v200; // r12
  _QWORD *v201; // r9
  __int64 v202; // rsi
  unsigned __int64 v203; // r13
  __int64 v204; // rdx
  unsigned __int64 v205; // r8
  _QWORD *v206; // r10
  __int64 v207; // rcx
  __int64 v208; // r11
  _QWORD *v209; // rax
  void *v210; // rbx
  void *v211; // rcx
  __int64 v212; // rcx
  unsigned int v213; // r8d
  unsigned __int64 v214; // rax
  float v215; // xmm0_4
  float v216; // xmm2_4
  float v217; // xmm1_4
  float v218; // xmm3_4
  float v219; // xmm2_4
  float v220; // xmm3_4
  signed __int64 v221; // rdi
  __int64 v222; // rax
  unsigned int v223; // r8d
  unsigned __int64 v224; // rdx
  unsigned __int64 v225; // rax
  float v226; // xmm2_4
  float v227; // xmm1_4
  float v228; // xmm1_4
  float v229; // xmm2_4
  unsigned __int64 v230; // r14
  LPVOID v231; // rax
  const void *v232; // rbx
  LPVOID v233; // rsi
  signed __int64 v234; // rdi
  void *v235; // rax
  _QWORD *v236; // rcx
  int v237; // [rsp+28h] [rbp-E0h]
  float v238; // [rsp+48h] [rbp-C0h]
  float v239; // [rsp+4Ch] [rbp-BCh]
  unsigned int v240; // [rsp+50h] [rbp-B8h]
  unsigned int v241; // [rsp+50h] [rbp-B8h]
  float v243; // [rsp+58h] [rbp-B0h]
  float v244; // [rsp+5Ch] [rbp-ACh]
  __int128 v245; // [rsp+60h] [rbp-A8h]
  float v246; // [rsp+70h] [rbp-98h]
  int v247; // [rsp+74h] [rbp-94h]
  float v248; // [rsp+78h] [rbp-90h]
  volatile signed __int32 *v249; // [rsp+80h] [rbp-88h] BYREF
  volatile signed __int32 *v250; // [rsp+88h] [rbp-80h]
  void *v251; // [rsp+90h] [rbp-78h] BYREF
  float Y; // [rsp+98h] [rbp-70h] BYREF
  CMILRefCountImpl *v253; // [rsp+A0h] [rbp-68h]
  CDrawListCache *v254; // [rsp+A8h] [rbp-60h] BYREF
  const struct PrimitiveVertexAttributesDesc *v255; // [rsp+B0h] [rbp-58h]
  const struct Mesh::MeshDesc *v256; // [rsp+B8h] [rbp-50h]
  _QWORD *v257; // [rsp+C0h] [rbp-48h]
  int v258; // [rsp+C8h] [rbp-40h]
  int v259; // [rsp+CCh] [rbp-3Ch]
  unsigned int v260; // [rsp+D0h] [rbp-38h]
  float v261; // [rsp+D4h] [rbp-34h]
  float v262; // [rsp+D8h] [rbp-30h] BYREF
  float v263; // [rsp+DCh] [rbp-2Ch] BYREF
  CDrawListEntryBuilder *v264; // [rsp+E0h] [rbp-28h]
  __int128 v265; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v266; // [rsp+F8h] [rbp-10h]
  __int128 v267; // [rsp+108h] [rbp+0h] BYREF
  __int64 v268; // [rsp+128h] [rbp+20h] BYREF
  float v269; // [rsp+130h] [rbp+28h]
  bool *v270; // [rsp+138h] [rbp+30h]
  volatile signed __int32 *v271; // [rsp+148h] [rbp+40h] BYREF
  unsigned int v272; // [rsp+150h] [rbp+48h]
  __int64 v273; // [rsp+158h] [rbp+50h]
  __int64 v274; // [rsp+160h] [rbp+58h]
  const struct PrimitiveVertexAttributesDesc *v275; // [rsp+168h] [rbp+60h]
  _QWORD *v276; // [rsp+170h] [rbp+68h]
  CMILRefCountImpl *v277; // [rsp+178h] [rbp+70h]
  __int64 v278; // [rsp+180h] [rbp+78h]
  float v279; // [rsp+188h] [rbp+80h]
  __int64 v280; // [rsp+190h] [rbp+88h]
  char v281; // [rsp+198h] [rbp+90h]
  bool v282; // [rsp+199h] [rbp+91h]
  char v283; // [rsp+19Ah] [rbp+92h]
  __int64 v284; // [rsp+1A8h] [rbp+A0h] BYREF
  int v285; // [rsp+1B0h] [rbp+A8h]
  int v286; // [rsp+1B4h] [rbp+ACh]
  __int64 v287; // [rsp+1B8h] [rbp+B0h] BYREF
  int v288; // [rsp+1C0h] [rbp+B8h]
  __int64 v289; // [rsp+1C4h] [rbp+BCh]
  int v290; // [rsp+1CCh] [rbp+C4h]
  __int64 v291; // [rsp+1D0h] [rbp+C8h]
  int v292; // [rsp+1D8h] [rbp+D0h]
  const struct PrimitiveVertexAttributesDesc *v293; // [rsp+1E0h] [rbp+D8h]
  unsigned __int64 v294; // [rsp+1E8h] [rbp+E0h]
  __int64 v295; // [rsp+1F0h] [rbp+E8h]
  __int128 v296; // [rsp+1F8h] [rbp+F0h] BYREF
  _QWORD v297[5]; // [rsp+208h] [rbp+100h] BYREF
  int v298; // [rsp+234h] [rbp+12Ch]
  __int64 *v299; // [rsp+238h] [rbp+130h]
  __int64 *v300; // [rsp+240h] [rbp+138h]
  int v301; // [rsp+24Ch] [rbp+144h]
  __int64 *v302; // [rsp+250h] [rbp+148h]
  char v303[16]; // [rsp+258h] [rbp+150h] BYREF
  __int128 v304; // [rsp+268h] [rbp+160h]
  __int128 v305; // [rsp+278h] [rbp+170h] BYREF
  __int64 v306; // [rsp+288h] [rbp+180h]
  __int128 v307; // [rsp+298h] [rbp+190h] BYREF
  __int64 v308; // [rsp+2A8h] [rbp+1A0h]
  __int64 v309; // [rsp+2B0h] [rbp+1A8h]
  __int64 v310; // [rsp+2B8h] [rbp+1B0h]
  LPVOID v311; // [rsp+2C0h] [rbp+1B8h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+2C8h] [rbp+1C0h] BYREF
  LPVOID lpMem; // [rsp+2E8h] [rbp+1E0h] BYREF
  _BYTE *v314; // [rsp+2F0h] [rbp+1E8h]
  char *v315; // [rsp+2F8h] [rbp+1F0h]
  _BYTE v316[224]; // [rsp+300h] [rbp+1F8h] BYREF
  char v317; // [rsp+3E0h] [rbp+2D8h] BYREF
  int v318; // [rsp+3E8h] [rbp+2E0h] BYREF
  _DWORD v319[3]; // [rsp+3ECh] [rbp+2E4h] BYREF
  int v320; // [rsp+3F8h] [rbp+2F0h] BYREF
  _DWORD v321[3]; // [rsp+3FCh] [rbp+2F4h] BYREF
  int v322; // [rsp+408h] [rbp+300h] BYREF
  _DWORD v323[3]; // [rsp+40Ch] [rbp+304h] BYREF
  int v324; // [rsp+418h] [rbp+310h] BYREF
  _DWORD v325[3]; // [rsp+41Ch] [rbp+314h] BYREF
  _OWORD v326[4]; // [rsp+428h] [rbp+320h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+550h] [rbp+448h]

  v6 = *((_QWORD *)this + 2);
  v264 = this;
  v270 = a5;
  v8 = a2;
  v9 = *(_QWORD *)(v6 + 8);
  v293 = a3;
  v256 = a2;
  v295 = v9;
  if ( *(_QWORD *)(v9 + 24) == *(_QWORD *)(v9 + 16) )
    v10 = 0LL;
  else
    v10 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 24) - 432LL) + 16LL);
  v11 = *(float *)(v6 + 32);
  v12 = v11;
  v13 = *(float *)(v6 + 36);
  v14 = v13;
  v15 = *(float *)(v6 + 48);
  v16 = v15;
  v17 = *(float *)(v6 + 52);
  v18 = v17;
  v19 = *(float *)(v6 + 80);
  v20 = *(float *)(v6 + 84);
  v243 = v11;
  *(_QWORD *)&v267 = __PAIR64__(LODWORD(v13), LODWORD(v11));
  v246 = v13;
  v244 = v15;
  *((_QWORD *)&v267 + 1) = __PAIR64__(LODWORD(v17), LODWORD(v15));
  v239 = v19;
  v238 = v20;
  v257 = v10;
  if ( *((_BYTE *)this + 4489) )
  {
    v21 = *((float *)this + 18);
    v22 = *((float *)this + 17);
    v12 = (float)(*((float *)this + 15) * v15) + (float)(*((float *)this + 14) * v11);
    v23 = *((float *)this + 16);
    v14 = (float)(*((float *)this + 15) * v17) + (float)(*((float *)this + 14) * v13);
    v18 = (float)(v22 * v17) + (float)(v23 * v13);
    v243 = v12;
    v24 = *((float *)this + 19);
    v16 = (float)(v22 * v15) + (float)(v23 * v11);
    v246 = v14;
    *(float *)&v267 = v12;
    v25 = v24 * v15;
    v26 = v24 * v17;
    v17 = v18;
    v27 = v21 * v11;
    v15 = v16;
    v28 = v21 * v13;
    v11 = v12;
    v244 = v16;
    *(_QWORD *)((char *)&v267 + 4) = __PAIR64__(LODWORD(v16), LODWORD(v14));
    v13 = v14;
    *((float *)&v267 + 3) = v18;
    v239 = (float)(v25 + v27) + v19;
    v238 = (float)(v26 + v28) + v20;
  }
  v29 = sqrtf_0((float)(v13 * v13) + (float)(v11 * v11));
  v255 = 0LL;
  lpMem = v316;
  v314 = v316;
  v310 = 0LL;
  v311 = 0LL;
  v315 = &v317;
  v247 = 0;
  v30 = fmaxf(v29, sqrtf_0((float)(v17 * v17) + (float)(v15 * v15))) * *(float *)v8;
  v248 = v30;
  if ( a3 )
  {
    v31 = (CCommonRenderingEffect *)*((_QWORD *)this + 10);
    v32 = (1 << *((_QWORD *)a3 + 4)) - 1;
    v33 = *(__int64 (**)(void))(*(_QWORD *)v31 + 24LL);
    if ( (char *)v33 == (char *)CCommonRenderingEffect::GetUsedSamplersBitmask )
      UsedSamplersBitmask = CCommonRenderingEffect::GetUsedSamplersBitmask(v31);
    else
      UsedSamplersBitmask = v33();
    v247 = v32 & UsedSamplersBitmask;
  }
  v35 = v239;
  v36 = v238;
  v37 = _xmm;
  v38 = 0;
  v294 = _mm_unpacklo_ps((__m128)LODWORD(v239), (__m128)LODWORD(v238)).m128_u64[0];
  v250 = 0LL;
  v249 = 0LL;
  v304 = v267;
  while ( 1 )
  {
    while ( 1 )
    {
      v39 = *((_QWORD *)v8 + 1);
      v40 = 0;
      v41 = v38;
      if ( v38 >= v39 )
        goto LABEL_82;
      v42 = *((_QWORD *)v8 + 4);
      v43 = v38;
      v260 = v38;
      do
      {
        v44 = 32 * v41;
        if ( *(float *)(v44 + v42) != 0.0 )
          break;
        if ( *(float *)(v44 + v42 + 4) != 0.0 )
          break;
        v41 = ++v38;
      }
      while ( v38 < v39 );
      v240 = v38;
      if ( v38 < v39 && !*(_BYTE *)(v38 + *((_QWORD *)v8 + 5)) )
        break;
LABEL_46:
      while ( v43 <= v38 )
      {
        v73 = v43;
        if ( (unsigned __int64)v43 >= *((_QWORD *)v8 + 1) )
          break;
        ++v43;
        v270[v73] = 0;
      }
      v12 = v243;
      ++v38;
      v16 = v244;
      v10 = v257;
    }
    v45 = *((_QWORD *)v8 + 2);
    v46 = (float *)(*((_QWORD *)v8 + 4) + 32LL * v38);
    v47 = (float)((float)(v12 * *(float *)(v45 + 8LL * v38)) + (float)(v16 * *(float *)(v45 + 8LL * v38 + 4))) + v35;
    v48 = v18 * v46[1];
    v49 = (float)((float)(v18 * *(float *)(v45 + 8LL * v38 + 4)) + (float)(v14 * *(float *)(v45 + 8LL * v38))) + v36;
    v50 = (float)(v243 * *v46) + (float)(v244 * v46[1]);
    v261 = v47;
    v51 = v14 * *v46;
    *(float *)&v254 = v49;
    v52 = v48 + v51;
    v53 = 1.0 / sqrtf_0((float)(v52 * v52) + (float)(v50 * v50));
    v54 = v53 * v52;
    v55 = v53 * v50;
    if ( v55 == 0.0 && v54 == 0.0 )
      goto LABEL_45;
    v56 = (__int64 *)*v10;
    v298 = 0;
    v299 = v56;
    v57 = (float *)v56[1];
    v297[4] = v57;
    if ( !*((_BYTE *)v57 + 25) )
    {
      v58 = 1LL;
      v324 = 0;
      v59 = 2LL;
      v325[0] = 1;
      v325[1] = 3;
      v325[2] = 2;
      if ( v54 <= 0.0 )
        v58 = 0LL;
      if ( v55 >= 0.0 )
        v59 = 0LL;
      v60 = v325[v59 - 1 + v58];
      do
      {
        v61 = v57[8];
        v62 = v57[7];
        v63 = &v324;
        if ( v61 > 0.0 )
          v63 = v325;
        v64 = 2LL;
        if ( v62 >= 0.0 )
          v64 = 0LL;
        if ( v63[v64] < v60 || v63[v64] == v60 && (float)((float)(v54 * v62) - (float)(v55 * v61)) > 0.000081380211 )
        {
          v57 = (float *)*((_QWORD *)v57 + 2);
        }
        else
        {
          v56 = (__int64 *)v57;
          v299 = (__int64 *)v57;
          v57 = *(float **)v57;
        }
      }
      while ( !*((_BYTE *)v57 + 25) );
    }
    if ( *((_BYTE *)v56 + 25) )
      goto LABEL_45;
    v65 = *((float *)v56 + 8);
    v66 = 1LL;
    v67 = *((float *)v56 + 7);
    v68 = 2LL;
    v322 = 0;
    v323[0] = 1;
    v323[1] = 3;
    v323[2] = 2;
    if ( v54 <= 0.0 )
      v66 = 0LL;
    if ( v55 >= 0.0 )
      v68 = 0LL;
    v69 = v323[v68 - 1 + v66];
    v70 = &v322;
    if ( v65 > 0.0 )
      v70 = v323;
    v71 = 2LL;
    if ( v67 >= 0.0 )
      v71 = 0LL;
    if ( v69 < v70[v71]
      || v69 == v70[v71] && (float)((float)(v55 * v65) - (float)(v54 * v67)) > 0.000081380211
      || (v72 = (__int64 *)*v10, v56 == (__int64 *)*v10)
      || v30 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                               (float)((float)(v49 - *((float *)v56 + 10)) * v67)
                             - (float)((float)(v47 - *((float *)v56 + 9)) * *((float *)v56 + 8))) & v37) )
    {
LABEL_45:
      v36 = v238;
      v35 = v239;
      goto LABEL_46;
    }
    v74 = *((_DWORD *)v56 + 11);
    v75 = *((_QWORD *)v8 + 1);
    v76 = (__int64 *)v72[1];
    LODWORD(v77) = v240;
    v258 = v74;
    v259 = v74;
    v78 = HIWORD(v74);
    v253 = *(CMILRefCountImpl **)(432LL * (unsigned __int16)v74 + *(_QWORD *)(v295 + 16));
    while ( 1 )
    {
      v77 = (unsigned int)(v77 + 1);
      v241 = v77;
      if ( (unsigned int)v77 >= v75 || *(_BYTE *)(v77 + *((_QWORD *)v256 + 5)) )
        break;
      v79 = *((_QWORD *)v256 + 4);
      v80 = 32LL * (unsigned int)v77;
      v81 = *(float *)(v80 + v79);
      v82 = v80 + v79;
      if ( v81 != 0.0 || *(float *)(v82 + 4) != 0.0 )
      {
        v83 = *((_QWORD *)v256 + 2);
        v84 = (float)((float)(v243 * *(float *)(v83 + 8 * v77)) + (float)(v244 * *(float *)(v83 + 8 * v77 + 4))) + v239;
        v85 = (float)((float)(v18 * *(float *)(v83 + 8 * v77 + 4)) + (float)(v14 * *(float *)(v83 + 8 * v77))) + v238;
        v86 = (float)(v81 * v243) + (float)(*(float *)(v82 + 4) * v244);
        v87 = (float)(*(float *)(v82 + 4) * v18) + (float)(v14 * v81);
        v88 = (float)(v86 * v86) + (float)(v87 * v87);
        if ( v88 < 0.0 )
        {
          v89 = sqrtf_0(v88);
          LODWORD(v77) = v241;
        }
        else
        {
          v89 = fsqrt(v88);
        }
        v90 = (float)(1.0 / v89) * v87;
        v91 = (float)(1.0 / v89) * v86;
        if ( v91 == 0.0 && v90 == 0.0 )
          goto LABEL_111;
        v300 = v76;
        v92 = v72;
        v301 = 0;
        v93 = (float *)v76;
        v302 = v72;
        if ( !*((_BYTE *)v76 + 25) )
        {
          v319[1] = 3;
          v318 = 0;
          v319[0] = 1;
          v94 = 1LL;
          v95 = 2LL;
          v319[2] = 2;
          if ( v90 <= 0.0 )
            v94 = 0LL;
          if ( v91 >= 0.0 )
            v95 = 0LL;
          v96 = v319[v95 - 1 + v94];
          do
          {
            v97 = v93[8];
            v98 = v93[7];
            v99 = &v318;
            if ( v97 > 0.0 )
              v99 = v319;
            v100 = 2LL;
            if ( v98 >= 0.0 )
              v100 = 0LL;
            if ( v99[v100] < v96
              || v99[v100] == v96 && (float)((float)(v90 * v98) - (float)(v91 * v97)) > 0.000081380211 )
            {
              v93 = (float *)*((_QWORD *)v93 + 2);
            }
            else
            {
              v92 = (__int64 *)v93;
              v93 = *(float **)v93;
            }
          }
          while ( !*((_BYTE *)v93 + 25) );
          LODWORD(v77) = v241;
          v302 = v92;
        }
        if ( *((_BYTE *)v92 + 25) )
          goto LABEL_111;
        v107 = *((float *)v92 + 8);
        v108 = *((float *)v92 + 7);
        v321[0] = 1;
        v109 = 1LL;
        v320 = 0;
        v110 = 2LL;
        v321[1] = 3;
        v321[2] = 2;
        if ( v90 <= 0.0 )
          v109 = 0LL;
        if ( v91 >= 0.0 )
          v110 = 0LL;
        v111 = v321[v110 - 1 + v109];
        v112 = &v320;
        if ( v107 > 0.0 )
          v112 = v321;
        v113 = 2LL;
        if ( v108 >= 0.0 )
          v113 = 0LL;
        if ( v111 < v112[v113]
          || v111 == v112[v113] && (float)((float)(v91 * v107) - (float)(v90 * v108)) > 0.000081380211
          || v92 == v72 )
        {
LABEL_111:
          v37 = _xmm;
          break;
        }
        v159 = (float)((float)(v85 - *((float *)v92 + 10)) * v108) - (float)((float)(v84 - *((float *)v92 + 9)) * v107);
        v37 = _xmm;
        if ( v248 <= COERCE_FLOAT(LODWORD(v159) & _xmm) )
          break;
        v160 = *((_DWORD *)v92 + 11);
        if ( (_WORD)v74 != (_WORD)v160 )
          break;
        v161 = HIWORD(v160);
        if ( HIWORD(v74) > (unsigned __int16)v161 )
          break;
        v78 = v161;
      }
    }
    v114 = v261;
    v115 = *(float *)&v254;
    v116 = (unsigned __int64)(unsigned int)v77 % *((_QWORD *)v256 + 1);
    v117 = *((_QWORD *)v256 + 2);
    v118 = (float)((float)(v243 * *(float *)(v117 + 8 * v116)) + (float)(v244 * *(float *)(v117 + 8 * v116 + 4))) + v239;
    v119 = (float)((float)(v18 * *(float *)(v117 + 8 * v116 + 4)) + (float)(v14 * *(float *)(v117 + 8 * v116))) + v238;
    if ( v260 < (unsigned int)v77 )
    {
      LOBYTE(v116) = 1;
      memset_0(&v270[v260], v116, (unsigned int)v77 - v260);
    }
    v120 = v253;
    v121 = 2 * (unsigned int)v78;
    v122 = *(_QWORD *)(*((_QWORD *)v253 + 5) + 40LL);
    v123 = (unsigned int)(v121 + 2);
    v124 = *(float *)(v122 + 8 * v121);
    v125 = *(float *)(v122 + 8 * v121 + 4);
    v126 = *(float *)(v122 + 8 * v123) - v124;
    v127 = *(float *)(v122 + 8 * v123 + 4) - v125;
    if ( COERCE_FLOAT(LODWORD(v126) & v37) > COERCE_FLOAT(LODWORD(v127) & v37) )
      v128 = (float)(v118 - v124) / v126;
    else
      v128 = (float)(v119 - v125) / v127;
    if ( (float)(v128 - 0.0) <= 0.000081380211 )
    {
      v129 = _mm_cvtsi32_si128(v78);
LABEL_118:
      v130 = _mm_cvtepi32_ps(v129).m128_f32[0] + 0.0;
      goto LABEL_119;
    }
    if ( (float)(1.0 - v128) <= 0.000081380211 )
    {
      v129 = _mm_cvtsi32_si128((unsigned __int16)(v78 + 1));
      goto LABEL_118;
    }
    v130 = (float)v78 + v128;
LABEL_119:
    v131 = 2 * (unsigned int)HIWORD(v74);
    v132 = (unsigned int)(v131 + 2);
    v133 = *(float *)(v122 + 8 * v131);
    v134 = *(float *)(v122 + 8 * v131 + 4);
    v135 = *(float *)(v122 + 8 * v132) - v133;
    v136 = *(float *)(v122 + 8 * v132 + 4) - v134;
    if ( COERCE_FLOAT(LODWORD(v135) & v37) > COERCE_FLOAT(LODWORD(v136) & v37) )
      v137 = (float)(v114 - v133) / v135;
    else
      v137 = (float)(v115 - v134) / v136;
    if ( (float)(v137 - 0.0) <= 0.000081380211 )
    {
      v138 = _mm_cvtsi32_si128(HIWORD(v74));
LABEL_123:
      v139 = _mm_cvtepi32_ps(v138).m128_f32[0] + 0.0;
      goto LABEL_124;
    }
    if ( (float)(1.0 - v137) <= 0.000081380211 )
    {
      v138 = _mm_cvtsi32_si128((unsigned __int16)(HIWORD(v74) + 1));
      goto LABEL_123;
    }
    v139 = (float)HIWORD(v74) + v137;
LABEL_124:
    v140 = v255;
    v141 = v247;
    v12 = v243;
    *((float *)&v268 + 1) = v139;
    v269 = v130;
    LOWORD(v268) = v74;
    if ( !v255 )
    {
      v162 = v293;
      v255 = v293;
      v140 = v293;
      if ( v247 )
      {
        if ( v243 != 1.0 || v246 != 0.0 || v244 != 0.0 || v18 != 1.0 || v239 != 0.0 || v238 != 0.0 )
        {
          *(_OWORD *)&matrix.m11 = v304;
          *(_QWORD *)&matrix.m[2][0] = v294;
          D2D1InvertMatrix(&matrix);
          v164 = *((_QWORD *)v162 + 4);
          v289 = *(_QWORD *)&matrix.m[1][0];
          v287 = *(_QWORD *)&matrix.m11;
          v291 = *(_QWORD *)&matrix.m[2][0];
          v288 = 0;
          v290 = 0;
          v292 = 1065353216;
          detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>::resize(
            &lpMem,
            v164);
          v165 = *((_QWORD *)v162 + 4);
          for ( i = 0; i < v165; ++i )
          {
            if ( _bittest(&v141, i) )
            {
              if ( i >= v165 )
                goto LABEL_245;
              PrimitiveUVDesc::CopyTo(
                (PrimitiveUVDesc *)(*((_QWORD *)v162 + 5) + 56LL * i),
                (struct PrimitiveUVDesc *)((char *)lpMem + 56 * i),
                (const struct Matrix3x3 *)&v287);
            }
            v165 = *((_QWORD *)v162 + 4);
          }
          v167 = *(_OWORD *)v162;
          v308 = *((_QWORD *)v162 + 2);
          v309 = *((_QWORD *)v162 + 3);
          v168 = 0x6DB6DB6DB6DB6DB7LL * ((v314 - (_BYTE *)lpMem) >> 3);
          v307 = v167;
          if ( v168 == -1 || !lpMem && v168 )
          {
LABEL_245:
            ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
            __debugbreak();
          }
          v140 = (const struct PrimitiveVertexAttributesDesc *)&v307;
          v310 = 0x6DB6DB6DB6DB6DB7LL * ((v314 - (_BYTE *)lpMem) >> 3);
          v255 = (const struct PrimitiveVertexAttributesDesc *)&v307;
          v311 = lpMem;
        }
      }
    }
    v142 = v264;
    v251 = 0LL;
    if ( v247 )
    {
      v143 = *((_OWORD *)v140 + 2);
      v144 = *(_DWORD *)v264;
      *(_QWORD *)&v265 = &v251;
      *((_QWORD *)&v265 + 1) = 0LL;
      LOBYTE(v266) = 1;
      v267 = v143;
      CCpuClipAntialiasSink::CreateUVData(
        (_DWORD)v120,
        0,
        (unsigned int)&v268,
        v144,
        v247,
        (__int64)&v267,
        (__int64)&v265 + 8);
      if ( (_BYTE)v266 )
      {
        v145 = *(_QWORD **)v265;
        *(_QWORD *)v265 = *((_QWORD *)&v265 + 1);
        if ( v145 )
        {
          v146 = (void *)v145[2];
          if ( v146 )
            operator delete(v146);
          operator delete(v145, 0x18uLL);
        }
      }
    }
    memset_0(&v271, 0, 0x58uLL);
    v147 = *((_DWORD *)v142 + 6);
    v148 = (volatile signed __int32 *)*((_QWORD *)v142 + 10);
    v149 = v147 & 0xFFFFFFFE;
    v150 = *(unsigned int *)v142;
    v272 = v147 & 0xFFFFFFFE;
    v271 = v148;
    v280 = v150;
    if ( v140 && *((_BYTE *)v142 + 29) )
    {
      v151 = 1;
      v281 = 1;
LABEL_134:
      v275 = v140;
      v274 = *((_QWORD *)v255 + 2);
      goto LABEL_135;
    }
    v151 = 0;
    v281 = 0;
    if ( v140 )
      goto LABEL_134;
    v140 = 0LL;
    v275 = 0LL;
    v274 = 0LL;
LABEL_135:
    v282 = a4 == 0;
    v279 = v130;
    v277 = v120;
    v278 = v268;
    v283 = v147 & 1;
    if ( CCommonRegistryData::CpuClipAASinkEnableDebugColors )
    {
      v169 = v250;
      v326[0] = _xmm;
      v326[1] = _xmm;
      v326[2] = _xmm;
      v326[3] = _xmm;
      if ( !v250 )
      {
        v249 = 0LL;
        v296 = 0uLL;
        v170 = CCommonRenderingEffectFactory::CreateRenderingEffect((__int64)v303, &v296, &v249);
        v40 = v170;
        if ( v170 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v170, 0x71Au, 0LL);
          v171 = v251;
          if ( v251 )
          {
            std::unique_ptr<D2D_POINT_2F [0]>::~unique_ptr<D2D_POINT_2F [0]>((void **)v251 + 2);
            operator delete(v171, 0x18uLL);
          }
          v103 = v249;
          goto LABEL_83;
        }
        v169 = v249;
        v250 = v249;
      }
      v271 = v169;
      v151 = 1;
      v140 = (const struct PrimitiveVertexAttributesDesc *)&v326[v74 & 3];
      v281 = 1;
      v275 = v140;
      v148 = v169;
      v280 = 2LL;
    }
    v254 = 0LL;
    Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(&v254);
    v245 = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    if ( v139 < v130 )
    {
      v152 = *((_QWORD *)v120 + 5);
      Y = 0.0;
      v153 = (int)v139;
      v154 = modff(v130, &Y);
      v155 = (int)Y;
      if ( COERCE_FLOAT(LODWORD(v154) & v37) < 0.000081380211 )
        LOWORD(v155) = v155 - 1;
      v156 = (unsigned __int16)v155 - (unsigned __int16)v153 + 1;
      v157 = *(_QWORD *)(v152 + 40) + 8LL * (unsigned __int16)(2 * v153);
      v158 = 2 * v156 + 2;
      if ( !v157 && 2 * v156 != -2 || !*(_QWORD *)(v152 + 48) && 6 * v156 )
      {
LABEL_141:
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v120 = v253;
      v262 = 0.0;
      v172 = modff(v139, &v262);
      if ( v172 > 0.000081380211 )
      {
        v179 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
        v223 = 0;
        v224 = 0LL;
        v175 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 3);
        v176 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 2);
        v177 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 1);
        LODWORD(v178) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
        do
        {
          if ( v224 >= v158 )
            goto LABEL_141;
          v225 = v223 + 2;
          if ( v225 >= v158 )
            goto LABEL_141;
          ++v223;
          v226 = (float)(1.0 - v172) * *(float *)(v157 + 8 * v224 + 4);
          v227 = (float)(1.0 - v172) * *(float *)(v157 + 8 * v224++);
          v228 = v227 + (float)(v172 * *(float *)(v157 + 8 * v225));
          v229 = v226 + (float)(v172 * *(float *)(v157 + 8 * v225 + 4));
          v178 = fminf(v178, v228);
          v176 = fmaxf(v176, v228);
          v177 = fminf(v177, v229);
          *(_QWORD *)&v245 = __PAIR64__(LODWORD(v177), LODWORD(v178));
          v175 = fmaxf(v175, v229);
          *((_QWORD *)&v245 + 1) = __PAIR64__(LODWORD(v175), LODWORD(v176));
        }
        while ( v223 < 2 );
      }
      else
      {
        v173 = 0;
        v174 = 0LL;
        v175 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 3);
        v176 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 2);
        v177 = *((float *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff + 1);
        LODWORD(v178) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
        do
        {
          if ( v174 >= v158 )
            goto LABEL_141;
          v178 = fminf(v178, *(float *)(v157 + 8 * v174));
          v177 = fminf(v177, *(float *)(v157 + 8 * v174 + 4));
          v176 = fmaxf(v176, *(float *)(v157 + 8 * v174));
          v175 = fmaxf(v175, *(float *)(v157 + 8 * v174 + 4));
          ++v173;
          ++v174;
          *(_QWORD *)&v245 = __PAIR64__(LODWORD(v177), LODWORD(v178));
          *((_QWORD *)&v245 + 1) = __PAIR64__(LODWORD(v175), LODWORD(v176));
        }
        while ( v173 < 2 );
        v179 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      }
      v180 = 2;
      if ( v158 - 2 > 2 )
      {
        v181 = 2LL;
        do
        {
          if ( v181 >= v158 )
            goto LABEL_141;
          v178 = fminf(v178, *(float *)(v157 + 8 * v181));
          v177 = fminf(v177, *(float *)(v157 + 8 * v181 + 4));
          v176 = fmaxf(v176, *(float *)(v157 + 8 * v181));
          v175 = fmaxf(v175, *(float *)(v157 + 8 * v181 + 4));
          v181 = ++v180;
          *(_QWORD *)&v245 = __PAIR64__(LODWORD(v177), LODWORD(v178));
          *((_QWORD *)&v245 + 1) = __PAIR64__(LODWORD(v175), LODWORD(v176));
        }
        while ( v180 < v158 - 2 );
      }
      v263 = 0.0;
      v182 = modff(v130, &v263);
      if ( v182 > 0.000081380211 )
      {
        v212 = (unsigned int)(v158 - 4);
        v213 = v212 + 2;
        v214 = (unsigned int)(v212 + 2);
        if ( v214 < v158 )
        {
          do
          {
            if ( (unsigned int)v212 >= v158 || v214 >= v158 )
              goto LABEL_141;
            ++v213;
            v215 = v182 * *(float *)(v157 + 8 * v214);
            v216 = v182 * *(float *)(v157 + 8 * v214 + 4);
            v214 = v213;
            v217 = (float)(v179 - v182) * *(float *)(v157 + 8 * v212 + 4);
            v218 = (float)(v179 - v182) * *(float *)(v157 + 8 * v212);
            v212 = (unsigned int)(v212 + 1);
            v219 = v216 + v217;
            v220 = v218 + v215;
            v177 = fminf(v177, v219);
            v175 = fmaxf(v175, v219);
            v178 = fminf(v178, v220);
            v176 = fmaxf(v176, v220);
            *(_QWORD *)((char *)&v245 + 4) = __PAIR64__(LODWORD(v176), LODWORD(v177));
            *((float *)&v245 + 3) = v175;
            *(float *)&v245 = v178;
          }
          while ( v213 < v158 );
        }
      }
      else
      {
        v183 = v158 - 2;
        v184 = (unsigned int)(v158 - 2);
        if ( v184 < v158 )
        {
          do
          {
            v178 = fminf(v178, *(float *)(v157 + 8 * v184));
            v177 = fminf(v177, *(float *)(v157 + 8 * v184 + 4));
            v176 = fmaxf(v176, *(float *)(v157 + 8 * v184));
            v175 = fmaxf(v175, *(float *)(v157 + 8 * v184 + 4));
            v184 = ++v183;
            *(_QWORD *)&v245 = __PAIR64__(LODWORD(v177), LODWORD(v178));
            *((_QWORD *)&v245 + 1) = __PAIR64__(LODWORD(v175), LODWORD(v176));
          }
          while ( v183 < v158 );
        }
      }
      v37 = _xmm;
    }
    v185 = *((_QWORD *)v120 + 5);
    v284 = 0LL;
    v286 = 0;
    v186 = *(_BYTE *)(v185 + 80);
    v285 = v280;
    v187 = PrimitiveStorage::Alloc_16_((unsigned int *)&v284);
    v188 = v187;
    if ( !v187 )
    {
      v40 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x6Cu, 0LL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiasdrawlistentry.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_76;
    }
    v187[80] = v186;
    v187[81] = v151;
    *(_OWORD *)(v187 + 56) = v245;
    *((_QWORD *)v187 + 9) = *(_QWORD *)(v185 + 72);
    v189 = CThreadLocalObjectCache<CCpuClipAntialiasDrawListEntry,CCpuClipAntialiasDrawListEntry>::Alloc();
    v190 = v189;
    if ( !v189 )
      break;
    *(_DWORD *)(v189 + 8) = 0;
    *(_QWORD *)v189 = &CDrawListEntry::`vftable';
    *(_QWORD *)(v189 + 16) = v188;
    *(_QWORD *)(v189 + 24) = v148;
    if ( !v148 )
      goto LABEL_260;
    v191 = **(__int64 (__fastcall ***)(CMILRefCountImpl *))v148;
    if ( v191 != CMILRefCountImpl::AddReference )
    {
      v191((CMILRefCountImpl *)v148);
LABEL_260:
      v193 = v253;
      goto LABEL_204;
    }
    v192 = _InterlockedExchangeAdd(v148, 1u);
    if ( (v192 + 1 < 0) ^ __OFADD__(1, v192) | (v192 == -1) )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v237);
    v193 = v277;
    v140 = v275;
LABEL_204:
    v194 = v273;
    *(_QWORD *)(v190 + 32) = v273;
    if ( v194 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v194 + 8LL))(v194);
    *(_QWORD *)(v190 + 40) = v274;
    *(_DWORD *)(v190 + 48) = 1065353216;
    *(_DWORD *)(v190 + 52) = 1065353216;
    *(_DWORD *)(v190 + 56) = 1065353216;
    *(_DWORD *)(v190 + 60) = 1065353216;
    *(_DWORD *)(v190 + 64) = v272;
    if ( v140 )
      *(_OWORD *)(v190 + 48) = *(_OWORD *)v140;
    if ( v276 )
    {
      *(_QWORD *)(v190 + 68) = *v276;
      *(_DWORD *)(v190 + 64) = v149 | 0x100;
    }
    *(_QWORD *)v190 = &CCpuClipAntialiasDrawListEntry::`vftable';
    v195 = v251;
    v251 = 0LL;
    *(_QWORD *)(v190 + 80) = v195;
    *(_QWORD *)(v190 + 88) = v193;
    v196 = **(__int64 (__fastcall ***)(CMILRefCountImpl *))v193;
    if ( v196 == CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v193);
    else
      v196(v193);
    v198 = v279;
    *(_QWORD *)(v190 + 96) = v278;
    *(float *)(v190 + 104) = v198;
    *(_BYTE *)(v190 + 108) = v282;
    *(_BYTE *)(v190 + 109) = v283;
    v199 = _InterlockedExchangeAdd((volatile signed __int32 *)(v190 + 8), 1u);
    if ( (v199 + 1 < 0) ^ __OFADD__(1, v199) | (v199 == -1) )
LABEL_235:
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v237);
    v200 = v264;
    v201 = (_QWORD *)*((_QWORD *)v264 + 15);
    v202 = *((_QWORD *)v264 + 14);
    v203 = ((__int64)v201 - v202) >> 3;
    if ( (__int64)(*((_QWORD *)v264 + 16) - (_QWORD)v201) >> 3 )
      goto LABEL_214;
    if ( v203 + 1 < v203 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      goto LABEL_235;
    }
    v230 = detail::liberal_expansion_policy::expand(v197, (*((_QWORD *)v264 + 16) - v202) >> 3, v203 + 1);
    v231 = operator new[](saturated_mul(v230, 8uLL));
    v232 = (const void *)*((_QWORD *)v200 + 14);
    v266 = 0LL;
    v233 = v231;
    v234 = *((_QWORD *)v200 + 15) - (_QWORD)v232;
    *(_QWORD *)&v265 = v231;
    *((_QWORD *)&v265 + 1) = v203;
    v306 = 0LL;
    v305 = v265;
    v235 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(&v305, v234 >> 3);
    memmove_0(v235, v232, v234);
    v236 = (_QWORD *)*((_QWORD *)v200 + 14);
    *((_QWORD *)v200 + 14) = v233;
    if ( v236 == (_QWORD *)((char *)v200 + 136) )
      v236 = 0LL;
    operator delete(v236);
    v202 = *((_QWORD *)v200 + 14);
    v201 = (_QWORD *)(v202 + 8 * v203);
    *((_QWORD *)v200 + 15) = v201;
    *((_QWORD *)v200 + 16) = v202 + 8 * v230;
LABEL_214:
    v204 = ((__int64)v201 - v202) >> 3;
    v205 = v204 - v203;
    v206 = (_QWORD *)(v202 + 8 * v204);
    if ( !v206 )
      goto LABEL_223;
    v207 = (((__int64)v201 - v202) >> 3) - v203;
    if ( v205 > 1 )
      v207 = 1LL;
    v208 = 1LL;
    v209 = &v201[-v207];
    if ( v201 != v209 )
    {
      while ( 1 )
      {
        --v201;
        if ( !v208 )
          break;
        if ( --v208 )
          break;
        *v206 = *v201;
        if ( v201 == v209 )
          goto LABEL_218;
      }
LABEL_223:
      _invalid_parameter_noinfo_noreturn();
    }
LABEL_218:
    if ( v205 > 1 )
    {
      if ( v204 && (!v202 || v204 < 0) )
        goto LABEL_223;
      v297[1] = v204;
      v297[2] = v204;
      v297[0] = v202;
      v221 = 8 * v204 - 8 * v203 - 8;
      v222 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(v297, -(v221 >> 3));
      memmove_0((void *)(v222 - v221), (const void *)(v202 + 8 * v203), v221);
    }
    *((_QWORD *)v200 + 15) += 8LL;
    *(_QWORD *)(v202 + 8 * v203) = v190;
    v210 = v251;
    if ( v251 )
    {
      v211 = (void *)*((_QWORD *)v251 + 2);
      if ( v211 )
        operator delete(v211);
      operator delete(v210, 0x18uLL);
      v14 = v246;
      v16 = v244;
      v30 = v248;
      v35 = v239;
      v36 = v238;
      v38 = v241;
      v8 = v256;
      v10 = v257;
      v250 = v249;
    }
    else
    {
      v14 = v246;
      v16 = v244;
      v30 = v248;
      v35 = v239;
      v36 = v238;
      v38 = v241;
      v8 = v256;
      v10 = v257;
      v250 = v249;
    }
  }
  v40 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x21,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiasdrawlistentry.cpp",
    (const char *)0x8007000ELL);
  (**(void (__fastcall ***)(char *, __int64))v188)(v188, 1LL);
LABEL_76:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x728u, 0LL);
  if ( v254 )
    CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v254);
  v101 = v251;
  if ( v251 )
  {
    v102 = (void *)*((_QWORD *)v251 + 2);
    if ( v102 )
      operator delete(v102);
    operator delete(v101, 0x18uLL);
  }
LABEL_82:
  v103 = v250;
LABEL_83:
  if ( v103 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v103 + 8LL))(v103);
  if ( 0x6DB6DB6DB6DB6DB7LL * ((v314 - (_BYTE *)lpMem) >> 3) )
    v314 -= 8 * ((v314 - (_BYTE *)lpMem) >> 3);
  v104 = lpMem;
  lpMem = 0LL;
  if ( v104 != v316 && v104 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v104);
  }
  return v40;
}
