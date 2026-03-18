/*
 * XREFs of ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0121950
 * Callers:
 *     ?xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHK@Z @ 0x1C0062FAC (-xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHK@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012BAE0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01E535C (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C002F37C (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C005AE1C (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0073520 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     IsMessageOnlyWindow @ 0x1C0073600 (IsMessageOnlyWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddd @ 0x1C0080820 (WPP_RECORDER_AND_TRACE_SF_qddd.c)
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0089A48 (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 *     ?DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z @ 0x1C00AF280 (-DCELayerHitTest@@YA_NPEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C0121808 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C0122588 (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     ?IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z @ 0x1C0122850 (-IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C0122A20 (_IsTopLevelWindow.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122A54 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C0150B38 (-DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddds @ 0x1C01B9C40 (WPP_RECORDER_AND_TRACE_SF_ddds.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddq @ 0x1C01B9DD0 (WPP_RECORDER_AND_TRACE_SF_ddq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddqd @ 0x1C01B9ECC (WPP_RECORDER_AND_TRACE_SF_ddqd.c)
 *     SizeBoxHwnd @ 0x1C024AF20 (SizeBoxHwnd.c)
 *     DwmSyncHitTestQuery @ 0x1C026D7A0 (DwmSyncHitTestQuery.c)
 */

HWND __fastcall xxxDCEWindowHitTestIndirect(
        struct tagWND *a1,
        struct tagPOINT a2,
        char a3,
        struct tagDCE_WINDOW_HIT_TEST_ARGS *a4)
{
  struct tagDCE_WINDOW_HIT_TEST_ARGS *v4; // r12
  struct tagWND *v6; // r14
  int v7; // edx
  unsigned int CurrentThreadDpiAwarenessContext; // ecx
  int v9; // r8d
  int v10; // r9d
  int v11; // eax
  struct tagWND *v12; // rdx
  struct tagPOINT v13; // rbx
  char v14; // r13
  __int64 v15; // r15
  int v16; // esi
  struct tagWND *v17; // r8
  _DWORD *v18; // rax
  unsigned __int16 y; // r9
  unsigned __int8 *v20; // rdx
  __int64 v21; // rax
  char v22; // dl
  struct tagWND **v23; // r15
  struct tagWND *v24; // rcx
  char v25; // dl
  int v26; // edx
  int v27; // r8d
  char v28; // r15
  char v29; // dl
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  void *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  char v38; // r12
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // edx
  int v43; // r8d
  int v44; // esi
  const char *v45; // rax
  char v46; // r12
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  int v51; // edx
  int v52; // r8d
  char v53; // r8
  const char *v54; // rax
  char v55; // r13
  int v56; // eax
  __int128 *v57; // rsi
  __int64 v58; // r12
  __int64 v59; // xmm1_8
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  int v64; // r15d
  tagObjLock **v65; // rsi
  __int64 Prop; // rsi
  const struct _D3DMATRIX *v67; // rdx
  bool v68; // al
  __int64 v69; // rcx
  __int64 v70; // rcx
  _DWORD *v71; // rax
  __int64 v72; // rcx
  char v74; // dl
  char v75; // dl
  int v76; // [rsp+20h] [rbp-E0h]
  int v77; // [rsp+28h] [rbp-D8h]
  int v78; // [rsp+28h] [rbp-D8h]
  int v79; // [rsp+30h] [rbp-D0h]
  int v80; // [rsp+30h] [rbp-D0h]
  int v81; // [rsp+38h] [rbp-C8h]
  int v82; // [rsp+38h] [rbp-C8h]
  __int64 v83; // [rsp+40h] [rbp-C0h]
  __int64 v84; // [rsp+48h] [rbp-B8h]
  __int64 v85; // [rsp+50h] [rbp-B0h]
  char v86; // [rsp+60h] [rbp-A0h]
  struct tagWND *v87; // [rsp+68h] [rbp-98h]
  struct tagWND *v88; // [rsp+70h] [rbp-90h]
  struct tagPOINT v90; // [rsp+80h] [rbp-80h] BYREF
  struct tagPOINT v91; // [rsp+88h] [rbp-78h] BYREF
  __int64 v92; // [rsp+90h] [rbp-70h]
  struct tagDCE_WINDOW_HIT_TEST_ARGS *v93; // [rsp+98h] [rbp-68h]
  unsigned int v94; // [rsp+A0h] [rbp-60h] BYREF
  int v95; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned int v96; // [rsp+A8h] [rbp-58h]
  __int128 v97; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v98; // [rsp+C0h] [rbp-40h]
  __int128 v99; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v100; // [rsp+D8h] [rbp-28h]
  __int128 v101; // [rsp+E0h] [rbp-20h]
  __int64 v102; // [rsp+F0h] [rbp-10h]
  __int64 v103; // [rsp+F8h] [rbp-8h]
  char v104; // [rsp+100h] [rbp+0h]
  __int128 v105; // [rsp+108h] [rbp+8h] BYREF
  char v106; // [rsp+118h] [rbp+18h]
  char v107; // [rsp+120h] [rbp+20h]

  v93 = a4;
  v4 = a4;
  v6 = a1;
  if ( a1 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
    v96 = CurrentThreadDpiAwarenessContext;
    v11 = *((_DWORD *)v4 + 8);
    v91 = a2;
    if ( (v11 & 4) != 0 )
      LogicalToPhysicalDPIPoint(&v91, &v91, CurrentThreadDpiAwarenessContext, 0LL);
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType);
    if ( (_BYTE)v7 || (_BYTE)v9 )
    {
      v85 = *(_QWORD *)v6;
      LODWORD(v84) = v91.y;
      WPP_RECORDER_AND_TRACE_SF_ddq(WPP_GLOBAL_Control->AttachedDevice, v7, v9, v10);
    }
    v12 = (struct tagWND *)*((_QWORD *)v6 + 13);
    v13 = v91;
    v14 = 0;
    LODWORD(v15) = -2;
    v86 = 0;
    v92 = 4294967294LL;
    v16 = 0;
    v88 = v12;
    v17 = 0LL;
    v90 = v91;
    v87 = 0LL;
    while ( 1 )
    {
      if ( !v16 )
      {
        if ( (unsigned int)IsCompositionInputWindowForHitTest(v6) )
        {
          v55 = 1;
          if ( (*((_DWORD *)v4 + 8) & 8) != 0 )
          {
            LOBYTE(v56) = IsMessageOnlyWindow((__int64)v6);
            if ( !v56 )
              goto LABEL_109;
            goto LABEL_112;
          }
        }
        else
        {
          v55 = 0;
LABEL_109:
          if ( (*(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL) & 0x10) != 0 )
          {
LABEL_112:
            if ( (unsigned int)GetWindowCloakState((struct tagTHREADINFO **)v6) )
            {
              if ( !v6 || (*((_DWORD *)v6 + 80) & 0x1000) == 0 )
                goto LABEL_132;
              v57 = (__int128 *)*((_QWORD *)v6 + 18);
              v58 = CoreWindowProp::s_atom;
              v103 = gDomainDummyLock;
              v104 = 0;
              v105 = 0LL;
              v106 = 0;
              v59 = *((_QWORD *)v57 + 2);
              v101 = *v57;
              v107 = 0;
              v102 = v59;
              if ( !IS_USERCRIT_OWNED_EXCLUSIVE() && IS_USERCRIT_OWNED_AT_ALL(v61, v60, v62, v63) )
              {
                v107 = 1;
                if ( v57 == (__int128 *)gObjDummyLock )
                  v57 = 0LL;
                *(_QWORD *)&v105 = v57;
                if ( !v106 )
                {
                  v64 = 0;
                  v65 = (tagObjLock **)&v105;
                  do
                  {
                    if ( *v65 )
                      tagObjLock::LockExclusive(*v65);
                    ++v64;
                    ++v65;
                  }
                  while ( !v64 );
                  LODWORD(v15) = v92;
                  v106 = 1;
                }
              }
              Prop = RealGetProp(*((_QWORD *)v6 + 18), v58, 1LL);
              if ( v107 && v106 )
              {
                if ( (_QWORD)v105 )
                  tagObjLock::UnLockExclusive((tagObjLock *)v105);
                v106 = 0;
              }
              v4 = v93;
              if ( !Prop || !*(_DWORD *)(Prop + 28) )
              {
LABEL_132:
                if ( !(unsigned int)IsWindowHolographicForHitTest(v6) )
                  goto LABEL_110;
              }
            }
            if ( (*((_DWORD *)v4 + 8) & 4) != 0
              && (unsigned int)IsTopLevelWindow(v6)
              && (((unsigned __int16)(v96 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*((_QWORD *)v6 + 5) + 288LL) >> 8)) & 0x1FF) == 0 )
            {
              v13 = a2;
              v87 = v6;
              v90 = a2;
              v17 = v6;
            }
            else
            {
              v17 = v87;
            }
            if ( !v55 )
            {
              v67 = (const struct _D3DMATRIX *)*((_QWORD *)v6 + 27);
              if ( !v67 || v6 == v17 )
              {
                v71 = (_DWORD *)*((_QWORD *)v6 + 5);
                if ( v13.x < v71[22] || v13.x >= v71[24] || v13.y < v71[23] || v13.y >= v71[25] )
                {
                  v14 = v86;
                  v16 = 3;
                  v12 = v88;
                  goto LABEL_41;
                }
              }
              else
              {
                v68 = DCEHitTestWindow(
                        (const struct tagRECT *)(*((_QWORD *)v6 + 5) + 88LL),
                        v67,
                        &v90,
                        *((const struct _SUBPIXELS **)v4 + 5));
                v13 = v90;
                if ( !v68 )
                  goto LABEL_110;
              }
            }
            v69 = *(_QWORD *)(*((_QWORD *)v6 + 5) + 168LL);
            if ( !v69 || (unsigned int)GrePtInRegion(v69, (unsigned int)v13.x, (unsigned int)v90.y) )
            {
              v70 = *((_QWORD *)v6 + 5);
              if ( (*(_BYTE *)(v70 + 26) & 8) == 0 || (*(_DWORD *)(v70 + 232) & 2) != 0 || DCELayerHitTest(v6, v13) )
              {
                if ( !(unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(v6) || (*((_DWORD *)v4 + 8) & 1) == 0 )
                {
                  if ( v55
                    || (v72 = *((_QWORD *)v6 + 5), (*(_BYTE *)(v72 + 31) & 0x20) != 0)
                    || v13.x < *(_DWORD *)(v72 + 104)
                    || v13.x >= *(_DWORD *)(v72 + 112)
                    || v13.y < *(_DWORD *)(v72 + 108)
                    || v13.y >= *(_DWORD *)(v72 + 116) )
                  {
                    v17 = v87;
                    v16 = 1;
                    v14 = v86;
                    v12 = v88;
                  }
                  else
                  {
                    v17 = v87;
                    v14 = v86;
                    v12 = v88;
                    if ( *((_QWORD *)v6 + 14) )
                    {
                      v6 = (struct tagWND *)*((_QWORD *)v6 + 14);
                      v16 = 0;
                    }
                    else
                    {
                      v16 = 2;
                    }
                  }
                  goto LABEL_41;
                }
                if ( v55 || (*(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL) & 0xC0) != 0x40 )
                {
                  v17 = v87;
                  v16 = 4;
                  v14 = v86;
                  v12 = v88;
                  goto LABEL_41;
                }
              }
            }
          }
        }
LABEL_110:
        v17 = v87;
        v16 = 3;
        v14 = v86;
        v12 = v88;
        goto LABEL_41;
      }
      if ( v16 != 1 && v16 != 2 )
      {
        if ( v16 != 3 )
        {
          v18 = (_DWORD *)*((_QWORD *)v4 + 3);
          if ( v18 )
          {
            *v18 = v15;
            *((_BYTE *)v4 + 36) = 1;
          }
          y = v90.y;
          if ( __PAIR64__(v90.y, v13.x) != v91 )
          {
            *((_BYTE *)v4 + 48) = 1;
            *((_QWORD *)v4 + 2) = LOWORD(v13.x) | (y << 16);
          }
          v20 = (unsigned __int8 *)*((_QWORD *)v6 + 5);
          if ( (_DWORD)v15 == (((v20[25] ^ (unsigned int)(unsigned __int8)~v20[26]) >> 6) & 1) + 16
            && (v20[30] & 4) == 0 )
          {
            v21 = SizeBoxHwnd(v6);
            if ( v21 )
              v6 = (struct tagWND *)v21;
          }
          v22 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_qddd(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v22,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              (__int64)&WPP_9ad731d3d3593c130ed182ea31b981ea_Traceguids,
              v76,
              0xFu,
              0x11u,
              (__int64)&WPP_9ad731d3d3593c130ed182ea31b981ea_Traceguids);
          return *(HWND *)v6;
        }
        if ( *((_QWORD *)v6 + 27) || v6 == v17 )
        {
          v23 = (struct tagWND **)((char *)v6 + 104);
          v24 = (struct tagWND *)*((_QWORD *)v6 + 13);
          v90 = v91;
          RestoreLogicalPoint(v24, &v90, (const struct _SUBPIXELS **)v4);
          v12 = v88;
          v13 = v90;
        }
        else
        {
          v23 = (struct tagWND **)((char *)v6 + 104);
        }
        v6 = (struct tagWND *)*((_QWORD *)v6 + 11);
        v17 = 0LL;
        v87 = 0LL;
        if ( v6 )
        {
          v16 = 0;
          if ( *((struct tagWND **)v6 + 13) == v12 && a3 )
          {
LABEL_42:
            v25 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v84) = v91.y;
              LODWORD(v83) = v91.x;
              WPP_RECORDER_AND_TRACE_SF_dd(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v25,
                WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                (__int64)gFullLog,
                4u,
                0xFu,
                0x12u,
                (__int64)&WPP_9ad731d3d3593c130ed182ea31b981ea_Traceguids,
                v83,
                v84,
                v85);
            }
            return 0LL;
          }
        }
        else
        {
          v6 = *v23;
          v16 = 2;
        }
        LODWORD(v15) = v92;
        goto LABEL_41;
      }
      if ( (unsigned int)IsCompositionInputWindowForHitTest(v6) )
        break;
      v28 = 0;
      v94 = -2;
      if ( *((_QWORD *)v6 + 2) != gptiCurrent )
        goto LABEL_49;
      if ( !(unsigned int)IsTopLevelWindow(v6)
        || !(unsigned int)IsWindowDesktopComposed(v30)
        || (*(_BYTE *)(*((_QWORD *)v6 + 5) + 26LL) & 8) == 0
        || v16 == 2 )
      {
        goto LABEL_75;
      }
      v97 = 0LL;
      v98 = 0LL;
      ThreadLock(v6, &v97);
      v33 = (void *)ReferenceDwmApiPort(v32, v31);
      v95 = 1;
      UserSessionSwitchLeaveCrit(v35, v34, v36, v37);
      v38 = v90.y;
      DwmSyncHitTestQuery(
        v33,
        *((_QWORD *)v93 + 1),
        (LOWORD(v90.y) << 16) | LOWORD(v13.x),
        -2,
        (__int64)&v94,
        (__int64)&v95);
      EnterCrit(1LL, 0LL);
      if ( !ThreadUnlock1(v40, v39, v41) || (*(_BYTE *)(_HMPheFromObject(v6) + 25) & 1) != 0 )
      {
        v74 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        if ( v74 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_q(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v74,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            13LL,
            3u,
            0xFu,
            0xDu,
            (__int64)&WPP_9ad731d3d3593c130ed182ea31b981ea_Traceguids,
            *(_QWORD *)v6,
            v84,
            v85);
        return 0LL;
      }
      LOBYTE(v42) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
      LOBYTE(v43) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                 && LOWORD(WPP_GLOBAL_Control->DeviceType);
      LODWORD(v15) = v94;
      v44 = v95;
      v92 = v94;
      if ( (_BYTE)v42 || (_BYTE)v43 )
      {
        v45 = "no";
        if ( !v95 )
          v45 = "yes";
        WPP_RECORDER_AND_TRACE_SF_ddds(
          WPP_GLOBAL_Control->AttachedDevice,
          v42,
          v43,
          (unsigned int)"yes",
          v76,
          v77,
          v79,
          v81,
          v13.x,
          v38,
          v94,
          (__int64)v45);
      }
      if ( !v44 )
      {
LABEL_75:
        v99 = 0LL;
        v100 = 0LL;
        ThreadLock(v6, &v99);
        _InterlockedIncrement(&glSendMessage);
        v46 = v90.y;
        v13 = v90;
        v15 = xxxSendTransformableMessageTimeout((ULONG_PTR)v6, 0, 0, 0LL, 1, 0);
        v92 = v15;
        if ( !ThreadUnlock1(v48, v47, v49) || (*(_BYTE *)(_HMPheFromObject(v6) + 25) & 1) != 0 )
        {
          v75 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          if ( v75 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_q(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v75,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              v50,
              3u,
              0xFu,
              0xFu,
              (__int64)&WPP_9ad731d3d3593c130ed182ea31b981ea_Traceguids,
              *(_QWORD *)v6,
              v84,
              v85);
          return 0LL;
        }
        LOBYTE(v51) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
        LOBYTE(v52) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                   && LOWORD(WPP_GLOBAL_Control->DeviceType);
        if ( (_BYTE)v51 || (_BYTE)v52 )
          WPP_RECORDER_AND_TRACE_SF_ddqd(
            WPP_GLOBAL_Control->AttachedDevice,
            v51,
            v52,
            v50,
            v76,
            v78,
            v80,
            v82,
            v13.x,
            v46,
            *(_QWORD *)v6,
            v15);
      }
      v4 = v93;
      v17 = v87;
      v12 = v88;
      if ( (_DWORD)v15 == -1 )
      {
        v14 = 1;
        v16 = 3;
        v86 = 1;
      }
      else
      {
        v16 = 4;
      }
LABEL_41:
      if ( v6 == v12 )
        goto LABEL_42;
    }
    v28 = 1;
LABEL_49:
    v29 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    v53 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType);
    if ( v29 || v53 )
    {
      v54 = "composition input window";
      if ( !v28 )
        v54 = "other thread";
      WPP_RECORDER_AND_TRACE_SF_s(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v29,
        v53,
        (__int64)gFullLog,
        5u,
        0xFu,
        0xBu,
        (__int64)&WPP_9ad731d3d3593c130ed182ea31b981ea_Traceguids,
        v54);
    }
    if ( !v28 && v14 && (*((_DWORD *)v4 + 8) & 0x10) != 0 )
    {
      LOBYTE(v26) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v26,
          v27,
          (unsigned int)&WPP_9ad731d3d3593c130ed182ea31b981ea_Traceguids,
          3,
          15,
          12,
          (__int64)&WPP_9ad731d3d3593c130ed182ea31b981ea_Traceguids);
      }
      return 0LL;
    }
    v17 = v87;
    LODWORD(v15) = 1;
    v12 = v88;
    v92 = 1LL;
    v16 = 4;
    goto LABEL_41;
  }
  return 0LL;
}
