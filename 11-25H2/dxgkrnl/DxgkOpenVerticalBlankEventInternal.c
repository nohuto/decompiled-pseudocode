/*
 * XREFs of DxgkOpenVerticalBlankEventInternal @ 0x1401AC9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001BDFC (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14001BF28 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x14001DD60 (--0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023190 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?OpenVerticalBlankEventHandle@ADAPTER_DISPLAY@@QEAAJIKDPEAPEAX@Z @ 0x1401979A4 (-OpenVerticalBlankEventHandle@ADAPTER_DISPLAY@@QEAAJIKDPEAPEAX@Z.c)
 *     ?OpenVerticalBlankEvent@REMOTE_VSYNC@@QEAAJKDPEAPEAX@Z @ 0x1401EE170 (-OpenVerticalBlankEvent@REMOTE_VSYNC@@QEAAJKDPEAPEAX@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x140288C10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x14028D460 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x14032A060 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 */

__int64 __fastcall DxgkOpenVerticalBlankEventInternal(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        void **a5)
{
  __int64 v7; // r14
  __int64 v8; // rbx
  struct DXGPROCESS *Current; // rax
  unsigned int v10; // ebx
  struct DXGADAPTER *v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  DXGGLOBAL *Global; // rax
  REMOTE_VSYNC *v16; // rcx
  int PairingAdapters; // eax
  __int64 v18; // r12
  struct DXGADAPTER *v19; // rdi
  struct DXGADAPTER *v20; // rbx
  int v21; // esi
  struct DXGADAPTER *v23; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v24; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGADAPTER *v25; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp-88h] BYREF
  DXGADAPTER *v28[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v29[64]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v30[144]; // [rsp+D0h] [rbp-30h] BYREF

  v7 = a2;
  v8 = a1;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( !a5 )
    {
      v10 = -1073741811;
      WdLogSingleEntry1(3LL, -1073741811LL);
      WdLogGlobalForLineNumber = 7860;
      return v10;
    }
    *a5 = 0LL;
    if ( (a3 & 2) != 0 )
      return 3221225506LL;
    v25 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v28, v8, Current, &v25, 1);
    v12 = v25;
    if ( !v25 )
    {
      v13 = v8;
      v10 = -1073741811;
      WdLogSingleEntry2(3LL, v13, -1073741811LL);
      WdLogGlobalForLineNumber = 7878;
LABEL_37:
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v28, v14);
      return v10;
    }
    if ( (unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
    {
      if ( *((_BYTE *)v12 + 209)
        && (Global = DXGGLOBAL::GetGlobal(), *((_DWORD *)DXGGLOBAL::GetSessionData(Global) + 4742)) )
      {
        v16 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 1048);
      }
      else
      {
        v16 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 992);
      }
      v10 = REMOTE_VSYNC::OpenVerticalBlankEvent(v16, a3, a4, a5);
      goto LABEL_37;
    }
    v24 = 0LL;
    v23 = 0LL;
    v27 = 0LL;
    v26 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v12, v7, &v24, &v27, &v23, &v26, 0);
    v18 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      WdLogSingleEntry3(2LL, v12, v7, PairingAdapters);
      WdLogGlobalForLineNumber = 7919;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
        (__int64)v12,
        v7,
        v18,
        0LL,
        0LL);
      v10 = v18;
      goto LABEL_37;
    }
    v19 = v24;
    v20 = v23;
    if ( !v24 || !v23 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7923;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"(pRenderAdapter != nullptr) && (pDisplayAdapter != nullptr)",
        7923LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v30, v19, v20);
    DXGADAPTER::ReleaseReference(v19);
    DXGADAPTER::ReleaseReference(v20);
    if ( *((_DWORD *)v20 + 40) == 1 )
    {
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
        (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v29,
        v19,
        v20);
      if ( *((_DWORD *)v19 + 50) != 1 || *((_DWORD *)v23 + 50) != 1 )
      {
        DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v29);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
        v10 = -1073741130;
        goto LABEL_37;
      }
      v20 = v23;
      if ( (unsigned int)v7 >= *(_DWORD *)(*((_QWORD *)v23 + 390) + 96LL) )
      {
        v10 = -1073741811;
        WdLogSingleEntry2(3LL, v7, -1073741811LL);
        WdLogGlobalForLineNumber = 7946;
        DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v29);
        goto LABEL_36;
      }
      if ( !DXGADAPTER::IsVSyncAvailable(v23, v7) )
      {
        DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v29);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
        v10 = -1071775738;
        goto LABEL_37;
      }
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v29);
      v19 = v24;
    }
    v21 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v30, 0LL);
    if ( v21 < 0 )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
      v10 = v21;
      goto LABEL_37;
    }
    if ( !*((_QWORD *)v19 + 391) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7962;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pRenderAdapter->IsRenderAdapter()",
        7962LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !*((_QWORD *)v20 + 390) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7963;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pDisplayAdapter->IsDisplayAdapter()",
        7963LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v10 = ADAPTER_DISPLAY::OpenVerticalBlankEventHandle(*((ADAPTER_DISPLAY **)v20 + 390), v7, a3, a4, a5);
LABEL_36:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
    goto LABEL_37;
  }
  v10 = -1073741811;
  WdLogSingleEntry1(2LL, -1073741811LL);
  WdLogGlobalForLineNumber = 7852;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Invalid process context, returning 0x%I64x",
    -1073741811LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return v10;
}
