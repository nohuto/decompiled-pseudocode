/*
 * XREFs of ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402929F8
 * Callers:
 *     DxgkRedrawCursorForPostCompositon @ 0x1401EA2CC (DxgkRedrawCursorForPostCompositon.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHHH@Z @ 0x140292040 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002DAC0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002FD80 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z @ 0x140035D18 (-SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x14003E6D0 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline @ 0x14006B408 (Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402915D8 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1402AAE40 (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x1402D2354 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DX.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1402D7EA4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1402E0FA8 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     IsVirtualizationDisabledForTarget @ 0x1402E19E4 (IsVirtualizationDisabledForTarget.c)
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x140300108 (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x14030B714 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x140338FB0 (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGK_DRIVERCAPS@@@Z @ 0x140339AF0 (-RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATIO.c)
 *     ?GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x140367D9C (-GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x14039E694 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1403A190C (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 *     ?GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z @ 0x1403ABC1C (-GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z.c)
 */

__int64 __fastcall SetPointerShapeForDisplaySource(
        struct DISPLAY_SOURCE *this,
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
  _DXGKARG_SETPOINTERPOSITION v10; // xmm0
  void *v11; // r13
  __int64 v12; // rax
  __int64 v14; // r14
  const struct _DXGKARG_SETPOINTERPOSITION *v15; // r12
  int v17; // ebx
  __int64 v18; // rcx
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rcx
  UINT Width; // edx
  UINT Height; // r8d
  UINT XHot; // eax
  UINT YHot; // ecx
  INT Y; // r15d
  INT X; // ebx
  int v28; // ecx
  int v29; // ecx
  const wchar_t *v30; // r9
  struct _DXGKARG_SETPOINTERSHAPE *PristineCursor; // rax
  int v32; // ecx
  int v33; // edx
  int v34; // eax
  __int64 v35; // rbx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // r13d
  UINT v37; // r8d
  UINT v38; // ecx
  UINT v39; // edx
  struct _DXGKARG_SETPOINTERSHAPE *SavedCursor; // rbx
  void *pPixels; // rax
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // r15
  struct tagRECT *v43; // rcx
  const struct _DXGKARG_SETPOINTERSHAPE *v44; // rcx
  void *v45; // rcx
  UINT v46; // eax
  void *v47; // rcx
  int v48; // r11d
  int v49; // ecx
  __int128 v50; // xmm0
  int v51; // r8d
  int v52; // r10d
  int v53; // r15d
  int v54; // r9d
  signed int v55; // r12d
  signed int v56; // r15d
  int v57; // eax
  __int64 v58; // rcx
  int v59; // r9d
  int v60; // eax
  int v61; // eax
  int v62; // r10d
  INT v63; // eax
  INT v64; // r8d
  INT v65; // edx
  UINT v66; // r8d
  int v67; // r9d
  struct _DXGKARG_SETPOINTERSHAPE *v68; // rax
  const struct _DXGKARG_SETPOINTERSHAPE *v69; // r15
  __int64 v70; // rcx
  __int64 v71; // r8
  char v72; // al
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r15
  struct _DXGKARG_SETPOINTERSHAPE *v74; // rax
  struct _DXGKARG_SETPOINTERSHAPE *v75; // rbx
  void *v76; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *v78; // [rsp+20h] [rbp-E0h]
  __int64 v79; // [rsp+20h] [rbp-E0h]
  struct _DXGKARG_SETPOINTERSHAPE *v80; // [rsp+28h] [rbp-D8h]
  __int64 v81; // [rsp+28h] [rbp-D8h]
  __int64 v82; // [rsp+28h] [rbp-D8h]
  struct _DXGK_DRIVERCAPS *v83; // [rsp+30h] [rbp-D0h]
  __int64 v84; // [rsp+30h] [rbp-D0h]
  __int64 Value; // [rsp+30h] [rbp-D0h]
  int *v86; // [rsp+38h] [rbp-C8h]
  char v87; // [rsp+50h] [rbp-B0h] BYREF
  char v88; // [rsp+51h] [rbp-AFh] BYREF
  int v89; // [rsp+54h] [rbp-ACh]
  int v90; // [rsp+58h] [rbp-A8h]
  __int64 v91; // [rsp+60h] [rbp-A0h] BYREF
  char v92; // [rsp+68h] [rbp-98h]
  int v93; // [rsp+70h] [rbp-90h] BYREF
  int v94; // [rsp+74h] [rbp-8Ch]
  int v95; // [rsp+78h] [rbp-88h]
  int v96; // [rsp+7Ch] [rbp-84h]
  INT v97; // [rsp+80h] [rbp-80h]
  int v98; // [rsp+84h] [rbp-7Ch]
  int v99; // [rsp+88h] [rbp-78h]
  __int64 v100; // [rsp+90h] [rbp-70h]
  SESSION_VIEW *v101; // [rsp+98h] [rbp-68h]
  struct tagRECT v102; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v103; // [rsp+B0h] [rbp-50h]
  void *v104; // [rsp+C0h] [rbp-40h]
  __int128 v105; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v106; // [rsp+D8h] [rbp-28h]
  _DXGKARG_SETPOINTERPOSITION v107; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v108[144]; // [rsp+F0h] [rbp-10h] BYREF

  v10 = *a2;
  v11 = a5;
  v106 = 0LL;
  v12 = *((_QWORD *)this + 1);
  v107 = v10;
  v101 = a4;
  v100 = (__int64)a2;
  v14 = *(_QWORD *)(v12 + 16);
  v15 = a2;
  v104 = a5;
  v105 = 0LL;
  if ( !v14 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1098;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pDisplayAdapter != NULL", 1098LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*(_QWORD *)(v14 + 3120) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1099;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pDisplayAdapter->IsDisplayAdapter()",
      1099LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v108, (struct DXGADAPTER *const)v14, 0LL);
  v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v108, 0LL);
  if ( v17 < 0 )
    goto LABEL_117;
  v18 = *(_QWORD *)(v14 + 3120);
  v19 = v18 == -480;
  v20 = v18 + 480;
  v92 = 0;
  v91 = v20;
  if ( v19 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
    v20 = v91;
  }
  if ( *(struct _KTHREAD **)(v20 + 24) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 644;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v91);
  if ( a9 )
  {
    v21 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    if ( ((a3->Flags.Value - 2) & 0xFFFFFFFD) != 0
      || (Width = a3->Width, Width > *(_DWORD *)(v21 + 2424))
      || (Height = a3->Height, Height > *(_DWORD *)(v21 + 2428))
      || a3->Pitch != 4 * Width
      || a3->VidPnSourceId >= *(_DWORD *)(*(_QWORD *)(v21 + 3120) + 96LL)
      || !a3->pPixels
      || (XHot = a3->XHot, XHot >= Width)
      || (YHot = a3->YHot, YHot >= Height) )
    {
      WdLogSingleEntry3(2LL, *(int *)(v14 + 416), *(unsigned int *)(v14 + 412), *((unsigned int *)this + 4));
      v30 = L"Invalid DXGKARG_SETPOINTERSHAPE passed in SetPointerShapeForDisplaySource() function: Adapter LUID: (0x%I64x"
             "%08I64x) VidpnSourceId: (0x%I64x).";
      WdLogGlobalForLineNumber = 1122;
      goto LABEL_28;
    }
    *((_DWORD *)this + 949) = XHot;
    *((_DWORD *)this + 950) = YHot;
    Y = v15->Y;
    X = v15->X;
    if ( XHot == -1 && YHot == -1
      || !(unsigned int)Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline()
      && ((v28 = X + *((_DWORD *)this + 949), v28 < 0)
       || v28 >= *((_DWORD *)this + 248)
       || (v29 = Y + *((_DWORD *)this + 950), v29 < 0)
       || v29 >= *((_DWORD *)this + 249)) )
    {
      WdLogSingleEntry3(2LL, *(int *)(v14 + 416), *(unsigned int *)(v14 + 412), *((unsigned int *)this + 4));
      v30 = L"Invalid DXGKARG_SETPOINTERPOSITION passed in SetPointerShapeForDisplaySource() function: Adapter LUID: (0x%I"
             "64x%08I64x) VidpnSourceId: (0x%I64x).";
      WdLogGlobalForLineNumber = 1135;
LABEL_28:
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        v30,
        *(int *)(v14 + 416),
        *(unsigned int *)(v14 + 412),
        *((unsigned int *)this + 4),
        0LL,
        0LL);
LABEL_29:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v91);
      v17 = -1073741811;
LABEL_117:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v108);
      return (unsigned int)v17;
    }
  }
  if ( a8 )
  {
    if ( *(_DWORD *)(v14 + 2280) < 0x7000u )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1145;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pDisplayAdapter->GetDriverDdiInterfaceVersion() >= DXGKDDI_INTERFACE_VERSION_WDDM2_2_RS2_1",
        1145LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    PristineCursor = DISPLAY_SOURCE::GetPristineCursor(this, 0);
    a3 = PristineCursor;
    if ( !PristineCursor->pPixels )
      goto LABEL_29;
    v32 = (PristineCursor->Flags.Value & 1) + 1;
    v99 = PristineCursor->Width;
    v98 = PristineCursor->Height * v32;
  }
  else
  {
    v98 = a7;
    v99 = a6;
  }
  if ( (*(_DWORD *)(v14 + 444) & 0x100) == 0 && (**(_DWORD **)(v14 + 3008) & 8) != 0 )
    goto LABEL_101;
  v107.VidPnSourceId = *((_DWORD *)this + 4);
  if ( !(unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v14 + 3120), v107.VidPnSourceId) )
  {
    v17 = -1073741823;
    WdLogSingleEntry4(2LL, -1073741823LL, *((unsigned int *)this + 4), a3->Flags.Value, a5);
    Value = a3->Flags.Value;
    v82 = *((unsigned int *)this + 4);
    WdLogGlobalForLineNumber = 1374;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"0x%I64x VidPnSourceId=0x%I64x Primary is not visible: 0x%I64x DXGADAPTER=0x%I64x",
      -1073741823LL,
      v82,
      Value,
      (__int64)a5,
      0LL);
    goto LABEL_116;
  }
  if ( (*(_DWORD *)(v14 + 444) & 0x20) != 0
    && !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v14 + 3120)) )
  {
    goto LABEL_101;
  }
  v33 = *((_DWORD *)this + 268);
  v87 = 1;
  v88 = 1;
  v34 = IsVirtualizationDisabledForTarget(v14, v33, (unsigned int)&v87, (unsigned int)&v88, 0LL);
  if ( v34 < 0 )
  {
    v35 = v34;
    WdLogSingleEntry4(2LL, *((unsigned int *)this + 4), *(int *)(v14 + 416), *(unsigned int *)(v14 + 412), v34);
    v84 = *(unsigned int *)(v14 + 412);
    v81 = *(int *)(v14 + 416);
    v79 = *((unsigned int *)this + 4);
    WdLogGlobalForLineNumber = 1195;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"IsVirtualizationDisabledForTarget failed on VidPn Source 0x%I64x adapter 0x%I64x%08I64x, returning 0x%I64x.",
      v79,
      v81,
      v84,
      v35,
      0LL);
  }
  if ( v87 && v88 && !*((_BYTE *)this + 704) || a10 )
  {
    v17 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v14 + 3120), a3);
    if ( v17 >= 0 )
      goto LABEL_103;
    goto LABEL_116;
  }
  CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(
                                       *((_QWORD *)this + 1),
                                       *((unsigned int *)this + 4),
                                       v87 != 0);
  v37 = *(_DWORD *)(v14 + 2424);
  if ( a3->Width > v37
    || (v38 = a3->Height, v39 = *(_DWORD *)(v14 + 2428), v38 > v39)
    || a3->Pitch * ((a3->Flags.Value & 1) + 1) * v38 > 4 * (unsigned __int64)(v37 * v39) )
  {
LABEL_101:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v91);
    v17 = -1073741823;
    goto LABEL_117;
  }
  SavedCursor = DISPLAY_SOURCE::GetSavedCursor(this, 1);
  pPixels = (void *)SavedCursor->pPixels;
  if ( !pPixels )
    goto LABEL_110;
  memset(pPixels, 0, 4 * *(unsigned int *)(v14 + 2428) * (unsigned __int64)*(unsigned int *)(v14 + 2424));
  ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(this, 1);
  if ( !ClippedCursor->pPixels )
    goto LABEL_110;
  v93 = 0;
  if ( *((_BYTE *)this + 704) )
  {
    v102.right = *((_DWORD *)this + 177);
    v102.bottom = *((_DWORD *)this + 178);
    v43 = &v102;
    *(_QWORD *)&v102.left = 0LL;
  }
  else
  {
    v43 = (struct tagRECT *)((char *)this + 688);
  }
  v89 = ScaleCursorShape(
          v43,
          (const struct tagRECT *)((char *)v101 + 24),
          CurrentOrientation,
          a3,
          ClippedCursor,
          SavedCursor,
          (const struct _DXGK_DRIVERCAPS *)(v14 + 2400),
          &v93);
  if ( v89 < 0 )
  {
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v91);
    v17 = v89;
    goto LABEL_117;
  }
  if ( v93 )
  {
    if ( CurrentOrientation != D3DKMDT_VPPR_IDENTITY && !v87 )
    {
      v44 = ClippedCursor;
LABEL_65:
      RotateCursorShape(v44, SavedCursor, CurrentOrientation, (const struct _DXGK_DRIVERCAPS *)(v14 + 2400));
      goto LABEL_68;
    }
    v45 = (void *)SavedCursor->pPixels;
    SavedCursor->Flags.Value = ClippedCursor->Flags.Value;
    SavedCursor->Width = ClippedCursor->Width;
    SavedCursor->Height = ClippedCursor->Height;
    SavedCursor->Pitch = ClippedCursor->Pitch;
    memmove(
      v45,
      ClippedCursor->pPixels,
      ClippedCursor->Height * ClippedCursor->Pitch * ((ClippedCursor->Flags.Value & 1) + 1));
    SavedCursor->XHot = ClippedCursor->XHot;
    v46 = ClippedCursor->YHot;
  }
  else
  {
    if ( CurrentOrientation != D3DKMDT_VPPR_IDENTITY && !v87 )
    {
      v44 = a3;
      goto LABEL_65;
    }
    v47 = (void *)SavedCursor->pPixels;
    SavedCursor->Flags.Value = a3->Flags.Value;
    SavedCursor->Width = a3->Width;
    SavedCursor->Height = a3->Height;
    SavedCursor->Pitch = a3->Pitch;
    memmove(v47, a3->pPixels, a3->Height * a3->Pitch * ((a3->Flags.Value & 1) + 1));
    SavedCursor->XHot = a3->XHot;
    v46 = a3->YHot;
  }
  SavedCursor->YHot = v46;
LABEL_68:
  v48 = *((_DWORD *)this + 174) - *((_DWORD *)this + 172);
  v49 = *((_DWORD *)this + 175) - *((_DWORD *)this + 173);
  v50 = *((_OWORD *)this + 43);
  v51 = *((_DWORD *)v101 + 8) - *((_DWORD *)v101 + 6);
  v52 = *((_DWORD *)v101 + 9) - *((_DWORD *)v101 + 7);
  v19 = *((_BYTE *)this + 704) == 0;
  v53 = *((_DWORD *)this + 178);
  v54 = *((_DWORD *)this + 177);
  v89 = v53;
  v97 = v54;
  v103 = v50;
  v94 = v48;
  v90 = v49;
  if ( v19 )
  {
    v56 = DWORD1(v103);
    v55 = v103;
    v89 = HIDWORD(v103);
    v97 = DWORD2(v103);
  }
  else
  {
    v49 = v53;
    v94 = v54;
    v55 = 0;
    v90 = v53;
    v56 = 0;
    v48 = v54;
  }
  if ( ((CurrentOrientation - 1) & 0xFFFFFFFD) != 0 )
  {
    v57 = v49;
    v58 = v100;
    v59 = *(_DWORD *)(v100 + 4) * v57 / v51;
    v60 = v48;
  }
  else
  {
    v59 = *(_DWORD *)(v100 + 4) * v48 / v51;
    v60 = v49;
    v58 = v100;
  }
  v61 = *(_DWORD *)(v58 + 8) * v60;
  v95 = v59;
  v62 = v61 / v52;
  v96 = v62;
  if ( v87 )
  {
    v107.X = v59 + v55;
    v63 = v62 + v56;
LABEL_93:
    v107.Y = v63;
    goto LABEL_94;
  }
  switch ( CurrentOrientation )
  {
    case D3DKMDT_VPPR_IDENTITY:
      goto LABEL_84;
    case D3DKMDT_VPPR_ROTATE90:
      v65 = v62 + v55;
      v107.X = v62 + v55;
      v66 = v56 - SavedCursor->Height - v59;
      break;
    case D3DKMDT_VPPR_ROTATE180:
      v65 = v48 + v55 - SavedCursor->Width - v59;
      v107.X = v65;
      v66 = v56 - SavedCursor->Height - v62;
      break;
    case D3DKMDT_VPPR_ROTATE270:
      v64 = v59 + v56;
      v65 = v48 + v55 - SavedCursor->Width - v62;
LABEL_87:
      v67 = v90;
      v107.X = v65;
      goto LABEL_88;
    default:
LABEL_84:
      if ( CurrentOrientation != D3DKMDT_VPPR_IDENTITY )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 688;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"Orientation == D3DKMDT_VPPR_IDENTITY",
          688LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v48 = v94;
      }
      v65 = v55 + v95;
      v64 = v56 + v96;
      goto LABEL_87;
  }
  v67 = v90;
  v64 = v90 + v66;
LABEL_88:
  v107.Y = v64;
  if ( (signed int)(v65 + SavedCursor->Width) < v55
    || v65 > v97
    || (signed int)(v64 + SavedCursor->Height) < v56
    || v64 > v89 )
  {
    v107.X = v55 + v48 / 2;
    v63 = v56 + v67 / 2;
    goto LABEL_93;
  }
LABEL_94:
  FillClipParams(SavedCursor, this, &v107, (struct CURSOR_CLIP_PARAMS *)&v105);
  if ( !HIDWORD(v106) )
  {
    SavedCursor->VidPnSourceId = *((_DWORD *)this + 4);
    v17 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v14 + 3120), SavedCursor);
    if ( v17 >= 0 )
    {
      v72 = 0;
      goto LABEL_100;
    }
LABEL_116:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v91);
    goto LABEL_117;
  }
  v68 = DISPLAY_SOURCE::GetClippedCursor(this, 1);
  v69 = v68;
  if ( !v68->pPixels )
  {
LABEL_110:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v91);
    v17 = -1073741801;
    goto LABEL_117;
  }
  ClipCurrentCursor(SavedCursor, v68, (struct CURSOR_CLIP_PARAMS *)&v105);
  v69->VidPnSourceId = *((_DWORD *)this + 4);
  v17 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v14 + 3120), v69);
  if ( v17 < 0 )
    goto LABEL_116;
  v72 = 1;
LABEL_100:
  v15 = (const struct _DXGKARG_SETPOINTERPOSITION *)v100;
  v11 = v104;
  *((_BYTE *)this + 767) = v72;
LABEL_103:
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v86) = v107.Flags.0;
    LODWORD(v83) = v107.Y;
    LODWORD(v80) = v107.X;
    LODWORD(v78) = v107.VidPnSourceId;
    McTemplateK0pqtqq_EtwWriteTransfer(v70, (const EVENT_DESCRIPTOR *)"m", v71, v11, v78, v80, v83, v86);
  }
  v17 = ADAPTER_DISPLAY::DdiSetPointerPosition(*(ADAPTER_DISPLAY **)(v14 + 3120), &v107, v71);
  if ( v17 < 0 )
    goto LABEL_116;
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v101);
  ADAPTER_DISPLAY::SavePointerInfo(
    *(ADAPTER_DISPLAY **)(v14 + 3120),
    v107.VidPnSourceId,
    *(_BYTE *)&v107.Flags.0 & 1,
    v107.X,
    v107.Y,
    v15->X,
    v15->Y);
  if ( !a8 && *(_DWORD *)(v14 + 2280) >= 0x7000u )
  {
    v74 = DISPLAY_SOURCE::GetPristineCursor(this, a3->Height * a3->Pitch * ((a3->Flags.Value & 1) + 1));
    v75 = v74;
    v76 = (void *)v74->pPixels;
    if ( !v76 )
      goto LABEL_110;
    v74->Flags.Value = a3->Flags.Value;
    v74->Width = a3->Width;
    v74->Height = a3->Height;
    v74->Pitch = a3->Pitch;
    memmove(v76, a3->pPixels, a3->Pitch * a3->Height * ((a3->Flags.Value & 1) + 1));
    v75->XHot = a3->XHot;
    v75->YHot = a3->YHot;
  }
  if ( this == PrimaryDisplaySource )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v91);
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v108);
    OutputDuplThunks<long (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int),_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int>::RunForAdapter(
      (struct DXGADAPTER *)v14,
      (__int64)v15,
      (__int64)a3,
      v99,
      v98,
      (__int64)_lambda_103e920f2f8a7257353075347c127b30_::_lambda_invoker_cdecl_);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v91);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v108);
  return 0LL;
}
