/*
 * XREFs of ?DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAU_D3DKMDT_2DREGION@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x140251260
 * Callers:
 *     DxgkOpmGetRedirectionInfo @ 0x14019DF4C (DxgkOpmGetRedirectionInfo.c)
 *     ?GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z @ 0x14022BA4C (-GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_DXGK_DISPLAYMODE_INFO@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1402C2AA0 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14001B394 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x140034684 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x140038864 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14003B47C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x140040924 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x140041180 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1402C1F3C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DmmGetClientVidPnTargetModeInfo(
        DXGADAPTER *a1,
        unsigned int a2,
        enum _D3DKMDT_VIDEO_SIGNAL_STANDARD *a3,
        unsigned int *a4,
        unsigned __int8 *a5,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING *a6,
        struct _D3DKMDT_2DREGION *a7,
        struct _D3DDDI_RATIONAL *a8)
{
  unsigned int v8; // edi
  __int64 v9; // r12
  unsigned __int8 *v11; // r15
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING *v12; // rbp
  struct _D3DKMDT_2DREGION *v13; // rsi
  struct _D3DDDI_RATIONAL *v14; // r14
  __int64 result; // rax
  char v16; // r13
  __int64 v17; // rax
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING *v18; // rax
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  __int64 v20; // r10
  DMMVIDPNTARGET *v21; // r11
  struct DMMVIDPNTARGETMODESET *v22; // rbx
  __int64 v23; // rdx
  unsigned int *v24; // r12
  __int64 v25; // [rsp+90h] [rbp+8h] BYREF
  enum _D3DKMDT_VIDEO_SIGNAL_STANDARD *v26; // [rsp+A0h] [rbp+18h]
  unsigned int *v27; // [rsp+A8h] [rbp+20h]

  v27 = a4;
  v26 = a3;
  v8 = 0;
  v9 = a2;
  if ( a3 )
    *a3 = D3DKMDT_VSS_UNINITIALIZED;
  if ( a4 )
    *a4 = 0;
  v11 = a5;
  if ( a5 )
    *a5 = 0;
  v12 = a6;
  if ( a6 )
    *a6 = D3DDDI_VSSLO_UNINITIALIZED;
  v13 = a7;
  if ( a7 )
    *a7 = 0LL;
  v14 = a8;
  if ( a8 )
    *a8 = 0LL;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 11230;
    return 3223191554LL;
  }
  v16 = 1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 11236;
  }
  v17 = *((_QWORD *)a1 + 390);
  if ( !v17 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 11241;
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
  v18 = *(enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING **)(v17 + 104);
  a6 = v18;
  if ( v18 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v25, (__int64)v18);
    a5 = 0LL;
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef((VIDPN_MGR *)a6);
    auto_rc<DMMVIDPN const>::reset((__int64 *)&a5, (__int64)ClientCommittedVidPnRef);
    if ( a5 )
    {
      if ( IndexedSet<DMMVIDPNTARGET>::FindById(*((_QWORD *)a5 + 39), v9) )
      {
        if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v20 + 96), v9) )
        {
          v22 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v21);
          a8 = (struct _D3DDDI_RATIONAL *)v22;
          if ( !*((_QWORD *)v22 + 18) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 11305;
          }
          v23 = *((_QWORD *)v22 + 18);
          a7 = *(struct _D3DKMDT_2DREGION **)(v23 + 152);
          if ( v26 )
            *v26 = *(enum _D3DKMDT_VIDEO_SIGNAL_STANDARD *)(v23 + 72);
          v24 = v27;
          if ( v27 )
            *v24 = DmmMapVSyncFromRationalToInteger(
                     (const struct _D3DDDI_RATIONAL *)&a7,
                     (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(*((_QWORD *)v22 + 18) + 120LL) << 29) >> 29),
                     0LL);
          if ( v11 )
          {
            if ( (int)(*(_DWORD *)(*((_QWORD *)v22 + 18) + 120LL) << 29) >> 29 != 2
              && (int)(*(_DWORD *)(*((_QWORD *)v22 + 18) + 120LL) << 29) >> 29 != 3 )
            {
              v16 = 0;
            }
            *v11 = v16;
          }
          if ( v12 )
            *v12 = (int)(*(_DWORD *)(*((_QWORD *)v22 + 18) + 120LL) << 29) >> 29;
          if ( v13 )
            *v13 = *(struct _D3DKMDT_2DREGION *)(*((_QWORD *)v22 + 18) + 84LL);
          if ( v14 )
            *v14 = *(struct _D3DDDI_RATIONAL *)(*((_QWORD *)v22 + 18) + 152LL);
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&a8, 0LL);
        }
        else
        {
          WdLogSingleEntry1(2LL, v9);
          WdLogGlobalForLineNumber = 11296;
          v8 = -1071774912;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v9);
        WdLogGlobalForLineNumber = 11286;
        v8 = -1071774971;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, a1);
      WdLogGlobalForLineNumber = 11272;
      v8 = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset((__int64 *)&a5, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v25 + 40));
    return v8;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 11255;
  }
  return result;
}
