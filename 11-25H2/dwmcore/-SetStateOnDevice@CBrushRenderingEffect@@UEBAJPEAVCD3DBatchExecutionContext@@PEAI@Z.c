/*
 * XREFs of ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180148520
 * Callers:
 *     ?SetRenderingEffectState@CD3DBatchExecutionContext@@QEAAJPEBVCRenderingEffect@@@Z @ 0x180144430 (-SetRenderingEffectState@CD3DBatchExecutionContext@@QEAAJPEBVCRenderingEffect@@@Z.c)
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x180144C20 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x180063B40 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x180069FE0 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18006C2B0 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x18006C960 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@w.c)
 *     ?CreateResource@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x18006CAD4 (-CreateResource@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z.c)
 *     ?_Tidy@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@AEAAXXZ @ 0x18006CB44 (-_Tidy@-$vector@UFragmentStackEntry@CFragmentIterator@@V-$allocator@UFragmentStackEntry@CFragmen.c)
 *     ?CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x18006CBB0 (-CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V-$span@.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??$_Emplace_reallocate@PEBUShaderLinkingBody@@@?$vector@PEBUShaderLinkingBody@@V?$allocator@PEBUShaderLinkingBody@@@std@@@std@@AEAAPEAPEBUShaderLinkingBody@@QEAPEBU2@$$QEAPEBU2@@Z @ 0x18006CF2C (--$_Emplace_reallocate@PEBUShaderLinkingBody@@@-$vector@PEBUShaderLinkingBody@@V-$allocator@PEBU.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z @ 0x18006D2F8 (-Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z.c)
 *     ?ReleaseResources@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@AEAAXXZ @ 0x18006D5D4 (-ReleaseResources@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@AEAAXXZ.c)
 *     ??$_Emplace_one_at_back@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@AEAAAEAPEAVIDeviceResourceNotify@@AEBQEAV2@@Z @ 0x18006D62C (--$_Emplace_one_at_back@AEBQEAVIDeviceResourceNotify@@@-$vector@PEAVIDeviceResourceNotify@@V-$al.c)
 *     ??$emplace@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@1@V?$basic_iterator@$$CBV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@1@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18006D96C (--$emplace@V-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@-$vector_facade@V-$.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AC9A0 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DA620 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800DA640 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801470F0 (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180147C20 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?EnsureShaderResourceView@CD2DBitmap@@IEAAJXZ @ 0x1801483E8 (-EnsureShaderResourceView@CD2DBitmap@@IEAAJXZ.c)
 *     ?GetShaderResourceView@CD2DBitmap@@UEAAPEAUID3D11ShaderResourceView@@XZ @ 0x18014A240 (-GetShaderResourceView@CD2DBitmap@@UEAAPEAUID3D11ShaderResourceView@@XZ.c)
 *     ?TryGetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ @ 0x18014A4E0 (-TryGetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ.c)
 *     ?GetFragmentIterator@CRenderingTechnique@@AEBA?AVCFragmentIterator@@XZ @ 0x18014A530 (-GetFragmentIterator@CRenderingTechnique@@AEBA-AVCFragmentIterator@@XZ.c)
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x18014A890 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ??1CReconstructableDrawListEntry@@UEAA@XZ @ 0x18014C070 (--1CReconstructableDrawListEntry@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCReconstructableDrawListEntry_UVx2@@V1@@@SAXPEAX@Z @ 0x18014C0DC (-Free@-$CThreadLocalObjectCache@VCReconstructableDrawListEntry_UVx2@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAXPEAX@Z @ 0x18014C1CC (-Free@-$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAXPEAX@Z.c)
 *     ??1CDrawListEntry@@MEAA@XZ @ 0x18014C2BC (--1CDrawListEntry@@MEAA@XZ.c)
 *     ??1CDrawListCache@@EEAA@XZ @ 0x18014C318 (--1CDrawListCache@@EEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAXPEAX@Z @ 0x18014C350 (-Free@-$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAXPEAX@Z.c)
 *     ?GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ @ 0x18018F1A0 (-GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ.c)
 *     ?ToD3D11TextureAddressMode@ExtendMode@@YA?AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z @ 0x1801903B4 (-ToD3D11TextureAddressMode@ExtendMode@@YA-AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x1801AA080 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 *     ?GetDeviceTexture@CCachedImageProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801B5730 (-GetDeviceTexture@CCachedImageProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ??0ShaderLinkingSamplerDesc@@QEAA@XZ @ 0x1801D7B30 (--0ShaderLinkingSamplerDesc@@QEAA@XZ.c)
 *     ?CreateResource@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x1802062D0 (-CreateResource@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?SetNoOpLightingConstantBuffers@CD3DBatchExecutionContext@@QEAAXXZ @ 0x180259410 (-SetNoOpLightingConstantBuffers@CD3DBatchExecutionContext@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18025C7C0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18025C828 (_Init_thread_header.c)
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802E10C0 (-GetDeviceTexture@CDxHandleBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTextu.c)
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@WBAA@EBA?AUPixelFormatInfo@@XZ @ 0x1802E1100 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@WBAA@EBA-AUPixelFormatInfo@@XZ.c)
 *     memcmp_0 @ 0x1802E8968 (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingEffect::SetStateOnDevice(
        CBrushRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        unsigned int *a3)
{
  float *v3; // rbx
  __int64 v4; // rax
  struct CD3DDevice *v5; // r11
  CBrushRenderingEffect *v6; // r9
  unsigned __int64 v7; // rax
  float v8; // xmm0_4
  __int64 v9; // rdx
  bool v10; // si
  unsigned int v11; // edi
  int v12; // ecx
  unsigned int v13; // eax
  CCachedImageProducer *v14; // rcx
  char *v15; // r13
  int (*v16)(CCachedImageProducer *__hidden, const struct RenderTargetInfo *, struct IDeviceTexture **); // rax
  struct D2D_SIZE_U *v17; // rbx
  int v18; // eax
  unsigned int v19; // ebx
  CRenderTargetBitmap *v20; // rcx
  __int64 (__fastcall *v21)(CRenderTargetBitmap *, const struct RenderTargetInfo *, struct IDeviceTexture **); // rax
  int DeviceTexture; // eax
  CD3DDevice *v23; // rbx
  struct ID3D11ShaderResourceView *(__fastcall *v24)(CDeviceTextureTarget *__hidden); // rax
  struct ID3D11ShaderResourceView *ShaderResourceView; // rax
  __int64 v26; // rax
  __int64 v27; // xmm0_8
  _DWORD *v28; // rdx
  bool v29; // cl
  bool v30; // r13
  CD3DBatchExecutionContext *v31; // r8
  __int64 v32; // rax
  int *v33; // rax
  unsigned __int64 v34; // r11
  __int64 v35; // r12
  float v36; // xmm6_4
  unsigned int v37; // ebx
  int v38; // esi
  CRenderingTechnique *v39; // r10
  char *v40; // r9
  char *v41; // rdi
  _DWORD *v42; // rbx
  __int64 v43; // r12
  int v44; // eax
  __int64 v45; // r15
  _BYTE *v46; // rdi
  __int64 (__fastcall *v47)(__int64, __int64); // rax
  struct IBitmapRealization *RenderingRealization; // rax
  _DWORD *(__fastcall *v49)(__int64, _DWORD *); // r8
  int v50; // eax
  __int64 *v51; // rax
  bool v52; // r8
  int v53; // edi
  int v54; // edx
  int v55; // ecx
  unsigned int v56; // eax
  _BYTE *v57; // rdi
  __int64 (__fastcall *v58)(__int64, __int64); // rax
  struct IBitmapRealization *v59; // rax
  _DWORD *(__fastcall *v60)(__int64, _DWORD *); // r8
  int v61; // eax
  __int64 *v62; // rax
  bool v63; // cl
  bool v64; // cl
  float v65; // xmm1_4
  unsigned __int64 v66; // r11
  __int64 v67; // rsi
  __int64 v68; // rdx
  float *v69; // rdi
  char *v70; // rcx
  char v71; // r9
  __int64 v72; // rcx
  float v73; // xmm0_4
  char v74; // dl
  char v75; // al
  bool v76; // al
  __int64 v77; // rbx
  __int64 v78; // r15
  __int64 *v79; // rbx
  __int64 v80; // rdx
  char v81; // di
  int v82; // ecx
  unsigned int v83; // eax
  unsigned int v84; // eax
  unsigned __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 *v87; // rdx
  __int64 v88; // rcx
  __int128 *v89; // rdx
  int v90; // eax
  __int64 v92; // rax
  __int64 v93; // rdi
  CBrushRenderingEffect *v94; // rdi
  CD3DDevice *v95; // rcx
  __int64 v96; // rax
  __int64 v97; // r10
  volatile signed __int32 *v98; // r13
  int v99; // edi
  unsigned __int64 v100; // rdx
  struct CD3DConstantBuffer *v101; // r15
  unsigned int m; // r9d
  __int64 v103; // r8
  unsigned int v104; // esi
  int updated; // eax
  __int64 v106; // r15
  CD3DDevice *v107; // rcx
  CD3DBatchExecutionContext *v108; // rsi
  CRenderingTechnique *v109; // rcx
  int v110; // eax
  int v111; // eax
  __int16 v112; // ax
  int v113; // eax
  int v114; // eax
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rcx
  int v118; // eax
  __int64 v119; // r11
  __int64 *v120; // rcx
  __int64 v121; // rax
  int v122; // ebx
  int v123; // eax
  int v124; // edi
  unsigned int v125; // eax
  CD3DDevice *v126; // rcx
  bool v127; // zf
  __int64 v128; // rdx
  unsigned int v129; // r9d
  __int64 **v130; // r8
  unsigned int i; // edi
  __int64 v132; // r13
  __int64 v133; // rdx
  __int64 v134; // rax
  int j; // ecx
  volatile signed __int32 *v136; // rsi
  unsigned __int64 v137; // rax
  int v138; // r12d
  int v139; // r12d
  CDrawListCache *(__fastcall *v140)(CDrawListCache *, char); // rax
  _BYTE *v141; // rsi
  _BYTE *v142; // rbx
  CRenderingTechnique *v143; // rax
  __int64 v144; // rcx
  __int64 v145; // r12
  _QWORD *v146; // r15
  __int64 v147; // r10
  int v148; // ebx
  struct CD3DDevice *v149; // r12
  struct CD3DConstantBuffer *v150; // r15
  unsigned int k; // r9d
  __int64 v152; // rbx
  unsigned int v153; // r12d
  int v154; // edx
  __int64 v155; // rcx
  void (__fastcall *v156)(__int64, __int64, _QWORD, _QWORD); // rsi
  __int64 v157; // rbx
  unsigned __int64 v158; // rdi
  const void *v159; // rax
  int v160; // eax
  char v161; // al
  char v162; // al
  bool v163; // cf
  unsigned int v164; // eax
  CDeviceManager *v165; // rcx
  int v166; // eax
  int v167; // eax
  CDeviceManager *v168; // rcx
  int DefaultDevice; // eax
  CRenderingTechnique *v170; // rcx
  int v171; // eax
  int v172; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v173; // [rsp+31h] [rbp-CFh]
  CD3DDevice *v174; // [rsp+40h] [rbp-C0h] BYREF
  struct CD3DConstantBuffer *v175; // [rsp+48h] [rbp-B8h] BYREF
  CBrushRenderingEffect *v176; // [rsp+50h] [rbp-B0h]
  volatile signed __int32 *v177; // [rsp+58h] [rbp-A8h] BYREF
  struct CD3DDevice *v178; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v179; // [rsp+68h] [rbp-98h] BYREF
  __int16 v180; // [rsp+70h] [rbp-90h]
  struct IRenderTargetBitmap *v181; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v182; // [rsp+88h] [rbp-78h]
  CD3DBatchExecutionContext *v183; // [rsp+90h] [rbp-70h]
  __int16 v184; // [rsp+A0h] [rbp-60h]
  __int16 v185; // [rsp+B0h] [rbp-50h]
  struct CD3DDevice *v186; // [rsp+C0h] [rbp-40h]
  __int64 v187; // [rsp+C8h] [rbp-38h]
  unsigned int *v188; // [rsp+D0h] [rbp-30h]
  CRenderingTechnique *v189; // [rsp+D8h] [rbp-28h] BYREF
  int v190; // [rsp+E0h] [rbp-20h]
  __int64 v191; // [rsp+E8h] [rbp-18h] BYREF
  int v192; // [rsp+F0h] [rbp-10h]
  __int64 v193; // [rsp+F8h] [rbp-8h] BYREF
  int v194; // [rsp+100h] [rbp+0h]
  __int128 v195; // [rsp+108h] [rbp+8h] BYREF
  _BYTE *v196; // [rsp+118h] [rbp+18h]
  __int64 v197; // [rsp+120h] [rbp+20h] BYREF
  int v198; // [rsp+128h] [rbp+28h]
  __int128 v199; // [rsp+130h] [rbp+30h] BYREF
  __int128 v200; // [rsp+140h] [rbp+40h]
  __int128 v201; // [rsp+150h] [rbp+50h] BYREF
  __m128i v202; // [rsp+160h] [rbp+60h]
  __int128 v203; // [rsp+170h] [rbp+70h] BYREF
  __int128 v204; // [rsp+180h] [rbp+80h]
  __int128 v205; // [rsp+190h] [rbp+90h] BYREF
  __int128 v206; // [rsp+1A0h] [rbp+A0h]
  __int128 v207; // [rsp+1B0h] [rbp+B0h]
  __int64 v208; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v209; // [rsp+1C8h] [rbp+C8h]
  __int128 v210; // [rsp+1E0h] [rbp+E0h] BYREF
  _DWORD v211[3]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v212; // [rsp+1FCh] [rbp+FCh]
  int v213; // [rsp+204h] [rbp+104h]
  int v214; // [rsp+208h] [rbp+108h]
  __int128 v215; // [rsp+20Ch] [rbp+10Ch]
  int v216; // [rsp+21Ch] [rbp+11Ch]
  int v217; // [rsp+220h] [rbp+120h]
  _QWORD v218[3]; // [rsp+228h] [rbp+128h] BYREF
  _OWORD v219[5]; // [rsp+240h] [rbp+140h] BYREF
  __int128 v220; // [rsp+290h] [rbp+190h]
  __int128 v221; // [rsp+2A0h] [rbp+1A0h]
  __int128 v222; // [rsp+2B0h] [rbp+1B0h]
  __int128 v223; // [rsp+2C0h] [rbp+1C0h]
  _OWORD v224[2]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _OWORD v225[5]; // [rsp+2F0h] [rbp+1F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3A8h] [rbp+2A8h]

  v3 = (float *)*((_QWORD *)a2 + 14);
  v4 = *((_QWORD *)a2 + 2);
  v5 = (struct CD3DDevice *)*((_QWORD *)a2 + 1);
  memset(v224, 0, sizeof(v224));
  v187 = v4;
  v6 = this;
  v7 = *((_QWORD *)a2 + 3);
  v188 = a3;
  memset(v225, 0, 32);
  v183 = a2;
  v176 = this;
  v8 = v3[4];
  v186 = v5;
  v177 = (volatile signed __int32 *)v7;
  v175 = (struct CD3DConstantBuffer *)v3;
  v9 = *((_QWORD *)this + 2);
  v10 = 0;
  v11 = 0;
  v12 = *(_DWORD *)(v9 + 264);
  v182 = 20;
  if ( (v12 & 0x20) == 0 )
    v10 = v8 != 0.0;
  v13 = *(_DWORD *)(v9 + 260);
  LODWORD(v178) = v13;
  while ( v11 < v13 )
  {
    v14 = (CCachedImageProducer *)*((_QWORD *)v6 + 3 * v11 + 4);
    if ( !v14 )
    {
      *((_QWORD *)v224 + v11) = 0LL;
      v10 = 0;
      goto LABEL_27;
    }
    v174 = 0LL;
    v15 = (char *)&v225[2] + 12 * v11;
    v16 = *(int (**)(CCachedImageProducer *__hidden, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v14 + 96LL);
    if ( v16 == CCachedVisualImage::GetDeviceTexture )
    {
      v17 = (struct D2D_SIZE_U *)((char *)v14 - 80);
      v181 = 0LL;
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v181);
      v18 = CCachedVisualImage::EnsureRenderTargetBitmap(v17, v175, &v181);
      v19 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x193u, 0LL);
      }
      else
      {
        v20 = (struct IRenderTargetBitmap *)((char *)v181 + 8);
        v21 = *(__int64 (__fastcall **)(CRenderTargetBitmap *, const struct RenderTargetInfo *, struct IDeviceTexture **))(*((_QWORD *)v181 + 1) + 96LL);
        if ( v21 == CRenderTargetBitmap::GetDeviceTexture )
          DeviceTexture = CRenderTargetBitmap::GetDeviceTexture(v20, v175, &v174);
        else
          DeviceTexture = v21(v20, v175, &v174);
        v19 = DeviceTexture;
        if ( DeviceTexture < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DeviceTexture, 0x196u, 0LL);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v181);
    }
    else
    {
      if ( v16 == CCachedImageProducer::GetDeviceTexture )
      {
        v90 = CCachedImageProducer::GetDeviceTexture(v14, (const struct RenderTargetInfo *)v3, &v174);
LABEL_160:
        v19 = v90;
        goto LABEL_13;
      }
      if ( (char *)v16 != (char *)CDxHandleBitmapRealization::GetDeviceTexture )
      {
        v90 = ((__int64 (__fastcall *)(CCachedImageProducer *, float *, CD3DDevice **))v16)(v14, v3, &v174);
        goto LABEL_160;
      }
      v19 = CDxHandleBitmapRealization::GetDeviceTexture(v14, v3, &v174);
    }
LABEL_13:
    if ( (v19 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x72,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistbitmap.cpp",
        (const char *)v19);
      if ( v174 )
        (*(void (__fastcall **)(CD3DDevice *))(*(_QWORD *)v174 + 16LL))(v174);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15A,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\brushrenderingeffect.cpp",
        (const char *)v19);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x50,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\brushrenderingeffect.cpp",
        (const char *)v19);
      return v19;
    }
    v23 = v174;
    v24 = *(struct ID3D11ShaderResourceView *(__fastcall **)(CDeviceTextureTarget *__hidden))(*(_QWORD *)v174 + 128LL);
    if ( v24 == CD2DBitmap::GetShaderResourceView )
    {
      CD2DBitmap::EnsureShaderResourceView((CD3DDevice *)((char *)v174 - 72));
      ShaderResourceView = (struct ID3D11ShaderResourceView *)*((_QWORD *)v23 + 5);
    }
    else if ( v24 == CDeviceTextureTarget::GetShaderResourceView )
    {
      if ( !*((_BYTE *)v174 + 218) && !*((_BYTE *)v174 + 217) )
      {
        ShaderResourceView = 0LL;
        goto LABEL_17;
      }
      ShaderResourceView = CD2DBitmap::GetShaderResourceView(v174);
    }
    else
    {
      ShaderResourceView = v24(v174);
    }
    v23 = v174;
LABEL_17:
    *((_QWORD *)v224 + v11) = ShaderResourceView;
    if ( v15 )
    {
      v26 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*((_QWORD *)v23 + 1) + 24LL))((__int64)v23 + 8, &v208);
      v23 = v174;
      v27 = *(_QWORD *)v26;
      LODWORD(v26) = *(_DWORD *)(v26 + 8);
      *(_QWORD *)v15 = v27;
      *((_DWORD *)v15 + 2) = v26;
    }
    if ( v23 )
      (*(void (__fastcall **)(CD3DDevice *))(*(_QWORD *)v23 + 16LL))(v23);
    v28 = &unk_18033AD70;
    do
    {
      if ( *v28 == *((_DWORD *)&v225[2] + 3 * v11 + 2) )
        break;
      ++v28;
    }
    while ( v28 != (_DWORD *)&unk_18033AD88 );
    v29 = 0;
    if ( v28 != (_DWORD *)&unk_18033AD88 )
      v29 = v10;
    v10 = v29;
LABEL_27:
    v3 = (float *)v175;
    ++v11;
    v13 = (unsigned int)v178;
    v6 = v176;
  }
  v30 = !v10;
  v199 = 0LL;
  v200 = 0LL;
  v201 = 0LL;
  v202 = 0LL;
  v203 = 0LL;
  v204 = 0LL;
  v205 = 0LL;
  v206 = 0LL;
  if ( ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
  {
    *((_QWORD *)&v200 + 1) = 0LL;
    *(_QWORD *)&v201 = 0LL;
  }
  else
  {
    ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc((ShaderLinkingSamplerDesc *)&v199);
    v6 = v176;
  }
  if ( ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
  {
    v202.m128i_i64[1] = 0LL;
    *(_QWORD *)&v203 = 0LL;
  }
  else
  {
    ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc((ShaderLinkingSamplerDesc *)&v201);
    v6 = v176;
  }
  if ( ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
  {
    *((_QWORD *)&v204 + 1) = 0LL;
    *(_QWORD *)&v205 = 0LL;
  }
  else
  {
    ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc((ShaderLinkingSamplerDesc *)&v203);
    v6 = v176;
  }
  if ( ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
  {
    *((_QWORD *)&v206 + 1) = 0LL;
    DWORD1(v207) = 0;
  }
  else
  {
    ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc((ShaderLinkingSamplerDesc *)&v205);
    v6 = v176;
  }
  v207 = 0xFFFFFFFFuLL;
  BYTE9(v207) = v3[4] != 0.0;
  v31 = v183;
  BYTE8(v207) = !v10;
  v32 = *((_QWORD *)v183 + 5);
  BYTE4(v207) = *((_DWORD *)v183 + 14) == 22;
  if ( v32 )
  {
    v33 = (int *)(v32 + 16);
  }
  else
  {
    if ( __TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                       + (unsigned int)tls_index)
                                                                     + 4LL) )
    {
      Init_thread_header(&__TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA);
      if ( __TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA == -1 )
      {
        `CLightsMask::NoLights'::`2'::noLights = -1;
        Init_thread_footer(&__TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA);
      }
      v31 = v183;
      v6 = v176;
    }
    v33 = &`CLightsMask::NoLights'::`2'::noLights;
  }
  v34 = (unsigned __int64)v177;
  LODWORD(v207) = *v33;
  BYTE5(v207) = *((_BYTE *)v177 + 256);
  if ( v10 )
    LODWORD(v179) = *(_DWORD *)(*((_QWORD *)v31 + 15) + 8LL);
  else
    LODWORD(v179) = 0;
  LODWORD(v35) = 0;
  v36 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v37 = *(_DWORD *)(*((_QWORD *)v6 + 2) + 260LL);
  LODWORD(v175) = v37;
  while ( 2 )
  {
    LODWORD(v178) = v35;
    v38 = 32;
    if ( (unsigned int)v35 >= v37 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v6 + 2) + 264LL) & 0x10) == 0 || v37 >= 4 )
        v36 = 0.0;
      if ( *(float *)(v34 + 144) != v36 )
      {
        *(_BYTE *)(v34 + 120) = 1;
        *(float *)(v34 + 144) = v36;
      }
      v78 = v187;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _OWORD *))(*(_QWORD *)v187 + 64LL))(v187, 0LL, v37, v224);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _OWORD *))(*(_QWORD *)v78 + 80LL))(v78, 0LL, v37, v225);
      v219[0] = v199;
      v79 = (__int64 *)*((_QWORD *)v176 + 2);
      v219[2] = v201;
      v219[4] = v203;
      v80 = *v79;
      v221 = v205;
      v220 = v204;
      v223 = v207;
      BYTE6(v223) = 1;
      v219[1] = v200;
      v219[3] = v202;
      v222 = v206;
      if ( *(_QWORD *)(v80 + 184) )
      {
        v81 = 0;
        if ( *(__int64 **)(*(_QWORD *)(v80 + 144) + 8LL * (unsigned int)(*(_DWORD *)(v80 + 168) - 1)) == v79 )
        {
          BYTE7(v223) = 1;
          goto LABEL_115;
        }
      }
      else
      {
        v81 = 1;
      }
      BYTE4(v223) = 0;
      LODWORD(v223) = -1;
LABEL_115:
      v82 = BYTE7(v200) || WORD1(v200);
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v202, 7))
        || (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v202, 2))
        || (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v202, 3)) )
      {
        v82 |= 2u;
      }
      if ( WORD1(v220) || BYTE7(v220) )
        v83 = v82 | 4;
      else
        v83 = v82 & 0xFFFFFFFB;
      if ( WORD1(v222) || BYTE7(v222) )
        v84 = v83 | 8;
      else
        v84 = v83 & 0xFFFFFFF7;
      LODWORD(v177) = v84;
      if ( _isa_available >= 2 )
        LODWORD(v85) = __popcnt(v84);
      else
        v85 = (unsigned __int64)(16843009
                               * ((((v84 - ((v84 >> 1) & 0x55555555)) & 0x33333333)
                                 + (((v84 - ((v84 >> 1) & 0x55555555)) >> 2) & 0x33333333)
                                 + ((((v84 - ((v84 >> 1) & 0x55555555)) & 0x33333333)
                                   + (((v84 - ((v84 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 24;
      HIDWORD(v177) = 32 * v85;
      if ( v84 != *((_DWORD *)v79 + 67) )
      {
        if ( 32 * (_DWORD)v85 != *((_DWORD *)v79 + 68) )
        {
          CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::ReleaseResources((struct IDeviceResourceNotify *)(v79 + 3));
          *((_BYTE *)v79 + 276) = 1;
        }
        *(__int64 *)((char *)v79 + 268) = (__int64)v177;
      }
      if ( v81 )
      {
        i = 0;
        v132 = *(_QWORD *)(v79[1] + 8);
      }
      else
      {
        v128 = *v79;
        v129 = *(_DWORD *)(*v79 + 168);
        v130 = *(__int64 ***)(*v79 + 144);
        if ( v130[v129 - 1] == v79 )
        {
          i = *(_DWORD *)(v128 + 192) | (v129 - 1);
        }
        else
        {
          for ( i = 0; i < v129; ++v130 )
          {
            if ( v79 == *v130 )
              break;
            ++i;
          }
        }
        v132 = *(_QWORD *)(v128 + 184);
      }
      ShaderLinkingConfig::GetLookupKey(v219, &v189, i);
      v133 = 0LL;
      v134 = 0LL;
      for ( j = 0; ; ++j )
      {
        if ( v133 >= *(int *)(v132 + 16) )
          goto LABEL_289;
        if ( *(CRenderingTechnique **)(v134 + *(_QWORD *)v132) == v189
          && *(_DWORD *)(v134 + *(_QWORD *)v132 + 8) == v190 )
        {
          break;
        }
        ++v133;
        v134 += 16LL;
      }
      if ( j == -1 )
      {
LABEL_289:
        v177 = 0LL;
      }
      else
      {
        v136 = *(volatile signed __int32 **)(*(_QWORD *)(v132 + 8) + 8LL * j);
        if ( v136 && _InterlockedAdd(v136 + 2, 1u) <= 0 )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x18,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v172);
        v137 = (unsigned __int64)v136;
        if ( v136 )
        {
          v138 = _InterlockedDecrement(v136 + 2);
          if ( v138 < -1 )
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x26,
              (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
              (const char *)0x8007029CLL,
              v172);
          v137 = (unsigned __int64)v136;
          if ( !v138 )
          {
            if ( _InterlockedAdd(v136 + 2, 1u) <= 0 )
              wil::details::in1diag3::Log_Hr(
                retaddr,
                (void *)0x18,
                (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                (const char *)0x8007029CLL,
                v172);
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v136 + 24LL))(v136);
            v139 = _InterlockedDecrement(v136 + 2);
            if ( v139 < -1 )
              wil::details::in1diag3::Log_Hr(
                retaddr,
                (void *)0x26,
                (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                (const char *)0x8007029CLL,
                v172);
            v137 = (unsigned __int64)v136;
            if ( !v139 )
            {
              if ( _InterlockedDecrement(v136 + 2) < -1 )
                wil::details::in1diag3::Log_Hr(
                  retaddr,
                  (void *)0x26,
                  (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                  (const char *)0x8007029CLL,
                  v172);
              v140 = *(CDrawListCache *(__fastcall **)(CDrawListCache *, char))(*(_QWORD *)v136 + 16LL);
              if ( v140 == CReconstructableDrawListEntry_UVx2::`vector deleting destructor' )
              {
                CReconstructableDrawListEntry::~CReconstructableDrawListEntry((CReconstructableDrawListEntry *)v136);
                CThreadLocalObjectCache<CReconstructableDrawListEntry_UVx2,CReconstructableDrawListEntry_UVx2>::Free((LPVOID)v136);
              }
              else if ( v140 == CDrawListEntry::`scalar deleting destructor' )
              {
                CDrawListEntry::~CDrawListEntry((CDrawListEntry *)v136);
                CThreadLocalObjectCache<CDrawListEntry,CDrawListEntry>::Free((LPVOID)v136);
              }
              else if ( v140 == CDrawListCache::`scalar deleting destructor' )
              {
                CDrawListCache::~CDrawListCache((CDrawListCache *)v136);
                CThreadLocalObjectCache<CDrawListCache,CDrawListCache>::Free((LPVOID)v136);
              }
              else
              {
                v140((CDrawListCache *)v136, 1);
              }
              goto LABEL_299;
            }
          }
        }
        v177 = (volatile signed __int32 *)v137;
        v136 = (volatile signed __int32 *)v137;
        if ( v137 )
        {
LABEL_299:
          v147 = *((_QWORD *)v136 + 6);
          v148 = 0;
          v149 = v186;
          v150 = 0LL;
          for ( k = 0; ; ++k )
          {
            if ( k >= (unsigned __int64)((*((_QWORD *)v136 + 7) - v147) >> 3) )
              goto LABEL_315;
            if ( !v186 || v186 == *(struct CD3DDevice **)(*(_QWORD *)(*(_QWORD *)(v147 + 8LL * k) + 40LL) + 80LL) )
              break;
          }
          v150 = *(struct CD3DConstantBuffer **)(8LL * k + v147);
          if ( v150 )
          {
LABEL_304:
            v124 = v148;
            if ( v148 >= 0 )
            {
LABEL_305:
              v152 = *((_QWORD *)v150 + 15);
              v153 = *((_DWORD *)v136 + 6);
              if ( v152 )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v152 + 8LL))(*((_QWORD *)v150 + 15));
              v106 = v187;
              v154 = 0;
              v155 = 0LL;
              v156 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v187 + 88LL);
              while ( v155 < *((int *)v186 + 382) )
              {
                if ( *(_DWORD *)(*((_QWORD *)v186 + 189) + 4 * v155) == v153 )
                {
                  if ( v154 != -1 )
                  {
                    v92 = *((_QWORD *)v186 + 190);
                    v93 = *(_QWORD *)(v92 + 8LL * v154);
                    if ( v93 )
                    {
                      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v93 + 8LL))(*(_QWORD *)(v92 + 8LL * v154));
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v93 + 16LL))(v93);
                      goto LABEL_171;
                    }
                  }
                  break;
                }
                ++v154;
                ++v155;
              }
              v93 = 0LL;
LABEL_171:
              v156(v106, v93, 0LL, 0LL);
              (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v106 + 72LL))(v106, v152, 0LL, 0LL);
              v94 = v176;
              v95 = 0LL;
              v174 = 0LL;
              v96 = *((_QWORD *)v176 + 2);
              v189 = (CRenderingTechnique *)v96;
              if ( !*(_DWORD *)(v96 + 256) && !*(_DWORD *)(v96 + 272) )
              {
LABEL_181:
                v174 = v95;
                if ( v95 )
                {
                  (*(void (__fastcall **)(CD3DDevice *))(*(_QWORD *)v95 + 8LL))(v95);
                  if ( v174 )
                  {
                    (*(void (__fastcall **)(__int64, _QWORD, __int64, CD3DDevice **))(*(_QWORD *)v106 + 128LL))(
                      v106,
                      0LL,
                      1LL,
                      &v174);
                    v107 = v174;
                    if ( v174 )
                    {
                      v174 = 0LL;
                      (*(void (__fastcall **)(CD3DDevice *))(*(_QWORD *)v107 + 16LL))(v107);
                    }
                  }
                }
                v108 = v183;
                if ( (*(_DWORD *)(*((_QWORD *)v94 + 2) + 264LL) & 2) != 0
                  && *(_DWORD *)CD3DBatchExecutionContext::GetLightsMask(v183) == -1
                  || (*(_DWORD *)(*((_QWORD *)v94 + 2) + 264LL) & 4) != 0 )
                {
                  CD3DBatchExecutionContext::SetNoOpLightingConstantBuffers(v108);
                }
                *v188 = v153;
                if ( v152 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v152 + 16LL))(v152);
                return 0LL;
              }
              v97 = *(_QWORD *)(v96 + 40);
              v98 = (volatile signed __int32 *)(v96 + 24);
              v99 = 0;
              v100 = (*(_QWORD *)(v96 + 48) - v97) >> 3;
              v101 = 0LL;
              for ( m = 0; ; ++m )
              {
                if ( m >= v100 )
                  goto LABEL_190;
                v103 = 8LL * m;
                if ( !v186 || v186 == *(struct CD3DDevice **)(*(_QWORD *)(*(_QWORD *)(v97 + 8LL * m) + 40LL) + 80LL) )
                  break;
              }
              v101 = *(struct CD3DConstantBuffer **)(v103 + v97);
              if ( v101 )
                goto LABEL_178;
LABEL_190:
              if ( v186 )
              {
                v109 = *(CRenderingTechnique **)(v96 + 32);
                v175 = 0LL;
                v110 = CRenderingTechnique::CreateResource(v109, v186, &v175);
                v99 = v110;
                v104 = v110;
                if ( v110 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v110, 0x52u, 0LL);
                  if ( v175 )
                  {
                    CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v175);
                    goto LABEL_381;
                  }
LABEL_178:
                  v104 = v99;
                  if ( v99 >= 0 )
                    goto LABEL_179;
LABEL_381:
                  v182 = 20;
                  v125 = 502;
                  goto LABEL_222;
                }
LABEL_192:
                v101 = v175;
                v177 = v98;
                std::vector<IDeviceResourceNotify *>::_Emplace_one_at_back<IDeviceResourceNotify * const &>(
                  (char **)v175 + 6,
                  &v177);
                *(_QWORD *)detail::vector_facade<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::reserve_region(
                             (__int64 *)v98 + 2,
                             (__int64)(*((_QWORD *)v98 + 3) - *((_QWORD *)v98 + 2)) >> 3) = v101;
LABEL_179:
                updated = CRenderingTechnique::UpdateConstantBuffers(v189, v100, v103);
                v104 = updated;
                if ( updated >= 0 )
                {
                  v95 = (CD3DDevice *)*((_QWORD *)v101 + 15);
                  v106 = v187;
                  v94 = v176;
                  goto LABEL_181;
                }
                v99 = updated;
                v125 = 504;
LABEL_222:
                MilInstrumentationCheckHR_MaybeFailFast(v182, 0LL, 0, v99, v125, 0LL);
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xC1,
                  (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\brushrenderingeffect.cpp",
                  (const char *)v104);
                v126 = v174;
                if ( v174 )
                {
                  v174 = 0LL;
                  (*(void (__fastcall **)(CD3DDevice *))(*(_QWORD *)v126 + 16LL))(v126);
                }
                if ( v152 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v152 + 16LL))(v152);
                return v104;
              }
              v178 = 0LL;
              wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v178);
              DefaultDevice = CDeviceManager::GetDefaultDevice(v168, &v178);
              v99 = DefaultDevice;
              if ( DefaultDevice < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DefaultDevice, 0x4Bu, 0LL);
                if ( v178 )
                  CD3DDevice::Release(v178);
              }
              else
              {
                v170 = (CRenderingTechnique *)*((_QWORD *)v98 + 1);
                v175 = 0LL;
                v171 = CRenderingTechnique::CreateResource(v170, v178, &v175);
                v99 = v171;
                if ( v171 >= 0 )
                {
                  if ( v178 )
                    CD3DDevice::Release(v178);
                  goto LABEL_192;
                }
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v171, 0x4Eu, 0LL);
                if ( v178 )
                  CD3DDevice::Release(v178);
                if ( v175 )
                  CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v175);
              }
              v104 = v99;
              goto LABEL_381;
            }
            goto LABEL_329;
          }
LABEL_315:
          v175 = 0LL;
          if ( v186 )
          {
            v157 = *((_QWORD *)v136 + 5);
            v158 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v157 + 16) + 32LL))(*(_QWORD *)(v157 + 16));
            v159 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v157 + 16) + 24LL))(*(_QWORD *)(v157 + 16));
            v160 = CD3DPixelShader::Create(v149, v159, v158, &v175);
            v148 = v160;
            v124 = v160;
            if ( v160 >= 0 )
            {
LABEL_317:
              v150 = v175;
              v177 = v136 + 8;
              std::vector<IDeviceResourceNotify *>::_Emplace_one_at_back<IDeviceResourceNotify * const &>(
                (char **)v175 + 6,
                &v177);
              v189 = (CRenderingTechnique *)*((_QWORD *)v136 + 7);
              v181 = 0LL;
              v177 = (volatile signed __int32 *)v150;
              detail::vector_facade<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::emplace<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>>(
                (detail::liberal_expansion_policy *)(v136 + 12),
                &v179,
                &v189,
                (unsigned __int64 *)&v177);
              wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v181);
              goto LABEL_305;
            }
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v160, 0x52u, 0LL);
            if ( !v175 )
              goto LABEL_304;
            (*(void (__fastcall **)(struct CD3DConstantBuffer *))(*(_QWORD *)v175 + 16LL))(v175);
          }
          else
          {
            v174 = 0LL;
            wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v174);
            v166 = CDeviceManager::GetDefaultDevice(v165, &v174);
            v148 = v166;
            v124 = v166;
            if ( v166 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v166, 0x4Bu, 0LL);
            }
            else
            {
              v167 = CLinkedShader::CreateResource(*((CLinkedShader **)v136 + 5), v174, &v175);
              v148 = v167;
              v124 = v167;
              if ( v167 >= 0 )
              {
                if ( v174 )
                  CD3DDevice::Release(v174);
                goto LABEL_317;
              }
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v167, 0x4Eu, 0LL);
            }
            if ( v174 )
              CD3DDevice::Release(v174);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v175);
          }
LABEL_329:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v148, 0x11u, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v148, 0x1E0u, 0LL);
          goto LABEL_220;
        }
      }
      v196 = 0LL;
      v195 = 0LL;
      v141 = 0LL;
      CRenderingTechnique::GetFragmentIterator(v79, &v208);
      v142 = (_BYTE *)*((_QWORD *)&v195 + 1);
      while ( v209 != v208 )
      {
        v143 = (CRenderingTechnique *)(*(_QWORD *)(v209 - 16) + 56LL);
        v189 = v143;
        if ( v142 == v141 )
        {
          std::vector<ShaderLinkingBody const *>::_Emplace_reallocate<ShaderLinkingBody const *>(
            (const void **)&v195,
            v142,
            &v189);
          v141 = v196;
          v142 = (_BYTE *)*((_QWORD *)&v195 + 1);
        }
        else
        {
          *(_QWORD *)v142 = v143;
          v142 += 8;
          *((_QWORD *)&v195 + 1) = v142;
        }
        v144 = v209 - 16;
        v209 = v144;
        if ( v144 == v208 )
          break;
        ++*(_DWORD *)(v144 - 8);
        CFragmentIterator::FindFirst((CFragmentIterator *)&v208);
      }
      v145 = *((_QWORD *)v142 - 1);
      v146 = (_QWORD *)v195;
      gsl::details::extent_type<-1>::extent_type<-1>(v218, ((__int64)&v142[-v195] >> 3) - 1);
      if ( v218[0] == -1LL || !v146 && v218[0] )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      *(_QWORD *)&v210 = v218[0];
      *((_QWORD *)&v210 + 1) = v146;
      v123 = CShaderCache::CreateLinkedShader((const void **)v132, i, (__int64)v219, v145, &v210, &v177);
      v124 = v123;
      if ( v123 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v123, 0x26Fu, 0LL);
      std::vector<CFragmentIterator::FragmentStackEntry>::_Tidy((__int64)&v208);
      if ( v146 )
        std::_Deallocate<16,0>(v146, (v141 - (_BYTE *)v146) & 0xFFFFFFFFFFFFFFF8uLL);
      if ( v124 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v124, 0x1DDu, 0LL);
LABEL_220:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB9,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\brushrenderingeffect.cpp",
          (const char *)(unsigned int)v124);
        return (unsigned int)v124;
      }
      v136 = v177;
      goto LABEL_299;
    }
    v39 = (CRenderingTechnique *)(3 * ((unsigned int)v35 + 1LL));
    v127 = *((_QWORD *)v6 + 3 * (unsigned int)v35 + 4) == 0LL;
    v189 = v39;
    if ( v127 )
    {
      *((_QWORD *)v225 + (unsigned int)v35) = 0LL;
      *((_BYTE *)&v200 + 32 * (unsigned int)v35 + 7) = 1;
      goto LABEL_84;
    }
    v40 = (char *)v6 + 2 * (unsigned int)v35;
    v184 = *(_WORD *)&v40[(unsigned int)v35 + 120];
    v41 = (char *)v186
        + 128 * (unsigned int)(unsigned __int8)v184
        + 32 * HIBYTE(v184)
        + 8 * (unsigned __int8)v40[(unsigned int)v35 + 122];
    if ( *((_QWORD *)v41 + 221) )
      goto LABEL_45;
    v185 = *(_WORD *)&v40[(unsigned int)v35 + 120];
    if ( HIBYTE(v185) && v40[(unsigned int)v35 + 122] )
      v111 = 37120;
    else
      v111 = 37632;
    if ( *((_DWORD *)v186 + 154) >= v111 )
    {
      v112 = *(_WORD *)&v40[(unsigned int)v35 + 120];
      v173 = HIBYTE(v112);
      if ( (unsigned __int8)v112 == 2 || (_BYTE)v112 )
        v113 = 21;
      else
        v113 = 0;
      v211[0] = v113;
      v114 = ExtendMode::ToD3D11TextureAddressMode(v173);
      v117 = *(unsigned __int8 *)(v115 + v116 + 122);
      v211[1] = v114;
      v118 = ExtendMode::ToD3D11TextureAddressMode(v117);
      v120 = *(__int64 **)(v119 + 552);
      v211[2] = v118;
      v212 = 3LL;
      v213 = 1;
      v214 = 8;
      v215 = 0LL;
      v216 = 0;
      v217 = 2139095039;
      v121 = *v120;
      *((_QWORD *)v41 + 221) = 0LL;
      v122 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, char *))(v121 + 184))(v120, v211, v41 + 1768);
      if ( v122 < 0 )
      {
        v164 = 3129;
        goto LABEL_382;
      }
      v39 = v189;
LABEL_45:
      v42 = &unk_18033AD70;
      *((_QWORD *)v225 + (unsigned int)v35) = *((_QWORD *)v41 + 221);
      v43 = 3LL * (unsigned int)v35;
      do
      {
        if ( *v42 == *((_DWORD *)&v225[2] + v43 + 2) )
          break;
        ++v42;
      }
      while ( v42 != (_DWORD *)&unk_18033AD88 );
      v44 = *((_DWORD *)&v225[2] + v43);
      v45 = 32LL * (unsigned int)v178;
      switch ( v44 )
      {
        case 88:
LABEL_51:
          v38 = 8;
          break;
        case 24:
LABEL_129:
          v38 = 10;
          break;
        case 107:
          goto LABEL_51;
        default:
          switch ( v44 )
          {
            case 2:
              goto LABEL_52;
            case 10:
            case 11:
              v38 = 16;
              break;
            case 28:
            case 49:
            case 61:
            case 65:
            case 87:
            case 91:
            case 103:
            case 106:
              goto LABEL_51;
            case 104:
              goto LABEL_129;
            default:
              v38 = 0;
              break;
          }
          break;
      }
LABEL_52:
      v6 = v176;
      if ( *((_BYTE *)v176 + 8 * (_QWORD)v39 + 16) )
      {
        v52 = 1;
        goto LABEL_63;
      }
      v46 = (_BYTE *)*((_QWORD *)v176 + (_QWORD)v39);
      if ( v46 )
      {
        if ( *(bool (__fastcall **)(CCompositionSurfaceBitmap *__hidden))(*(_QWORD *)v46 + 32LL) != CCompositionSurfaceBitmap::IsOpaque )
        {
          v161 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v46 + 32LL))(*((_QWORD *)v176 + (_QWORD)v39));
          v39 = v189;
          v52 = v161;
          v6 = v176;
          goto LABEL_63;
        }
        v47 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v46 + 24LL);
        if ( v47 == CCompositionSurfaceBitmap::GetPixelFormatInfo )
        {
          RenderingRealization = CCompositionSurfaceBitmap::TryGetRenderingRealization((CCompositionSurfaceBitmap *)(v46 - 72));
          if ( RenderingRealization )
          {
            v49 = *(_DWORD *(__fastcall **)(__int64, _DWORD *))(*(_QWORD *)RenderingRealization + 24LL);
            if ( (char *)v49 == (char *)CDxHandleBitmapRealization::GetPixelFormatInfo )
            {
              CDxHandleBitmapRealization::GetPixelFormatInfo(RenderingRealization, &v197);
            }
            else if ( v49 == CDxHandleBitmapRealization::GetPixelFormatInfo )
            {
              CDxHandleBitmapRealization::GetPixelFormatInfo((__int64)RenderingRealization, &v197);
            }
            else
            {
              (*(void (__fastcall **)(struct IBitmapRealization *, __int64 *))(*(_QWORD *)RenderingRealization + 24LL))(
                RenderingRealization,
                &v197);
            }
            v50 = HIDWORD(v197);
            if ( v46[40] )
              v50 = 3;
            HIDWORD(v197) = v50;
            v192 = v198;
            v51 = &v191;
            v191 = v197;
          }
          else
          {
            v163 = v46[40] != 0;
            LODWORD(v191) = 0;
            v192 = 0;
            v51 = &v191;
            HIDWORD(v191) = v163 ? 3 : 0;
          }
LABEL_62:
          v39 = v189;
          v6 = v176;
          v52 = *((_DWORD *)v51 + 1) == 3;
LABEL_63:
          v53 = -2003292288;
          v54 = 0;
          switch ( *((_DWORD *)&v225[2] + v43 + 2) )
          {
            case 0:
              if ( !(_DWORD)v179 )
                goto LABEL_163;
              if ( (_DWORD)v179 != 1 )
                goto LABEL_64;
              v54 = 6;
              goto LABEL_135;
            case 1:
              if ( (_DWORD)v179 == 1 )
              {
                v54 = 48;
                goto LABEL_163;
              }
              if ( !(_DWORD)v179 )
              {
                v54 = 2;
                v55 = 2;
                goto LABEL_65;
              }
              if ( (_DWORD)v179 != 12 )
                goto LABEL_64;
              v54 = 4;
              v55 = 4;
              goto LABEL_65;
            case 2:
              if ( (_DWORD)v179 )
              {
                if ( (_DWORD)v179 != 1 )
                  goto LABEL_64;
                if ( v38 == 8 )
                {
                  v54 = 22;
                  v55 = 22;
                  goto LABEL_65;
                }
                v127 = v38 == 10;
                goto LABEL_247;
              }
              if ( v38 == 8 )
              {
                v54 = 20;
                v55 = 20;
                goto LABEL_65;
              }
              if ( v38 == 10 )
              {
                v54 = 28;
                goto LABEL_163;
              }
              goto LABEL_64;
            case 3:
              if ( !(_DWORD)v179 )
              {
                v54 = 30;
                v53 = 0;
                goto LABEL_64;
              }
              v127 = (_DWORD)v179 == 1;
LABEL_247:
              if ( !v127 )
                goto LABEL_64;
              v54 = 32;
LABEL_135:
              v55 = v54;
              goto LABEL_65;
            case 0xC:
              switch ( (_DWORD)v179 )
              {
                case 0:
                  v54 = 16;
                  v53 = 0;
                  goto LABEL_64;
                case 1:
                  v54 = 18;
                  v55 = 18;
                  break;
                case 0xC:
                  v55 = 0;
                  break;
                default:
                  goto LABEL_64;
              }
              goto LABEL_65;
            case 0xE:
              if ( (_DWORD)v179 == 12 )
              {
                v54 = 46;
                v53 = 0;
                goto LABEL_64;
              }
              if ( (_DWORD)v179 )
              {
                if ( (_DWORD)v179 != 1 )
                  goto LABEL_64;
                v54 = 44;
                v55 = 44;
              }
              else
              {
                v54 = 42;
                v55 = 42;
              }
              goto LABEL_65;
            case 0x11:
              if ( (_DWORD)v179 )
              {
                if ( (_DWORD)v179 == 1 )
                {
                  v54 = 10;
                  v55 = 10;
                  goto LABEL_65;
                }
                if ( (_DWORD)v179 == 12 )
                {
LABEL_259:
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x7F,
                    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\brushrenderingeffect.cpp",
                    (const char *)(unsigned int)v53);
                  return (unsigned int)v53;
                }
              }
              else
              {
                v54 = 12;
                v53 = 0;
              }
LABEL_64:
              v55 = v54;
              if ( v53 < 0 )
                goto LABEL_259;
LABEL_65:
              v56 = v54 + 1;
              if ( !v52 )
                v56 = v55;
              *(__int128 *)((char *)&v199 + v45) = *((_OWORD *)&ColorConversion::sc_rgShaders + v56);
              if ( *((_BYTE *)v6 + 8 * (_QWORD)v39 + 16) )
              {
                v63 = 1;
              }
              else
              {
                v57 = (_BYTE *)*((_QWORD *)v6 + (_QWORD)v39);
                if ( !v57 )
                {
                  v88 = *((_QWORD *)v6 + (_QWORD)v39 + 1);
                  v89 = &v210;
                  v58 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v88 + 24LL);
                  goto LABEL_140;
                }
                if ( *(bool (__fastcall **)(CCompositionSurfaceBitmap *__hidden))(*(_QWORD *)v57 + 32LL) == CCompositionSurfaceBitmap::IsOpaque )
                {
                  v58 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v57 + 24LL);
                  if ( v58 == CCompositionSurfaceBitmap::GetPixelFormatInfo )
                  {
                    v59 = CCompositionSurfaceBitmap::TryGetRenderingRealization((CCompositionSurfaceBitmap *)(v57 - 72));
                    if ( v59 )
                    {
                      v60 = *(_DWORD *(__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v59 + 24LL);
                      if ( (char *)v60 == (char *)CDxHandleBitmapRealization::GetPixelFormatInfo )
                      {
                        CDxHandleBitmapRealization::GetPixelFormatInfo(v59, &v195);
                      }
                      else if ( v60 == CDxHandleBitmapRealization::GetPixelFormatInfo )
                      {
                        CDxHandleBitmapRealization::GetPixelFormatInfo((__int64)v59, &v195);
                      }
                      else
                      {
                        (*(void (__fastcall **)(struct IBitmapRealization *, __int128 *))(*(_QWORD *)v59 + 24LL))(
                          v59,
                          &v195);
                      }
                      v61 = DWORD1(v195);
                      if ( v57[40] )
                        v61 = 3;
                      DWORD1(v195) = v61;
                      v194 = DWORD2(v195);
                      v62 = &v193;
                      v193 = v195;
                    }
                    else
                    {
                      v163 = v57[40] != 0;
                      LODWORD(v193) = 0;
                      v194 = 0;
                      v62 = &v193;
                      HIDWORD(v193) = v163 ? 3 : 0;
                    }
                    goto LABEL_77;
                  }
                  v89 = (__int128 *)&v193;
                  v88 = *((_QWORD *)v6 + (_QWORD)v39);
LABEL_140:
                  v62 = (__int64 *)v58(v88, (__int64)v89);
LABEL_77:
                  v6 = v176;
                  v63 = *((_DWORD *)v62 + 1) == 3;
                  goto LABEL_78;
                }
                v162 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v57 + 32LL))(*((_QWORD *)v6 + (_QWORD)v39));
                v6 = v176;
                v63 = v162;
              }
LABEL_78:
              v35 = (unsigned int)v178;
              *((_BYTE *)&v200 + 32 * (unsigned int)v178 + 8) = v63;
              v64 = v42 != (_DWORD *)&unk_18033AD88 && v30;
              *((_BYTE *)&v200 + 32 * v35 + 9) = v64;
              v127 = *((_BYTE *)v6 + v35 + 260) == 0;
              *((_BYTE *)&v200 + 32 * v35 + 6) = *((_BYTE *)v6 + v35 + 264);
              if ( v127 )
                v65 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
              else
                v65 = 0.0;
              v66 = (unsigned __int64)v177;
              if ( *(float *)&v177[v35 + 40] != v65 )
              {
                *((_BYTE *)v177 + 120) = 1;
                *(float *)(v66 + 4 * v35 + 160) = v65;
              }
              break;
            case 0x14:
              if ( (_DWORD)v179 )
              {
                if ( (_DWORD)v179 != 1 )
                  goto LABEL_64;
                if ( v38 == 8 )
                {
                  v54 = 26;
                  v55 = 26;
                  goto LABEL_65;
                }
                if ( v38 == 10 )
                {
                  v54 = 36;
                  v55 = 36;
                  goto LABEL_65;
                }
              }
              else
              {
                if ( v38 == 8 )
                {
                  v54 = 24;
                  v55 = 24;
                  goto LABEL_65;
                }
                if ( v38 == 10 )
                {
                  v54 = 34;
LABEL_163:
                  v53 = 0;
                }
              }
              goto LABEL_64;
            case 0x15:
              if ( (_DWORD)v179 )
              {
                if ( (_DWORD)v179 != 1 )
                  goto LABEL_64;
                v54 = 40;
                v55 = 40;
              }
              else
              {
                v54 = 38;
                v55 = 38;
              }
              goto LABEL_65;
            default:
              goto LABEL_64;
          }
LABEL_84:
          v67 = *((_QWORD *)v6 + 2);
          v68 = (unsigned int)v35 + 40LL;
          v69 = (float *)((char *)v176 + 32 * (unsigned int)v35 + 132);
          v70 = (char *)v6 + 2 * v68;
          v71 = v70[v68 + 2];
          v180 = *(_WORD *)&v70[v68];
          v72 = 44LL * (unsigned int)v35;
          if ( *((_BYTE *)&v200 + 32 * (unsigned int)v35 + 7) )
            goto LABEL_102;
          v73 = *v69;
          v74 = v180;
          *((_BYTE *)&v200 + 32 * (unsigned int)v35 + 3) = *(_BYTE *)(v72 + v67 + 91);
          if ( (v73 != 0.0 || v69[1] != 0.0 || v69[2] != 0.0 || v69[3] != 0.0)
            && (*(_BYTE *)(v72 + v67 + 90) || *((_BYTE *)&v200 + 32 * (unsigned int)v35 + 6)) )
          {
            v127 = *((_BYTE *)&v200 + 32 * (unsigned int)v35 + 6) == 0;
            *((_BYTE *)&v200 + 32 * (unsigned int)v35 + 2) = 1;
            if ( v127 )
            {
              v75 = *(_BYTE *)(v72 + v67 + 88);
              *((_BYTE *)&v200 + 32 * (unsigned int)v35) = v75;
              v71 = *(_BYTE *)(v72 + v67 + 89);
            }
            else
            {
              v75 = HIBYTE(v180);
              *((_BYTE *)&v200 + 32 * (unsigned int)v35) = HIBYTE(v180);
            }
            *((_BYTE *)&v200 + 32 * (unsigned int)v35 + 1) = v71;
            v76 = v74 && (v75 == 2 || v71 == 2);
            *((_BYTE *)&v200 + 32 * (unsigned int)v35 + 4) = v76;
          }
          if ( !*((_BYTE *)&v200 + 32 * (unsigned int)v35 + 4) )
            *((_BYTE *)&v200 + 32 * (unsigned int)v35 + 5) = v74 == 2;
          if ( *((_BYTE *)&v200 + 32 * (unsigned int)v35 + 7)
            || *((_BYTE *)&v200 + 32 * (unsigned int)v35 + 2)
            || *((_BYTE *)&v200 + 32 * (unsigned int)v35 + 3) )
          {
LABEL_102:
            v77 = v72 + v67;
            if ( memcmp_0((const void *)(v72 + v67 + 92), v69, 0x20uLL) )
            {
              *(_OWORD *)(v77 + 92) = *(_OWORD *)v69;
              *(_OWORD *)(v77 + 108) = *((_OWORD *)v69 + 1);
              *(_BYTE *)(v67 + 276) = 1;
            }
          }
          v37 = (unsigned int)v175;
          LODWORD(v35) = v35 + 1;
          v6 = v176;
          v34 = (unsigned __int64)v177;
          continue;
        }
        v87 = &v191;
        v86 = *((_QWORD *)v176 + (_QWORD)v39);
      }
      else
      {
        v86 = *((_QWORD *)v176 + (_QWORD)v39 + 1);
        v87 = v218;
        v47 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v86 + 24LL);
      }
      v51 = (__int64 *)v47(v86, (__int64)v87);
      goto LABEL_62;
    }
    break;
  }
  v122 = -2147024809;
  v164 = 3124;
LABEL_382:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v122, v164, 0LL);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6C,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\brushrenderingeffect.cpp",
    (const char *)(unsigned int)v122);
  return (unsigned int)v122;
}
