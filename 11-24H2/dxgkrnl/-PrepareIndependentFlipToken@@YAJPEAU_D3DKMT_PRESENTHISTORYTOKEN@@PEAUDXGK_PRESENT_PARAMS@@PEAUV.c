/*
 * XREFs of ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1404201A0
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140301EA0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1403A620C (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140012E50 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0CIFlipPresentHistoryTokenFlipManager@@QEAA@PEBU_D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN@@@Z @ 0x14001A4D8 (--0CIFlipPresentHistoryTokenFlipManager@@QEAA@PEBU_D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1400353D4 (--0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     ?VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z @ 0x140038354 (-VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z.c)
 *     ?IsHdrEnabled@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x140038B20 (-IsHdrEnabled@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0CIFlipPresentHistoryTokenRedirectedFlip@@QEAA@PEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1400396C8 (--0CIFlipPresentHistoryTokenRedirectedFlip@@QEAA@PEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ @ 0x140042784 (-SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?IsIFlipSupported@CIFlipPresentHistoryToken@@SA_NPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x140295A00 (-IsIFlipSupported@CIFlipPresentHistoryToken@@SA_NPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ @ 0x1402A73A0 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x1402E3B40 (-PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_.c)
 *     ?IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z @ 0x1402F5480 (-IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402F8D90 (--0DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1402F9470 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1402FFB58 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1403243B0 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z @ 0x14034BF64 (-UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x14040154C (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPE.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x14041F864 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 */

__int64 __fastcall PrepareIndependentFlipToken(
        struct _EX_RUNDOWN_REF *a1,
        struct DXGK_PRESENT_PARAMS *a2,
        struct VIDSCH_SUBMIT_DATA_BASE *a3,
        struct _EX_RUNDOWN_REF *a4,
        struct _EX_RUNDOWN_REF **a5,
        struct CRefCountedBuffer *a6)
{
  struct VIDSCH_SUBMIT_DATA_BASE *v7; // rbx
  __int64 Count; // rcx
  struct _EX_RUNDOWN_REF *v11; // r12
  struct DXGPROCESS *Current; // r9
  ULONG_PTR v13; // r13
  ULONG_PTR v14; // r14
  struct DXGK_PRESENT_PARAMS *v15; // rax
  unsigned int Ptr_high; // eax
  struct _EX_RUNDOWN_REF *v17; // rax
  ULONG_PTR v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdi
  ULONG_PTR v22; // rsi
  __int64 v23; // rax
  struct _LUID *v24; // rax
  unsigned int v25; // ecx
  struct _EX_RUNDOWN_REF *v26; // rdi
  struct DXGK_PRESENT_PARAMS *v27; // r8
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  int v31; // eax
  int v32; // eax
  int *v33; // rsi
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rsi
  unsigned int v37; // ebx
  __int64 v38; // rax
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rdx
  _DWORD *v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rdi
  unsigned int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rdi
  __int64 v55; // rcx
  char v56; // al
  __int64 v57; // rsi
  unsigned int v58; // eax
  unsigned int v59; // edi
  int v60; // r12d
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  char v62; // r9
  _WORD *v63; // rsi
  unsigned __int64 v64; // rdi
  __int64 v65; // rax
  __int128 v66; // xmm1
  __int64 v67; // r8
  __int64 v68; // rdi
  __int64 v69; // rsi
  __int64 v70; // rax
  __int64 v71; // rdx
  unsigned int v72; // eax
  unsigned int v73; // eax
  __int64 v74; // rax
  __int64 v75; // rax
  _DWORD *v76; // r8
  UINT v77; // r14d
  struct _EX_RUNDOWN_REF *Pool2; // rcx
  unsigned __int64 v79; // r12
  __int64 v80; // rax
  bool v81; // cf
  unsigned __int64 v82; // rax
  _QWORD *v83; // rax
  unsigned __int64 v84; // rdi
  __int64 v85; // rax
  DXGALLOCATIONREFERENCE *v86; // rsi
  __int64 v87; // rcx
  unsigned __int64 v88; // rdx
  unsigned __int64 v89; // rdx
  UINT v90; // r8d
  char *v91; // r12
  struct _EX_RUNDOWN_REF *v92; // r14
  _DWORD *v93; // rdi
  _DWORD *v94; // rsi
  char *v95; // rcx
  struct _EX_RUNDOWN_REF *v96; // rax
  struct _EX_RUNDOWN_REF *v97; // rdx
  ULONG_PTR *v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rdi
  unsigned int *v101; // rsi
  __int64 v102; // rsi
  struct _EX_RUNDOWN_REF **v103; // r14
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  int v105; // edi
  _QWORD *v106; // r12
  struct _EX_RUNDOWN_REF *v107; // rsi
  struct DXGK_PRESENT_PARAMS *v108; // r10
  char *v109; // rdx
  _DWORD *v110; // r9
  char *v111; // rdx
  __int64 v112; // rdx
  unsigned __int64 v113; // rdx
  ULONG_PTR v114; // rcx
  __int64 v115; // r8
  ULONG_PTR v116; // r14
  __int64 v117; // rsi
  unsigned int v118; // edi
  __int64 v119; // rax
  struct _EX_RUNDOWN_REF *v120; // rax
  struct _EX_RUNDOWN_REF *v121; // rdi
  DXGK_ALLOCATIONLIST *pAllocationList; // r8
  int v123; // eax
  UINT v124; // edx
  __int64 v125; // rdi
  __int64 v126; // rsi
  struct DXGK_PRESENT_PARAMS *v127; // r12
  __int64 v128; // rbx
  bool v129; // zf
  struct _EX_RUNDOWN_REF *v130; // rdx
  char v131; // r9
  ULONG_PTR v132; // rcx
  __int64 v133; // rdx
  __int64 (__fastcall *v134)(ULONG_PTR, __int64, _QWORD); // rax
  __int64 v135; // rax
  PVOID Ptr; // rdx
  UINT v137; // esi
  struct _EX_RUNDOWN_REF **v138; // rax
  bool v139; // r12
  struct _EX_RUNDOWN_REF *v140; // rdx
  __int64 v141; // rax
  __int64 v142; // r14
  _DWORD *v143; // rax
  _OWORD *v144; // rsi
  BOOL v145; // eax
  __int64 v146; // rax
  __int64 v147; // rdi
  __int64 v148; // rsi
  char *v149; // r12
  ULONG_PTR v150; // r14
  __int64 v151; // rsi
  unsigned int v152; // edi
  __int64 v153; // rax
  __int64 v154; // rdx
  int v155; // [rsp+30h] [rbp-3F8h]
  int v156; // [rsp+30h] [rbp-3F8h]
  __int128 v157; // [rsp+80h] [rbp-3A8h] BYREF
  bool v158; // [rsp+90h] [rbp-398h]
  int v159; // [rsp+94h] [rbp-394h]
  unsigned int v160; // [rsp+98h] [rbp-390h] BYREF
  int v161; // [rsp+9Ch] [rbp-38Ch]
  UINT v162; // [rsp+A0h] [rbp-388h]
  struct _EX_RUNDOWN_REF *v163; // [rsp+A8h] [rbp-380h]
  struct _EX_RUNDOWN_REF *v164; // [rsp+B0h] [rbp-378h] BYREF
  int v165; // [rsp+B8h] [rbp-370h]
  unsigned int v166; // [rsp+BCh] [rbp-36Ch]
  _BYTE *v167; // [rsp+C0h] [rbp-368h]
  struct _EX_RUNDOWN_REF *v168; // [rsp+C8h] [rbp-360h] BYREF
  unsigned int v169; // [rsp+D0h] [rbp-358h] BYREF
  D3DDDI_FLIPINTERVAL_TYPE *v170; // [rsp+D8h] [rbp-350h] BYREF
  int v171; // [rsp+E0h] [rbp-348h] BYREF
  int v172; // [rsp+E4h] [rbp-344h] BYREF
  _DWORD *v173; // [rsp+E8h] [rbp-340h]
  struct _EX_RUNDOWN_REF *v174; // [rsp+F0h] [rbp-338h]
  __int64 v175; // [rsp+F8h] [rbp-330h]
  unsigned __int64 v176; // [rsp+100h] [rbp-328h]
  struct _EX_RUNDOWN_REF *v177; // [rsp+108h] [rbp-320h]
  int v178; // [rsp+110h] [rbp-318h] BYREF
  int v179; // [rsp+114h] [rbp-314h] BYREF
  int v180; // [rsp+118h] [rbp-310h] BYREF
  enum _D3DDDI_HDR_METADATA_TYPE v181; // [rsp+11Ch] [rbp-30Ch] BYREF
  struct _EX_RUNDOWN_REF *v182; // [rsp+120h] [rbp-308h]
  struct DXGK_PRESENT_PARAMS *v183; // [rsp+128h] [rbp-300h]
  __int64 v184; // [rsp+130h] [rbp-2F8h]
  int v185; // [rsp+138h] [rbp-2F0h] BYREF
  int v186; // [rsp+13Ch] [rbp-2ECh]
  __int64 v187; // [rsp+140h] [rbp-2E8h]
  struct CRefCountedBuffer *v188; // [rsp+148h] [rbp-2E0h]
  struct DXGK_PRESENT_PARAMS *v189; // [rsp+150h] [rbp-2D8h]
  void *Src; // [rsp+158h] [rbp-2D0h]
  struct DXGK_PRESENT_PARAMS *v191; // [rsp+160h] [rbp-2C8h]
  _QWORD v192[3]; // [rsp+168h] [rbp-2C0h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v193; // [rsp+180h] [rbp-2A8h]
  _BYTE v194[16]; // [rsp+188h] [rbp-2A0h] BYREF
  PVOID P; // [rsp+198h] [rbp-290h]
  _BYTE v196[32]; // [rsp+1A0h] [rbp-288h] BYREF
  UINT v197; // [rsp+1C0h] [rbp-268h]
  struct DXGPROCESS *v198; // [rsp+1C8h] [rbp-260h]
  struct _EX_RUNDOWN_REF *v199[8]; // [rsp+1D0h] [rbp-258h] BYREF
  struct tagRECT v200; // [rsp+210h] [rbp-218h] BYREF
  struct _D3DDDI_HDR_METADATA_HDR10 v201; // [rsp+220h] [rbp-208h] BYREF
  __int64 v202; // [rsp+240h] [rbp-1E8h]
  struct _EX_RUNDOWN_REF *v203; // [rsp+248h] [rbp-1E0h]
  _DXGKARG_PRESENT v204; // [rsp+250h] [rbp-1D8h] BYREF
  __int128 v205; // [rsp+300h] [rbp-128h] BYREF
  struct tagRECT v206; // [rsp+310h] [rbp-118h] BYREF
  struct _EX_RUNDOWN_REF *v207; // [rsp+320h] [rbp-108h] BYREF
  char v208; // [rsp+328h] [rbp-100h] BYREF
  UINT v209; // [rsp+348h] [rbp-E0h]
  PVOID v210; // [rsp+350h] [rbp-D8h]
  _BYTE v211[128]; // [rsp+358h] [rbp-D0h] BYREF
  UINT v212; // [rsp+3D8h] [rbp-50h]

  v174 = a4;
  v7 = a3;
  v193 = a3;
  v183 = a2;
  v182 = a1;
  v199[6] = a1;
  v189 = a2;
  Src = a3;
  v199[5] = a4;
  v188 = a6;
  if ( !CIFlipPresentHistoryToken::IsIFlipSupported((const struct _D3DKMT_PRESENTHISTORYTOKEN *)a1) || a4 && !a2 )
    return 0LL;
  v157 = 0LL;
  if ( LODWORD(a1->Count) == 2 )
  {
    CIFlipPresentHistoryTokenRedirectedFlip::CIFlipPresentHistoryTokenRedirectedFlip(
      (CIFlipPresentHistoryTokenRedirectedFlip *)&v157,
      (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)&a1[2]);
  }
  else if ( LODWORD(a1->Count) == 9 )
  {
    CIFlipPresentHistoryTokenFlipManager::CIFlipPresentHistoryTokenFlipManager(
      (CIFlipPresentHistoryTokenFlipManager *)&v157,
      (const struct _D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN *)&a1[2]);
  }
  v177 = 0LL;
  if ( a4 )
  {
    Count = a4[2].Count;
    v168 = (struct _EX_RUNDOWN_REF *)Count;
    v11 = *(struct _EX_RUNDOWN_REF **)(*(_QWORD *)(Count + 16) + 16LL);
  }
  else
  {
    v177 = *a5;
    v11 = a5[2];
    v168 = a5[3];
  }
  v192[1] = v11;
  v163 = v11;
  if ( !a4 && !BYTE1(v11[382].Count) )
  {
LABEL_48:
    (*(void (__fastcall **)(__int128 *, __int64))v157)(&v157, 1LL);
    return 0LL;
  }
  *((_QWORD *)v7 + 3) = 0LL;
  Current = DXGPROCESS::GetCurrent(Count);
  v198 = Current;
  v13 = v11[391].Count;
  v199[1] = (struct _EX_RUNDOWN_REF *)v13;
  v14 = 0LL;
  if ( v11[390].Count )
    v14 = v11[390].Count;
  v15 = a2;
  if ( !a4 )
    v15 = 0LL;
  v191 = v15;
  if ( a4 )
    Ptr_high = *((_DWORD *)v15 + 5);
  else
    Ptr_high = HIDWORD(v177[137].Ptr);
  v166 = Ptr_high;
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v164, Ptr_high);
  v17 = v164;
  if ( !v164 || *(_QWORD *)(*(_QWORD *)(v164[1].Count + 16) + 16LL) != *(_QWORD *)(v168[2].Count + 16) )
  {
LABEL_47:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v164);
    goto LABEL_48;
  }
  v18 = v164[5].Count;
  if ( v188 && v18 && (*(_DWORD *)(v18 + 4) & 1) != 0 )
  {
    v18 = *(_QWORD *)(*(_QWORD *)(v18 + 56) + 176LL);
    *((_QWORD *)v7 + 3) = v18;
  }
  if ( a4 )
    v19 = *((_QWORD *)a2 + 187);
  else
    v19 = 0LL;
  v192[2] = v19;
  v187 = v19;
  v169 = (*(_DWORD *)(v17[6].Count + 4) >> 6) & 0xF;
  v178 = 0;
  v172 = 0;
  v179 = 0;
  v180 = 0;
  v160 = 0;
  v192[0] = *(_QWORD *)(*(__int64 (__fastcall **)(__int128 *, ULONG_PTR))(v157 + 24))(&v157, v18);
  v171 = 0;
  v205 = 0LL;
  v206 = 0LL;
  v20 = 760LL;
  if ( !*((_BYTE *)v7 + 356) )
    v20 = 528LL;
  v176 = (unsigned __int64)v7 + v20;
  v21 = *(_QWORD *)(v13 + 736);
  v177 = v182 + 1;
  v22 = v182[1].Count;
  v23 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 16))(&v157);
  (*(void (__fastcall **)(_QWORD, unsigned int *, __int64, ULONG_PTR, unsigned __int64, int *, int *, unsigned int *, _QWORD *, int *, int *, int *, __int128 *, struct tagRECT *))(*(_QWORD *)(v21 + 8) + 416LL))(
    *(_QWORD *)(v13 + 744),
    &v169,
    v23,
    v22,
    v176,
    &v178,
    &v172,
    &v160,
    v192,
    &v179,
    &v180,
    &v171,
    &v205,
    &v206);
  (*(void (__fastcall **)(__int128 *, _QWORD))(v157 + 32))(&v157, v192[0]);
  (*(void (__fastcall **)(__int128 *, _QWORD))(v157 + 48))(&v157, v169);
  *((_DWORD *)v7 + 29) = v169;
  v24 = (struct _LUID *)(*(__int64 (__fastcall **)(__int128 *))(v157 + 16))(&v157);
  RtlCopyLuid((PLUID)((char *)v7 + 156), v24);
  *((struct _EX_RUNDOWN_REF *)v7 + 21) = (struct _EX_RUNDOWN_REF)v177->Count;
  v25 = *(_DWORD *)v7 & 0xFFFEFFFF;
  *(_DWORD *)v7 = v25;
  v26 = v174;
  if ( v174 )
  {
    v27 = v191;
    v28 = v25 ^ (*((_DWORD *)v191 + 22) ^ v25) & 4;
    *(_DWORD *)v7 = v28;
    v29 = v28 ^ (v28 ^ (4 * *((_DWORD *)v27 + 22))) & 0x80000;
    *(_DWORD *)v7 = v29;
    v30 = v29 ^ (v29 ^ (4 * *((_DWORD *)v27 + 22))) & 0x100000;
    *(_DWORD *)v7 = v30;
    *(_DWORD *)v7 = v30 ^ (v30 ^ (4 * *((_DWORD *)v27 + 22))) & 0x200000;
  }
  *(_DWORD *)v7 ^= ((unsigned __int8)*(_DWORD *)v7 ^ (unsigned __int8)(8
                                                                     * (*(__int64 (__fastcall **)(__int128 *))(v157 + 200))(&v157))) & 8;
  *(_DWORD *)v7 ^= ((unsigned __int8)*(_DWORD *)v7 ^ (unsigned __int8)(16
                                                                     * (*(__int64 (__fastcall **)(__int128 *))(v157 + 208))(&v157))) & 0x10;
  *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ ((*(unsigned __int8 (__fastcall **)(__int128 *))(v157 + 216))(&v157) << 28)) & 0x10000000;
  *((_DWORD *)v7 + 1) ^= ((unsigned __int8)*((_DWORD *)v7 + 1) ^ (unsigned __int8)((*(unsigned __int8 (__fastcall **)(__int128 *))(v157 + 224))(&v157) << 6)) & 0x40;
  *((_DWORD *)v7 + 1) ^= ((unsigned __int16)*((_DWORD *)v7 + 1) ^ (unsigned __int16)((*(unsigned __int8 (__fastcall **)(__int128 *))(v157 + 320))(&v157) << 8)) & 0x100;
  *((_DWORD *)v7 + 1) ^= ((unsigned __int16)*((_DWORD *)v7 + 1) ^ (unsigned __int16)((*(unsigned __int8 (__fastcall **)(__int128 *))(v157 + 328))(&v157) << 9)) & 0x200;
  (*(void (__fastcall **)(__int128 *, struct _EX_RUNDOWN_REF *))(v157 + 56))(&v157, v11);
  *((_DWORD *)v7 + 28) = (*(__int64 (__fastcall **)(__int128 *))(v157 + 64))(&v157);
  *((_DWORD *)v7 + 48) = *(_DWORD *)(*(__int64 (__fastcall **)(__int128 *))(v157 + 72))(&v157);
  *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ ((*(unsigned __int8 (__fastcall **)(__int128 *))(v157 + 192))(&v157) << 25)) & 0x2000000;
  *((_DWORD *)v7 + 36) = (*(__int64 (__fastcall **)(__int128 *))(v157 + 80))(&v157);
  *((_DWORD *)v7 + 37) = (*(__int64 (__fastcall **)(__int128 *))(v157 + 88))(&v157);
  if ( v26 )
    v31 = v26[48].Count;
  else
    v31 = 1;
  *((_DWORD *)v7 + 34) = v31;
  if ( *((_BYTE *)v7 + 356) )
    *((_DWORD *)v7 + 160) = -1;
  if ( bTracingEnabled )
    *((_QWORD *)v7 + 23) = VIDMM_EXPORT::VidMmETWAllocationHandle(
                             *(VIDMM_EXPORT **)(v13 + 760),
                             *(struct VIDMM_GLOBAL **)(v13 + 768),
                             v166);
  v32 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 96))(&v157);
  v170 = (D3DDDI_FLIPINTERVAL_TYPE *)((char *)v7 + 124);
  *((_DWORD *)v7 + 31) = v32;
  v33 = (int *)((char *)v7 + 124);
  v185 = 1;
  if ( !v32
    && (!(*(unsigned __int8 (__fastcall **)(__int128 *))(v157 + 216))(&v157) || (HIDWORD(v11[307].Ptr) & 0x40) == 0) )
  {
    v33 = &v185;
  }
  v34 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(*(_QWORD *)(*(_QWORD *)(v13 + 736) + 8LL) + 520LL))(
          v168[100].Count,
          v169,
          v33);
  v36 = v34;
  *((_DWORD *)v7 + 30) = v34;
  if ( v34 != 5 && *v170 )
  {
    v37 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 64))(&v157);
    v38 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 104))(&v157);
    WdLogSingleEntry4(8LL, v182, v38, v37, v36);
    WdLogGlobalForLineNumber = 2091;
    goto LABEL_47;
  }
  if ( !v178 )
  {
    if ( v179 )
    {
      LODWORD(v168) = 0;
      v170 = 0LL;
      v40 = *(_QWORD *)(v13 + 736);
      v41 = *((_QWORD *)v7 + 21);
      v42 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 16))(&v157);
      LOBYTE(v155) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, unsigned int *, _DWORD, int, struct _EX_RUNDOWN_REF **, D3DDDI_FLIPINTERVAL_TYPE **))(*(_QWORD *)(v40 + 8) + 408LL))(
        *(_QWORD *)(v13 + 744),
        (unsigned int)(1 << *((_DWORD *)v7 + 29)),
        v42,
        v41,
        &v160,
        0,
        v155,
        &v168,
        &v170);
      ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v14, *((_DWORD *)v7 + 29), v160, 0);
    }
    else if ( !v180 )
    {
      goto LABEL_47;
    }
    LOBYTE(v35) = 1;
    (*(void (__fastcall **)(__int128 *, __int64))(v157 + 232))(&v157, v35);
    goto LABEL_47;
  }
  *((_QWORD *)v7 + 22) = *(_QWORD *)(*(__int64 (__fastcall **)(__int128 *))(v157 + 24))(&v157);
  v159 = 0;
  v165 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int128 *))(v157 + 240))(&v157) )
  {
    LODWORD(v168) = 0;
    v170 = 0LL;
    v43 = *(_QWORD *)(v13 + 736);
    v44 = *((_QWORD *)v7 + 21);
    v45 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 16))(&v157);
    LOBYTE(v155) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, unsigned int *, _DWORD, int, struct _EX_RUNDOWN_REF **, D3DDDI_FLIPINTERVAL_TYPE **))(*(_QWORD *)(v43 + 8) + 408LL))(
      *(_QWORD *)(v13 + 744),
      (unsigned int)(1 << *((_DWORD *)v7 + 29)),
      v45,
      v44,
      &v160,
      0,
      v155,
      &v168,
      &v170);
    LOBYTE(v46) = 1;
    (*(void (__fastcall **)(__int128 *, __int64))(v157 + 232))(&v157, v46);
    ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v14, *((_DWORD *)v7 + 29), v160, 0);
    WdLogSingleEntry0(8LL);
    WdLogGlobalForLineNumber = 2160;
    goto LABEL_47;
  }
  if ( v172 || DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*(DXGADAPTER **)(v13 + 16)) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int128 *))(v157 + 248))(&v157) )
    {
      DXGDISPLAYSTATEMUTEX::DXGDISPLAYSTATEMUTEX((DXGDISPLAYSTATEMUTEX *)v194, (struct ADAPTER_DISPLAY *)v14);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v194);
      v54 = *((unsigned int *)v7 + 29);
      v55 = *(_QWORD *)(v14 + 16);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v55 + 184)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v55 + 168)) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6698;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"IsCoreResourceSharedOwner()",
          6698LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (unsigned int)v54 >= *(_DWORD *)(v14 + 96) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6699;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"VidPnSourceId < m_NumVidPnSources",
          6699LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v56 = *(_BYTE *)(4024 * v54 + *(_QWORD *)(v14 + 128) + 1161);
      v158 = v56;
      if ( v56 )
      {
        if ( (unsigned int)IsYUVAllocation(*(void **)(v164[6].Count + 16), (struct ADAPTER_RENDER *)v13) )
          goto LABEL_82;
        v57 = *(_QWORD *)(v14 + 128) + 4024LL * *((unsigned int *)v7 + 29);
        if ( *(struct _KTHREAD **)(*(_QWORD *)(v57 + 8) + 648LL) != KeGetCurrentThread() )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 10379;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"m_DisplayCore->IsDisplayStateMutexOwner()",
            10379LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v58 = 0;
        v59 = 0;
        if ( *(_DWORD *)(v57 + 3784) )
        {
          v60 = 0;
          do
          {
            LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal((DISPLAY_SOURCE *)v57, v59);
            if ( LatestPlaneConfigInternal && (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 )
              ++v60;
            ++v59;
          }
          while ( v59 < *(_DWORD *)(v57 + 3784) );
          v159 = v60;
          v11 = v163;
          v58 = v159;
        }
        if ( v58 > 1 )
        {
LABEL_82:
          v56 = 0;
          v158 = 0;
        }
        else
        {
          v56 = v158;
        }
      }
      v200 = 0LL;
      v62 = !v160 && v56;
      if ( !CheckAndUpdateMultiPlaneOverlayFromInternalState(
              *((_DWORD *)v7 + 29),
              v160,
              (struct CIFlipPresentHistoryTokenData *)&v157,
              v62,
              (struct ADAPTER_RENDER *)v13,
              (struct ADAPTER_DISPLAY *)v14,
              &v200) )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v194);
        LODWORD(v168) = 0;
        v170 = 0LL;
        v68 = *(_QWORD *)(v13 + 736);
        v69 = *((_QWORD *)v7 + 21);
        v70 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 16))(&v157);
        LOBYTE(v156) = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, unsigned int *, _DWORD, int, struct _EX_RUNDOWN_REF **, D3DDDI_FLIPINTERVAL_TYPE **))(*(_QWORD *)(v68 + 8) + 408LL))(
          *(_QWORD *)(v13 + 744),
          (unsigned int)(1 << *((_DWORD *)v7 + 29)),
          v70,
          v69,
          &v160,
          0,
          v156,
          &v168,
          &v170);
        WdLogSingleEntry1(3LL, v160);
        WdLogGlobalForLineNumber = 2270;
        LOBYTE(v71) = 1;
        (*(void (__fastcall **)(__int128 *, __int64))(v157 + 232))(&v157, v71);
        ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v14, *((_DWORD *)v7 + 29), v160, 0);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v194);
        goto LABEL_47;
      }
      v63 = (_WORD *)(*(__int64 (__fastcall **)(__int128 *))(v157 + 8))(&v157);
      v64 = v176;
      *(_WORD *)v176 = *v63;
      *(_WORD *)(v64 + 4) = v63[2];
      *(_WORD *)(v64 + 2) = v63[4];
      *(_WORD *)(v64 + 6) = v63[6];
      *(_DWORD *)(v64 + 24) = (*(__int64 (__fastcall **)(__int128 *))(v157 + 112))(&v157);
      if ( v158 )
      {
        v65 = *(_QWORD *)v64;
        *(_QWORD *)(v64 + 8) = *(_QWORD *)v64;
        *(_QWORD *)(v64 + 16) = v65;
        v66 = *(_OWORD *)v63;
        v205 = v66;
        v206 = v200;
        if ( (_DWORD)v66 != v200.left
          || __PAIR64__(DWORD2(v205), DWORD1(v66)) != *(_QWORD *)&v200.top
          || (v67 = 0LL, HIDWORD(v205) != v200.bottom) )
        {
          v67 = 1LL;
        }
        v171 = v67;
        if ( !(_DWORD)v67 )
        {
          v205 = 0LL;
          v206 = 0LL;
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int128 *, struct tagRECT *))(*(_QWORD *)(*(_QWORD *)(v13 + 736)
                                                                                                  + 8LL)
                                                                                      + 992LL))(
          *(_QWORD *)(v13 + 744),
          *((unsigned int *)v7 + 29),
          v67,
          &v205,
          &v206);
        UpdatePostComposition(
          *((_DWORD *)v7 + 29),
          v171 != 0,
          DWORD2(v205) - v205,
          HIDWORD(v205) - DWORD1(v205),
          (struct ADAPTER_DISPLAY *)v14);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v13 + 736) + 8LL)
                                                                       + 424LL))(
        *(_QWORD *)(v13 + 744),
        *((unsigned int *)v7 + 29),
        v64,
        v160);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v194);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v194);
      v159 = v165;
      v26 = v174;
    }
    else
    {
      ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v14, *((_DWORD *)v7 + 29), v160, 1);
    }
    *(_DWORD *)v7 = (v171 << 31) | *(_DWORD *)v7 & 0x7BFFFFFF | ((v172 & 1) << 26) & 0x7FFFFFFF;
    *(_OWORD *)((char *)v7 + 436) = v205;
    *(struct tagRECT *)((char *)v7 + 452) = v206;
  }
  else
  {
    v47 = (_DWORD *)(*(__int64 (__fastcall **)(__int128 *))(v157 + 8))(&v157);
    v173 = v47;
    if ( v47[2] - *v47 != (*(unsigned int (__fastcall **)(__int128 *))(v157 + 120))(&v157)
      || v47[3] - v47[1] != (*(unsigned int (__fastcall **)(__int128 *))(v157 + 128))(&v157)
      || (*(unsigned __int8 (__fastcall **)(__int128 *))(v157 + 248))(&v157) )
    {
      LODWORD(v168) = 0;
      v170 = 0LL;
      v48 = *(_QWORD *)(v13 + 736);
      v49 = *((_QWORD *)v7 + 21);
      v50 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 16))(&v157);
      LOBYTE(v155) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, unsigned int *, _DWORD, int, struct _EX_RUNDOWN_REF **, D3DDDI_FLIPINTERVAL_TYPE **))(*(_QWORD *)(v48 + 8) + 408LL))(
        *(_QWORD *)(v13 + 744),
        (unsigned int)(1 << *((_DWORD *)v7 + 29)),
        v50,
        v49,
        &v160,
        0,
        v155,
        &v168,
        &v170);
      v51 = (*(unsigned int (__fastcall **)(__int128 *))(v157 + 128))(&v157);
      v52 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 120))(&v157);
      WdLogSingleEntry4(8LL, v173[2] - *v173, v173[3] - v173[1], v52, v51);
      WdLogGlobalForLineNumber = 2323;
      LOBYTE(v53) = 1;
      (*(void (__fastcall **)(__int128 *, __int64))(v157 + 232))(&v157, v53);
      ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v14, *((_DWORD *)v7 + 29), 0, 0);
      goto LABEL_47;
    }
    ADAPTER_DISPLAY::UpdateIndependentFlipState((ADAPTER_DISPLAY *)v14, *((_DWORD *)v7 + 29), 0, 1);
  }
  if ( v14 && (*(_DWORD *)(v14 + 24) & 0x10) != 0 )
  {
    if ( !ADAPTER_DISPLAY::IsHdrEnabled((ADAPTER_DISPLAY *)v14, v169) )
    {
      *((_DWORD *)v7 + 90) = 0;
      goto LABEL_121;
    }
    *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ ((*(unsigned __int8 (__fastcall **)(__int128 *))(v157 + 256))(&v157) << 30)) & 0x40000000;
    v72 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 136))(&v157);
    *((_DWORD *)v7 + 90) = v72;
    if ( (*(_DWORD *)v7 & 0x40000000) != 0 )
    {
      if ( v72 )
      {
        v73 = v72 - 1;
        if ( v73 )
        {
          if ( v73 == 1 )
          {
            v74 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 152))(&v157);
            *(_OWORD *)((char *)v7 + 364) = *(_OWORD *)v74;
            *(_OWORD *)((char *)v7 + 380) = *(_OWORD *)(v74 + 16);
            *(_OWORD *)((char *)v7 + 396) = *(_OWORD *)(v74 + 32);
            *(_OWORD *)((char *)v7 + 412) = *(_OWORD *)(v74 + 48);
            *(_QWORD *)((char *)v7 + 428) = *(_QWORD *)(v74 + 64);
          }
          else
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2365;
            DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"FALSE", 2365LL, 0LL, 0LL, 0LL, 0LL);
            *(_DWORD *)v7 &= ~0x40000000u;
          }
        }
        else
        {
          v75 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 144))(&v157);
          *(_OWORD *)((char *)v7 + 364) = *(_OWORD *)v75;
          *(_QWORD *)((char *)v7 + 380) = *(_QWORD *)(v75 + 16);
          *((_DWORD *)v7 + 97) = *(_DWORD *)(v75 + 24);
        }
      }
    }
    else
    {
      if ( v72 > 2 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2373;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"D3DDDI_HDR_METADATA_TYPE_HDR10 == pVidSchSubmitData->HDRMetaDataType || D3DDDI_HDR_METADATA_TYPE_HDR10PLUS == "
           "pVidSchSubmitData->HDRMetaDataType || D3DDDI_HDR_METADATA_TYPE_NONE == pVidSchSubmitData->HDRMetaDataType",
          2373LL,
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
      v181 = D3DDDI_HDR_METADATA_TYPE_NONE;
      memset(&v201, 0, sizeof(v201));
      if ( !(unsigned int)PopulateHDRMetadataFromDisplay(
                            *((_DWORD *)v7 + 29),
                            (struct ADAPTER_DISPLAY *)v14,
                            &v201,
                            &v181) )
      {
        *((struct _D3DDDI_HDR_METADATA_HDR10 *)v7 + 13) = v201;
        *((_DWORD *)v7 + 90) = v181;
LABEL_121:
        *(_DWORD *)v7 |= 0x40000000u;
      }
    }
  }
  (*(void (__fastcall **)(__int128 *, _QWORD))(v157 + 160))(&v157, v160);
  v76 = (_DWORD *)((char *)v7 + 600);
  if ( !*((_BYTE *)v7 + 356) )
    v76 = (_DWORD *)((char *)v7 + 496);
  *v76 ^= ((unsigned __int16)*v76 ^ (unsigned __int16)(1 << v160)) & 0x3FF;
  v77 = 1;
  v161 = 1;
  if ( DXGADAPTER::IsDxgmms2((DXGADAPTER *)v11) && v26 )
  {
    v77 = *((_DWORD *)v191 + 23) + 1;
    v161 = v77;
  }
  v166 = 0;
  Pool2 = 0LL;
  v167 = 0LL;
  P = 0LL;
  v197 = 0;
  if ( v77 <= 4 )
  {
    Pool2 = (struct _EX_RUNDOWN_REF *)v196;
    v167 = v196;
    P = v196;
    if ( v77 )
    {
      memset(v196, 0, 8LL * v77);
      Pool2 = (struct _EX_RUNDOWN_REF *)P;
      v167 = P;
    }
  }
  else
  {
    v79 = v77;
    v176 = v77;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v77 < 8 )
      goto LABEL_133;
    Pool2 = (struct _EX_RUNDOWN_REF *)ExAllocatePool2(256LL, 8LL * v77, 1265072196LL);
    v167 = Pool2;
    P = Pool2;
  }
  v197 = v77;
  v79 = v77;
  v176 = v77;
LABEL_133:
  v199[2] = (struct _EX_RUNDOWN_REF *)v79;
  v199[3] = Pool2;
  if ( !Pool2 )
  {
LABEL_153:
    P = 0LL;
    v197 = 0;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v164);
    (*(void (__fastcall **)(__int128 *, __int64))v157)(&v157, 1LL);
    return 3221225495LL;
  }
  v207 = 0LL;
  v209 = 0;
  if ( v77 <= 4 )
  {
    v207 = (struct _EX_RUNDOWN_REF *)&v208;
    if ( v77 )
    {
      v87 = 0LL;
      v88 = v79;
      do
      {
        v207[v87++].Count = 0LL;
        --v88;
      }
      while ( v88 );
    }
    goto LABEL_148;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v79 >= 8 )
  {
    v80 = 8 * v79;
    if ( !is_mul_ok(v79, 8uLL) )
      v80 = -1LL;
    v81 = __CFADD__(v80, 8LL);
    v82 = v80 + 8;
    if ( v81 )
      v82 = -1LL;
    v83 = (_QWORD *)operator new[](v82, 0x4B677844u, 256LL);
    if ( v83 )
    {
      *v83 = v79;
      v84 = v79;
      v85 = (__int64)(v83 + 1);
      v173 = (_DWORD *)v85;
      v86 = (DXGALLOCATIONREFERENCE *)v85;
      if ( v79 )
      {
        do
        {
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(v86);
          v86 = (DXGALLOCATIONREFERENCE *)((char *)v86 + 8);
          --v84;
        }
        while ( v84 );
        v85 = (__int64)v173;
      }
      v207 = (struct _EX_RUNDOWN_REF *)v85;
    }
LABEL_148:
    v209 = v77;
  }
  v89 = (unsigned __int64)v207;
  v175 = (__int64)v207;
  v199[4] = v207;
  if ( !v207 )
  {
    PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>((__int64 *)&v207);
    if ( P != v196 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    goto LABEL_153;
  }
  v90 = 0;
  v162 = 0;
  v91 = (char *)v7 + 600;
  while ( v90 < v77 )
  {
    if ( !v90 )
    {
      v92 = v164;
      v93 = (_DWORD *)((char *)v7 + 608);
      v94 = (_DWORD *)((char *)v7 + 604);
      if ( *((_BYTE *)v7 + 356) )
        v95 = &v91[*v94 * ((8 * *v93 + 231) & 0xFFFFFFF8) + 24];
      else
        v95 = (char *)v7 + 512;
      *(_QWORD *)v95 = *(_QWORD *)(v164[6].Count + 16);
      v96 = v163;
      v97 = v174;
      if ( !BYTE1(v163[382].Count) )
      {
        if ( *((_BYTE *)v7 + 356) )
        {
          v98 = (ULONG_PTR *)&v91[*v94 * ((8 * *v93 + 231) & 0xFFFFFFF8) + 16];
          v96 = v163;
        }
        else
        {
          v98 = (ULONG_PTR *)((char *)v7 + 568);
        }
        *v98 = v174[23].Count;
      }
      if ( (SLODWORD(v96[342].Count) >= 0x2000 || BYTE4(v96[379].Ptr)) && v97 && (v97[49].Count & 0x10) == 0 )
        *(struct _EX_RUNDOWN_REF *)((char *)v7 + *((unsigned int *)v7 + 138)) = v97[32];
      v99 = 0LL;
      goto LABEL_188;
    }
    v184 = v90;
    v100 = 8LL * v90;
    v173 = (_DWORD *)v100;
    v159 = *(_DWORD *)(*(_QWORD *)(v100 + *((_QWORD *)v183 + 187)) + 388LL);
    v186 = 0;
    v101 = (unsigned int *)(*((_QWORD *)v191 + 182) + 4LL * (v90 - 1));
    if ( v101 + 1 < v101 || (unsigned __int64)(v101 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v102 = *v101;
    v186 = v102;
    v103 = (struct _EX_RUNDOWN_REF **)(v100 + v89);
    AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                  (__int64)v198,
                                                  (DXGALLOCATIONREFERENCE *)v199,
                                                  v102);
    DXGALLOCATIONREFERENCE::MoveAssign(v103, AllocationSafe);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v199);
    v92 = *v103;
    if ( !v92 )
    {
      WdLogSingleEntry2(2LL, (unsigned int)v102, -1073741811LL);
      WdLogGlobalForLineNumber = 2486;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid allocation handle in present: 0x%I64x. Returning 0x%I64x",
        v102,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      v105 = -1073741811;
      v165 = -1073741811;
      v77 = v161;
      v106 = v167;
      v107 = v163;
      goto LABEL_209;
    }
    v108 = v183;
    v202 = *(_QWORD *)(*(_QWORD *)(v100 + *((_QWORD *)v183 + 187)) + 16LL);
    v203 = v92;
    if ( *(_QWORD *)(*(_QWORD *)(v92[1].Count + 16) + 16LL) != *(_QWORD *)(*(_QWORD *)(v202 + 16) + 16LL) )
    {
      _mm_lfence();
      WdLogSingleEntry3(2LL, *(_QWORD *)(*(_QWORD *)(v100 + *((_QWORD *)v183 + 187)) + 16LL), v92, -1073741811LL);
      WdLogGlobalForLineNumber = 2495;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        *(_QWORD *)(*(_QWORD *)(v100 + *((_QWORD *)v183 + 187)) + 16LL),
        *(_QWORD *)(v100 + v175),
        -1073741811LL,
        0LL,
        0LL);
      v105 = -1073741811;
      v165 = -1073741811;
      v77 = v161;
      v106 = v167;
      v107 = v163;
      goto LABEL_209;
    }
    v93 = (_DWORD *)((char *)v7 + 608);
    v94 = (_DWORD *)((char *)v7 + 604);
    v90 = v162;
    if ( *((_BYTE *)v7 + 356) )
      v109 = &v91[64 * (unsigned __int64)(v162 * *v94) + 24 + *v94 * ((8 * *v93 + 231) & 0xFFFFFFF8)];
    else
      v109 = (char *)v7 + 512;
    *(_QWORD *)v109 = *(_QWORD *)(v92[6].Count + 16);
    v110 = v173;
    if ( !BYTE1(v163[382].Count) )
    {
      if ( *((_BYTE *)v7 + 356) )
        v111 = &v91[64 * (unsigned __int64)(v90 * *v94) + 16 + *v94 * ((8 * *v93 + 231) & 0xFFFFFFF8)];
      else
        v111 = (char *)v7 + 568;
      *(_QWORD *)v111 = *(_QWORD *)(*(_QWORD *)((char *)v173 + *((_QWORD *)v108 + 187)) + 184LL);
    }
    *((_DWORD *)v7 + 34) |= 1 << v159;
    v112 = *(_QWORD *)((char *)v110 + *((_QWORD *)v108 + 187));
    if ( (*(_DWORD *)(v112 + 392) & 0x10) == 0 )
    {
      *(_QWORD *)((char *)v7 + (_QWORD)v110 + *((unsigned int *)v7 + 138)) = *(_QWORD *)(v112 + 256);
      v99 = v184;
LABEL_188:
      v184 = v99;
    }
    if ( *((_BYTE *)v7 + 356) )
      v113 = (unsigned __int64)&v91[64 * (unsigned __int64)(v90 * *v94) + 48 + *v94 * ((8 * *v93 + 231) & 0xFFFFFFF8)];
    else
      v113 = (unsigned __int64)v7 + 504;
    v173 = (_DWORD *)v113;
    v159 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, unsigned __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v13 + 760)
                                                                                                 + 8LL)
                                                                                     + 392LL))(
             v168[99].Count,
             v92[3].Count,
             v113,
             *(_QWORD *)(v13 + 768));
    v165 = v159;
    if ( v159 < 0 )
    {
      WdLogSingleEntry2(2LL, v92, -1073741811LL);
      WdLogGlobalForLineNumber = 2543;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to reference allocation for submission (0x%I64x). Returning 0x%I64x",
        (__int64)v92,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      v77 = v161;
      break;
    }
    *(_QWORD *)&v167[8 * v184] = *(_QWORD *)v173;
    ++v166;
    v114 = v92[5].Count;
    if ( v114 && (*(_DWORD *)(v114 + 4) & 8) != 0 )
      v115 = *(_QWORD *)(*(_QWORD *)(v114 + 56) + 184LL);
    else
      v115 = 0LL;
    if ( *((_BYTE *)v7 + 356) )
      *(_QWORD *)&v91[64 * (unsigned __int64)(v162 * *v94) + 56 + *v94 * ((8 * *v93 + 231) & 0xFFFFFFF8)] = v115;
    else
      *((_QWORD *)v7 + 72) = v115;
    *(_DWORD *)v7 |= 0x1000000u;
    v116 = v177->Count;
    v117 = *(_QWORD *)(*(__int64 (__fastcall **)(__int128 *))(v157 + 16))(&v157);
    v118 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 64))(&v157);
    v119 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 104))(&v157);
    WdLogSingleEntry5(8LL, v182, v119, v118, v117, v116);
    WdLogGlobalForLineNumber = 2566;
    if ( (*(unsigned __int8 (__fastcall **)(__int128 *))(v157 + 344))(&v157) )
    {
      *((_DWORD *)v7 + 1) |= 2u;
      *((_QWORD *)v7 + 60) = (*(__int64 (__fastcall **)(__int128 *))(v157 + 352))(&v157);
      v120 = (struct _EX_RUNDOWN_REF *)(*(__int64 (__fastcall **)(__int128 *))(v157 + 360))(&v157);
      v121 = v120;
      *((_QWORD *)v7 + 61) = v120;
      if ( v120 )
      {
        if ( !HIDWORD(v120->Ptr) )
        {
          if ( LODWORD(v120->Count) != 64 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2580;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"pAuxiliaryPresentInfo->size == sizeof(D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO)",
              2580LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          LODWORD(v121[4].Count) = *((_DWORD *)v7 + 29);
          v121[3].Count = *(ULONG_PTR *)((char *)v163 + 412);
        }
      }
    }
    v90 = ++v162;
    v77 = v161;
    v89 = v175;
  }
  v107 = v163;
  v106 = v167;
  v105 = v159;
LABEL_209:
  *((_DWORD *)v7 + 35) = v77;
  if ( v105 < 0 || (HIDWORD(v107[307].Ptr) & 0x20) == 0 )
    goto LABEL_250;
  memset(&v204, 0, sizeof(v204));
  v204.Flags.Value = 0x2000;
  if ( v188 )
  {
    v204.PrivateDriverDataSize = *((_DWORD *)v188 + 2);
    v204.pPrivateDriverData = (char *)v188 + 16;
  }
  pAllocationList = 0LL;
  v210 = 0LL;
  v212 = 0;
  if ( v77 <= 4 )
  {
    pAllocationList = (DXGK_ALLOCATIONLIST *)v211;
    v210 = v211;
    if ( v77 )
    {
      memset(v211, 0, 32 * v176);
      pAllocationList = (DXGK_ALLOCATIONLIST *)v210;
    }
LABEL_218:
    v212 = v77;
  }
  else
  {
    v89 = 0xFFFFFFFFFFFFFFFFuLL % v176;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v176 >= 0x20 )
    {
      pAllocationList = (DXGK_ALLOCATIONLIST *)ExAllocatePool2(256LL, 32 * v176, 1265072196LL);
      v210 = pAllocationList;
      goto LABEL_218;
    }
  }
  v204.pAllocationList = pAllocationList;
  if ( !pAllocationList )
  {
LABEL_245:
    v210 = 0LL;
    v212 = 0;
    goto LABEL_267;
  }
  v123 = HIDWORD(v107[308].Ptr);
  v158 = (v123 & 0x80u) != 0 && (v123 & 0x40) == 0;
  v124 = 0;
  v159 = 0;
  if ( v77 )
  {
    v125 = 0LL;
    if ( v174 )
    {
      v126 = 0LL;
      v127 = v183;
      v128 = v175;
      while ( 1 )
      {
        *(_WORD *)((char *)&pAllocationList[1].hDeviceSpecificAllocation + v125 + 2) = *(_WORD *)(*(_QWORD *)(*((_QWORD *)v127 + 187) + v126)
                                                                                                + 388LL);
        v129 = v124 == 0;
        v130 = v164;
        if ( !v129 )
          v130 = *(struct _EX_RUNDOWN_REF **)(v128 + v126);
        v131 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v127 + 187) + v126) + 431LL);
        *(struct _EX_RUNDOWN_REF *)((char *)&v204.pAllocationList->hDeviceSpecificAllocation + v125) = v130[4];
        v132 = v130[3].Count;
        v133 = *(_QWORD *)(*(_QWORD *)(v13 + 760) + 8LL);
        v134 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD))(v133 + 224);
        LOBYTE(v133) = v131 != 0;
        v135 = v134(
                 v132,
                 v133,
                 *(unsigned __int16 *)((char *)&v204.pAllocationList[1].hDeviceSpecificAllocation + v125 + 2));
        *(_QWORD *)((char *)&v204.pAllocationList->8 + v125) = v135;
        v124 = v159 + 1;
        v159 = v124;
        v126 += 8LL;
        v125 += 32LL;
        if ( v124 >= v77 )
          break;
        pAllocationList = v204.pAllocationList;
      }
      v7 = v193;
    }
    else
    {
      v137 = 0;
      v138 = (struct _EX_RUNDOWN_REF **)v175;
      v139 = v158;
      while ( 1 )
      {
        *(_WORD *)((char *)&pAllocationList[1].hDeviceSpecificAllocation + v125 + 2) = 0;
        v140 = v164;
        if ( v137 )
          v140 = *v138;
        *(struct _EX_RUNDOWN_REF *)((char *)&v204.pAllocationList->hDeviceSpecificAllocation + v125) = v140[4];
        v141 = (*(__int64 (__fastcall **)(ULONG_PTR, bool, _QWORD))(*(_QWORD *)(*(_QWORD *)(v13 + 760) + 8LL) + 224LL))(
                 v140[3].Count,
                 v139,
                 *(unsigned __int16 *)((char *)&v204.pAllocationList[1].hDeviceSpecificAllocation + v125 + 2));
        *(_QWORD *)((char *)&v204.pAllocationList->8 + v125) = v141;
        ++v137;
        v138 = (struct _EX_RUNDOWN_REF **)(v175 + 8);
        v175 += 8LL;
        v125 += 32LL;
        if ( v137 >= v77 )
          break;
        pAllocationList = v204.pAllocationList;
      }
    }
    v107 = v163;
    v106 = v167;
  }
  v204.FlipInterval = *v170;
  v204.Flags.Value = v204.Flags.Value & 0xFFFFE8FF | (*(_DWORD *)v7 >> 11) & 0x1700;
  v204.NumSrcAllocations = v77;
  if ( BYTE1(v107[382].Count) )
    Ptr = 0LL;
  else
    Ptr = v174[23].Ptr;
  v105 = ADAPTER_RENDER::DdiPresent((ADAPTER_RENDER *)v13, Ptr, &v204);
  v165 = v105;
  if ( v105 < 0 )
  {
    if ( v210 != v211 && v210 )
      ExFreePoolWithTag(v210, 0);
    goto LABEL_245;
  }
  if ( v210 != v211 && v210 )
    ExFreePoolWithTag(v210, 0);
  v210 = 0LL;
  v212 = 0;
LABEL_250:
  if ( v172 && (*(_DWORD *)v7 & 0x1000000) != 0 )
  {
    v142 = 0LL;
    if ( SHIDWORD(v107[375].Ptr) >= 2500 )
    {
      LODWORD(v167) = v160;
      v159 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 168))(&v157);
      Src = (void *)(*(__int64 (__fastcall **)(__int128 *))(v157 + 176))(&v157);
      v143 = (_DWORD *)(*(__int64 (__fastcall **)(__int128 *))(v157 + 184))(&v157);
      v144 = v143;
      v145 = v143 && (*v143 || v143[2] || v143[1] || v143[3]);
      v162 = v145;
      if ( v159 || v145 )
      {
        LODWORD(v163) = v159 + v145;
        v161 = 16 * (v159 + v145) + 24;
        v146 = operator new[]((unsigned int)(16 * (v159 + v145) + 40), 0x4B677844u, 64LL);
        v142 = v146;
        if ( !v146 )
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 1732;
          DxgkLogInternalTriageEvent(
            0LL,
            262145LL,
            0xFFFFFFFFLL,
            L"Failed to allocate memory for present dirty rects data",
            1732LL,
            0LL,
            0LL,
            0LL,
            0LL);
          WdLogSingleEntry1(2LL, -1073741801LL);
          WdLogGlobalForLineNumber = 2667;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed to read dirty rects data. Returning 0x%I64x",
            -1073741801LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_267;
        }
        *(_QWORD *)v146 = 0LL;
        *(_DWORD *)(v146 + 8) = v161;
        *(_DWORD *)(v146 + 12) = 1;
        *(_DWORD *)(v146 + 16) = 1;
        *(_DWORD *)(v146 + 24) = (_DWORD)v167;
        *(_QWORD *)(v146 + 32) = v146 + 40;
        *(_DWORD *)(v146 + 28) = (_DWORD)v163;
        v189 = (struct DXGK_PRESENT_PARAMS *)(16LL * (unsigned int)v159);
        memmove((void *)(v146 + 40), Src, (size_t)v189);
        if ( v162 )
          *(_OWORD *)((char *)v189 + v142 + 40) = *v144;
      }
    }
    *((_QWORD *)v7 + 4) = v142;
  }
LABEL_267:
  if ( v105 < 0 )
  {
    if ( v166 )
    {
      v147 = v166;
      if ( v174 )
      {
        v148 = v187;
        v149 = (char *)v106 - v187;
        do
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v13 + 760) + 8LL) + 400LL))(
            *(_QWORD *)(v13 + 768),
            (unsigned int)(1 << *(_DWORD *)(*(_QWORD *)v148 + 388LL)),
            *(_QWORD *)&v149[v148],
            0LL);
          v148 += 8LL;
          --v147;
        }
        while ( v147 );
      }
      else
      {
        do
        {
          (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v13 + 760) + 8LL) + 400LL))(
            *(_QWORD *)(v13 + 768),
            1LL,
            *v106++);
          --v147;
        }
        while ( v147 );
      }
    }
    v150 = v177->Count;
    v151 = *(_QWORD *)(*(__int64 (__fastcall **)(__int128 *, unsigned __int64))(v157 + 16))(&v157, v89);
    v152 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 64))(&v157);
    v153 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 104))(&v157);
    WdLogSingleEntry5(8LL, v182, v153, v152, v151, v150);
    WdLogGlobalForLineNumber = 2694;
    LOBYTE(v154) = 1;
    (*(void (__fastcall **)(__int128 *, __int64))(v157 + 232))(&v157, v154);
    *(_DWORD *)v7 &= ~0x1000000u;
    v105 = 0;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>((__int64 *)&v207);
  if ( P != v196 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v197 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v164);
  (*(void (__fastcall **)(__int128 *, __int64))v157)(&v157, 1LL);
  return (unsigned int)v105;
}
