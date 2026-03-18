/*
 * XREFs of ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x14030C5F8
 * Callers:
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1402521D8 (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x140252D98 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x140256A30 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030CD44 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14001B358 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14001B394 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x140034934 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14003B47C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x140041180 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Remove@?$Set@VDMMVIDPN@@@@QEAAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1400425A8 (-Remove@-$Set@VDMMVIDPN@@@@QEAAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x140045D68 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA?AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x14004A1A0 (-GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA-AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@.c)
 *     ?DivideAndRound@@YA_K_K0@Z @ 0x140063148 (-DivideAndRound@@YA_K_K0@Z.c)
 *     DpiMiracastHandleDisplayConfigChange @ 0x14007E670 (DpiMiracastHandleDisplayConfigChange.c)
 *     ?GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x140188ECC (-GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1402D597C (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x14030C9B4 (-SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CacheLastClientCommittedVidPnRef(VIDPN_MGR *this, struct DMMVIDPN *const a2)
{
  int v4; // edi
  int v5; // r13d
  int v7; // edx
  unsigned int v8; // ebx
  __int64 v9; // rdi
  unsigned int PathSourceFromTarget; // eax
  char *v11; // rdx
  struct DMMVIDPN *v12; // r14
  char *v13; // r14
  __int64 v14; // rax
  char *v15; // rbx
  struct DMMVIDPNPRESENTPATH *MostImportantPath; // rbx
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rdx
  char *v20; // rax
  char *v21; // r15
  UINT cx; // r15d
  UINT cy; // r12d
  char *v24; // rax
  struct DMMVIDPNTARGETMODESET *v25; // rax
  DMMVIDPNSOURCEMODE *v26; // r14
  __int64 v27; // rcx
  unsigned __int64 PresentationVSync; // rax
  struct DXGADAPTER *ContainingAdapter; // rax
  struct DMMVIDPNTARGETMODESET *v30; // [rsp+70h] [rbp+8h] BYREF
  struct DMMVIDPNTARGETMODESET *v31; // [rsp+78h] [rbp+10h] BYREF

  v4 = 1;
  _InterlockedAdd((volatile signed __int32 *)a2 + 8, 1u);
  v5 = 0;
  if ( Set<DMMVIDPN>::Remove((__int64)this + 136, (__int64)a2) )
  {
    if ( !*((_QWORD *)this + 1) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 68;
    }
    *(_QWORD *)(*((_QWORD *)this + 1) + 424LL) = *((_QWORD *)a2 + 17);
    if ( *((_QWORD *)a2 + 17) )
    {
      v7 = *((_DWORD *)this + 138);
      if ( v7 != -1 && DMMVIDPNTOPOLOGY::IsTargetInTopology((struct DMMVIDPN *const)((char *)a2 + 96), v7) )
      {
        if ( !*((_QWORD *)this + 1) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 68;
        }
        v8 = *((_DWORD *)this + 138);
        v9 = *((_QWORD *)this + 1);
        PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((struct DMMVIDPN *const)((char *)a2 + 96), v8);
        ADAPTER_DISPLAY::SetPrimaryPath(v9, PathSourceFromTarget, v8, 0LL);
        v4 = 1;
LABEL_13:
        v11 = (char *)a2 + 120;
        v12 = (struct DMMVIDPN *)*((_QWORD *)a2 + 15);
        if ( v12 == (struct DMMVIDPN *const)((char *)a2 + 120) )
          v13 = 0LL;
        else
          v13 = (char *)v12 - 8;
        v14 = *((_QWORD *)a2 + 17);
        v15 = v13;
        if ( v14 == 1 )
        {
          if ( !v13 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 5767;
          }
          v4 = 0;
          if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 12) + 96LL) + 84LL) == 15 )
            v4 = 8;
        }
        else
        {
          if ( v14 != 2 )
          {
            while ( v15 )
            {
              if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 12) + 96LL) + 84LL) == 15 )
              {
                cx = 0;
                cy = 0;
                goto LABEL_50;
              }
              v24 = (char *)*((_QWORD *)v15 + 1);
              v15 = v24 - 8;
              if ( v24 == v11 )
                v15 = 0LL;
            }
            goto LABEL_21;
          }
          v20 = (char *)*((_QWORD *)v13 + 1);
          v21 = v20 - 8;
          if ( v20 == v11 )
            v21 = 0LL;
          if ( !v21 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 5777;
          }
          if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 12) + 96LL) + 84LL) != 15 )
          {
            if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v21 + 12) + 96LL) + 84LL) != 15 )
            {
LABEL_21:
              auto_rc<DMMVIDPN>::reset((__int64 *)this + 16, (__int64)a2);
              return 0LL;
            }
            v15 = v21;
          }
          v4 = 2;
          if ( *((_QWORD *)v13 + 11) != *((_QWORD *)v21 + 11) )
            v4 = 4;
        }
        if ( v4 )
        {
          cx = 0;
          cy = 0;
          if ( !v15 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 5813;
          }
LABEL_50:
          v25 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v15 + 11));
          v31 = v25;
          v26 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v25 + 18);
          if ( v26 && *((_DWORD *)v26 + 18) != 2 )
          {
            cx = DMMVIDPNSOURCEMODE::GetGraphicsInfo(*((DMMVIDPNSOURCEMODE **)v25 + 18))->PrimSurfSize.cx;
            cy = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v26)->PrimSurfSize.cy;
          }
          v30 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v15 + 12));
          v27 = *((_QWORD *)v30 + 18);
          if ( v27 )
          {
            PresentationVSync = (unsigned __int64)DMMVIDEOSIGNALMODE::GetPresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v27 + 72));
            v5 = DivideAndRound((unsigned int)PresentationVSync, HIDWORD(PresentationVSync));
          }
          ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this);
          DpiMiracastHandleDisplayConfigChange(*((_QWORD *)ContainingAdapter + 27), v4, cx, cy, v5);
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v30, 0LL);
          auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v31, 0LL);
        }
        goto LABEL_21;
      }
      MostImportantPath = DMMVIDPNTOPOLOGY::GetMostImportantPath((struct DMMVIDPN *const)((char *)a2 + 96));
      if ( !MostImportantPath )
        goto LABEL_13;
      if ( !*((_QWORD *)this + 1) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 68;
      }
      v17 = 2LL;
      v18 = *(unsigned int *)(*((_QWORD *)MostImportantPath + 12) + 24LL);
      v19 = *(unsigned int *)(*((_QWORD *)MostImportantPath + 11) + 24LL);
    }
    else
    {
      if ( !*((_QWORD *)this + 1) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 68;
      }
      v18 = 0xFFFFFFFFLL;
      v17 = 3LL;
      v19 = 0xFFFFFFFFLL;
    }
    ADAPTER_DISPLAY::SetPrimaryPath(*((_QWORD *)this + 1), v19, v18, v17);
    goto LABEL_13;
  }
  WdLogSingleEntry2(2LL, a2, this);
  WdLogGlobalForLineNumber = 5721;
  if ( a2 )
    ReferenceCounted::Release((struct DMMVIDPN *const)((char *)a2 + 24));
  return 3223192323LL;
}
