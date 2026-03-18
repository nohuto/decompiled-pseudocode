/*
 * XREFs of ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x140263F58
 * Callers:
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402575C0 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140264F80 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetTargetFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNTARGET@@I@Z @ 0x140039D04 (-GetTargetFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x140039D4C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040610 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z @ 0x140040B1C (-GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x140048DE4 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14004A0CC (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x14008FA54 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1403AF444 (-GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTA.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::CreateNewPath(
        DMMVIDPNTOPOLOGY *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a2,
        struct DMMVIDPNPRESENTPATH **a3)
{
  __int64 VidPnSourceId; // rbp
  struct DMMVIDPNPRESENTPATH *VidPnTargetId; // rbx
  DMMVIDPN *Container; // rax
  struct DMMVIDPNSOURCE *SourceFromId; // r13
  DMMVIDPN *v10; // rax
  struct DMMVIDPNTARGET *TargetFromId; // r12
  __int64 v12; // rax
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v13; // rcx
  const struct _D3DKMDT_VIDPN_PRESENT_PATH *v14; // rax
  __int64 v15; // r8
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  bool v23; // zf
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 v29; // rax
  int LowestAvailImportanceOrdinal; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  DMMVIDPNPRESENTPATH *v36; // rax
  __int64 (__fastcall ***v38[2])(_QWORD, __int64); // [rsp+30h] [rbp-1C8h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH v39; // [rsp+40h] [rbp-1B8h] BYREF

  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 396;
  }
  *a3 = 0LL;
  VidPnSourceId = a2->VidPnSourceId;
  VidPnTargetId = (struct DMMVIDPNPRESENTPATH *)a2->VidPnTargetId;
  v38[0] = 0LL;
  Container = (DMMVIDPN *)ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
  SourceFromId = DMMVIDPN::GetSourceFromId(Container, VidPnSourceId);
  if ( SourceFromId )
  {
    v10 = (DMMVIDPN *)ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
    TargetFromId = DMMVIDPN::GetTargetFromId(v10, (int)VidPnTargetId);
    if ( TargetFromId )
    {
      if ( DMMVIDPNTOPOLOGY::FindPath(this, VidPnSourceId, (int)VidPnTargetId) )
      {
        v12 = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
        WdLogSingleEntry3(7LL, VidPnSourceId, VidPnTargetId, v12);
        WdLogGlobalForLineNumber = 440;
        LODWORD(VidPnTargetId) = -1071774957;
      }
      else
      {
        v13 = &v39;
        v14 = a2;
        v15 = 2LL;
        do
        {
          v16 = *(_OWORD *)&v14->ContentTransformation.ScalingSupport;
          *(_OWORD *)&v13->VidPnSourceId = *(_OWORD *)&v14->VidPnSourceId;
          v17 = *(_OWORD *)&v14->VisibleFromActiveTLOffset.cy;
          *(_OWORD *)&v13->ContentTransformation.ScalingSupport = v16;
          VidPnTargetColorCoeffDynamicRanges = v14->VidPnTargetColorCoeffDynamicRanges;
          *(_OWORD *)&v13->VisibleFromActiveTLOffset.cy = v17;
          v19 = *(_OWORD *)&v14->Content;
          v13->VidPnTargetColorCoeffDynamicRanges = VidPnTargetColorCoeffDynamicRanges;
          v20 = *(_OWORD *)&v14->CopyProtection.OEMCopyProtection[4];
          *(_OWORD *)&v13->Content = v19;
          v21 = *(_OWORD *)&v14->CopyProtection.OEMCopyProtection[20];
          *(_OWORD *)&v13->CopyProtection.OEMCopyProtection[4] = v20;
          v22 = *(_OWORD *)&v14->CopyProtection.OEMCopyProtection[36];
          v14 = (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v14 + 128);
          *(_OWORD *)&v13->CopyProtection.OEMCopyProtection[20] = v21;
          v13 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)((char *)v13 + 128);
          *(_OWORD *)&v13[-1].GammaRamp.DataSize = v22;
          --v15;
        }
        while ( v15 );
        v23 = a2->ImportanceOrdinal == 255;
        v24 = *(_OWORD *)&v14->ContentTransformation.ScalingSupport;
        *(_OWORD *)&v13->VidPnSourceId = *(_OWORD *)&v14->VidPnSourceId;
        v25 = *(_OWORD *)&v14->VisibleFromActiveTLOffset.cy;
        *(_OWORD *)&v13->ContentTransformation.ScalingSupport = v24;
        v26 = v14->VidPnTargetColorCoeffDynamicRanges;
        *(_OWORD *)&v13->VisibleFromActiveTLOffset.cy = v25;
        v27 = *(_OWORD *)&v14->Content;
        v13->VidPnTargetColorCoeffDynamicRanges = v26;
        v28 = *(_OWORD *)&v14->CopyProtection.OEMCopyProtection[4];
        v29 = *(_QWORD *)&v14->CopyProtection.OEMCopyProtection[20];
        *(_OWORD *)&v13->Content = v27;
        *(_OWORD *)&v13->CopyProtection.OEMCopyProtection[4] = v28;
        *(_QWORD *)&v13->CopyProtection.OEMCopyProtection[20] = v29;
        if ( v23
          && (LowestAvailImportanceOrdinal = DMMVIDPNTOPOLOGY::GetLowestAvailImportanceOrdinal(
                                               this,
                                               &v39.ImportanceOrdinal),
              VidPnTargetId = (struct DMMVIDPNPRESENTPATH *)LowestAvailImportanceOrdinal,
              LowestAvailImportanceOrdinal < 0) )
        {
          v35 = WdLogNewEntry5_WdTrace(v32, v31, v33, v34);
          *(_QWORD *)(v35 + 24) = this;
          *(_QWORD *)(v35 + 32) = VidPnTargetId;
          WdLogGlobalForLineNumber = 456;
        }
        else
        {
          v36 = (DMMVIDPNPRESENTPATH *)operator new(0xC0uLL, 0x4E506456u, 256LL);
          if ( v36 )
            v36 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v36, SourceFromId, TargetFromId, &v39);
          auto_ptr<DMMVIDPNPRESENTPATH>::reset(v38, (__int64 (__fastcall ***)(_QWORD, __int64))v36);
          VidPnTargetId = (struct DMMVIDPNPRESENTPATH *)v38[0];
          if ( v38[0] )
          {
            if ( (**((unsigned __int8 (__fastcall ***)(__int64 (__fastcall ***)(_QWORD, __int64)))v38[0] + 7))(v38[0] + 7) )
            {
              v38[0] = 0LL;
              *a3 = VidPnTargetId;
              LODWORD(VidPnTargetId) = 0;
            }
            else
            {
              WdLogSingleEntry4(7LL, a2->VidPnSourceId, a2->VidPnTargetId, this, *((int *)VidPnTargetId + 16));
              LODWORD(VidPnTargetId) = *((_DWORD *)VidPnTargetId + 16);
              WdLogGlobalForLineNumber = 480;
            }
          }
          else
          {
            WdLogSingleEntry1(6LL, this);
            WdLogGlobalForLineNumber = 472;
            LODWORD(VidPnTargetId) = -1073741801;
          }
        }
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, a2->VidPnTargetId);
      WdLogGlobalForLineNumber = 430;
      LODWORD(VidPnTargetId) = -1071774971;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a2->VidPnSourceId);
    WdLogGlobalForLineNumber = 416;
    LODWORD(VidPnTargetId) = -1071774972;
  }
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(v38);
  return (unsigned int)VidPnTargetId;
}
