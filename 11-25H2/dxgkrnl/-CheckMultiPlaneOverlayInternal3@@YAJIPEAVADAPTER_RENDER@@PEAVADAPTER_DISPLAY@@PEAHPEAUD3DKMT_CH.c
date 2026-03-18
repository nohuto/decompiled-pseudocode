/*
 * XREFs of ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1402A1D1C
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1402A098C (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x140409054 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ @ 0x140042CC4 (-SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0qqqddddddddddddqqqqqq_EtwWriteTransfer @ 0x1400491D0 (McTemplateK0qqqddddddddddddqqqqqq_EtwWriteTransfer.c)
 *     McTemplateK0qqqqqq_EtwWriteTransfer @ 0x14004F044 (McTemplateK0qqqqqq_EtwWriteTransfer.c)
 *     McTemplateK0qqddddddddq_EtwWriteTransfer @ 0x140054820 (McTemplateK0qqddddddddq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402A2AD0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@1PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@@Z @ 0x1402A3360 (-GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DK.c)
 *     ?CallCheckMultiPlaneOverlaySupport3DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1402A374C (-CallCheckMultiPlaneOverlaySupport3DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAP.c)
 *     ?CallCheckMultiPlaneOverlaySupport1DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1403CC308 (-CallCheckMultiPlaneOverlaySupport1DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAP.c)
 *     ?CallCheckMultiPlaneOverlaySupport2DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1404034C0 (-CallCheckMultiPlaneOverlaySupport2DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAP.c)
 *     ?ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ @ 0x14040D8DC (-ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ.c)
 */

__int64 __fastcall CheckMultiPlaneOverlayInternal3(
        __int64 a1,
        struct ADAPTER_RENDER *a2,
        struct ADAPTER_DISPLAY *a3,
        int *a4,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a5)
{
  struct ADAPTER_DISPLAY *v6; // r9
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  _BYTE *Pool2; // rax
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v12; // r14
  _BYTE *v13; // rax
  void **v14; // rsi
  _BYTE *v15; // r13
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v16; // r8
  unsigned __int64 v17; // r12
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v18; // r15
  int v19; // eax
  _BYTE *v20; // r9
  _QWORD *v21; // rcx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v22; // rax
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v23; // rdx
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v24; // rax
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v25; // rcx
  ADAPTER_RENDER *v26; // r12
  bool v27; // al
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v28; // r8
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v29; // r10
  unsigned int v30; // edx
  __int64 v31; // rbx
  __int64 v32; // rdi
  void **v33; // rdx
  __int64 v34; // r13
  __int64 v35; // r8
  bool v36; // al
  __int64 v37; // rcx
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v38; // r13
  int *v39; // r12
  float v40; // xmm2_4
  int v41; // r13d
  float v42; // xmm3_4
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // r8
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v46; // r11
  __int64 v47; // r12
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rcx
  float v49; // xmm1_4
  signed __int64 v50; // r14
  __int64 v51; // rdi
  void *v52; // rax
  char v53; // bl
  __int64 v54; // r15
  _DWORD *v55; // rcx
  __int64 CurrentProcess; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  int *v60; // r9
  __int64 v61; // rax
  __int64 v62; // rax
  int v63; // [rsp+28h] [rbp-118h]
  unsigned int v64; // [rsp+C0h] [rbp-80h]
  int v65; // [rsp+C0h] [rbp-80h]
  unsigned int v66[2]; // [rsp+C8h] [rbp-78h] BYREF
  unsigned int v67[2]; // [rsp+D0h] [rbp-70h] BYREF
  unsigned int v68; // [rsp+D8h] [rbp-68h]
  ADAPTER_DISPLAY *v69; // [rsp+E0h] [rbp-60h]
  PVOID v70; // [rsp+E8h] [rbp-58h]
  _BYTE v71[24]; // [rsp+F0h] [rbp-50h] BYREF
  int v72; // [rsp+108h] [rbp-38h]
  int *v73; // [rsp+110h] [rbp-30h]
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v74; // [rsp+118h] [rbp-28h]
  PVOID v75; // [rsp+120h] [rbp-20h]
  _BYTE v76[24]; // [rsp+128h] [rbp-18h] BYREF
  int v77; // [rsp+140h] [rbp+0h]
  _BYTE *v78; // [rsp+148h] [rbp+8h]
  ADAPTER_RENDER *v79; // [rsp+150h] [rbp+10h]
  PVOID P; // [rsp+158h] [rbp+18h]
  _BYTE v81[24]; // [rsp+160h] [rbp+20h] BYREF
  int v82; // [rsp+178h] [rbp+38h]
  PVOID v83; // [rsp+180h] [rbp+40h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v84[3]; // [rsp+188h] [rbp+48h] BYREF
  int v85; // [rsp+1A0h] [rbp+60h]
  struct _DXGKARG_DESCRIBEALLOCATION v86; // [rsp+1A8h] [rbp+68h] BYREF
  PVOID v87; // [rsp+1E0h] [rbp+A0h]
  _BYTE v88[96]; // [rsp+1E8h] [rbp+A8h] BYREF
  int v89; // [rsp+248h] [rbp+108h]
  PVOID v90; // [rsp+250h] [rbp+110h]
  _BYTE v91[132]; // [rsp+258h] [rbp+118h] BYREF
  int v92; // [rsp+2DCh] [rbp+19Ch]
  PVOID v93; // [rsp+2E0h] [rbp+1A0h]
  _BYTE v94[264]; // [rsp+2E8h] [rbp+1A8h] BYREF
  int v95; // [rsp+3F0h] [rbp+2B0h]

  v69 = a3;
  v79 = a2;
  v6 = a3;
  v73 = a4;
  v68 = a1;
  *a4 = 0;
  v7 = *((unsigned int *)a3 + 24);
  v8 = *((_QWORD *)a2 + 2);
  v74 = a5;
  v64 = v7;
  v9 = (unsigned int)(*(_DWORD *)(v8 + 2944) * v7);
  v87 = 0LL;
  v89 = 0;
  if ( (unsigned int)v9 > 3 )
  {
    v10 = (unsigned int)v9;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v9 < 0x20 )
      goto LABEL_146;
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 32LL * (unsigned int)v9, 1265072196LL, a3);
    v87 = Pool2;
    goto LABEL_4;
  }
  Pool2 = v88;
  *(_QWORD *)v67 = v88;
  v87 = v88;
  if ( (_DWORD)v9 )
  {
    memset(v88, 0, 32LL * (unsigned int)v9);
    Pool2 = v87;
LABEL_4:
    *(_QWORD *)v67 = Pool2;
  }
  v89 = v9;
  v10 = (unsigned int)v9;
  if ( Pool2 )
  {
    v70 = 0LL;
    v72 = 0;
    if ( (unsigned int)v9 <= 3 )
    {
      v12 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)v71;
      v70 = v71;
      if ( (_DWORD)v9 )
      {
        memset(v71, 0, 8 * v9);
        v12 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)v70;
      }
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v9 < 8 )
      {
        v12 = 0LL;
LABEL_10:
        v93 = 0LL;
        v95 = 0;
        if ( (unsigned int)v9 <= 3 )
        {
          v13 = v94;
          v78 = v94;
          v93 = v94;
          if ( !(_DWORD)v9 )
          {
LABEL_14:
            v95 = v9;
            if ( v13 )
            {
              v75 = 0LL;
              v77 = 0;
              if ( (unsigned int)v9 <= 3 )
              {
                v14 = (void **)v76;
                v75 = v76;
                if ( (_DWORD)v9 )
                {
                  memset(v76, 0, 8 * v9);
                  v14 = (void **)v75;
                }
              }
              else
              {
                if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v9 < 8 )
                  goto LABEL_133;
                v14 = (void **)ExAllocatePool2(256LL, 8 * v9, 1265072196LL, v6);
                v75 = v14;
              }
              v77 = v9;
              if ( v14 )
              {
                P = 0LL;
                v82 = 0;
                if ( (unsigned int)v9 <= 3 )
                {
                  v15 = v81;
                  P = v81;
                  if ( (_DWORD)v9 )
                  {
                    memset(v81, 0, 8 * v9);
                    v15 = P;
                  }
                }
                else
                {
                  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v9 < 8 )
                  {
LABEL_104:
                    CurrentProcess = PsGetCurrentProcess(a1);
                    WdLogSingleEntry3(3LL, (unsigned int)v9, -1073741801LL, CurrentProcess);
                    WdLogGlobalForLineNumber = 10091;
                    if ( P != v81 && P )
                      ExFreePoolWithTag(P, 0);
                    P = 0LL;
                    v82 = 0;
                    goto LABEL_108;
                  }
                  v15 = (_BYTE *)ExAllocatePool2(256LL, 8 * v9, 1265072196LL, v6);
                  P = v15;
                }
                v82 = v9;
                if ( v15 )
                {
                  v90 = 0LL;
                  v92 = 0;
                  if ( (unsigned int)v7 > 3 )
                  {
                    v17 = v7;
                    if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 0x2C )
                    {
LABEL_148:
                      v62 = PsGetCurrentProcess(a1);
                      WdLogSingleEntry3(3LL, v17, -1073741801LL, v62);
                      WdLogGlobalForLineNumber = 10103;
                      if ( v90 != v91 && v90 )
                        ExFreePoolWithTag(v90, 0);
                      v90 = 0LL;
                      v92 = 0;
                      if ( P != v81 && P )
                        ExFreePoolWithTag(P, 0);
                      P = 0LL;
                      v82 = 0;
                      if ( v75 != v76 && v75 )
                        ExFreePoolWithTag(v75, 0);
                      v75 = 0LL;
                      v77 = 0;
                      if ( v93 != v94 && v93 )
                        ExFreePoolWithTag(v93, 0);
                      v93 = 0LL;
                      v95 = 0;
                      if ( v70 != v71 && v70 )
                        ExFreePoolWithTag(v70, 0);
                      v70 = 0LL;
                      v72 = 0;
                      goto LABEL_119;
                    }
                    v16 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)ExAllocatePool2(
                                                                                              256LL,
                                                                                              44 * v7,
                                                                                              1265072196LL,
                                                                                              v6);
                    v90 = v16;
                  }
                  else
                  {
                    v16 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)v91;
                    *(_QWORD *)v66 = v91;
                    v90 = v91;
                    if ( !(_DWORD)v7 )
                      goto LABEL_27;
                    memset(v91, 0, 44 * v7);
                    v16 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)v90;
                  }
                  *(_QWORD *)v66 = v16;
LABEL_27:
                  v92 = v7;
                  v17 = v7;
                  if ( v16 )
                  {
                    v83 = 0LL;
                    v85 = 0;
                    if ( (unsigned int)v7 <= 3 )
                    {
                      v19 = v7;
                      v18 = v84;
                      v83 = v84;
                      if ( !(_DWORD)v17 )
                      {
LABEL_34:
                        v85 = v19;
LABEL_35:
                        if ( (_DWORD)v9 )
                        {
                          v20 = v78;
                          v21 = (_QWORD *)(*(_QWORD *)v67 + 24LL);
                          v22 = v12;
                          v23 = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)v67;
                          do
                          {
                            *v22 = v23++;
                            *v21 = v20;
                            ++v22;
                            v20 += 88;
                            v21 += 4;
                            --v10;
                          }
                          while ( v10 );
                        }
                        if ( (_DWORD)v17 )
                        {
                          v24 = v18;
                          v25 = v16;
                          do
                          {
                            *v24++ = v25++;
                            --v17;
                          }
                          while ( v17 );
                        }
                        v26 = v79;
                        v67[0] = 0;
                        v66[0] = 0;
                        v27 = DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*((DXGADAPTER **)v79 + 2));
                        v30 = -1;
                        if ( !v27 )
                          v30 = v68;
                        ADAPTER_DISPLAY::GetCheckMultiPlaneOverlayArgsUnsafe(
                          v69,
                          v30,
                          v9,
                          (struct DXGALLOCATION **)v15,
                          v67,
                          v29,
                          v66,
                          v28);
                        v31 = v67[0];
                        if ( v67[0] > (unsigned int)v9 )
                        {
                          WdLogSingleEntry0(1LL);
                          WdLogGlobalForLineNumber = 10155;
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146,
                            0xFFFFFFFFLL,
                            L"ActualPlaneCount <= MaxPlanes",
                            10155LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                        }
                        v32 = v66[0];
                        v68 = v66[0];
                        if ( v66[0] > v64 )
                        {
                          WdLogSingleEntry0(1LL);
                          WdLogGlobalForLineNumber = 10156;
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146,
                            0xFFFFFFFFLL,
                            L"ActualPostCompositionCount <= NumVidPnSources",
                            10156LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                        }
                        if ( (_DWORD)v31 )
                        {
                          v33 = v14;
                          v34 = v15 - (_BYTE *)v14;
                          v35 = v31;
                          do
                          {
                            *v33 = *(void **)((*(_QWORD **)((char *)v33 + v34))[6] + 16LL);
                            ++v33;
                            --v35;
                          }
                          while ( v35 );
                        }
                        v36 = DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*((DXGADAPTER **)v26 + 2));
                        v38 = v74;
                        v39 = v73;
                        if ( v36 )
                        {
                          CallCheckMultiPlaneOverlaySupport3DDI(v31, v12, v14, v32, v18, v69, v73, v74);
                        }
                        else if ( (unsigned int)v31 <= *(_DWORD *)(v37 + 2944) )
                        {
                          if ( *(_QWORD *)(v37 + 992) )
                            CallCheckMultiPlaneOverlaySupport2DDI(v31, v12, v14, v69, v73, v74);
                          else
                            CallCheckMultiPlaneOverlaySupport1DDI(v31, v12, v14, v69, v73, v74);
                        }
                        if ( *v39 == 1
                          && ADAPTER_DISPLAY::ConfigChangesOnMultipleOutputs(v69)
                          && !*(_BYTE *)(*((_QWORD *)v79 + 2) + 3051LL) )
                        {
                          *v39 = 0;
                          v38->Value = v38->Value & 0xFFFFFFE0 | 0x10;
                        }
                        v66[0] = *v39;
                        if ( bTracingEnabled )
                        {
                          v40 = FLOAT_1_0;
                          v41 = 1;
                          v65 = 1;
                          v42 = FLOAT_1_0;
                          v43 = 1;
                          v44 = 1LL;
                          v45 = 1LL;
                          if ( (_DWORD)v31 )
                          {
                            v46 = v12;
                            v47 = v31;
                            do
                            {
                              pPlaneAttributes = (*v46)->pPlaneAttributes;
                              v49 = (float)(pPlaneAttributes->DstRect.right - pPlaneAttributes->DstRect.left)
                                  / (float)(pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left);
                              if ( v49 > v40 )
                              {
                                v43 = pPlaneAttributes->DstRect.right - pPlaneAttributes->DstRect.left;
                                v41 = pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left;
                                v65 = v43;
                                v40 = (float)v43 / (float)v41;
                              }
                              else
                              {
                                v43 = v65;
                                if ( v42 > v49 )
                                {
                                  v44 = (unsigned int)(pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left);
                                  v45 = (unsigned int)(pPlaneAttributes->DstRect.right - pPlaneAttributes->DstRect.left);
                                  v42 = (float)(pPlaneAttributes->DstRect.right - pPlaneAttributes->DstRect.left)
                                      / (float)(pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left);
                                }
                              }
                              ++v46;
                              --v47;
                            }
                            while ( v47 );
                            v32 = v68;
                          }
                          if ( (_DWORD)v44 == 1 )
                          {
                            v45 = (unsigned int)v43;
                            v44 = (unsigned int)v41;
                          }
                          if ( v66[0] )
                          {
                            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                              McTemplateK0qqqqqq_EtwWriteTransfer(
                                1LL,
                                &EventCheckMultiPlaneOverlaySuccess,
                                v45,
                                (*v12)->VidPnSourceId,
                                v31,
                                v63,
                                v44,
                                v45,
                                0);
                          }
                          else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                          {
                            McTemplateK0qqqqqq_EtwWriteTransfer(
                              1LL,
                              &EventCheckMultiPlaneOverlayFail,
                              v45,
                              (*v12)->VidPnSourceId,
                              v31,
                              v63,
                              v44,
                              v45,
                              0);
                          }
                          if ( (_DWORD)v32 )
                          {
                            do
                            {
                              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                              {
                                v60 = (int *)*v18;
                                McTemplateK0qqddddddddq_EtwWriteTransfer(
                                  1LL,
                                  v44,
                                  v45,
                                  *v60,
                                  v60[1],
                                  v60[2],
                                  v60[4],
                                  v60[3],
                                  v60[5],
                                  v60[6],
                                  v60[8],
                                  v60[7],
                                  v60[9],
                                  v60[10]);
                              }
                              ++v18;
                              --v32;
                            }
                            while ( v32 );
                          }
                          if ( (_DWORD)v31 )
                          {
                            v50 = (char *)v12 - (char *)v14;
                            v51 = v31;
                            do
                            {
                              v52 = *v14;
                              v53 = 0;
                              v54 = *(__int64 *)((char *)v14 + v50);
                              if ( *v14 )
                              {
                                memset(&v86.Width, 0, 40);
                                v86.hAllocation = v52;
                                if ( (int)ADAPTER_RENDER::DdiDescribeAllocation(v79, &v86) >= 0 )
                                  v53 = v86.Format >= 0xFFFFFF;
                              }
                              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                              {
                                v55 = *(_DWORD **)(v54 + 24);
                                McTemplateK0qqqddddddddddddqqqqqq_EtwWriteTransfer(
                                  (__int64)v55,
                                  v44,
                                  v45,
                                  *(_DWORD *)(v54 + 16),
                                  v53,
                                  *v55,
                                  v55[1],
                                  v55[3],
                                  v55[2],
                                  v55[4],
                                  v55[5],
                                  v55[7],
                                  v55[6],
                                  v55[8],
                                  v55[9],
                                  v55[11],
                                  v55[10],
                                  v55[12],
                                  v55[13],
                                  v55[14],
                                  v55[18],
                                  v55[19],
                                  *(_DWORD *)v54,
                                  v55[20]);
                              }
                              ++v14;
                              --v51;
                            }
                            while ( v51 );
                          }
                        }
                        if ( v83 != v84 && v83 )
                          ExFreePoolWithTag(v83, 0);
                        v83 = 0LL;
                        v85 = 0;
                        if ( v90 != v91 && v90 )
                          ExFreePoolWithTag(v90, 0);
                        v90 = 0LL;
                        v92 = 0;
                        if ( P != v81 && P )
                          ExFreePoolWithTag(P, 0);
                        P = 0LL;
                        v82 = 0;
                        if ( v75 != v76 && v75 )
                          ExFreePoolWithTag(v75, 0);
                        v75 = 0LL;
                        v77 = 0;
                        if ( v93 != v94 && v93 )
                          ExFreePoolWithTag(v93, 0);
                        v93 = 0LL;
                        v95 = 0;
                        if ( v70 != v71 && v70 )
                          ExFreePoolWithTag(v70, 0);
                        v70 = 0LL;
                        v72 = 0;
                        if ( v87 != v88 )
                        {
                          if ( v87 )
                            ExFreePoolWithTag(v87, 0);
                        }
                        return 0LL;
                      }
                      memset(v84, 0, 8 * v17);
                      v18 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)v83;
                    }
                    else
                    {
                      if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 8 )
                      {
                        v18 = 0LL;
                        goto LABEL_35;
                      }
                      v18 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)ExAllocatePool2(
                                                                                                 256LL,
                                                                                                 8 * v7,
                                                                                                 1265072196LL,
                                                                                                 v6);
                      v83 = v18;
                    }
                    v16 = *(struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)v66;
                    v19 = v17;
                    goto LABEL_34;
                  }
                  goto LABEL_148;
                }
                goto LABEL_104;
              }
LABEL_133:
              v59 = PsGetCurrentProcess(a1);
              WdLogSingleEntry3(3LL, (unsigned int)v9, -1073741801LL, v59);
              WdLogGlobalForLineNumber = 10079;
LABEL_108:
              if ( v75 != v76 && v75 )
                ExFreePoolWithTag(v75, 0);
              v75 = 0LL;
              v77 = 0;
              goto LABEL_112;
            }
LABEL_129:
            v58 = PsGetCurrentProcess(a1);
            WdLogSingleEntry3(3LL, (unsigned int)v9, -1073741801LL, v58);
            WdLogGlobalForLineNumber = 10067;
LABEL_112:
            if ( v93 != v94 && v93 )
              ExFreePoolWithTag(v93, 0);
            v93 = 0LL;
            v95 = 0;
            if ( v70 != v71 && v70 )
              ExFreePoolWithTag(v70, 0);
            v70 = 0LL;
            v72 = 0;
            goto LABEL_119;
          }
          memset(v94, 0, 88LL * (unsigned int)v9);
          v13 = v93;
        }
        else
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v9 < 0x58 )
            goto LABEL_129;
          v13 = (_BYTE *)ExAllocatePool2(256LL, 88LL * (unsigned int)v9, 1265072196LL, v6);
          v93 = v13;
        }
        v78 = v13;
        goto LABEL_14;
      }
      v12 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)ExAllocatePool2(256LL, 8 * v9, 1265072196LL, v6);
      v70 = v12;
    }
    v72 = v9;
    goto LABEL_10;
  }
LABEL_146:
  v61 = PsGetCurrentProcess(a1);
  WdLogSingleEntry3(3LL, v10, -1073741801LL, v61);
  WdLogGlobalForLineNumber = 10043;
LABEL_119:
  if ( v87 != v88 && v87 )
    ExFreePoolWithTag(v87, 0);
  return 3221225495LL;
}
