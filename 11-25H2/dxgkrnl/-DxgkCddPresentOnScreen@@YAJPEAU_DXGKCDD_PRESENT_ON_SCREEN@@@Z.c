/*
 * XREFs of ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x140412F30
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1400138E0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14001D8E0 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1400262A0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002F740 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140038EBC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x140039A2C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x14003BE0C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003EC00 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140040898 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004FDB4 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x14005A3F4 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x14006273C (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x14006783C (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledDeviceUsageNoInline @ 0x140067E20 (Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     _DxgkCddPresentOnScreen_::_46_::ENSURE_FREE_MEMORY::_ENSURE_FREE_MEMORY @ 0x140189894 (_DxgkCddPresentOnScreen_--_46_--ENSURE_FREE_MEMORY--_ENSURE_FREE_MEMORY.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x140195FE8 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x140196BEC (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x140197B38 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x140197EC4 (-PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1401B2794 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z @ 0x1401D795C (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x140288C10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1402CAA10 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1402DC858 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1402E9830 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1402E9934 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403345B4 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14033599C (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14035601C (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1403808B0 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1403886A4 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x14038D54C (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 */

__int64 __fastcall DxgkCddPresentOnScreen(struct _DXGKCDD_PRESENT_ON_SCREEN *a1)
{
  char v2; // r14
  __int64 v3; // r15
  unsigned int v4; // edx
  struct DXGADAPTER *v5; // rcx
  int PairingAdapters; // eax
  __int64 v7; // rdi
  __int64 v8; // rax
  DXGADAPTER *v10; // rbx
  DXGGLOBAL *Global; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  DXGSESSIONDATA *SessionData; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // eax
  int v23; // eax
  const wchar_t *v24; // r9
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  SESSION_VIEW *v30; // rsi
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // eax
  __int64 v37; // rax
  struct DISPLAY_SOURCE *v38; // rbx
  ADAPTER_DISPLAY *v39; // rax
  __int64 v40; // r14
  struct DXGGLOBAL *v41; // rax
  _QWORD *v42; // rax
  _QWORD *v43; // rsi
  int CddDeviceAndContextForCurrentSession; // eax
  unsigned __int64 v45; // rax
  struct DXGDEVICE *v46; // rbx
  __int64 v47; // r9
  __int64 v48; // r9
  int v49; // eax
  unsigned int v50; // r15d
  D3DKMT_HANDLE v51; // ecx
  int v52; // eax
  LONG right; // ecx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // eax
  __int64 v55; // rcx
  unsigned int v56; // edx
  struct tagRECT *i; // r8
  __int64 v58; // rcx
  char v59; // r9
  int v60; // eax
  __int64 v61; // rsi
  __int64 v62; // rbx
  ADAPTER_DISPLAY *v63; // r14
  unsigned int v64; // r13d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v65; // esi
  __int64 v66; // rdi
  struct tagRECT *v67; // rbx
  int CddShadowPitch; // eax
  char v69; // bl
  int v70; // eax
  int v71; // ecx
  unsigned int v72; // eax
  unsigned int v73; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v74; // r8d
  int v75; // eax
  bool v76; // zf
  ADAPTER_DISPLAY *v77; // rbx
  LONG v78; // eax
  int v79; // eax
  struct tagRECT *v80; // rsi
  int v81; // eax
  char v82; // r9
  int v83; // eax
  __int64 v84; // rsi
  __int64 v85; // rbx
  LONG v86; // eax
  unsigned int v87; // eax
  unsigned int v88; // r13d
  ADAPTER_DISPLAY *v89; // r15
  int v90; // edi
  struct tagRECT *v91; // r14
  unsigned __int8 *v92; // rsi
  int v93; // ebx
  int v94; // eax
  unsigned int v95; // ebx
  int v96; // eax
  __int64 v97; // rbx
  struct tagRECT *v98; // rdi
  const wchar_t *v99; // r9
  struct tagRECT *v100; // rax
  __int64 v101; // rax
  __int64 v102; // rsi
  struct DXGDEVICE *v103; // rbx
  __int64 v104; // r9
  const char *v105; // rdx
  __int64 v106; // rbx
  __int64 v107; // r9
  const char *v108; // rdx
  struct DXGCONTEXT *v109; // rsi
  __int64 v110; // rbx
  __int64 v111; // r9
  const char *v112; // rdx
  struct DXGDEVICE *v113; // rcx
  DXGSESSIONDATA **v114; // rdx
  __int64 v115; // [rsp+28h] [rbp-E0h]
  __int64 v116; // [rsp+30h] [rbp-D8h]
  struct tagRECT *v117; // [rsp+30h] [rbp-D8h]
  __int64 v118; // [rsp+38h] [rbp-D0h]
  char v119; // [rsp+58h] [rbp-B0h]
  char v120; // [rsp+59h] [rbp-AFh] BYREF
  char v121; // [rsp+5Ah] [rbp-AEh]
  unsigned int v122; // [rsp+5Ch] [rbp-ACh]
  unsigned int v123; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v124; // [rsp+64h] [rbp-A4h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v125[2]; // [rsp+68h] [rbp-A0h]
  struct DXGCONTEXT *v126; // [rsp+70h] [rbp-98h] BYREF
  struct tagRECT *v127; // [rsp+78h] [rbp-90h]
  ADAPTER_DISPLAY *v128; // [rsp+80h] [rbp-88h]
  unsigned int v129; // [rsp+88h] [rbp-80h]
  DXGDEVICE *v130; // [rsp+90h] [rbp-78h]
  struct DXGDEVICE *v131; // [rsp+98h] [rbp-70h] BYREF
  struct DXGHWQUEUE *v132; // [rsp+A0h] [rbp-68h]
  int v133; // [rsp+A8h] [rbp-60h] BYREF
  struct DXGHWQUEUE *v134; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v135; // [rsp+B8h] [rbp-50h]
  DXGADAPTER *v136; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v137; // [rsp+C8h] [rbp-40h]
  __int64 v138; // [rsp+D0h] [rbp-38h]
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // [rsp+D8h] [rbp-30h]
  struct _D3DKMT_UNLOCK v140; // [rsp+E0h] [rbp-28h] BYREF
  struct _D3DKMT_LOCK v141; // [rsp+F0h] [rbp-18h] BYREF
  PVOID v142; // [rsp+120h] [rbp+18h] BYREF
  DXGSESSIONDATA **v143; // [rsp+128h] [rbp+20h]
  unsigned __int64 v144; // [rsp+130h] [rbp+28h] BYREF
  struct _DXGKARG_PRESENT_DISPLAYONLY v145; // [rsp+138h] [rbp+30h] BYREF
  struct _LUID v146; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v147[16]; // [rsp+180h] [rbp+78h] BYREF
  _BYTE v148[16]; // [rsp+190h] [rbp+88h] BYREF
  _BYTE v149[16]; // [rsp+1A0h] [rbp+98h] BYREF
  _BYTE v150[16]; // [rsp+1B0h] [rbp+A8h] BYREF
  _BYTE v151[24]; // [rsp+1C0h] [rbp+B8h] BYREF
  _BYTE v152[24]; // [rsp+1D8h] [rbp+D0h] BYREF
  _BYTE v153[24]; // [rsp+1F0h] [rbp+E8h] BYREF
  _BYTE v154[24]; // [rsp+208h] [rbp+100h] BYREF
  _QWORD v155[7]; // [rsp+220h] [rbp+118h] BYREF
  struct tagRECT v156; // [rsp+258h] [rbp+150h] BYREF
  struct tagRECT v157; // [rsp+268h] [rbp+160h] BYREF
  struct tagRECT v158; // [rsp+278h] [rbp+170h] BYREF
  _BYTE v159[160]; // [rsp+288h] [rbp+180h] BYREF
  _BYTE v160[160]; // [rsp+328h] [rbp+220h] BYREF
  _BYTE v161[160]; // [rsp+3C8h] [rbp+2C0h] BYREF
  _BYTE v162[160]; // [rsp+468h] [rbp+360h] BYREF
  _BYTE v163[64]; // [rsp+508h] [rbp+400h] BYREF

  v136 = 0LL;
  v2 = 0;
  v121 = 0;
  if ( a1 )
  {
    if ( *(_DWORD *)a1 > 3u )
    {
      LODWORD(v3) = -1073741811;
      WdLogSingleEntry2(4LL, *(int *)a1, -1073741811LL);
      WdLogGlobalForLineNumber = 1008;
      return (unsigned int)v3;
    }
    v4 = *((_DWORD *)a1 + 4);
    v5 = (struct DXGADAPTER *)*((_QWORD *)a1 + 1);
    v144 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v5, v4, 0LL, 0LL, &v136, &v144, 0);
    v7 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      WdLogSingleEntry3(2LL, *((_QWORD *)a1 + 1), *((unsigned int *)a1 + 4), PairingAdapters);
      v8 = *((_QWORD *)a1 + 1);
      v116 = *((unsigned int *)a1 + 4);
      WdLogGlobalForLineNumber = 1028;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to get bound display adapter from Adapter 0x%I64x VidPn source ID 0x%I64x in DxgkCddPresentOnScreen (ntSt"
         "atus = 0x%I64x).",
        v8,
        v116,
        v7,
        0LL,
        0LL);
      return (unsigned int)v7;
    }
    v10 = v136;
    if ( !v136 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1033;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pDisplayAdapter != NULL", 1033LL, 0LL, 0LL, 0LL, 0LL);
    }
    v146 = *(struct _LUID *)((char *)v10 + 412);
    DXGADAPTER::ReleaseReference(v10);
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global);
    if ( !SessionData )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v13, v12, v15, v16);
      LODWORD(v3) = -1073741811;
      WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
      WdLogGlobalForLineNumber = 1047;
      v22 = PsGetCurrentProcessSessionId(v19, v18, v20, v21);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
        v22,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v3;
    }
    v120 = 0;
    v23 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v120, 0);
    v3 = v23;
    if ( v23 < 0 )
    {
      WdLogSingleEntry1(2LL, v23);
      v24 = L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)";
      WdLogGlobalForLineNumber = 1060;
LABEL_141:
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v24, v3, 0LL, 0LL, 0LL, 0LL);
LABEL_142:
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v120);
      return (unsigned int)v3;
    }
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionData, &v146, *((_DWORD *)a1 + 4));
    v143 = SessionViewFromSource;
    v30 = (SESSION_VIEW *)SessionViewFromSource;
    if ( !SessionViewFromSource )
    {
      v31 = PsGetCurrentProcessSessionId(v27, v26, v28, v29);
      LODWORD(v3) = -1073741811;
      WdLogSingleEntry4(2LL, *((unsigned int *)a1 + 4), v10, v31, -1073741811LL);
      WdLogGlobalForLineNumber = 1075;
      v36 = PsGetCurrentProcessSessionId(v33, v32, v34, v35);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Cannot find the session view for VidPn source 0x%I64x on adapter 0x%I64x in session 0x%I64x, returning 0x%I64x.",
        *((unsigned int *)a1 + 4),
        (__int64)v10,
        v36,
        -1073741811LL,
        0LL);
      goto LABEL_142;
    }
    if ( *((_DWORD *)a1 + 8) != *((_DWORD *)SessionViewFromSource + 8) - *((_DWORD *)SessionViewFromSource + 6)
      || *((_DWORD *)a1 + 9) != *((_DWORD *)SessionViewFromSource + 9) - *((_DWORD *)SessionViewFromSource + 7) )
    {
      v3 = -1073741811LL;
      WdLogSingleEntry1(2LL, -1073741811LL);
      v24 = L"Caller specified shadow surface size dose not match the virtual mode size in session view, returning 0x%I64x.";
      WdLogGlobalForLineNumber = 1085;
      goto LABEL_141;
    }
    v37 = *((unsigned int *)a1 + 19);
    if ( (unsigned int)v37 > 4 )
    {
      v45 = 16 * v37;
      if ( !is_mul_ok(*((unsigned int *)a1 + 19), 0x10uLL) )
        v45 = -1LL;
      v127 = (struct tagRECT *)operator new[](v45, 0x4B677844u, 256LL, v29);
      if ( !v127 )
      {
        WdLogSingleEntry2(6LL, *((unsigned int *)a1 + 19), -1073741801LL);
        v115 = *((unsigned int *)a1 + 19);
        WdLogGlobalForLineNumber = 1104;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          0xFFFFFFFFLL,
          L"Failed to allocate buffer for destination rectangle list for 0x%I64x RECTs, returning 0x%I64x.",
          v115,
          -1073741801LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v3) = -1073741801;
        goto LABEL_142;
      }
    }
    else
    {
      v127 = (struct tagRECT *)v163;
    }
    PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v30);
    v38 = PrimaryDisplaySource;
    if ( !PrimaryDisplaySource )
    {
LABEL_134:
      if ( v127 != (struct tagRECT *)v163 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v127);
      if ( v2 )
        LODWORD(v3) = 0;
      goto LABEL_142;
    }
    while ( 1 )
    {
      v39 = (ADAPTER_DISPLAY *)*((_QWORD *)v38 + 1);
      v126 = 0LL;
      v156 = 0LL;
      v131 = 0LL;
      memset(&v141, 0, sizeof(v141));
      v134 = 0LL;
      v123 = 0;
      v40 = *((_QWORD *)v39 + 2);
      v124 = 0;
      v119 = 0;
      v128 = v39;
      v138 = v40;
      v136 = (DXGADAPTER *)v40;
      v140 = 0LL;
      if ( !v40 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1131;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pDisplayAdapter != NULL", 1131LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( !*(_QWORD *)(v40 + 3120) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1132;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pDisplayAdapter->IsDisplayAdapter()",
          1132LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v122 = *((_DWORD *)v38 + 4);
      v41 = DXGGLOBAL::GetGlobal();
      v42 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v41 + 1200));
      v135 = (unsigned __int64)v42;
      v43 = v42;
      if ( !v42 )
      {
        LODWORD(v3) = -1073741801;
        goto LABEL_142;
      }
      memset(v42, 0, 0x5E0uLL);
      v142 = v43;
      CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                               (struct _LUID *)(v40 + 412),
                                               &v131,
                                               &v126,
                                               &v134,
                                               0);
      v3 = CddDeviceAndContextForCurrentSession;
      if ( CddDeviceAndContextForCurrentSession >= 0 )
        break;
      WdLogSingleEntry2(2LL, v40, CddDeviceAndContextForCurrentSession);
      WdLogGlobalForLineNumber = 1161;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to get CDD device and context on adapter 0x%I64x for current session (Status = 0x%I64x).",
        v40,
        v3,
        0LL,
        0LL,
        0LL);
LABEL_130:
      DxgkCddPresentOnScreen_::_46_::ENSURE_FREE_MEMORY::_ENSURE_FREE_MEMORY(&v142);
      v38 = 0LL;
      v114 = (DXGSESSIONDATA **)*((_QWORD *)PrimaryDisplaySource + 7);
      if ( v114 != v143 + 6 )
        v38 = (struct DISPLAY_SOURCE *)(v114 - 7);
      PrimaryDisplaySource = v38;
      if ( !v38 )
      {
        v2 = v121;
        goto LABEL_134;
      }
    }
    v46 = v131;
    v130 = v131;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v147, v131);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v155,
      &v126,
      1u,
      v47,
      1);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v151,
      *(struct DXGADAPTER **)(*((_QWORD *)v46 + 2) + 16LL),
      1);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v159, (__int64)v46, 1, v48, 0);
    v132 = v134;
    if ( !v155[0] )
    {
      LODWORD(v3) = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 1184;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Out of memory - could not initialize context array lock exclusive, returning 0x%I64x.",
        -1073741801LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_108;
    }
    v49 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v159, 0LL);
    v3 = v49;
    if ( v49 < 0 )
    {
      WdLogSingleEntry2(2LL, v46, v49);
      WdLogGlobalForLineNumber = 1193;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to acquire device core access shared on device 0x%I64x (Status = 0x%I64x).",
        (__int64)v46,
        v3,
        0LL,
        0LL,
        0LL);
LABEL_108:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v159);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v151);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v155);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v147);
      if ( v132 )
      {
        v101 = _InterlockedDecrement64((volatile signed __int64 *)v132 + 13);
        if ( v101 >= 0 )
        {
          if ( !v101 )
          {
            v102 = *((_QWORD *)v134 + 2);
            v103 = *(struct DXGDEVICE **)(v102 + 16);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v148, v103);
            DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
              (DXGADAPTERSTOPRESETLOCKSHARED *)v154,
              *(struct DXGADAPTER **)(*((_QWORD *)v103 + 2) + 16LL),
              1);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v160, (__int64)v103, 2, v104, 0);
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v160, v105);
            if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v103 + 2) + 16LL) + 200LL) != 4 )
              DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v102, v134, (struct COREDEVICEACCESS *)v160);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v160);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v154);
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v148);
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v102 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            {
              v106 = *(_QWORD *)(v102 + 16);
              DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                (DXGDEVICEACCESSLOCKEXCLUSIVE *)v149,
                (struct DXGDEVICE *)v106);
              DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
                (DXGADAPTERSTOPRESETLOCKSHARED *)v152,
                *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v102 + 16) + 16LL) + 16LL),
                1);
              COREDEVICEACCESS::COREDEVICEACCESS((__int64)v161, v106, 2, v107, 0);
              COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v161, v108);
              if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v106 + 16) + 16LL) + 200LL) != 4 )
                DXGDEVICE::DestroyContext(
                  (DXGDEVICE *)v106,
                  (struct DXGCONTEXT ***)v102,
                  (struct COREDEVICEACCESS *)v161);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v161);
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v152);
              DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v149);
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v106 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v106 + 16), (struct DXGDEVICE *)v106);
            }
          }
        }
        else
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 141;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NewReferenceCount >= 0", 141LL, 0LL, 0LL, 0LL, 0LL);
        }
        v130 = v131;
      }
      v109 = v126;
      if ( v126 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v126 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        {
          v110 = *((_QWORD *)v109 + 2);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v150,
            (struct DXGDEVICE *)v110);
          DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
            (DXGADAPTERSTOPRESETLOCKSHARED *)v153,
            *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v109 + 2) + 16LL) + 16LL),
            1);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v162, v110, 2, v111, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v162, v112);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v110 + 16) + 16LL) + 200LL) != 4 )
            DXGDEVICE::DestroyContext((DXGDEVICE *)v110, (struct DXGCONTEXT ***)v109, (struct COREDEVICEACCESS *)v162);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v162);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v153);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v150);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v110 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v110 + 16), (struct DXGDEVICE *)v110);
        }
        v113 = v131;
      }
      else
      {
        v113 = v130;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v113 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v131 + 2), v131);
      goto LABEL_130;
    }
    v50 = v122;
    ADAPTER_DISPLAY::GetCddAllocationHandles(v128, v122, &v123, &v124);
    if ( !v123 || (v51 = v124) == 0 )
    {
      v52 = ADAPTER_DISPLAY::DelayCreateCddAllocations(v128, v46, v50, &v123, &v124, (struct COREDEVICEACCESS *)v159);
      LODWORD(v3) = v52;
      if ( v52 == -1073741637 )
      {
        LODWORD(v3) = -1071775482;
        WdLogSingleEntry3(4LL, v40, v122, -1071775482LL);
        WdLogGlobalForLineNumber = 1217;
        goto LABEL_108;
      }
      if ( v52 < 0 )
      {
        WdLogSingleEntry3(4LL, v40, v122, v52);
        WdLogGlobalForLineNumber = 1225;
        goto LABEL_108;
      }
      v50 = v122;
      v51 = v124;
    }
    v141.hDevice = *((_DWORD *)v46 + 117);
    v141.hAllocation = v51;
    v140.hDevice = *((_DWORD *)v46 + 117);
    v140.phAllocations = &v141.hAllocation;
    v140.NumAllocations = 1;
    ADAPTER_DISPLAY::GetCddDisplayMode(v128, v50);
    v137 = v50;
    v156 = *(struct tagRECT *)(3984LL * v50 + *((_QWORD *)v128 + 16) + 688);
    if ( (((unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation((__int64)v128, v50, 1) - 2) & 0xFFFFFFFD) == 0 )
    {
      right = v156.right;
      v156.right = v156.bottom;
      v156.bottom = right;
    }
    CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation((__int64)v128, v50, 0);
    v55 = *(int *)a1;
    v125[0] = CurrentOrientation;
    if ( (_DWORD)v55 == 1 )
    {
      if ( !*(_QWORD *)(v40 + 3128) && ADAPTER_DISPLAY::IsIdenticalMode(v128, v50) )
      {
        v56 = 0;
        for ( i = v127; v56 < *((_DWORD *)a1 + 19); i[v58] = *(struct tagRECT *)(*((_QWORD *)a1 + 10) + 16 * v58) )
          v58 = v56++;
        goto LABEL_60;
      }
      v59 = (unsigned int)Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledDeviceUsageNoInline() != 0;
      v60 = DXGDEVICE::Lock(v46, &v141, (struct COREDEVICEACCESS *)v159, v59);
      LODWORD(v3) = v60;
      if ( v60 < 0 )
      {
        v61 = v137;
        v62 = v60;
        WdLogSingleEntry4(2LL, v40, v137, v141.hAllocation, v60);
        WdLogGlobalForLineNumber = 1314;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to lock CDD shadow allocation on Adapter 0x%I64x VidPn source 0x%I64x (hShadow = 0x%I64x) (Status = 0x%I64x).",
          v40,
          v61,
          v141.hAllocation,
          v62,
          0LL);
        goto LABEL_108;
      }
      v50 = v122;
      v119 = 1;
      if ( *((_DWORD *)a1 + 19) )
      {
        v63 = v128;
        v64 = 0;
        v65 = v125[0];
        do
        {
          v66 = v64;
          v67 = (struct tagRECT *)(v66 * 16 + *((_QWORD *)a1 + 10));
          CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(v63, v50);
          DxgkpBlitA8R8R8G8(
            *((unsigned __int8 **)a1 + 3),
            *((_DWORD *)a1 + 8),
            *((_DWORD *)a1 + 9),
            *((_DWORD *)a1 + 10),
            v65,
            (unsigned __int8 *)v141.pData,
            CddShadowPitch,
            &v156,
            v67,
            &v127[v66]);
          ++v64;
        }
        while ( v64 < *((_DWORD *)a1 + 19) );
        v43 = (_QWORD *)v135;
        v40 = v138;
        v46 = v130;
      }
      if ( *(_QWORD *)(v40 + 3128) )
      {
        DXGDEVICE::Unlock(v46, &v140, 0);
        i = v127;
        v69 = 0;
        v119 = 0;
        goto LABEL_61;
      }
    }
    else
    {
      if ( !*(_QWORD *)(v40 + 3128) )
      {
        LODWORD(v3) = -1073741637;
        WdLogSingleEntry3(2LL, v40, v55, -1073741637LL);
        v100 = (struct tagRECT *)*(int *)a1;
        v99 = L"Display only adapter 0x%I64x does not support PresentOnScreen operation 0x%I64x, returning 0x%I64x.";
        WdLogGlobalForLineNumber = 1386;
        v118 = -1073741637LL;
        v117 = v100;
LABEL_106:
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v99, v40, (__int64)v117, v118, 0LL, 0LL);
        goto LABEL_108;
      }
      DxgkpConvertRects(
        *((_DWORD *)a1 + 8),
        *((_DWORD *)a1 + 9),
        CurrentOrientation,
        &v156,
        *((_DWORD *)a1 + 19),
        *((struct tagRECT **)a1 + 10),
        v127);
    }
    i = v127;
LABEL_60:
    v69 = v119;
LABEL_61:
    if ( !*(_QWORD *)(v40 + 3128) )
    {
      memset(&v145, 0, sizeof(v145));
      v145.VidPnSourceId = v50;
      v76 = v69 == 0;
      v145.BytesPerPixel = 4;
      v77 = v128;
      if ( v76 )
      {
        v145.pSource = (void *)*((_QWORD *)a1 + 3);
        v78 = *((_DWORD *)a1 + 10);
      }
      else
      {
        v145.pSource = v141.pData;
        v78 = ADAPTER_DISPLAY::GetCddShadowPitch(v128, v50);
      }
      v145.Pitch = v78;
      v145.Flags.Value = 0;
      v79 = ADAPTER_DISPLAY::GetCurrentOrientation((__int64)v77, v50, 1);
      v145.NumMoves = 0;
      v145.pMoves = 0LL;
      v80 = v127;
      v145.pDirtyRect = v127;
      v145.Flags.Value = (v79 != 1) | v145.Flags.Value & 0xFFFFFFFE;
      v145.NumDirtyRects = *((_DWORD *)a1 + 19);
      v81 = ADAPTER_DISPLAY::PresentDisplayOnlyCdd(v77, &v145);
      v3 = v81;
      if ( v81 < 0 )
      {
        WdLogSingleEntry2(2LL, v40, v81);
        WdLogGlobalForLineNumber = 1428;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"PresentDisplayOnlyCdd on Adapter 0x%I64x failed (Status = 0x%I64x).",
          v40,
          v3,
          0LL,
          0LL,
          0LL);
        goto LABEL_102;
      }
LABEL_83:
      if ( *(_DWORD *)a1 == 2 )
      {
        v82 = (unsigned int)Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledDeviceUsageNoInline() != 0;
        v83 = DXGDEVICE::Lock(v130, &v141, (struct COREDEVICEACCESS *)v159, v82);
        LODWORD(v3) = v83;
        v135 = (unsigned int)v83;
        if ( v83 < 0 )
        {
          v84 = v137;
          v85 = v83;
          WdLogSingleEntry4(2LL, v40, v137, v141.hAllocation, v83);
          WdLogGlobalForLineNumber = 1558;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to lock CDD shadow allocation on Adapter 0x%I64x VidPn source 0x%I64x (hShadow = 0x%I64x) (Status = 0x%I64x).",
            v40,
            v84,
            v141.hAllocation,
            v85,
            0LL);
LABEL_102:
          if ( !v119 )
            goto LABEL_108;
          DXGDEVICE::Unlock(v130, &v140, 0);
          if ( (int)v3 >= 0 )
            goto LABEL_108;
          v98 = (struct tagRECT *)v122;
          WdLogSingleEntry3(2LL, v40, v122, (int)v3);
          v99 = L"Failed to unlock the CDD shadow allocation on Adapter 0x%I64x VidPnSource 0x%I64x (Status = 0x%I64x).";
          v118 = (int)v3;
          v117 = v98;
          WdLogGlobalForLineNumber = 1651;
          goto LABEL_106;
        }
        v86 = *((_DWORD *)a1 + 8);
        *(_QWORD *)&v157.left = 0LL;
        v157.right = v86;
        v157.bottom = *((_DWORD *)a1 + 9);
        v119 = 1;
        if ( v125[0] != D3DKMDT_VPPR_IDENTITY )
        {
          if ( v125[0] == D3DKMDT_VPPR_ROTATE90 )
          {
            v125[0] = D3DKMDT_VPPR_ROTATE270;
          }
          else if ( v125[0] == D3DKMDT_VPPR_ROTATE270 )
          {
            v125[0] = D3DKMDT_VPPR_ROTATE90;
          }
        }
        v87 = 0;
        v129 = 0;
        if ( *((_DWORD *)a1 + 19) )
        {
          v88 = v122;
          v89 = v128;
          do
          {
            v90 = *((_DWORD *)a1 + 10);
            v91 = &v80[v87];
            v92 = (unsigned __int8 *)*((_QWORD *)a1 + 3);
            v158.left = v91->left - v156.left;
            v158.right = v91->right - v156.left;
            v158.top = v91->top - v156.top;
            v158.bottom = v91->bottom - v156.top;
            v93 = ADAPTER_DISPLAY::GetCddShadowPitch(v89, v88);
            v94 = ADAPTER_DISPLAY::GetCddShadowPitch(v89, v88);
            DxgkpBlitA8R8R8G8(
              (unsigned __int8 *)v141.pData + 4 * v156.left + (unsigned int)(v156.top * v94),
              v156.right - v156.left,
              v156.bottom - v156.top,
              v93,
              v125[0],
              v92,
              v90,
              &v157,
              &v158,
              v91);
            v80 = v127;
            v87 = v129 + 1;
            v129 = v87;
          }
          while ( v87 < *((_DWORD *)a1 + 19) );
          LODWORD(v3) = v135;
          v40 = v138;
        }
      }
      if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v40) )
      {
        v95 = v122;
        if ( !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(ADAPTER_DISPLAY **)(v40 + 3120), v122) )
        {
          if ( (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v40 + 3120), v95) )
          {
            if ( !ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)(v40 + 3120), v95) )
            {
              v96 = ADAPTER_DISPLAY::PresentCddPrimary(
                      *(PERESOURCE ***)(v40 + 3120),
                      v126,
                      v95,
                      (struct COREDEVICEACCESS *)v159);
              if ( v96 < 0 )
              {
                v97 = v96;
                WdLogSingleEntry2(2LL, v126, v96);
                WdLogGlobalForLineNumber = 1635;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  0xFFFFFFFFLL,
                  L"PresentFromCdd failed to present the newly created Cdd Primary (Status = 0x%I64x).",
                  (__int64)v126,
                  v97,
                  0LL,
                  0LL,
                  0LL);
              }
            }
          }
        }
      }
      v121 = 1;
      goto LABEL_102;
    }
    v133 = 0;
    if ( v132 )
    {
      v133 = *((_DWORD *)v132 + 6);
      *v43 = &v133;
    }
    *((_DWORD *)v43 + 2) = *((_DWORD *)v126 + 6);
    v43[2] = 0LL;
    *((_DWORD *)v43 + 18) = *((_DWORD *)a1 + 19);
    v70 = *((_DWORD *)v43 + 24);
    v43[10] = i;
    *((_DWORD *)v43 + 25) = 0;
    v71 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 )
    {
      *((_DWORD *)v43 + 24) = v70 | 1;
      if ( v71 == 1 )
      {
        *((_DWORD *)v43 + 7) = v124;
        v72 = v123;
      }
      else
      {
        v73 = v123;
        *((_DWORD *)v43 + 7) = v123;
        if ( v71 != 2 )
        {
          v74 = v125[0];
          *((_DWORD *)v43 + 8) = v73;
          DxgkpConvertRects(
            *((_DWORD *)a1 + 8),
            *((_DWORD *)a1 + 9),
            v74,
            &v156,
            2u,
            (struct tagRECT *)((char *)a1 + 44),
            (struct tagRECT *)((char *)a1 + 44));
          *(_OWORD *)(v43 + 7) = *(_OWORD *)((char *)a1 + 44);
          *(_OWORD *)(v43 + 5) = *(_OWORD *)((char *)a1 + 60);
          goto LABEL_72;
        }
        v72 = v124;
      }
      *((_DWORD *)v43 + 8) = v72;
      *(struct tagRECT *)(v43 + 7) = v156;
      *(struct tagRECT *)(v43 + 5) = v156;
    }
    else
    {
      *((_DWORD *)v43 + 24) = v70 | 2;
      *((_DWORD *)v43 + 9) = *((_DWORD *)a1 + 5);
      *((_DWORD *)v43 + 8) = v123;
      *((_DWORD *)v43 + 7) = 0;
      *(struct tagRECT *)(v43 + 5) = v156;
    }
LABEL_72:
    v75 = DXGCONTEXT::PresentFromCdd(
            v126,
            (struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *)v43,
            v50,
            (struct COREDEVICEACCESS *)v159,
            (struct DXGADAPTERSTOPRESETLOCKSHARED *)v151,
            &v126);
    v3 = v75;
    if ( v75 < 0 )
    {
      if ( v75 == -1071775482 )
      {
        WdLogSingleEntry2(4LL, v126, -1071775482LL);
        WdLogGlobalForLineNumber = 1520;
      }
      else if ( v75 != -1071774910 )
      {
        WdLogSingleEntry2(2LL, v126, v75);
        WdLogGlobalForLineNumber = 1526;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"PresentFromCdd on DxgContext 0x%I64x failed (Status = 0x%I64x).",
          (__int64)v126,
          v3,
          0LL,
          0LL,
          0LL);
      }
      goto LABEL_102;
    }
    v80 = v127;
    goto LABEL_83;
  }
  LODWORD(v3) = -1073741811;
  WdLogSingleEntry1(2LL, -1073741811LL);
  WdLogGlobalForLineNumber = 999;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"DxgkCddPresentOnScreen receives NULL pPresentOnScreen, returning 0x%I64x.",
    -1073741811LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return (unsigned int)v3;
}
