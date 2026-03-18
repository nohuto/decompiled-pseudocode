/*
 * XREFs of ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1404233E0
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140317D20 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1403B4660 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 * Callees:
 *     ??0CIFlipPresentHistoryTokenFlipManager@@QEAA@PEBU_D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN@@@Z @ 0x14000AFA8 (--0CIFlipPresentHistoryTokenFlipManager@@QEAA@PEBU_D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140016050 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002EC00 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1400355B0 (--0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     ?VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z @ 0x1400386C8 (-VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z.c)
 *     ?IsHdrEnabled@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x140038D10 (-IsHdrEnabled@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0CIFlipPresentHistoryTokenRedirectedFlip@@QEAA@PEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x14003B108 (--0CIFlipPresentHistoryTokenRedirectedFlip@@QEAA@PEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ @ 0x140042CC4 (-SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ.c)
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x140073484 (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?IsIFlipSupported@CIFlipPresentHistoryToken@@SA_NPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14028943C (-IsIFlipSupported@CIFlipPresentHistoryToken@@SA_NPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ @ 0x140292F70 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z @ 0x1402A3310 (-IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x140307940 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x140308DD0 (-PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x140315254 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14032C6A0 (--0DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x140330F00 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x140348530 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z @ 0x140359640 (-UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x140409054 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPE.c)
 */

__int64 __fastcall PrepareIndependentFlipToken(
        struct _D3DKMT_PRESENTHISTORYTOKEN *a1,
        struct DXGK_PRESENT_PARAMS *a2,
        struct VIDSCH_SUBMIT_DATA_BASE *a3,
        struct DXGCONTEXT *a4,
        struct _PRESENT_REDIRECTED_PARAMS *a5,
        struct CRefCountedBuffer *a6)
{
  struct VIDSCH_SUBMIT_DATA_BASE *v7; // rbx
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // rsi
  struct DXGPROCESS *Current; // r9
  __int64 v14; // r14
  __int64 v15; // r13
  struct DXGK_PRESENT_PARAMS *v16; // rax
  struct DXGCONTEXT *v17; // rsi
  unsigned int v18; // eax
  struct _EX_RUNDOWN_REF *v19; // rax
  ULONG_PTR Count; // rdx
  __int64 v21; // rcx
  _BYTE *v22; // r12
  __int64 v23; // rdi
  UINT64 CompositionBindingId; // rsi
  __int64 v25; // rax
  struct _LUID *v26; // rax
  unsigned int v27; // ecx
  struct DXGCONTEXT *v28; // rdi
  struct DXGK_PRESENT_PARAMS *v29; // r8
  int v30; // eax
  int v31; // ecx
  int v32; // edx
  DXGADAPTER *v33; // rsi
  int v34; // eax
  int v35; // eax
  int *v36; // r12
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r12
  unsigned int v40; // ebx
  __int64 v41; // rax
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rax
  int v46; // r12d
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rdx
  _DWORD *v51; // rdi
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rdi
  unsigned int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rdi
  __int64 v59; // rcx
  char v60; // r12
  __int64 v61; // rsi
  unsigned int v62; // r12d
  unsigned int i; // edi
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  char v65; // r9
  _WORD *v66; // rsi
  _BYTE *v67; // rdi
  __int64 v68; // rax
  __int128 v69; // xmm1
  __int64 v70; // r8
  __int64 v71; // rdi
  __int64 v72; // rsi
  __int64 v73; // rax
  __int64 v74; // rdx
  unsigned int v75; // eax
  unsigned int v76; // eax
  __int64 v77; // rax
  __int64 v78; // rax
  _DWORD *v79; // r8
  unsigned __int64 v80; // rdi
  unsigned __int64 v81; // rdx
  _BYTE *Pool2; // rcx
  __int64 v83; // rax
  bool v84; // cf
  unsigned __int64 v85; // rax
  _QWORD *v86; // rax
  _QWORD *v87; // r13
  DXGALLOCATIONREFERENCE *v88; // rsi
  __int64 v89; // rcx
  __int64 v90; // r8
  unsigned int v91; // r13d
  _QWORD *v92; // rcx
  struct DXGCONTEXT *v93; // r8
  _QWORD *v94; // rcx
  __int64 v95; // rdx
  unsigned int *v96; // rsi
  __int64 v97; // rsi
  struct _EX_RUNDOWN_REF **v98; // r12
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  DXGADAPTER *v100; // r13
  struct DXGCONTEXT *v101; // rsi
  struct DXGK_PRESENT_PARAMS *v102; // rsi
  _QWORD *v103; // rdx
  _QWORD *v104; // rdx
  __int64 v105; // r8
  _QWORD *v106; // rsi
  __int64 v107; // rcx
  __int64 v108; // r8
  UINT64 v109; // r14
  __int64 v110; // rsi
  unsigned int v111; // edi
  __int64 v112; // rax
  _DWORD *v113; // rax
  DXGK_ALLOCATIONLIST *pAllocationList; // r8
  int v115; // eax
  unsigned int v116; // r13d
  __int64 v117; // rdi
  unsigned int v118; // r12d
  __int64 v119; // rsi
  struct DXGK_PRESENT_PARAMS *v120; // rbx
  __int64 v121; // r15
  struct _EX_RUNDOWN_REF *v122; // rdx
  char v123; // r9
  ULONG_PTR v124; // rcx
  __int64 v125; // rdx
  __int64 (__fastcall *v126)(ULONG_PTR, __int64, _QWORD); // rax
  __int64 v127; // rax
  void *v128; // rdx
  unsigned int v129; // esi
  bool v130; // bl
  struct _EX_RUNDOWN_REF **v131; // rax
  struct _EX_RUNDOWN_REF *v132; // rdx
  __int64 v133; // rax
  __int64 v134; // rdi
  int v135; // r13d
  _DWORD *v136; // rax
  __int64 v137; // r9
  _OWORD *v138; // rsi
  BOOL v139; // eax
  int v140; // r13d
  __int64 v141; // rax
  void *v142; // rax
  size_t v143; // r13
  __int64 v144; // rdi
  __int64 v145; // rsi
  _BYTE *v146; // r15
  _QWORD *v147; // rsi
  struct _D3DKMT_PRESENTHISTORYTOKEN *v148; // r12
  UINT64 v149; // r14
  __int64 v150; // rsi
  unsigned int v151; // edi
  __int64 v152; // rax
  __int64 v153; // rdx
  int v154; // [rsp+30h] [rbp-3D8h]
  int v155; // [rsp+30h] [rbp-3D8h]
  __int128 v156; // [rsp+80h] [rbp-388h] BYREF
  bool v157; // [rsp+90h] [rbp-378h]
  int v158; // [rsp+94h] [rbp-374h]
  unsigned int v159; // [rsp+98h] [rbp-370h] BYREF
  DXGADAPTER *v160; // [rsp+A0h] [rbp-368h]
  struct _EX_RUNDOWN_REF *v161; // [rsp+A8h] [rbp-360h] BYREF
  int v162; // [rsp+B0h] [rbp-358h]
  unsigned int v163; // [rsp+B4h] [rbp-354h]
  _QWORD *v164; // [rsp+B8h] [rbp-350h] BYREF
  struct DXGCONTEXT *v165; // [rsp+C0h] [rbp-348h]
  _BYTE *v166; // [rsp+C8h] [rbp-340h]
  unsigned int v167; // [rsp+D0h] [rbp-338h] BYREF
  __int64 v168; // [rsp+D8h] [rbp-330h] BYREF
  int v169; // [rsp+E0h] [rbp-328h] BYREF
  int v170; // [rsp+E4h] [rbp-324h] BYREF
  __int64 v171; // [rsp+E8h] [rbp-320h]
  struct _D3DKMT_PRESENTHISTORYTOKEN *v172; // [rsp+F0h] [rbp-318h]
  unsigned int v173; // [rsp+F8h] [rbp-310h]
  int v174; // [rsp+FCh] [rbp-30Ch] BYREF
  int v175; // [rsp+100h] [rbp-308h] BYREF
  int v176; // [rsp+104h] [rbp-304h] BYREF
  enum _D3DDDI_HDR_METADATA_TYPE v177; // [rsp+108h] [rbp-300h] BYREF
  struct DXGK_PRESENT_PARAMS *v178; // [rsp+110h] [rbp-2F8h]
  struct DXGK_PRESENT_PARAMS *v179; // [rsp+118h] [rbp-2F0h]
  struct CRefCountedBuffer *v180; // [rsp+120h] [rbp-2E8h]
  struct VIDSCH_SUBMIT_DATA_BASE *v181; // [rsp+128h] [rbp-2E0h]
  __int64 v182; // [rsp+130h] [rbp-2D8h]
  int v183; // [rsp+138h] [rbp-2D0h] BYREF
  void *Src; // [rsp+140h] [rbp-2C8h]
  int v185; // [rsp+148h] [rbp-2C0h]
  __int64 v186; // [rsp+150h] [rbp-2B8h]
  __int64 v187; // [rsp+158h] [rbp-2B0h] BYREF
  _BYTE v188[16]; // [rsp+160h] [rbp-2A8h] BYREF
  PVOID P; // [rsp+170h] [rbp-298h]
  _BYTE v190[32]; // [rsp+178h] [rbp-290h] BYREF
  int v191; // [rsp+198h] [rbp-270h]
  struct DXGPROCESS *v192; // [rsp+1A0h] [rbp-268h]
  struct _EX_RUNDOWN_REF *v193; // [rsp+1A8h] [rbp-260h] BYREF
  __int64 v194; // [rsp+1B0h] [rbp-258h]
  __int64 v195; // [rsp+1B8h] [rbp-250h]
  _BYTE *v196; // [rsp+1C0h] [rbp-248h]
  __int64 v197; // [rsp+1C8h] [rbp-240h]
  struct DXGCONTEXT *v198; // [rsp+1D0h] [rbp-238h]
  struct _D3DKMT_PRESENTHISTORYTOKEN *v199; // [rsp+1D8h] [rbp-230h]
  struct DXGK_PRESENT_PARAMS *v200; // [rsp+1E0h] [rbp-228h]
  struct tagRECT v201; // [rsp+1F0h] [rbp-218h] BYREF
  struct _D3DDDI_HDR_METADATA_HDR10 v202; // [rsp+200h] [rbp-208h] BYREF
  __int64 v203; // [rsp+220h] [rbp-1E8h]
  unsigned __int64 v204; // [rsp+228h] [rbp-1E0h]
  struct _DXGKARG_PRESENT v205; // [rsp+230h] [rbp-1D8h] BYREF
  __int128 v206; // [rsp+2E0h] [rbp-128h] BYREF
  struct tagRECT v207; // [rsp+2F0h] [rbp-118h] BYREF
  char *v208; // [rsp+300h] [rbp-108h] BYREF
  char v209; // [rsp+308h] [rbp-100h] BYREF
  int v210; // [rsp+328h] [rbp-E0h]
  PVOID v211; // [rsp+330h] [rbp-D8h]
  _BYTE v212[128]; // [rsp+338h] [rbp-D0h] BYREF
  int v213; // [rsp+3B8h] [rbp-50h]

  v165 = a4;
  v7 = a3;
  v181 = a3;
  v178 = a2;
  v172 = a1;
  v199 = a1;
  v200 = a2;
  Src = a3;
  v198 = a4;
  v180 = a6;
  if ( !CIFlipPresentHistoryToken::IsIFlipSupported(a1) || a4 && !a2 )
    return 0LL;
  v156 = 0LL;
  if ( a1->Model == D3DKMT_PM_REDIRECTED_FLIP )
  {
    CIFlipPresentHistoryTokenRedirectedFlip::CIFlipPresentHistoryTokenRedirectedFlip(
      (CIFlipPresentHistoryTokenRedirectedFlip *)&v156,
      &a1->Token.Flip);
  }
  else if ( a1->Model == D3DKMT_PM_FLIPMANAGER )
  {
    CIFlipPresentHistoryTokenFlipManager::CIFlipPresentHistoryTokenFlipManager(
      (CIFlipPresentHistoryTokenFlipManager *)&v156,
      (const struct _D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN *)&a1->Token);
  }
  v11 = 0LL;
  if ( a4 )
  {
    v10 = *((_QWORD *)a4 + 2);
    v164 = (_QWORD *)v10;
    v12 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL);
  }
  else
  {
    v11 = *(_QWORD *)a5;
    v12 = *((_QWORD *)a5 + 2);
    v164 = (_QWORD *)*((_QWORD *)a5 + 3);
  }
  v186 = v12;
  v160 = (DXGADAPTER *)v12;
  if ( !a4 && !*(_BYTE *)(v12 + 3057) )
  {
LABEL_50:
    (*(void (__fastcall **)(__int128 *, __int64))v156)(&v156, 1LL);
    return 0LL;
  }
  *((_QWORD *)v7 + 3) = 0LL;
  Current = DXGPROCESS::GetCurrent(v10);
  v192 = Current;
  v14 = *(_QWORD *)(v12 + 3128);
  v194 = v14;
  v195 = v14;
  v15 = 0LL;
  if ( *(_QWORD *)(v12 + 3120) )
    v15 = *(_QWORD *)(v12 + 3120);
  v16 = a2;
  v17 = v165;
  if ( !v165 )
    v16 = 0LL;
  v179 = v16;
  if ( v165 )
    v18 = *((_DWORD *)v16 + 5);
  else
    v18 = *(_DWORD *)(v11 + 1100);
  v163 = v18;
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v161, v18);
  v19 = v161;
  if ( !v161 || *(_QWORD *)(*(_QWORD *)(v161[1].Count + 16) + 16LL) != *(_QWORD *)(v164[2] + 16LL) )
  {
LABEL_49:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v161);
    goto LABEL_50;
  }
  Count = v161[5].Count;
  if ( v180 && Count && (*(_DWORD *)(Count + 4) & 1) != 0 )
  {
    Count = *(_QWORD *)(*(_QWORD *)(Count + 56) + 176LL);
    *((_QWORD *)v7 + 3) = Count;
  }
  if ( v17 )
    v21 = *((_QWORD *)a2 + 187);
  else
    v21 = 0LL;
  v168 = v21;
  v182 = v21;
  v167 = (*(_DWORD *)(v19[6].Count + 4) >> 6) & 0xF;
  v174 = 0;
  v170 = 0;
  v175 = 0;
  v176 = 0;
  v159 = 0;
  v187 = *(_QWORD *)(*(__int64 (__fastcall **)(__int128 *, ULONG_PTR))(v156 + 24))(&v156, Count);
  v169 = 0;
  v206 = 0LL;
  v207 = 0LL;
  v22 = (char *)v7 + 760;
  if ( !*((_BYTE *)v7 + 356) )
    v22 = (char *)v7 + 528;
  v166 = v22;
  v23 = *(_QWORD *)(v14 + 736);
  CompositionBindingId = v172->CompositionBindingId;
  v25 = (*(__int64 (__fastcall **)(__int128 *))(v156 + 16))(&v156);
  (*(void (__fastcall **)(_QWORD, unsigned int *, __int64, UINT64, _BYTE *, int *, int *, unsigned int *, __int64 *, int *, int *, int *, __int128 *, struct tagRECT *))(*(_QWORD *)(v23 + 8) + 416LL))(
    *(_QWORD *)(v14 + 744),
    &v167,
    v25,
    CompositionBindingId,
    v22,
    &v174,
    &v170,
    &v159,
    &v187,
    &v175,
    &v176,
    &v169,
    &v206,
    &v207);
  (*(void (__fastcall **)(__int128 *, __int64))(v156 + 32))(&v156, v187);
  (*(void (__fastcall **)(__int128 *, _QWORD))(v156 + 48))(&v156, v167);
  *((_DWORD *)v7 + 29) = v167;
  v26 = (struct _LUID *)(*(__int64 (__fastcall **)(__int128 *))(v156 + 16))(&v156);
  RtlCopyLuid((PLUID)((char *)v7 + 156), v26);
  *((_QWORD *)v7 + 21) = v172->CompositionBindingId;
  v27 = *(_DWORD *)v7 & 0xFFFEFFFF;
  *(_DWORD *)v7 = v27;
  v28 = v165;
  if ( v165 )
  {
    v29 = v179;
    v30 = v27 ^ (*((_DWORD *)v179 + 22) ^ v27) & 4;
    *(_DWORD *)v7 = v30;
    v31 = v30 ^ (v30 ^ (4 * *((_DWORD *)v29 + 22))) & 0x80000;
    *(_DWORD *)v7 = v31;
    v32 = v31 ^ (v31 ^ (4 * *((_DWORD *)v29 + 22))) & 0x100000;
    *(_DWORD *)v7 = v32;
    *(_DWORD *)v7 = v32 ^ (v32 ^ (4 * *((_DWORD *)v29 + 22))) & 0x200000;
  }
  *(_DWORD *)v7 ^= ((unsigned __int8)*(_DWORD *)v7 ^ (unsigned __int8)(8
                                                                     * (*(__int64 (__fastcall **)(__int128 *))(v156 + 200))(&v156))) & 8;
  *(_DWORD *)v7 ^= ((unsigned __int8)*(_DWORD *)v7 ^ (unsigned __int8)(16
                                                                     * (*(__int64 (__fastcall **)(__int128 *))(v156 + 208))(&v156))) & 0x10;
  *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ ((*(unsigned __int8 (__fastcall **)(__int128 *))(v156 + 216))(&v156) << 28)) & 0x10000000;
  *((_DWORD *)v7 + 1) ^= ((unsigned __int8)*((_DWORD *)v7 + 1) ^ (unsigned __int8)((*(unsigned __int8 (__fastcall **)(__int128 *))(v156 + 224))(&v156) << 6)) & 0x40;
  *((_DWORD *)v7 + 1) ^= ((unsigned __int16)*((_DWORD *)v7 + 1) ^ (unsigned __int16)((*(unsigned __int8 (__fastcall **)(__int128 *))(v156 + 320))(&v156) << 8)) & 0x100;
  if ( (unsigned int)Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline() )
    *((_DWORD *)v7 + 1) ^= ((unsigned __int16)*((_DWORD *)v7 + 1) ^ (unsigned __int16)((*(unsigned __int8 (__fastcall **)(__int128 *))(v156 + 328))(&v156) << 9)) & 0x200;
  v33 = v160;
  (*(void (__fastcall **)(__int128 *, DXGADAPTER *))(v156 + 56))(&v156, v160);
  *((_DWORD *)v7 + 28) = (*(__int64 (__fastcall **)(__int128 *))(v156 + 64))(&v156);
  *((_DWORD *)v7 + 48) = *(_DWORD *)(*(__int64 (__fastcall **)(__int128 *))(v156 + 72))(&v156);
  *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ ((*(unsigned __int8 (__fastcall **)(__int128 *))(v156 + 192))(&v156) << 25)) & 0x2000000;
  *((_DWORD *)v7 + 36) = (*(__int64 (__fastcall **)(__int128 *))(v156 + 80))(&v156);
  *((_DWORD *)v7 + 37) = (*(__int64 (__fastcall **)(__int128 *))(v156 + 88))(&v156);
  if ( v28 )
    v34 = *((_DWORD *)v28 + 96);
  else
    v34 = 1;
  *((_DWORD *)v7 + 34) = v34;
  if ( *((_BYTE *)v7 + 356) )
    *((_DWORD *)v7 + 160) = -1;
  if ( bTracingEnabled )
    *((_QWORD *)v7 + 23) = VIDMM_EXPORT::VidMmETWAllocationHandle(
                             *(VIDMM_EXPORT **)(v14 + 760),
                             *(struct VIDMM_GLOBAL **)(v14 + 768),
                             v163);
  v35 = (*(__int64 (__fastcall **)(__int128 *))(v156 + 96))(&v156);
  *((_DWORD *)v7 + 31) = v35;
  v36 = (int *)((char *)v7 + 124);
  v183 = 1;
  if ( !v35
    && (!(*(unsigned __int8 (__fastcall **)(__int128 *))(v156 + 216))(&v156) || (*((_DWORD *)v33 + 615) & 0x40) == 0) )
  {
    v36 = &v183;
  }
  v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(*(_QWORD *)(v14 + 736) + 8LL) + 520LL))(
          v164[100],
          v167,
          v36);
  v39 = v37;
  *((_DWORD *)v7 + 30) = v37;
  if ( v37 != 5 && *((_DWORD *)v7 + 31) )
  {
    v40 = (*(__int64 (__fastcall **)(__int128 *))(v156 + 64))(&v156);
    v41 = (*(__int64 (__fastcall **)(__int128 *))(v156 + 104))(&v156);
    WdLogSingleEntry4(8LL, v172, v41, v40, v39);
    WdLogGlobalForLineNumber = 2094;
    goto LABEL_49;
  }
  if ( !v174 )
  {
    if ( v175 )
    {
      LODWORD(v164) = 0;
      v168 = 0LL;
      v43 = *(_QWORD *)(v14 + 736);
      v44 = *((_QWORD *)v7 + 21);
      v45 = (*(__int64 (__fastcall **)(__int128 *))(v156 + 16))(&v156);
      LOBYTE(v154) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, unsigned int *, _DWORD, int, _QWORD **, __int64 *))(*(_QWORD *)(v43 + 8) + 408LL))(
        *(_QWORD *)(v14 + 744),
        (unsigned int)(1 << *((_DWORD *)v7 + 29)),
        v45,
        v44,
        &v159,
        0,
        v154,
        &v164,
        &v168);
      ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v15, *((_DWORD *)v7 + 29), v159, 0);
    }
    else if ( !v176 )
    {
      goto LABEL_49;
    }
    LOBYTE(v38) = 1;
    (*(void (__fastcall **)(__int128 *, __int64))(v156 + 232))(&v156, v38);
    goto LABEL_49;
  }
  *((_QWORD *)v7 + 22) = *(_QWORD *)(*(__int64 (__fastcall **)(__int128 *))(v156 + 24))(&v156);
  v46 = 0;
  v162 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int128 *))(v156 + 240))(&v156) )
  {
    LODWORD(v164) = 0;
    v168 = 0LL;
    v47 = *(_QWORD *)(v14 + 736);
    v48 = *((_QWORD *)v7 + 21);
    v49 = (*(__int64 (__fastcall **)(__int128 *))(v156 + 16))(&v156);
    LOBYTE(v154) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, unsigned int *, _DWORD, int, _QWORD **, __int64 *))(*(_QWORD *)(v47 + 8) + 408LL))(
      *(_QWORD *)(v14 + 744),
      (unsigned int)(1 << *((_DWORD *)v7 + 29)),
      v49,
      v48,
      &v159,
      0,
      v154,
      &v164,
      &v168);
    LOBYTE(v50) = 1;
    (*(void (__fastcall **)(__int128 *, __int64))(v156 + 232))(&v156, v50);
    ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v15, *((_DWORD *)v7 + 29), v159, 0);
    WdLogSingleEntry0(8LL);
    WdLogGlobalForLineNumber = 2163;
    goto LABEL_49;
  }
  if ( v170 || DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*(DXGADAPTER **)(v14 + 16)) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int128 *))(v156 + 248))(&v156) )
    {
      DXGDISPLAYSTATEMUTEX::DXGDISPLAYSTATEMUTEX((DXGDISPLAYSTATEMUTEX *)v188, (struct ADAPTER_DISPLAY *)v15);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v188);
      v58 = *((unsigned int *)v7 + 29);
      v59 = *(_QWORD *)(v15 + 16);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v59 + 184)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v59 + 168)) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6675;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"IsCoreResourceSharedOwner()",
          6675LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (unsigned int)v58 >= *(_DWORD *)(v15 + 96) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6676;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"VidPnSourceId < m_NumVidPnSources",
          6676LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v60 = *(_BYTE *)(3984 * v58 + *(_QWORD *)(v15 + 128) + 1125);
      v157 = v60;
      if ( v60 )
      {
        if ( (unsigned int)IsYUVAllocation(*(void **)(v161[6].Count + 16), (struct ADAPTER_RENDER *)v14) )
          goto LABEL_82;
        v61 = *(_QWORD *)(v15 + 128) + 3984LL * *((unsigned int *)v7 + 29);
        if ( *(struct _KTHREAD **)(*(_QWORD *)(v61 + 8) + 640LL) != KeGetCurrentThread() )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 10234;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"m_DisplayCore->IsDisplayStateMutexOwner()",
            10234LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v62 = 0;
        for ( i = 0; i < *(_DWORD *)(v61 + 3744); ++i )
        {
          LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal((DISPLAY_SOURCE *)v61, i);
          if ( LatestPlaneConfigInternal && (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 )
            ++v62;
        }
        if ( v62 > 1 )
LABEL_82:
          v60 = 0;
        else
          v60 = v157;
      }
      v201 = 0LL;
      v65 = !v159 && v60;
      if ( !CheckAndUpdateMultiPlaneOverlayFromInternalState(
              *((_DWORD *)v7 + 29),
              v159,
              (struct CIFlipPresentHistoryTokenData *)&v156,
              v65,
              (struct ADAPTER_RENDER *)v14,
              (struct ADAPTER_DISPLAY *)v15,
              &v201) )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v188);
        LODWORD(v164) = 0;
        v168 = 0LL;
        v71 = *(_QWORD *)(v14 + 736);
        v72 = *((_QWORD *)v7 + 21);
        v73 = (*(__int64 (__fastcall **)(__int128 *))(v156 + 16))(&v156);
        LOBYTE(v155) = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, unsigned int *, _DWORD, int, _QWORD **, __int64 *))(*(_QWORD *)(v71 + 8) + 408LL))(
          *(_QWORD *)(v14 + 744),
          (unsigned int)(1 << *((_DWORD *)v7 + 29)),
          v73,
          v72,
          &v159,
          0,
          v155,
          &v164,
          &v168);
        WdLogSingleEntry1(3LL, v159);
        WdLogGlobalForLineNumber = 2273;
        LOBYTE(v74) = 1;
        (*(void (__fastcall **)(__int128 *, __int64))(v156 + 232))(&v156, v74);
        ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v15, *((_DWORD *)v7 + 29), v159, 0);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v188);
        goto LABEL_49;
      }
      v66 = (_WORD *)(*(__int64 (__fastcall **)(__int128 *))(v156 + 8))(&v156);
      v67 = v166;
      *(_WORD *)v166 = *v66;
      *((_WORD *)v67 + 2) = v66[2];
      *((_WORD *)v67 + 1) = v66[4];
      *((_WORD *)v67 + 3) = v66[6];
      *((_DWORD *)v67 + 6) = (*(__int64 (__fastcall **)(__int128 *))(v156 + 112))(&v156);
      if ( v60 )
      {
        v68 = *(_QWORD *)v67;
        *((_QWORD *)v67 + 1) = *(_QWORD *)v67;
        *((_QWORD *)v67 + 2) = v68;
        v69 = *(_OWORD *)v66;
        v206 = v69;
        v207 = v201;
        if ( (_DWORD)v69 != v201.left
          || __PAIR64__(DWORD2(v206), DWORD1(v69)) != *(_QWORD *)&v201.top
          || (v70 = 0LL, HIDWORD(v206) != v201.bottom) )
        {
          v70 = 1LL;
        }
        v169 = v70;
        if ( !(_DWORD)v70 )
        {
          v206 = 0LL;
          v207 = 0LL;
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int128 *, struct tagRECT *))(*(_QWORD *)(*(_QWORD *)(v14 + 736)
                                                                                                  + 8LL)
                                                                                      + 992LL))(
          *(_QWORD *)(v14 + 744),
          *((unsigned int *)v7 + 29),
          v70,
          &v206,
          &v207);
        UpdatePostComposition(
          *((_DWORD *)v7 + 29),
          v169 != 0,
          DWORD2(v206) - v206,
          HIDWORD(v206) - DWORD1(v206),
          (struct ADAPTER_DISPLAY *)v15);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, _BYTE *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v14 + 736) + 8LL) + 424LL))(
        *(_QWORD *)(v14 + 744),
        *((unsigned int *)v7 + 29),
        v67,
        v159);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v188);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v188);
      v46 = v162;
      v33 = v160;
    }
    else
    {
      ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v15, *((_DWORD *)v7 + 29), v159, 1);
    }
    *(_DWORD *)v7 = (v169 << 31) | *(_DWORD *)v7 & 0x7BFFFFFF | ((v170 & 1) << 26) & 0x7FFFFFFF;
    *(_OWORD *)((char *)v7 + 436) = v206;
    *(struct tagRECT *)((char *)v7 + 452) = v207;
  }
  else
  {
    v51 = (_DWORD *)(*(__int64 (__fastcall **)(__int128 *))(v156 + 8))(&v156);
    v166 = v51;
    if ( v51[2] - *v51 != (*(unsigned int (__fastcall **)(__int128 *))(v156 + 120))(&v156)
      || v51[3] - v51[1] != (*(unsigned int (__fastcall **)(__int128 *))(v156 + 128))(&v156)
      || (*(unsigned __int8 (__fastcall **)(__int128 *))(v156 + 248))(&v156) )
    {
      LODWORD(v164) = 0;
      v168 = 0LL;
      v52 = *(_QWORD *)(v14 + 736);
      v53 = *((_QWORD *)v7 + 21);
      v54 = (*(__int64 (__fastcall **)(__int128 *))(v156 + 16))(&v156);
      LOBYTE(v154) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, unsigned int *, _DWORD, int, _QWORD **, __int64 *))(*(_QWORD *)(v52 + 8) + 408LL))(
        *(_QWORD *)(v14 + 744),
        (unsigned int)(1 << *((_DWORD *)v7 + 29)),
        v54,
        v53,
        &v159,
        0,
        v154,
        &v164,
        &v168);
      v55 = (*(unsigned int (__fastcall **)(__int128 *))(v156 + 128))(&v156);
      v56 = (*(__int64 (__fastcall **)(__int128 *))(v156 + 120))(&v156);
      WdLogSingleEntry4(
        8LL,
        *((_DWORD *)v166 + 2) - *(_DWORD *)v166,
        *((_DWORD *)v166 + 3) - *((_DWORD *)v166 + 1),
        v56,
        v55);
      WdLogGlobalForLineNumber = 2326;
      LOBYTE(v57) = 1;
      (*(void (__fastcall **)(__int128 *, __int64))(v156 + 232))(&v156, v57);
      ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v15, *((_DWORD *)v7 + 29), 0, 0);
      goto LABEL_49;
    }
    ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v15, *((_DWORD *)v7 + 29), 0, 1);
  }
  if ( v15 && (*(_DWORD *)(v15 + 24) & 0x10) != 0 )
  {
    if ( !ADAPTER_DISPLAY::IsHdrEnabled((ADAPTER_DISPLAY *)v15, v167) )
    {
      *((_DWORD *)v7 + 90) = 0;
      goto LABEL_121;
    }
    *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ ((*(unsigned __int8 (__fastcall **)(__int128 *))(v156 + 256))(&v156) << 30)) & 0x40000000;
    v75 = (*(__int64 (__fastcall **)(__int128 *))(v156 + 136))(&v156);
    *((_DWORD *)v7 + 90) = v75;
    if ( (*(_DWORD *)v7 & 0x40000000) != 0 )
    {
      if ( v75 )
      {
        v76 = v75 - 1;
        if ( v76 )
        {
          if ( v76 == 1 )
          {
            v77 = (*(__int64 (__fastcall **)(__int128 *))(v156 + 152))(&v156);
            *(_OWORD *)((char *)v7 + 364) = *(_OWORD *)v77;
            *(_OWORD *)((char *)v7 + 380) = *(_OWORD *)(v77 + 16);
            *(_OWORD *)((char *)v7 + 396) = *(_OWORD *)(v77 + 32);
            *(_OWORD *)((char *)v7 + 412) = *(_OWORD *)(v77 + 48);
            *(_QWORD *)((char *)v7 + 428) = *(_QWORD *)(v77 + 64);
          }
          else
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2368;
            DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"FALSE", 2368LL, 0LL, 0LL, 0LL, 0LL);
            *(_DWORD *)v7 &= ~0x40000000u;
          }
        }
        else
        {
          v78 = (*(__int64 (__fastcall **)(__int128 *))(v156 + 144))(&v156);
          *(_OWORD *)((char *)v7 + 364) = *(_OWORD *)v78;
          *(_QWORD *)((char *)v7 + 380) = *(_QWORD *)(v78 + 16);
          *((_DWORD *)v7 + 97) = *(_DWORD *)(v78 + 24);
        }
      }
    }
    else
    {
      if ( v75 > 2 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2376;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"D3DDDI_HDR_METADATA_TYPE_HDR10 == pVidSchSubmitData->HDRMetaDataType || D3DDDI_HDR_METADATA_TYPE_HDR10PLUS == "
           "pVidSchSubmitData->HDRMetaDataType || D3DDDI_HDR_METADATA_TYPE_NONE == pVidSchSubmitData->HDRMetaDataType",
          2376LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)v7 |= 0x40000000u;
      if ( *((_DWORD *)v7 + 90) == 1 )
      {
        *((_DWORD *)v7 + 90) = 134217729;
      }
      else if ( *((_DWORD *)v7 + 90) == 2 )
      {
        *((_DWORD *)v7 + 90) = -2147483646;
      }
    }
    if ( !*((_DWORD *)v7 + 90) )
    {
      v177 = D3DDDI_HDR_METADATA_TYPE_NONE;
      memset(&v202, 0, sizeof(v202));
      if ( !(unsigned int)PopulateHDRMetadataFromDisplay(
                            *((_DWORD *)v7 + 29),
                            (struct ADAPTER_DISPLAY *)v15,
                            &v202,
                            &v177) )
      {
        *((struct _D3DDDI_HDR_METADATA_HDR10 *)v7 + 13) = v202;
        *((_DWORD *)v7 + 90) = v177;
LABEL_121:
        *(_DWORD *)v7 |= 0x40000000u;
      }
    }
  }
  (*(void (__fastcall **)(__int128 *, _QWORD))(v156 + 160))(&v156, v159);
  v79 = (_DWORD *)((char *)v7 + 600);
  if ( !*((_BYTE *)v7 + 356) )
    v79 = (_DWORD *)((char *)v7 + 496);
  *v79 ^= ((unsigned __int16)*v79 ^ (unsigned __int16)(1 << v159)) & 0x3FF;
  v80 = 1LL;
  v158 = 1;
  if ( DXGADAPTER::IsDxgmms2(v33) && v165 )
  {
    v80 = (unsigned int)(*((_DWORD *)v179 + 23) + 1);
    v158 = *((_DWORD *)v179 + 23) + 1;
  }
  v163 = 0;
  Pool2 = 0LL;
  v166 = 0LL;
  P = 0LL;
  v191 = 0;
  if ( (unsigned int)v80 <= 4 )
  {
    Pool2 = v190;
    v166 = v190;
    P = v190;
    if ( (_DWORD)v80 )
    {
      memset(v190, 0, 8LL * (unsigned int)v80);
      Pool2 = P;
      v166 = P;
    }
  }
  else
  {
    v81 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v80;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v80 < 8 )
      goto LABEL_133;
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8 * v80, 1265072196LL, -1LL);
    v166 = Pool2;
    P = Pool2;
  }
  v191 = v80;
LABEL_133:
  v196 = Pool2;
  if ( !Pool2 )
  {
LABEL_154:
    P = 0LL;
    v191 = 0;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v161);
    (*(void (__fastcall **)(__int128 *, __int64))v156)(&v156, 1LL);
    return 3221225495LL;
  }
  v208 = 0LL;
  v210 = 0;
  if ( (unsigned int)v80 <= 4 )
  {
    v208 = &v209;
    if ( (_DWORD)v80 )
    {
      v89 = 0LL;
      v81 = (unsigned int)v80;
      do
      {
        *(_QWORD *)&v208[v89] = 0LL;
        v89 += 8LL;
        --v81;
      }
      while ( v81 );
    }
  }
  else
  {
    v81 = 0xFFFFFFFFFFFFFFFFuLL % v80;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v80 < 8 )
    {
      LODWORD(v80) = v158;
      goto LABEL_150;
    }
    v83 = 8 * v80;
    if ( !is_mul_ok(v80, 8uLL) )
      v83 = -1LL;
    v84 = __CFADD__(v83, 8LL);
    v85 = v83 + 8;
    if ( v84 )
      v85 = -1LL;
    v86 = (_QWORD *)operator new[](v85, 0x4B677844u, 256LL, -1LL);
    v87 = v86;
    if ( v86 )
    {
      *v86 = v80;
      v88 = (DXGALLOCATIONREFERENCE *)(v86 + 1);
      do
      {
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(v88);
        v88 = (DXGALLOCATIONREFERENCE *)((char *)v88 + 8);
        --v80;
      }
      while ( v80 );
      v208 = (char *)(v87 + 1);
      LODWORD(v80) = v158;
      v33 = v160;
    }
    else
    {
      LODWORD(v80) = v158;
    }
  }
  v210 = v80;
LABEL_150:
  v90 = (__int64)v208;
  v171 = (__int64)v208;
  v197 = (__int64)v208;
  if ( !v208 )
  {
    PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>((__int64 *)&v208);
    if ( P != v190 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    goto LABEL_154;
  }
  v91 = 0;
  while ( v91 < (unsigned int)v80 )
  {
    if ( v91 )
    {
      v95 = 8LL * v91;
      v173 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v178 + 187) + v95) + 388LL);
      v185 = 0;
      v96 = (unsigned int *)(*((_QWORD *)v179 + 182) + 4LL * (v91 - 1));
      if ( v96 + 1 < v96 || (unsigned __int64)(v96 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      v97 = *v96;
      v185 = v97;
      v98 = (struct _EX_RUNDOWN_REF **)(v90 + v95);
      AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                    (__int64)v192,
                                                    (DXGALLOCATIONREFERENCE *)&v193,
                                                    v97);
      DXGALLOCATIONREFERENCE::MoveAssign(v98, AllocationSafe);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v193);
      v80 = (unsigned __int64)*v98;
      if ( !*v98 )
      {
        WdLogSingleEntry2(2LL, (unsigned int)v97, -1073741811LL);
        WdLogGlobalForLineNumber = 2489;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Invalid allocation handle in present: 0x%I64x. Returning 0x%I64x",
          v97,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        v46 = -1073741811;
        v162 = -1073741811;
        LODWORD(v80) = v158;
        v100 = v160;
        v101 = v165;
        goto LABEL_208;
      }
      v102 = v178;
      v203 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v178 + 187) + 8LL * v91) + 16LL);
      v204 = v80;
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v80 + 8) + 16LL) + 16LL) != *(_QWORD *)(*(_QWORD *)(v203 + 16) + 16LL) )
      {
        _mm_lfence();
        WdLogSingleEntry3(2LL, *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v178 + 187) + 8LL * v91) + 16LL), v80, -1073741811LL);
        WdLogGlobalForLineNumber = 2498;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v102 + 187) + 8LL * v91) + 16LL),
          (__int64)*v98,
          -1073741811LL,
          0LL,
          0LL);
        v46 = -1073741811;
        v162 = -1073741811;
        LODWORD(v80) = v158;
        v100 = v160;
        v101 = v165;
        goto LABEL_208;
      }
      if ( *((_BYTE *)v7 + 356) )
        v103 = (_QWORD *)((char *)v7
                        + 64 * (unsigned __int64)(v91 * *((_DWORD *)v7 + 151))
                        + *((_DWORD *)v7 + 151) * ((8 * *((_DWORD *)v7 + 152) + 231) & 0xFFFFFFF8)
                        + 624);
      else
        v103 = (_QWORD *)((char *)v7 + 512);
      *v103 = *(_QWORD *)(*(_QWORD *)(v80 + 48) + 16LL);
      if ( !*((_BYTE *)v160 + 3057) )
      {
        if ( *((_BYTE *)v7 + 356) )
          v104 = (_QWORD *)((char *)v7
                          + 64 * (unsigned __int64)(v91 * *((_DWORD *)v7 + 151))
                          + *((_DWORD *)v7 + 151) * ((8 * *((_DWORD *)v7 + 152) + 231) & 0xFFFFFFF8)
                          + 616);
        else
          v104 = (_QWORD *)((char *)v7 + 568);
        *v104 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v102 + 187) + 8LL * v91) + 184LL);
      }
      *((_DWORD *)v7 + 34) |= 1 << v173;
      v105 = *(_QWORD *)(*((_QWORD *)v102 + 187) + 8LL * v91);
      if ( (*(_DWORD *)(v105 + 392) & 0x10) == 0 )
        *(_QWORD *)((char *)v7 + 8 * v91 + *((unsigned int *)v7 + 138)) = *(_QWORD *)(v105 + 256);
    }
    else
    {
      v80 = (unsigned __int64)v161;
      if ( *((_BYTE *)v7 + 356) )
        v92 = (_QWORD *)((char *)v7 + *((_DWORD *)v7 + 151) * ((8 * *((_DWORD *)v7 + 152) + 231) & 0xFFFFFFF8) + 624);
      else
        v92 = (_QWORD *)((char *)v7 + 512);
      *v92 = *(_QWORD *)(v161[6].Count + 16);
      v93 = v165;
      if ( !*((_BYTE *)v33 + 3057) )
      {
        if ( *((_BYTE *)v7 + 356) )
          v94 = (_QWORD *)((char *)v7 + *((_DWORD *)v7 + 151) * ((8 * *((_DWORD *)v7 + 152) + 231) & 0xFFFFFFF8) + 616);
        else
          v94 = (_QWORD *)((char *)v7 + 568);
        *v94 = *((_QWORD *)v165 + 23);
      }
      if ( (*((int *)v33 + 684) >= 0x2000 || *((_BYTE *)v33 + 3036)) && v93 && (*((_DWORD *)v93 + 98) & 0x10) == 0 )
        *(_QWORD *)((char *)v7 + *((unsigned int *)v7 + 138)) = *((_QWORD *)v93 + 32);
    }
    if ( *((_BYTE *)v7 + 356) )
      v106 = (_QWORD *)((char *)v7
                      + 64 * (unsigned __int64)(v91 * *((_DWORD *)v7 + 151))
                      + *((_DWORD *)v7 + 151) * ((8 * *((_DWORD *)v7 + 152) + 231) & 0xFFFFFFF8)
                      + 648);
    else
      v106 = (_QWORD *)((char *)v7 + 504);
    v46 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v14 + 760) + 8LL) + 392LL))(
            v164[99],
            *(_QWORD *)(v80 + 24),
            v106,
            *(_QWORD *)(v14 + 768));
    v162 = v46;
    if ( v46 < 0 )
    {
      WdLogSingleEntry2(2LL, v80, -1073741811LL);
      WdLogGlobalForLineNumber = 2546;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to reference allocation for submission (0x%I64x). Returning 0x%I64x",
        v80,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v80) = v158;
      break;
    }
    *(_QWORD *)&v166[8 * v91] = *v106;
    ++v163;
    v107 = *(_QWORD *)(v80 + 40);
    if ( v107 && (*(_DWORD *)(v107 + 4) & 8) != 0 )
      v108 = *(_QWORD *)(*(_QWORD *)(v107 + 56) + 184LL);
    else
      v108 = 0LL;
    if ( *((_BYTE *)v7 + 356) )
      *(_QWORD *)((char *)v7
                + 64 * (unsigned __int64)(v91 * *((_DWORD *)v7 + 151))
                + *((_DWORD *)v7 + 151) * ((8 * *((_DWORD *)v7 + 152) + 231) & 0xFFFFFFF8)
                + 656) = v108;
    else
      *((_QWORD *)v7 + 72) = v108;
    *(_DWORD *)v7 |= 0x1000000u;
    v109 = v172->CompositionBindingId;
    v110 = *(_QWORD *)(*(__int64 (__fastcall **)(__int128 *))(v156 + 16))(&v156);
    v111 = (*(__int64 (__fastcall **)(__int128 *))(v156 + 64))(&v156);
    v112 = (*(__int64 (__fastcall **)(__int128 *))(v156 + 104))(&v156);
    WdLogSingleEntry5(8LL, v172, v112, v111, v110, v109);
    WdLogGlobalForLineNumber = 2569;
    if ( (*(unsigned __int8 (__fastcall **)(__int128 *))(v156 + 344))(&v156)
      && (*((_DWORD *)v7 + 1) |= 2u,
          *((_QWORD *)v7 + 60) = (*(__int64 (__fastcall **)(__int128 *))(v156 + 352))(&v156),
          v113 = (_DWORD *)(*(__int64 (__fastcall **)(__int128 *))(v156 + 360))(&v156),
          v80 = (unsigned __int64)v113,
          (*((_QWORD *)v7 + 61) = v113) != 0LL)
      && !v113[1] )
    {
      if ( *v113 != 64 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2583;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pAuxiliaryPresentInfo->size == sizeof(D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO)",
          2583LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(v80 + 32) = *((_DWORD *)v7 + 29);
      v33 = v160;
      *(_QWORD *)(v80 + 24) = *(_QWORD *)((char *)v160 + 412);
      ++v91;
      v14 = v194;
      LODWORD(v80) = v158;
      v90 = v171;
    }
    else
    {
      v33 = v160;
      ++v91;
      v14 = v194;
      LODWORD(v80) = v158;
      v90 = v171;
    }
  }
  v101 = v165;
  v100 = v160;
LABEL_208:
  *((_DWORD *)v7 + 35) = v80;
  if ( v46 < 0 || (*((_DWORD *)v100 + 615) & 0x20) == 0 )
    goto LABEL_248;
  memset(&v205, 0, sizeof(v205));
  v205.Flags.Value = 0x2000;
  if ( v180 )
  {
    v205.PrivateDriverDataSize = *((_DWORD *)v180 + 2);
    v205.pPrivateDriverData = (char *)v180 + 16;
  }
  pAllocationList = 0LL;
  v211 = 0LL;
  v213 = 0;
  if ( (unsigned int)v80 <= 4 )
  {
    pAllocationList = (DXGK_ALLOCATIONLIST *)v212;
    v211 = v212;
    if ( (_DWORD)v80 )
    {
      memset(v212, 0, 32LL * (unsigned int)v80);
      pAllocationList = (DXGK_ALLOCATIONLIST *)v211;
    }
  }
  else
  {
    v81 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v80;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v80 < 0x20 )
      goto LABEL_218;
    pAllocationList = (DXGK_ALLOCATIONLIST *)ExAllocatePool2(
                                               256LL,
                                               32LL * (unsigned int)v80,
                                               1265072196LL,
                                               32LL * (unsigned int)v80);
    v211 = pAllocationList;
  }
  v213 = v80;
LABEL_218:
  v205.pAllocationList = pAllocationList;
  if ( pAllocationList )
  {
    v115 = *((_DWORD *)v100 + 617);
    v157 = (v115 & 0x80u) != 0 && (v115 & 0x40) == 0;
    v116 = 0;
    if ( (_DWORD)v80 )
    {
      v117 = 0LL;
      v118 = v158;
      if ( v101 )
      {
        v119 = 0LL;
        v120 = v178;
        v121 = v171;
        while ( 1 )
        {
          *(_WORD *)((char *)&pAllocationList[1].hDeviceSpecificAllocation + v117 + 2) = *(_WORD *)(*(_QWORD *)(v119 + *((_QWORD *)v120 + 187))
                                                                                                  + 388LL);
          v122 = v161;
          if ( v116 )
            v122 = *(struct _EX_RUNDOWN_REF **)(v119 + v121);
          v123 = *(_BYTE *)(*(_QWORD *)(v119 + *((_QWORD *)v120 + 187)) + 431LL);
          *(struct _EX_RUNDOWN_REF *)((char *)&v205.pAllocationList->hDeviceSpecificAllocation + v117) = v122[4];
          v124 = v122[3].Count;
          v125 = *(_QWORD *)(*(_QWORD *)(v14 + 760) + 8LL);
          v126 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD))(v125 + 224);
          LOBYTE(v125) = v123 != 0;
          v127 = v126(
                   v124,
                   v125,
                   *(unsigned __int16 *)((char *)&v205.pAllocationList[1].hDeviceSpecificAllocation + v117 + 2));
          *(_QWORD *)((char *)&v205.pAllocationList->8 + v117) = v127;
          ++v116;
          v119 += 8LL;
          v117 += 32LL;
          if ( v116 >= v118 )
            break;
          pAllocationList = v205.pAllocationList;
        }
      }
      else
      {
        v129 = 0;
        v130 = v157;
        v131 = (struct _EX_RUNDOWN_REF **)v171;
        while ( 1 )
        {
          *(_WORD *)((char *)&pAllocationList[1].hDeviceSpecificAllocation + v117 + 2) = 0;
          v132 = v161;
          if ( v129 )
            v132 = *v131;
          *(struct _EX_RUNDOWN_REF *)((char *)&v205.pAllocationList->hDeviceSpecificAllocation + v117) = v132[4];
          v133 = (*(__int64 (__fastcall **)(ULONG_PTR, bool, _QWORD))(*(_QWORD *)(*(_QWORD *)(v14 + 760) + 8LL) + 224LL))(
                   v132[3].Count,
                   v130,
                   *(unsigned __int16 *)((char *)&v205.pAllocationList[1].hDeviceSpecificAllocation + v117 + 2));
          *(_QWORD *)((char *)&v205.pAllocationList->8 + v117) = v133;
          ++v129;
          v131 = (struct _EX_RUNDOWN_REF **)(v171 + 8);
          v171 += 8LL;
          v117 += 32LL;
          if ( v129 >= v118 )
            break;
          pAllocationList = v205.pAllocationList;
        }
      }
      LODWORD(v80) = v118;
      v7 = v181;
    }
    v205.FlipInterval = *((_DWORD *)v7 + 31);
    v205.Flags.Value = v205.Flags.Value & 0xFFFFE8FF | (*(_DWORD *)v7 >> 11) & 0x1700;
    v205.NumSrcAllocations = v80;
    v100 = v160;
    if ( *((_BYTE *)v160 + 3057) )
      v128 = 0LL;
    else
      v128 = (void *)*((_QWORD *)v165 + 23);
    v46 = ADAPTER_RENDER::DdiPresent((ADAPTER_RENDER *)v14, v128, &v205);
    v162 = v46;
    if ( v46 < 0 )
    {
      if ( v211 != v212 && v211 )
        ExFreePoolWithTag(v211, 0);
      goto LABEL_243;
    }
    if ( v211 != v212 && v211 )
      ExFreePoolWithTag(v211, 0);
    v211 = 0LL;
    v213 = 0;
LABEL_248:
    if ( !v170 || (*(_DWORD *)v7 & 0x1000000) == 0 )
      goto LABEL_265;
    v134 = 0LL;
    if ( *((int *)v100 + 751) >= 2500 )
    {
      v173 = v159;
      v135 = (*(__int64 (__fastcall **)(__int128 *))(v156 + 168))(&v156);
      LODWORD(v160) = v135;
      Src = (void *)(*(__int64 (__fastcall **)(__int128 *))(v156 + 176))(&v156);
      v136 = (_DWORD *)(*(__int64 (__fastcall **)(__int128 *))(v156 + 184))(&v156);
      v138 = v136;
      v139 = v136 && (*v136 || v136[2] || v136[1] || v136[3]);
      v158 = v139;
      if ( v135 || v139 )
      {
        LODWORD(v171) = v135 + v139;
        v140 = 16 * (v135 + v139) + 24;
        v141 = operator new[]((unsigned int)(16 * v171 + 40), 0x4B677844u, 64LL, v137);
        v134 = v141;
        if ( !v141 )
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 1732;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            0xFFFFFFFFLL,
            L"Failed to allocate memory for present dirty rects data",
            1732LL,
            0LL,
            0LL,
            0LL,
            0LL);
          WdLogSingleEntry1(2LL, -1073741801LL);
          WdLogGlobalForLineNumber = 2670;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to read dirty rects data. Returning 0x%I64x",
            -1073741801LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_265;
        }
        *(_QWORD *)v141 = 0LL;
        *(_DWORD *)(v141 + 8) = v140;
        *(_DWORD *)(v141 + 12) = 1;
        *(_DWORD *)(v141 + 16) = 1;
        v142 = (void *)(v141 + 40);
        *(_DWORD *)(v134 + 24) = v173;
        *(_QWORD *)(v134 + 32) = v142;
        *(_DWORD *)(v134 + 28) = v171;
        v143 = 16LL * (unsigned int)v160;
        memmove(v142, Src, v143);
        if ( v158 )
          *(_OWORD *)(v134 + v143 + 40) = *v138;
      }
    }
    *((_QWORD *)v7 + 4) = v134;
    goto LABEL_265;
  }
LABEL_243:
  v211 = 0LL;
  v213 = 0;
LABEL_265:
  if ( v46 < 0 )
  {
    if ( v163 )
    {
      v144 = v163;
      if ( v165 )
      {
        v145 = v182;
        v146 = &v166[-v182];
        do
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v14 + 760) + 8LL) + 400LL))(
            *(_QWORD *)(v14 + 768),
            (unsigned int)(1 << *(_DWORD *)(*(_QWORD *)v145 + 388LL)),
            *(_QWORD *)&v146[v145],
            0LL);
          v145 += 8LL;
          --v144;
        }
        while ( v144 );
      }
      else
      {
        v147 = v166;
        do
        {
          (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v14 + 760) + 8LL) + 400LL))(
            *(_QWORD *)(v14 + 768),
            1LL,
            *v147++);
          --v144;
        }
        while ( v144 );
      }
    }
    v148 = v172;
    v149 = v172->CompositionBindingId;
    v150 = *(_QWORD *)(*(__int64 (__fastcall **)(__int128 *, unsigned __int64))(v156 + 16))(&v156, v81);
    v151 = (*(__int64 (__fastcall **)(__int128 *))(v156 + 64))(&v156);
    v152 = (*(__int64 (__fastcall **)(__int128 *))(v156 + 104))(&v156);
    WdLogSingleEntry5(8LL, v148, v152, v151, v150, v149);
    WdLogGlobalForLineNumber = 2697;
    LOBYTE(v153) = 1;
    (*(void (__fastcall **)(__int128 *, __int64))(v156 + 232))(&v156, v153);
    *(_DWORD *)v7 &= ~0x1000000u;
    v46 = 0;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>((__int64 *)&v208);
  if ( P != v190 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v191 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v161);
  (*(void (__fastcall **)(__int128 *, __int64))v156)(&v156, 1LL);
  return (unsigned int)v46;
}
