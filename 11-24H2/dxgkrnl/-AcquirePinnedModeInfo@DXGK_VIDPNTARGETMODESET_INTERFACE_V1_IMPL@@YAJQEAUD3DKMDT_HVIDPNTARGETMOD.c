/*
 * XREFs of ?AcquirePinnedModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1402DB540
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x140039D4C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@?$Set@VDMMVIDPNTARGETMODE@@@@SAPEAV12@QEBVDMMVIDPNTARGETMODE@@@Z @ 0x14003DC98 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@-$Set@VDMMVIDPNTARGETMODE@@@@SAPEA.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ @ 0x1402DBB50 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  struct DMMVIDPNTARGETMODE *PinnedMode; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DMMVIDPNTARGETMODE *v17; // rsi
  __int64 Instance; // rdi
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // edi
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r8
  struct DMMVIDPNTARGETMODE *(__fastcall *v38)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-30h] BYREF
  int v39; // [rsp+28h] [rbp-28h]
  int v40; // [rsp+30h] [rbp-20h] BYREF
  __int64 v41; // [rsp+38h] [rbp-18h]
  char v42; // [rsp+40h] [rbp-10h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 28);
  v40 = -1;
  v41 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v42 = 1;
    v40 = 7011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerEnter, v6, 7011);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v40, 7011);
  v11 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  *(_QWORD *)(v11 + 24) = this;
  *(_QWORD *)(v11 + 32) = a2;
  WdLogGlobalForLineNumber = 1185;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( this && *((_DWORD *)this + 32) == 1833173005 )
    {
      v39 = 0;
      v38 = DMMVIDPNTARGETMODESET::GetPinnedMode;
      if ( !*((_BYTE *)this + 136) )
      {
        WdLogSingleEntry1(2LL, this);
        WdLogGlobalForLineNumber = 638;
        v33 = -1071774944;
LABEL_34:
        WdLogSingleEntry2(2LL, this, v33);
        WdLogGlobalForLineNumber = 1239;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
        if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit, v35, v40);
        return (unsigned int)v33;
      }
      PinnedMode = DMMVIDPNTARGETMODESET::GetPinnedMode(this);
      v17 = PinnedMode;
      if ( PinnedMode )
      {
        Instance = Set<DMMVIDPNTARGETMODE>::SetEnumerator<_D3DKMDT_VIDPN_TARGET_MODE>::CreateInstance((__int64)PinnedMode);
        if ( Instance )
        {
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
          v19 = Instance + 16;
          *(_DWORD *)v19 = *((_DWORD *)v17 + 6);
          *(_OWORD *)(v19 + 8) = *(_OWORD *)((char *)v17 + 72);
          *(_OWORD *)(v19 + 24) = *(_OWORD *)((char *)v17 + 88);
          *(_OWORD *)(v19 + 40) = *(_OWORD *)((char *)v17 + 104);
          *(_QWORD *)(v19 + 56) = *((_QWORD *)v17 + 15);
          *(_DWORD *)(v19 + 64) = *((_DWORD *)v17 + 32);
          if ( DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(v17) )
          {
            *(_QWORD *)(v19 + 68) = *((_QWORD *)v17 + 18);
          }
          else
          {
            v20 = *((_QWORD *)this + 14);
            if ( !*(_QWORD *)(v20 + 40) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 68;
            }
            v21 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v20 + 40) + 64LL) + 48);
            if ( !*(_QWORD *)(v21 + 8) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 68;
            }
            if ( (*(_DWORD *)(*(_QWORD *)(v21 + 8) + 24LL) & 0x20) != 0 )
              v22 = -2;
            else
              v22 = -1;
            *(_DWORD *)(v19 + 72) = v22;
            *(_DWORD *)(v19 + 68) = v22;
          }
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
          *(_QWORD *)a2 = v19;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
          if ( v42 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v40);
          }
          return 0LL;
        }
        WdLogSingleEntry1(6LL, this);
        WdLogGlobalForLineNumber = 676;
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
        v33 = -1073741801;
        goto LABEL_34;
      }
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13, v15, v16) + 24) = &v38;
      WdLogGlobalForLineNumber = 657;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(&v38, v28, v29, v30) + 24) = this;
      WdLogGlobalForLineNumber = 1228;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
      if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventProfilerExit, v32, v40);
      return 1075708679LL;
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      WdLogGlobalForLineNumber = 1209;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
      if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v40);
      return 3223192329LL;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    WdLogGlobalForLineNumber = 1192;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v36, (__int64)&EventProfilerExit, v37, v40);
    return 3221225485LL;
  }
}
