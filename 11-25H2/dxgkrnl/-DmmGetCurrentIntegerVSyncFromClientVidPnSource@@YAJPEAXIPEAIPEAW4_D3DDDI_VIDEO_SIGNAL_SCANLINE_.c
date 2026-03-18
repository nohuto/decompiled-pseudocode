/*
 * XREFs of ?DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@@Z @ 0x1403D2A74
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x14042A600 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetLastCddIntegerVSync@ADAPTER_DISPLAY@@QEAAII@Z @ 0x140031634 (-GetLastCddIntegerVSync@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x140034684 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x140038864 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14003B47C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040B60 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1402C1F3C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DmmGetCurrentIntegerVSyncFromClientVidPnSource(
        ADAPTER_DISPLAY **a1,
        unsigned int a2,
        unsigned int *a3,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING *a4)
{
  __int64 v4; // r12
  ADAPTER_DISPLAY *v8; // rbx
  VIDPN_MGR *v9; // rbx
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  __int64 v11; // rbx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  unsigned int v13; // ebx
  __int64 result; // rax
  DMMVIDPNTARGET *v15; // rcx
  struct DMMVIDPNTARGETMODESET *v16; // rbx
  struct _D3DDDI_RATIONAL *v17; // rcx
  UINT Numerator; // edx
  unsigned int v19; // r15d
  unsigned int LastCddIntegerVSync; // eax
  __int64 v21; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22; // [rsp+58h] [rbp-18h] BYREF
  struct _D3DDDI_RATIONAL v23; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int8 v24; // [rsp+B0h] [rbp+40h] BYREF

  v4 = a2;
  if ( !a3 || !a4 )
  {
    WdLogSingleEntry2(2LL, a3, a4);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 12698;
    return result;
  }
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 12712;
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 12720;
  }
  v8 = a1[390];
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 12725;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v9 = (VIDPN_MGR *)*((_QWORD *)v8 + 13);
  if ( v9 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v22, (__int64)v9);
    v21 = 0LL;
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v9);
    auto_rc<DMMVIDPN const>::reset(&v21, (__int64)ClientCommittedVidPnRef);
    v11 = v21;
    if ( !v21 )
    {
      WdLogSingleEntry1(2LL, a1);
      WdLogGlobalForLineNumber = 12756;
      v13 = -1071774884;
      goto LABEL_12;
    }
    Path = DMMVIDPNTOPOLOGY::FindPath(
             (DMMVIDPNTOPOLOGY *)(v21 + 96),
             v4,
             *(_DWORD *)(3984 * v4 + *((_QWORD *)a1[390] + 16) + 1072));
    if ( !Path )
    {
      WdLogSingleEntry1(2LL, v11);
      WdLogGlobalForLineNumber = 12769;
LABEL_11:
      v13 = -1071774971;
LABEL_12:
      auto_rc<DMMVIDPN const>::reset(&v21, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v22 + 40));
      return v13;
    }
    v15 = (DMMVIDPNTARGET *)*((_QWORD *)Path + 12);
    if ( !v15 )
    {
      WdLogSingleEntry1(2LL, v11);
      WdLogGlobalForLineNumber = 12776;
      goto LABEL_11;
    }
    v16 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v15);
    if ( !*((_QWORD *)v16 + 18) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 12785;
    }
    v17 = (struct _D3DDDI_RATIONAL *)*((_QWORD *)v16 + 18);
    v24 = 0;
    Numerator = v17[15].Numerator;
    v23 = v17[19];
    v19 = DmmMapVSyncFromRationalToInteger(
            &v23,
            (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(Numerator << 29) >> 29),
            &v24);
    LastCddIntegerVSync = ADAPTER_DISPLAY::GetLastCddIntegerVSync(a1[390], v4);
    if ( v24 != 1 || LastCddIntegerVSync != v19 + 1 )
      LastCddIntegerVSync = v19;
    *a3 = LastCddIntegerVSync;
    *a4 = (int)(*(_DWORD *)(*((_QWORD *)v16 + 18) + 120LL) << 29) >> 29;
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v16 + 88));
    auto_rc<DMMVIDPN const>::reset(&v21, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v22 + 40));
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 12739;
  }
  return result;
}
