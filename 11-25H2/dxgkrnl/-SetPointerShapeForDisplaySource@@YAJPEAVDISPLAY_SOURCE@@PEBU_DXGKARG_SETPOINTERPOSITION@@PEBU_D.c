/*
 * XREFs of ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402CC238
 * Callers:
 *     DxgkRedrawCursorForPostCompositon @ 0x1401E509C (DxgkRedrawCursorForPostCompositon.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHHH@Z @ 0x1402CB880 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002D3C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031C38 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140032C94 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034CB0 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x14003ECE0 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     ??0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x14008FCCC (--0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x14028D5B0 (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1402A496C (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1402CAA10 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CB2B0 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CB7E4 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1402CD5FC (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402CD624 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x1402CD924 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DX.c)
 *     ?GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z @ 0x1402CDF2C (-GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z.c)
 *     ?ScaleCursorShapeCoreBilinear@@YAJAEBUCURSOR_SCALING_INFO@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU2@@Z @ 0x140319CF0 (-ScaleCursorShapeCoreBilinear@@YAJAEBUCURSOR_SCALING_INFO@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU2@@.c)
 *     ?ContainsXor@@YA_NPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x14031A2DC (-ContainsXor@@YA_NPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140329064 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGK_DRIVERCAPS@@@Z @ 0x14034FA60 (-RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATIO.c)
 *     ?ConvertMonochromeToColor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@@Z @ 0x14039BE58 (-ConvertMonochromeToColor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@@Z.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1403AC6F4 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1403B096C (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 */

__int64 __fastcall SetPointerShapeForDisplaySource(
        __m128i *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        const struct _DXGKARG_SETPOINTERSHAPE *a3,
        struct SESSION_VIEW *a4,
        void *const a5,
        unsigned int a6,
        unsigned int a7,
        bool a8,
        bool a9,
        bool a10)
{
  struct _DXGKARG_SETPOINTERPOSITION v10; // xmm0
  __int64 v11; // rax
  __int64 v13; // r14
  const struct _DXGKARG_SETPOINTERPOSITION *v14; // r13
  int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // r15
  bool v20; // r12
  __int64 v21; // r15
  unsigned int v22; // edx
  MONITOR_MGR *v23; // r10
  DXGMONITOR *v24; // rbx
  __int64 v25; // rax
  bool IsVirtualModeSupportDisabled; // bl
  __int64 v27; // r8
  bool v28; // al
  __int64 v29; // rbx
  __int64 v30; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // r13d
  UINT v32; // r8d
  UINT v33; // ecx
  UINT v34; // edx
  __int64 v35; // r9
  __int64 v36; // rcx
  void *v37; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // r15
  __int32 v39; // eax
  const struct _DXGKARG_SETPOINTERSHAPE *v40; // rbx
  __m128i *v41; // r12
  int v42; // edx
  int v43; // ecx
  unsigned int v44; // r9d
  unsigned int v45; // r8d
  _DWORD *v46; // rbx
  __int32 v47; // r9d
  BOOL v48; // ecx
  __int32 v49; // r8d
  __int32 v50; // edx
  unsigned int v51; // r10d
  unsigned int v52; // r9d
  void *v53; // rcx
  UINT v54; // eax
  int v55; // r9d
  int v56; // ecx
  int v57; // r8d
  int v58; // r10d
  bool v59; // zf
  int v60; // r11d
  int v61; // edx
  int v62; // ebx
  int v63; // r15d
  int v64; // r12d
  int v65; // eax
  int v66; // r13d
  INT v67; // edx
  INT v68; // r8d
  int v69; // ecx
  __int64 v70; // r8
  __int64 v71; // rcx
  __int64 v72; // r8
  char v73; // al
  struct DISPLAY_SOURCE *v74; // r12
  struct SESSION_VIEW *v75; // rcx
  INT v76; // edx
  INT v77; // r8d
  __int64 v78; // rbx
  __int64 VidPnSourceId; // r13
  char v80; // r15
  INT v81; // r9d
  INT v82; // r10d
  __int64 v83; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *v84; // rax
  struct _DXGKARG_SETPOINTERSHAPE *v85; // rbx
  void *pPixels; // rcx
  INT v88; // eax
  UINT v89; // ecx
  UINT v90; // r9d
  unsigned int v91; // eax
  UINT v92; // r8d
  unsigned int v93; // eax
  int v94; // r12d
  const struct _DXGKARG_SETPOINTERSHAPE *v95; // rcx
  __int64 v96; // r15
  __int64 v97; // rax
  void *v98; // rcx
  int v99; // r8d
  struct _DXGKARG_SETPOINTERSHAPE *v100; // rax
  const struct _DXGKARG_SETPOINTERSHAPE *v101; // rbx
  __int64 v102; // r8
  __int64 v103; // rcx
  UINT Width; // edx
  UINT Height; // r8d
  UINT XHot; // ecx
  UINT YHot; // eax
  INT Y; // r9d
  INT X; // r8d
  const wchar_t *v110; // r9
  struct _DXGKARG_SETPOINTERSHAPE *PristineCursor; // rax
  int v112; // ecx
  struct DXGMONITOR *v113; // rdx
  __int64 v114; // rax
  unsigned __int64 v115; // rax
  __int64 v116; // [rsp+20h] [rbp-E0h]
  __int64 v117; // [rsp+20h] [rbp-E0h]
  __int64 v118; // [rsp+28h] [rbp-D8h]
  __int64 v119; // [rsp+28h] [rbp-D8h]
  __int64 v120; // [rsp+28h] [rbp-D8h]
  int v121[2]; // [rsp+30h] [rbp-D0h]
  __int64 Value; // [rsp+30h] [rbp-D0h]
  __int64 v123; // [rsp+30h] [rbp-D0h]
  int v124[2]; // [rsp+38h] [rbp-C8h]
  char v125; // [rsp+50h] [rbp-B0h]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v126; // [rsp+54h] [rbp-ACh]
  int v127; // [rsp+58h] [rbp-A8h]
  __int64 v128; // [rsp+58h] [rbp-A8h]
  int v129; // [rsp+5Ch] [rbp-A4h]
  int v130; // [rsp+60h] [rbp-A0h]
  INT v131; // [rsp+60h] [rbp-A0h]
  INT v132; // [rsp+60h] [rbp-A0h]
  _DWORD *v133; // [rsp+68h] [rbp-98h]
  INT v134; // [rsp+68h] [rbp-98h]
  INT v135; // [rsp+68h] [rbp-98h]
  __int64 v136; // [rsp+70h] [rbp-90h] BYREF
  char v137; // [rsp+78h] [rbp-88h]
  int v138; // [rsp+84h] [rbp-7Ch]
  int v139; // [rsp+88h] [rbp-78h]
  struct SESSION_VIEW *v140; // [rsp+90h] [rbp-70h]
  __int64 v141; // [rsp+98h] [rbp-68h]
  __int64 v142; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v143; // [rsp+A8h] [rbp-58h]
  unsigned int v144; // [rsp+ACh] [rbp-54h]
  UINT v145; // [rsp+B0h] [rbp-50h]
  unsigned int v146; // [rsp+B4h] [rbp-4Ch]
  unsigned __int64 v147; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v148; // [rsp+C0h] [rbp-40h]
  unsigned int v149; // [rsp+C4h] [rbp-3Ch]
  UINT v150; // [rsp+C8h] [rbp-38h]
  unsigned int v151; // [rsp+CCh] [rbp-34h]
  void *v152; // [rsp+D0h] [rbp-30h] BYREF
  DXGMONITOR *v153; // [rsp+D8h] [rbp-28h]
  DXGMONITOR *v154; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v155[2]; // [rsp+E8h] [rbp-18h] BYREF
  __m128i v156; // [rsp+F8h] [rbp-8h]
  void *v157; // [rsp+108h] [rbp+8h]
  __int128 v158; // [rsp+110h] [rbp+10h] BYREF
  __int64 v159; // [rsp+120h] [rbp+20h]
  struct _DXGKARG_SETPOINTERPOSITION v160; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v161[144]; // [rsp+140h] [rbp+40h] BYREF
  void *retaddr; // [rsp+228h] [rbp+128h]

  v10 = *a2;
  v159 = 0LL;
  v11 = this->m128i_i64[1];
  v160 = v10;
  v140 = a4;
  v141 = (__int64)a2;
  v13 = *(_QWORD *)(v11 + 16);
  v14 = a2;
  v157 = a5;
  v158 = 0LL;
  if ( !v13 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1090;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pDisplayAdapter != NULL", 1090LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*(_QWORD *)(v13 + 3120) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1091;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pDisplayAdapter->IsDisplayAdapter()",
      1091LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v161, (struct DXGADAPTER *const)v13, 0LL);
  v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v161, 0LL);
  if ( v16 < 0 )
    goto LABEL_95;
  v17 = *(_QWORD *)(v13 + 3120);
  v137 = 0;
  v136 = v17 + 472;
  if ( v17 == -472 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(struct _KTHREAD **)(v136 + 24) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 645;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v136);
  if ( a9 )
  {
    v103 = *(_QWORD *)(this->m128i_i64[1] + 16);
    if ( ((a3->Flags.Value - 2) & 0xFFFFFFFD) == 0
      && (Width = a3->Width, Width <= *(_DWORD *)(v103 + 2424))
      && (Height = a3->Height, Height <= *(_DWORD *)(v103 + 2428))
      && a3->Pitch == 4 * Width
      && a3->VidPnSourceId < *(_DWORD *)(*(_QWORD *)(v103 + 3120) + 96LL)
      && a3->pPixels
      && (XHot = a3->XHot, XHot < Width)
      && (YHot = a3->YHot, YHot < Height) )
    {
      this[234].m128i_i32[3] = XHot;
      this[235].m128i_i32[0] = YHot;
      Y = v14->Y;
      X = v14->X;
      if ( (XHot != -1 || YHot != -1)
        && (int)(XHot + X) >= 0
        && (signed int)(XHot + X) < this[62].m128i_i32[0]
        && (int)(YHot + Y) >= 0
        && (signed int)(YHot + Y) < this[62].m128i_i32[1] )
      {
        goto LABEL_11;
      }
      WdLogSingleEntry3(2LL, *(int *)(v13 + 416), *(unsigned int *)(v13 + 412), this[1].m128i_u32[0]);
      v110 = L"Invalid DXGKARG_SETPOINTERPOSITION passed in SetPointerShapeForDisplaySource() function: Adapter LUID: (0x%"
              "I64x%08I64x) VidpnSourceId: (0x%I64x).";
      WdLogGlobalForLineNumber = 1127;
    }
    else
    {
      WdLogSingleEntry3(2LL, *(int *)(v13 + 416), *(unsigned int *)(v13 + 412), this[1].m128i_u32[0]);
      v110 = L"Invalid DXGKARG_SETPOINTERSHAPE passed in SetPointerShapeForDisplaySource() function: Adapter LUID: (0x%I64"
              "x%08I64x) VidpnSourceId: (0x%I64x).";
      WdLogGlobalForLineNumber = 1114;
    }
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      v110,
      *(int *)(v13 + 416),
      *(unsigned int *)(v13 + 412),
      this[1].m128i_u32[0],
      0LL,
      0LL);
    goto LABEL_184;
  }
LABEL_11:
  if ( a8 )
  {
    if ( *(_DWORD *)(v13 + 2280) < 0x7000u )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1137;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pDisplayAdapter->GetDriverDdiInterfaceVersion() >= DXGKDDI_INTERFACE_VERSION_WDDM2_2_RS2_1",
        1137LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    PristineCursor = DISPLAY_SOURCE::GetPristineCursor((DISPLAY_SOURCE *)this, 0);
    a3 = PristineCursor;
    if ( PristineCursor->pPixels )
    {
      v112 = (PristineCursor->Flags.Value & 1) + 1;
      v139 = PristineCursor->Width;
      v138 = PristineCursor->Height * v112;
      goto LABEL_13;
    }
LABEL_184:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v136);
    v16 = -1073741811;
    goto LABEL_95;
  }
  v138 = a7;
  v139 = a6;
LABEL_13:
  if ( (*(_DWORD *)(v13 + 444) & 0x100) == 0 && (**(_DWORD **)(v13 + 3008) & 8) != 0 )
    goto LABEL_94;
  v18 = this[1].m128i_u32[0];
  v160.VidPnSourceId = v18;
  v19 = *(_QWORD *)(v13 + 3120);
  if ( (unsigned int)v18 >= *(_DWORD *)(v19 + 96) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6425;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"VidPnSourceId < m_NumVidPnSources",
      6425LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*(_BYTE *)(3984 * v18 + *(_QWORD *)(v19 + 128) + 760) )
  {
    v16 = -1073741823;
    WdLogSingleEntry4(2LL, -1073741823LL, this[1].m128i_u32[0], a3->Flags.Value, a5);
    Value = a3->Flags.Value;
    v119 = this[1].m128i_u32[0];
    WdLogGlobalForLineNumber = 1366;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"0x%I64x VidPnSourceId=0x%I64x Primary is not visible: 0x%I64x DXGADAPTER=0x%I64x",
      -1073741823LL,
      v119,
      Value,
      (__int64)a5,
      0LL);
    goto LABEL_105;
  }
  if ( (*(_DWORD *)(v13 + 444) & 0x20) != 0
    && !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v13 + 3120)) )
  {
    goto LABEL_94;
  }
  v20 = 1;
  v125 = 1;
  if ( this[67].m128i_i32[0] == -1 )
    goto LABEL_190;
  v21 = *(_QWORD *)(v13 + 3120);
  if ( !v21 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 10225;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The selected adapter is render-only",
      10225LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_190:
    WdLogSingleEntry4(2LL, this[1].m128i_u32[0], *(int *)(v13 + 416), *(unsigned int *)(v13 + 412), -1073741811LL);
    v123 = *(unsigned int *)(v13 + 412);
    v120 = *(int *)(v13 + 416);
    v117 = this[1].m128i_u32[0];
    WdLogGlobalForLineNumber = 1187;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"IsVirtualizationDisabledForTarget failed on VidPn Source 0x%I64x adapter 0x%I64x%08I64x, returning 0x%I64x.",
      v117,
      v120,
      v123,
      -1073741811LL,
      0LL);
    goto LABEL_99;
  }
  if ( *(_QWORD *)(v21 + 112) )
  {
    v153 = 0LL;
    v152 = retaddr;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v152);
    MONITOR_MGR::_GetMonitorInstance(v23, v22, 1, (struct MONITOR_REF_ACCESSOR *)&v152);
    v24 = v153;
    v154 = v153;
    if ( v153 )
      MonitorResourceLock::AcquireShared((PERESOURCE)((char *)v153 + 40));
    v155[0] = retaddr;
    v25 = 2LL;
    do
    {
      v155[1] = v24;
      --v25;
    }
    while ( v25 );
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v155);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v152);
  }
  else
  {
    WdLogSingleEntry1(2LL, v13);
    WdLogGlobalForLineNumber = 791;
    CONST_MONITOR_REF_LOCK_ACCESSOR::CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)&v154, v113);
    v24 = v154;
  }
  if ( v24 )
  {
    if ( *((_DWORD *)v24 + 70) != 1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5268;
    }
    IsVirtualModeSupportDisabled = DXGMONITOR::_IsVirtualModeSupportDisabled(v24);
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)&v154);
    if ( IsVirtualModeSupportDisabled )
    {
      v28 = 1;
      goto LABEL_32;
    }
  }
  else
  {
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)&v154);
  }
  v20 = *(_BYTE *)(v21 + 289) == 0;
  v28 = *(_BYTE *)(v21 + 290) == 0;
LABEL_32:
  v125 = v20;
  if ( !v20 || (v125 = v20, !v28) )
  {
LABEL_33:
    if ( a10 )
      goto LABEL_100;
    v29 = this->m128i_i64[1];
    v30 = this[1].m128i_u32[0];
    v130 = 4;
    if ( !v20 )
    {
      CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v29, v30, 0);
      v126 = CurrentOrientation;
LABEL_36:
      v32 = *(_DWORD *)(v13 + 2424);
      if ( a3->Width > v32
        || (v33 = a3->Height, v34 = *(_DWORD *)(v13 + 2428), v33 > v34)
        || a3->Pitch * ((a3->Flags.Value & 1) + 1) * v33 > 4 * (unsigned __int64)(v32 * v34) )
      {
LABEL_94:
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v136);
        v16 = -1073741823;
LABEL_95:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v161);
        return (unsigned int)v16;
      }
      if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner((ADAPTER_DISPLAY *)this->m128i_i64[1]) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5545;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"m_DisplayCore->IsCoreResourceSharedOwner()",
          5545LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v36 = *(_QWORD *)(this->m128i_i64[1] + 16);
      if ( !this[53].m128i_i64[0] )
      {
        v115 = 4LL * (unsigned int)(*(_DWORD *)(v36 + 2424) * *(_DWORD *)(v36 + 2428));
        if ( !is_mul_ok((unsigned int)(*(_DWORD *)(v36 + 2424) * *(_DWORD *)(v36 + 2428)), 4uLL) )
          v115 = -1LL;
        this[53].m128i_i64[0] = operator new[](v115, 0x4B677844u, 256LL, v35);
      }
      v37 = (void *)this[53].m128i_i64[0];
      if ( !v37 )
        goto LABEL_111;
      memset(v37, 0, 4 * *(unsigned int *)(v13 + 2424) * (unsigned __int64)*(unsigned int *)(v13 + 2428));
      ClippedCursor = DISPLAY_SOURCE::GetClippedCursor((DISPLAY_SOURCE *)this, 1);
      if ( !ClippedCursor->pPixels )
        goto LABEL_111;
      v39 = CurrentOrientation - 2;
      v40 = a3;
      if ( this[44].m128i_i8[0] )
      {
        v47 = this[44].m128i_i32[1];
        v48 = 0;
        v142 = 0LL;
        v49 = this[44].m128i_i32[2];
        if ( (v39 & 0xFFFFFFFD) != 0 )
        {
          v50 = v47;
          HIDWORD(v142) = this[44].m128i_i32[2];
        }
        else
        {
          v50 = this[44].m128i_i32[2];
          HIDWORD(v142) = v47;
          v49 = v47;
        }
        LODWORD(v142) = v50;
        v51 = *((_DWORD *)v140 + 8) - *((_DWORD *)v140 + 6);
        v133 = (_DWORD *)((char *)v140 + 32);
        v52 = *((_DWORD *)v140 + 9) - *((_DWORD *)v140 + 7);
        v143 = v51;
        v144 = v52;
        if ( v50 != v51 || v49 != v52 )
        {
          v92 = a3->Height * v49;
          v145 = (a3->Width * v50 + v51 - 1) / v51;
          v93 = (v92 + v52 - 1) / v52;
          v146 = v93;
          if ( !v145 || !v93 || v145 > *(_DWORD *)(v13 + 2424) || v93 > *(_DWORD *)(v13 + 2428) )
            goto LABEL_126;
          if ( (a3->Flags.Value & 1) != 0 )
          {
            v40 = (const struct _DXGKARG_SETPOINTERSHAPE *)&this[51].m128i_u64[1];
            ConvertMonochromeToColor(a3, (struct _DXGKARG_SETPOINTERSHAPE *)&this[51].m128i_u64[1]);
          }
          ClippedCursor->Flags.Value = 0;
          v94 = 4;
          if ( (v40->Flags.Value & 4) == 0 || !ContainsXor(v40) )
            v94 = 2;
          ClippedCursor->Flags.Value = v94;
          if ( (v40->Flags.Value & 6) == 0 )
            goto LABEL_126;
          v16 = ScaleCursorShapeCoreBilinear((const struct CURSOR_SCALING_INFO *)&v142, v40, ClippedCursor);
          v48 = v16 >= 0;
          if ( v16 < 0 )
            goto LABEL_105;
        }
        v41 = this + 43;
      }
      else
      {
        v147 = 0LL;
        v41 = this + 43;
        if ( (v39 & 0xFFFFFFFD) != 0 )
        {
          v42 = this[43].m128i_i32[2] - this[43].m128i_i32[0];
          v43 = this[43].m128i_i32[3] - this[43].m128i_i32[1];
        }
        else
        {
          v42 = this[43].m128i_i32[3] - this[43].m128i_i32[1];
          v43 = this[43].m128i_i32[2] - v41->m128i_i32[0];
        }
        v147 = __PAIR64__(v43, v42);
        v44 = *((_DWORD *)v140 + 8) - *((_DWORD *)v140 + 6);
        v45 = *((_DWORD *)v140 + 9) - *((_DWORD *)v140 + 7);
        v133 = (_DWORD *)((char *)v140 + 32);
        v148 = v44;
        v149 = v45;
        if ( v42 == v44 && v43 == v45 )
        {
          v46 = (_DWORD *)((char *)v140 + 32);
          goto LABEL_56;
        }
        v89 = a3->Height * v43;
        v90 = (a3->Width * v42 + v44 - 1) / v44;
        v150 = v90;
        v91 = (v89 + v45 - 1) / v45;
        v151 = v91;
        if ( !v90 || !v91 || v90 > *(_DWORD *)(v13 + 2424) || v91 > *(_DWORD *)(v13 + 2428) )
          goto LABEL_126;
        if ( (a3->Flags.Value & 1) != 0 )
        {
          v40 = (const struct _DXGKARG_SETPOINTERSHAPE *)&this[51].m128i_u64[1];
          ConvertMonochromeToColor(a3, (struct _DXGKARG_SETPOINTERSHAPE *)&this[51].m128i_u64[1]);
        }
        ClippedCursor->Flags.Value = 0;
        if ( (v40->Flags.Value & 4) == 0 || !ContainsXor(v40) )
          v130 = 2;
        ClippedCursor->Flags.Value = v130;
        if ( (v40->Flags.Value & 6) == 0 )
        {
LABEL_126:
          v16 = -1073741637;
          goto LABEL_105;
        }
        v16 = ScaleCursorShapeCoreBilinear((const struct CURSOR_SCALING_INFO *)&v147, v40, ClippedCursor);
        v48 = v16 >= 0;
        if ( v16 < 0 )
          goto LABEL_105;
      }
      v46 = v133;
      if ( v48 )
      {
        if ( CurrentOrientation != D3DKMDT_VPPR_IDENTITY && !v125 )
        {
          v95 = ClippedCursor;
          goto LABEL_140;
        }
        v98 = (void *)this[53].m128i_i64[0];
        this[51].m128i_i32[2] = ClippedCursor->Flags.Value;
        this[51].m128i_i32[3] = ClippedCursor->Width;
        this[52].m128i_i32[0] = ClippedCursor->Height;
        this[52].m128i_i32[1] = ClippedCursor->Pitch;
        memmove(
          v98,
          ClippedCursor->pPixels,
          ClippedCursor->Height * ClippedCursor->Pitch * ((ClippedCursor->Flags.Value & 1) + 1));
        this[53].m128i_i32[2] = ClippedCursor->XHot;
        v54 = ClippedCursor->YHot;
LABEL_58:
        this[53].m128i_i32[3] = v54;
        goto LABEL_59;
      }
LABEL_56:
      if ( CurrentOrientation != D3DKMDT_VPPR_IDENTITY && !v125 )
      {
        v95 = a3;
LABEL_140:
        RotateCursorShape(
          v95,
          (struct _DXGKARG_SETPOINTERSHAPE *)&this[51].m128i_u64[1],
          CurrentOrientation,
          (const struct _DXGK_DRIVERCAPS *)(v13 + 2400));
LABEL_59:
        v55 = v41->m128i_i32[2] - v41->m128i_i32[0];
        v56 = *v46 - *((_DWORD *)v140 + 6);
        v57 = *((_DWORD *)v140 + 9) - *((_DWORD *)v140 + 7);
        v58 = v41->m128i_i32[3] - v41->m128i_i32[1];
        v59 = this[44].m128i_i8[0] == 0;
        v60 = this[44].m128i_i32[2];
        v61 = this[44].m128i_i32[1];
        v131 = v60;
        v134 = v61;
        v156 = *v41;
        v127 = v55;
        v129 = v58;
        if ( v59 )
        {
          v62 = v156.m128i_i32[1];
          v63 = v156.m128i_i32[0];
          v131 = v156.m128i_i32[3];
          v134 = v156.m128i_i32[2];
        }
        else
        {
          v63 = 0;
          v127 = v61;
          v62 = 0;
          v129 = v60;
          v55 = v61;
          v58 = v60;
        }
        if ( ((CurrentOrientation - 1) & 0xFFFFFFFD) != 0 )
        {
          v64 = *(_DWORD *)(v141 + 4) * v58 / v56;
          v65 = v55;
        }
        else
        {
          v64 = *(_DWORD *)(v141 + 4) * v55 / v56;
          v65 = v58;
        }
        v66 = *(_DWORD *)(v141 + 8) * v65 / v57;
        if ( v125 )
        {
          v160.X = v64 + v63;
          v88 = v62 + v66;
          goto LABEL_103;
        }
        switch ( v126 )
        {
          case D3DKMDT_VPPR_IDENTITY:
            goto LABEL_65;
          case D3DKMDT_VPPR_ROTATE90:
            v67 = v63 + v66;
            v99 = v62 - this[52].m128i_i32[0] - v64;
            break;
          case D3DKMDT_VPPR_ROTATE180:
            v67 = v55 + v63 - this[51].m128i_i32[3] - v64;
            v99 = v62 - this[52].m128i_i32[0] - v66;
            break;
          case D3DKMDT_VPPR_ROTATE270:
            v68 = v64 + v62;
            v67 = v55 + v63 - this[51].m128i_i32[3] - v66;
LABEL_68:
            v69 = v67 + this[51].m128i_i32[3];
            v160.Y = v68;
            v160.X = v67;
            if ( v69 >= v63 && v67 <= v134 && v68 + this[52].m128i_i32[0] >= v62 && v68 <= v131 )
            {
LABEL_72:
              FillClipParams(
                (struct _DXGKARG_SETPOINTERSHAPE *)&this[51].m128i_u64[1],
                this,
                &v160,
                (struct CURSOR_CLIP_PARAMS *)&v158);
              if ( HIDWORD(v159) )
              {
                v100 = DISPLAY_SOURCE::GetClippedCursor((DISPLAY_SOURCE *)this, 1);
                v101 = v100;
                if ( !v100->pPixels )
                  goto LABEL_111;
                ClipCurrentCursor(
                  (const struct _DXGKARG_SETPOINTERSHAPE *)&this[51].m128i_u64[1],
                  v100,
                  (struct CURSOR_CLIP_PARAMS *)&v158);
                v101->VidPnSourceId = this[1].m128i_u32[0];
                v16 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v13 + 3120), v101, v102);
                if ( v16 >= 0 )
                {
                  v73 = 1;
                  goto LABEL_75;
                }
              }
              else
              {
                this[52].m128i_i32[2] = this[1].m128i_i32[0];
                v16 = ADAPTER_DISPLAY::DdiSetPointerShape(
                        *(ADAPTER_DISPLAY **)(v13 + 3120),
                        (const struct _DXGKARG_SETPOINTERSHAPE *)&this[51].m128i_u64[1],
                        v70);
                if ( v16 >= 0 )
                {
                  v73 = 0;
LABEL_75:
                  v14 = (const struct _DXGKARG_SETPOINTERPOSITION *)v141;
                  this[47].m128i_i8[15] = v73;
                  goto LABEL_76;
                }
              }
LABEL_105:
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v136);
              goto LABEL_95;
            }
            v160.X = v63 + v55 / 2;
            v88 = v62 + v58 / 2;
LABEL_103:
            v160.Y = v88;
            goto LABEL_72;
          default:
LABEL_65:
            if ( v126 != D3DKMDT_VPPR_IDENTITY )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 686;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"Orientation == D3DKMDT_VPPR_IDENTITY",
                686LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v55 = v127;
              v58 = v129;
            }
            v67 = v64 + v63;
            v68 = v62 + v66;
            goto LABEL_68;
        }
        v68 = v58 + v99;
        goto LABEL_68;
      }
      v53 = (void *)this[53].m128i_i64[0];
      this[51].m128i_i32[2] = a3->Flags.Value;
      this[51].m128i_i32[3] = a3->Width;
      this[52].m128i_i32[0] = a3->Height;
      this[52].m128i_i32[1] = a3->Pitch;
      memmove(v53, a3->pPixels, a3->Pitch * a3->Height * ((a3->Flags.Value & 1) + 1));
      this[53].m128i_i32[2] = a3->XHot;
      v54 = a3->YHot;
      goto LABEL_58;
    }
    if ( *(_BYTE *)(v29 + 289) )
    {
      CurrentOrientation = D3DKMDT_VPPR_IDENTITY;
    }
    else
    {
      v96 = 3984 * v30;
      v97 = *(_QWORD *)(v29 + 128);
      if ( *(_DWORD *)(v97 + v96 + 1020) != 1 )
      {
        switch ( *(_DWORD *)(v97 + v96 + 1020) )
        {
          case 2:
            CurrentOrientation = D3DKMDT_VPPR_ROTATE90;
            goto LABEL_143;
          case 3:
            CurrentOrientation = D3DKMDT_VPPR_ROTATE180;
            goto LABEL_143;
          case 4:
            CurrentOrientation = D3DKMDT_VPPR_ROTATE270;
            goto LABEL_143;
        }
        WdLogSingleEntry2(2LL, *(int *)(v97 + v96 + 1020), *(_QWORD *)(v29 + 16));
        v114 = *(_QWORD *)(v29 + 128);
        WdLogGlobalForLineNumber = 8374;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"m_DisplayModeInfo does not have a valid rotation mode (0x%I64x) on adapter 0x%I64x!",
          *(int *)(v96 + v114 + 1020),
          *(_QWORD *)(v29 + 16),
          0LL,
          0LL,
          0LL);
      }
      CurrentOrientation = D3DKMDT_VPPR_IDENTITY;
    }
LABEL_143:
    v126 = CurrentOrientation;
    goto LABEL_36;
  }
LABEL_99:
  if ( this[44].m128i_i8[0] )
    goto LABEL_33;
LABEL_100:
  v16 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v13 + 3120), a3, v27);
  if ( v16 < 0 )
    goto LABEL_105;
LABEL_76:
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v124[0] = v160.Flags.Value;
    v121[0] = v160.Y;
    LODWORD(v118) = v160.X;
    LODWORD(v116) = v160.VidPnSourceId;
    McTemplateK0pqtqq_EtwWriteTransfer(
      v71,
      (const EVENT_DESCRIPTOR *)"m",
      v72,
      v157,
      v116,
      v118,
      *(_QWORD *)v121,
      *(_QWORD *)v124);
  }
  v16 = ADAPTER_DISPLAY::DdiSetPointerPosition(*(ADAPTER_DISPLAY **)(v13 + 3120), &v160);
  if ( v16 < 0 )
    goto LABEL_105;
  v74 = 0LL;
  v75 = (struct SESSION_VIEW *)*((_QWORD *)v140 + 6);
  if ( v75 != (struct SESSION_VIEW *)((char *)v140 + 48) )
    v74 = (struct SESSION_VIEW *)((char *)v75 - 56);
  v76 = v14->Y;
  v77 = v14->X;
  v78 = *(_QWORD *)(v13 + 3120);
  VidPnSourceId = v160.VidPnSourceId;
  v80 = *(_BYTE *)&v160.Flags.0 & 1;
  v81 = v160.Y;
  v82 = v160.X;
  v132 = v76;
  v135 = v77;
  v128 = *(_QWORD *)&v160.X;
  if ( v160.VidPnSourceId >= *(_DWORD *)(v78 + 96) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6105;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"VidPnSourceId < m_NumVidPnSources",
      6105LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v76 = v132;
    v77 = v135;
    v81 = HIDWORD(v128);
    v82 = v128;
  }
  v83 = 3984 * VidPnSourceId;
  *(_BYTE *)(3984 * VidPnSourceId + *(_QWORD *)(v78 + 128) + 766) = v80;
  if ( v80 )
  {
    *(_DWORD *)(*(_QWORD *)(v78 + 128) + v83 + 768) = v82;
    *(_DWORD *)(*(_QWORD *)(v78 + 128) + v83 + 772) = v81;
    *(_DWORD *)(*(_QWORD *)(v78 + 128) + v83 + 716) = v77;
    *(_DWORD *)(*(_QWORD *)(v78 + 128) + v83 + 720) = v76;
  }
  if ( !a8 && *(_DWORD *)(v13 + 2280) >= 0x7000u )
  {
    v84 = DISPLAY_SOURCE::GetPristineCursor(
            (DISPLAY_SOURCE *)this,
            a3->Height * a3->Pitch * ((a3->Flags.Value & 1) + 1));
    v85 = v84;
    pPixels = (void *)v84->pPixels;
    if ( pPixels )
    {
      v84->Flags.Value = a3->Flags.Value;
      v84->Width = a3->Width;
      v84->Height = a3->Height;
      v84->Pitch = a3->Pitch;
      memmove(pPixels, a3->pPixels, a3->Height * a3->Pitch * ((a3->Flags.Value & 1) + 1));
      v85->XHot = a3->XHot;
      v85->YHot = a3->YHot;
      goto LABEL_90;
    }
LABEL_111:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v136);
    v16 = -1073741801;
    goto LABEL_95;
  }
LABEL_90:
  if ( this == (__m128i *)v74 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v136);
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v161);
    OutputDuplThunks<long (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int),_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int>::RunForAdapter(
      (DXGADAPTER *)v13,
      v141,
      (__int64)a3,
      v139,
      v138,
      (__int64)_lambda_103e920f2f8a7257353075347c127b30_::_lambda_invoker_cdecl_);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v136);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v161);
  return 0LL;
}
