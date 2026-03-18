/*
 * XREFs of ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1403F49F0
 * Callers:
 *     ?DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1403F4730 (-DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x140022A50 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x140026BF0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002FD80 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140038CCC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x14003B7CC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140040288 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004F834 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x140059DF4 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z @ 0x14005B118 (-GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x14006302C (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledDeviceUsageNoInline @ 0x140067A98 (Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x140198374 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x140199078 (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x140199FC4 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x14019A350 (-PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?PresentQualcommPanelRefreshWorkaround@@YAXPEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z @ 0x1401B4928 (-PresentQualcommPanelRefreshWorkaround@@YAXPEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z @ 0x1401DCBEC (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14028EBBC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1402A8BD4 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1402E0FA8 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x140374788 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x140379D94 (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403D3630 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 */

__int64 __fastcall PresentCddShadowBuffer(struct DXGCONTEXT *a1, struct DXGHWQUEUE *a2, unsigned int a3)
{
  __int64 v3; // rsi
  int v4; // r14d
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // r9
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int CddShadowPitch; // eax
  ADAPTER_DISPLAY *v14; // rcx
  const struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rax
  __int64 v16; // rcx
  unsigned int Width; // r12d
  unsigned int Height; // r13d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v20; // ebx
  int IsEnabledDeviceUsageNoInline; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v22; // eax
  struct DXGGLOBAL *Global; // rax
  int *v24; // rbx
  int v25; // eax
  int v26; // r9d
  int v27; // r8d
  int v28; // edx
  LONG v29; // r12d
  struct tagRECT v30; // xmm6
  LONG v31; // r8d
  int left; // r9d
  LONG v33; // edx
  int v34; // ecx
  LONG v35; // r10d
  LONG v36; // ecx
  unsigned int right; // ecx
  unsigned int top; // r11d
  unsigned int bottom; // eax
  unsigned __int8 *v40; // r13
  unsigned int v41; // edi
  unsigned int v42; // esi
  int v43; // eax
  __int64 v44; // r8
  unsigned __int64 v45; // rcx
  int v46; // eax
  __int64 v47; // rcx
  ADAPTER_DISPLAY *v48; // rcx
  __int64 v49; // rbx
  unsigned int v50; // r14d
  int v51; // eax
  __int64 v52; // rbx
  unsigned int v53; // [rsp+58h] [rbp-B0h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v54; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v55[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct DXGCONTEXT *v56; // [rsp+68h] [rbp-A0h] BYREF
  int v57; // [rsp+70h] [rbp-98h]
  unsigned int v58; // [rsp+74h] [rbp-94h]
  struct _D3DKMT_UNLOCK v59; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v60[16]; // [rsp+88h] [rbp-80h] BYREF
  struct _D3DKMT_LOCK v61; // [rsp+98h] [rbp-70h] BYREF
  struct _DXGKARG_PRESENT_DISPLAYONLY v62; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v63[24]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v64[7]; // [rsp+120h] [rbp+18h] BYREF
  _D3DKMT_SUBMITPRESENTTOHWQUEUE v65; // [rsp+158h] [rbp+50h] BYREF
  struct tagRECT v66; // [rsp+738h] [rbp+630h] BYREF
  struct tagRECT v67; // [rsp+748h] [rbp+640h] BYREF
  unsigned __int8 *v68[2]; // [rsp+758h] [rbp+650h] BYREF
  struct tagRECT v69; // [rsp+768h] [rbp+660h] BYREF
  _BYTE v70[160]; // [rsp+778h] [rbp+670h] BYREF

  v3 = a3;
  v58 = a3;
  v55[1] = 0;
  v53 = 0;
  *(_QWORD *)&v59.hDevice = a2;
  v56 = a1;
  v4 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 368);
  if ( !v4 )
    return 0LL;
  v6 = *((_QWORD *)v56 + 2);
  v7 = *(_QWORD *)(v6 + 1896);
  *(_QWORD *)&v69.left = v7;
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
    (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v60,
    (struct DXGDEVICE *)v6);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v64,
    &v56,
    1u,
    v8,
    1);
  if ( !v64[0] )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4881;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"PresentCddShadowBuffer: Out of memory - could not initialize context array lock exclusive",
      4881LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v64);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v60);
    return 3221225495LL;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v63,
    *(struct DXGADAPTER **)(*(_QWORD *)(v6 + 16) + 16LL),
    1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v70, v6, 1, v9, 0);
  v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v70, 0LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry2(4LL, v10, v6);
    WdLogGlobalForLineNumber = 4891;
LABEL_16:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v70);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v63);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v64);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v60);
    return v11;
  }
  ADAPTER_DISPLAY::GetCddAllocationHandles(*(ADAPTER_DISPLAY **)(v7 + 3120), v3, &v55[1], &v53);
  if ( !v55[1] || !v53 )
  {
    v12 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
            *(ADAPTER_DISPLAY **)(v7 + 3120),
            (struct DXGDEVICE *)v6,
            v3,
            &v55[1],
            &v53,
            (struct COREDEVICEACCESS *)v70);
    v11 = v12;
    if ( v12 == -1073741637 )
    {
      v11 = -1071775482;
      WdLogSingleEntry3(4LL, v7, v3, -1071775482LL);
      WdLogGlobalForLineNumber = 4911;
      goto LABEL_16;
    }
    if ( v12 < 0 )
    {
      WdLogSingleEntry3(4LL, v7, v3, v12);
      WdLogGlobalForLineNumber = 4919;
      goto LABEL_16;
    }
  }
  CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(*(ADAPTER_DISPLAY **)(v7 + 3120), v3);
  v14 = *(ADAPTER_DISPLAY **)(v7 + 3120);
  v55[0] = CddShadowPitch;
  CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode(v14, v3);
  v16 = *(_QWORD *)(v7 + 3120);
  v68[0] = (unsigned __int8 *)CddDisplayMode;
  Width = CddDisplayMode->Width;
  Height = CddDisplayMode->Height;
  CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v16, v3, 1);
  memset(&v61, 0, sizeof(v61));
  v61.hAllocation = v53;
  v20 = CurrentOrientation;
  v54 = CurrentOrientation;
  v66 = 0LL;
  v61.hDevice = *(_DWORD *)(v6 + 468);
  IsEnabledDeviceUsageNoInline = Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledDeviceUsageNoInline();
  v57 = DXGDEVICE::Lock((DXGDEVICE *)v6, &v61, (struct COREDEVICEACCESS *)v70, IsEnabledDeviceUsageNoInline != 0);
  if ( v57 < 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4970;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"PresentCddShadowBuffer: Failed to lock shadow buffer.",
      4970LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v11 = v57;
    goto LABEL_16;
  }
  if ( !v61.pData )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4976;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"PresentCddShadowBuffer: The locked data pointer is invalid.",
      4976LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v11 = -1073741823;
    goto LABEL_16;
  }
  if ( v4 == 1 )
  {
    if ( ((v20 - 2) & 0xFFFFFFFD) == 0 )
    {
      v22 = D3DKMDT_VPPR_ROTATE90;
      if ( v20 == D3DKMDT_VPPR_ROTATE90 )
        v22 = D3DKMDT_VPPR_ROTATE270;
      Width = *((_DWORD *)v68[0] + 1);
      Height = *(_DWORD *)v68[0];
      v54 = v22;
    }
    v68[0] = *((unsigned __int8 **)DXGGLOBAL::GetGlobal() + 185);
    if ( v68[0] )
    {
      v67 = 0LL;
      Global = DXGGLOBAL::GetGlobal();
      v24 = (int *)((char *)Global + 1488);
      if ( GetShadowBufferDirtyRect(&v67, *((_DWORD *)Global + 372), *((_DWORD *)Global + 373)) )
      {
        v25 = v24[3];
        if ( v25 == 20 )
        {
          if ( *v24 > Width || v24[1] > Height )
            goto LABEL_66;
          v30 = v67;
          v66 = v67;
          v31 = _mm_cvtsi128_si32((__m128i)v67);
          if ( *v24 == Width )
          {
            left = _mm_cvtsi128_si32((__m128i)v67);
            v33 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v67, 8));
          }
          else
          {
            left = v31 + ((Width - *v24) >> 1);
            v66.left = left;
            v33 = ((Width - *v24) >> 1) + v66.right;
            v66.right = v33;
            v30 = v66;
          }
          v34 = v24[1];
          if ( v34 == Height )
          {
            v36 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v30, 12));
            v35 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v30, 4));
          }
          else
          {
            v35 = ((Height - v34) >> 1) + v66.top;
            v66.top = v35;
            v36 = ((Height - v24[1]) >> 1) + v66.bottom;
            v66.bottom = v36;
            v30 = v66;
          }
          if ( left < 0
            || left > v33
            || v35 < 0
            || v35 > v36
            || v33 > Width
            || v36 > Height
            || v31 < 0
            || (right = v67.right, v31 > v67.right)
            || (top = v67.top, v67.top < 0)
            || (bottom = v67.bottom, v67.top > v67.bottom)
            || v67.right > (unsigned int)*v24
            || v67.bottom > (unsigned int)v24[1] )
          {
            if ( byte_14015F146 )
            {
              DxgCreateLiveDumpWithWdLogs(
                403LL,
                2057LL,
                (unsigned __int16)v24[1] | (unsigned __int64)(unsigned int)(*v24 << 16),
                (unsigned __int16)Height | (unsigned __int64)(Width << 16),
                0LL,
                0);
              byte_14015F146 = 0;
            }
            goto LABEL_66;
          }
          if ( v67.top < (unsigned int)v67.bottom )
          {
            v40 = v68[0];
            v41 = v31;
            v42 = v55[0];
            do
            {
              if ( v41 < right )
              {
                do
                {
                  v43 = 3 * v41++;
                  v44 = v43 + v24[2] * top;
                  v45 = v42 * v35 + (unsigned __int64)(unsigned int)(4 * left++);
                  *(_DWORD *)((char *)v61.pData + v45) = v40[v44] | ((v40[(unsigned int)(v44 + 1)] | (v40[(unsigned int)(v44 + 2)] << 8)) << 8);
                  right = v67.right;
                }
                while ( v41 < v67.right );
                left = v66.left;
                bottom = v67.bottom;
                v41 = v67.left;
              }
              ++v35;
              ++top;
            }
            while ( top < bottom );
            v30 = v66;
            v7 = *(_QWORD *)&v69.left;
            LODWORD(v3) = v58;
          }
          v29 = v55[0];
        }
        else
        {
          if ( v25 != 22 )
            goto LABEL_66;
          v26 = v24[2];
          v27 = v24[1];
          v28 = *v24;
          v69.left = 0;
          v69.top = 0;
          v69.right = Width;
          v29 = v55[0];
          v69.bottom = Height;
          if ( (int)DxgkpBlitA8R8R8G8(
                      v68[0],
                      v28,
                      v27,
                      v26,
                      v54,
                      (unsigned __int8 *)v61.pData,
                      v55[0],
                      &v69,
                      &v67,
                      &v66) < 0 )
            goto LABEL_66;
          v30 = v66;
        }
        if ( *(_QWORD *)(v6 + 1896) == *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL) )
        {
          memset(&v65, 0, sizeof(v65));
          v54 = D3DKMDT_VPPR_UNINITIALIZED;
          if ( *(_QWORD *)&v59.hDevice )
          {
            v54 = *(_DWORD *)(*(_QWORD *)&v59.hDevice + 24LL);
            v65.hHwQueues = (D3DKMT_HANDLE *)&v54;
          }
          v65.PrivatePresentData.Flags.Value |= 1u;
          v65.PrivatePresentData.hDevice = *((_DWORD *)v56 + 6);
          v65.PrivatePresentData.pSrcSubRects = (const RECT *)v68;
          v65.PrivatePresentData.hSource = v53;
          v65.PrivatePresentData.hDestination = v55[1];
          v65.PrivatePresentData.DstRect = v30;
          v65.PrivatePresentData.SubRectCnt = 1;
          v65.PrivatePresentData.SrcRect = v30;
          *(struct tagRECT *)v68 = v30;
          v46 = DXGCONTEXT::PresentFromCdd(
                  v56,
                  &v65,
                  v3,
                  (struct COREDEVICEACCESS *)v70,
                  (struct DXGADAPTERSTOPRESETLOCKSHARED *)v63,
                  &v56);
          if ( v46 >= 0 )
          {
            if ( (**(_DWORD **)(v7 + 3008) & 0x10) != 0 )
              PresentQualcommPanelRefreshWorkaround(v56, (ADAPTER_DISPLAY **)v7, v3);
            goto LABEL_66;
          }
        }
        else
        {
          v47 = *(_QWORD *)(v7 + 3120);
          *(&v62.VidPnSourceId + 1) = 0;
          *(&v62.NumDirtyRects + 1) = 0;
          v62.pfnPresentDisplayOnlyProgress = 0LL;
          ADAPTER_DISPLAY::GetCurrentOrientation(v47, v3, 1);
          v48 = *(ADAPTER_DISPLAY **)(v7 + 3120);
          v62.Flags.Value = 0;
          v62.NumMoves = 0;
          v62.pMoves = 0LL;
          v62.pSource = v61.pData;
          v62.pDirtyRect = &v66;
          v62.VidPnSourceId = v3;
          v62.BytesPerPixel = 4;
          v62.Pitch = v29;
          v62.NumDirtyRects = 1;
          v46 = ADAPTER_DISPLAY::PresentDisplayOnlyCdd(v48, &v62);
          if ( v46 >= 0 )
            goto LABEL_66;
        }
        v49 = v46;
        WdLogSingleEntry1(2LL, v46);
        WdLogGlobalForLineNumber = 5206;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"PresentCddShadowBuffer: PresentFromCdd failed. Status = 0x%I64x",
          v49,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
  }
LABEL_66:
  v59.hDevice = *(_DWORD *)(v6 + 468);
  v59.NumAllocations = 1;
  v59.phAllocations = &v53;
  v50 = DXGDEVICE::Unlock((DXGDEVICE *)v6, &v59, 0);
  if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v7)
    && !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(ADAPTER_DISPLAY **)(v7 + 3120), v3)
    && (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v7 + 3120), v3)
    && !ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)(v7 + 3120), v3) )
  {
    v51 = ADAPTER_DISPLAY::PresentCddPrimary(*(PERESOURCE ***)(v7 + 3120), v56, v3, (struct COREDEVICEACCESS *)v70);
    if ( v51 < 0 )
    {
      v52 = v51;
      WdLogSingleEntry2(2LL, v56, v51);
      WdLogGlobalForLineNumber = 5234;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"PresentFromCdd failed to present the newly created Cdd Primary (Status = 0x%I64x).",
        (__int64)v56,
        v52,
        0LL,
        0LL,
        0LL);
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v70);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v63);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v64);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v60);
  return v50;
}
