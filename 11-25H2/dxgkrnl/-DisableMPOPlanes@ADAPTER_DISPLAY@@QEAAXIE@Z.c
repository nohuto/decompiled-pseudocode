/*
 * XREFs of ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x140316398
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030CF78 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1403137F8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?ForcePlanesOff@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x140316348 (-ForcePlanesOff@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x140051FDC (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?VidSchSetVidPnSourceAddressWithMultiPlaneOverlay3@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3@@@Z @ 0x140067CF8 (-VidSchSetVidPnSourceAddressWithMultiPlaneOverlay3@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAU_.c)
 *     McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer @ 0x140067F24 (McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x140314C90 (-DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x140314D10 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?IsPlaneEnabled@ADAPTER_DISPLAY@@QEAAEII@Z @ 0x1403165E8 (-IsPlaneEnabled@ADAPTER_DISPLAY@@QEAAEII@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableMPOPlanes(ADAPTER_DISPLAY *this, unsigned int a2, char a3)
{
  __int64 v4; // r15
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int i; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  struct DXGDEVICE *VidPnSourceOwner; // rax
  __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp-140h]
  int v16; // [rsp+38h] [rbp-138h]
  int v17; // [rsp+48h] [rbp-128h]
  int v18; // [rsp+50h] [rbp-120h]
  int v19; // [rsp+58h] [rbp-118h]
  _DWORD *v20; // [rsp+F0h] [rbp-80h] BYREF
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 v21; // [rsp+F8h] [rbp-78h] BYREF
  __int64 v22; // [rsp+128h] [rbp-48h]
  _DWORD v23[36]; // [rsp+130h] [rbp-40h] BYREF

  v4 = a2;
  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 3128LL);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 16);
    for ( i = a3 == 0; i < *(_DWORD *)(v7 + 2944); ++i )
    {
      if ( ADAPTER_DISPLAY::IsPlaneEnabled(this, v4, i) )
      {
        memset(&v23[1], 0, 0x8CuLL);
        v23[0] = i;
        v20 = v23;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
          McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer(
            v10,
            v9,
            v11,
            *((_QWORD *)this + 2),
            v4,
            i,
            0,
            v16,
            0,
            v17,
            v18,
            v19,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0);
        v22 = 0LL;
        *(_OWORD *)&v21.VidPnSourceId = 0LL;
        v21.VidPnSourceId = v4;
        memset(&v21.pPostComposition, 0, 24);
        v21.ppPlanes = (DXGK_MULTIPLANE_OVERLAY_PLANE3 **)&v20;
        v12 = *((_QWORD *)this + 2);
        v21.PlaneCount = 1;
        if ( (int)VIDSCH_EXPORT::VidSchSetVidPnSourceAddressWithMultiPlaneOverlay3(
                    *(VIDSCH_EXPORT **)(*(_QWORD *)(v12 + 3128) + 736LL),
                    *(struct _VIDSCH_GLOBAL **)(*(_QWORD *)(v12 + 3128) + 744LL),
                    &v21) < 0 )
        {
          WdLogSingleEntry3(2LL, i, v4, *((_QWORD *)this + 2));
          v15 = *((_QWORD *)this + 2);
          WdLogGlobalForLineNumber = 11027;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to disable MPO plane 0x%I64x in SetVidPnSourceVisibility, VidPnSourceId: 0x%I64x, Adapter 0x%I64x",
            i,
            v4,
            v15,
            0LL,
            0LL);
        }
      }
      v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 3128LL) + 16LL);
    }
    if ( a3 )
    {
      ADAPTER_DISPLAY::DisableAllPlanesOnVidPnSourcesImmediate(this, 1 << v4);
    }
    else if ( ADAPTER_DISPLAY::GetVidPnSourceOwner(this, v4) )
    {
      VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(this, v4);
      v14 = *((_QWORD *)VidPnSourceOwner + 235);
      if ( v14 == *(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) )
        ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v14 + 3120), v4);
    }
  }
}
