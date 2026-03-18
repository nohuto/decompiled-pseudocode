/*
 * XREFs of ?AcquirePinnedModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1403704D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x140034864 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_SOURCE_MODE@@@?$Set@VDMMVIDPNSOURCEMODE@@@@SAPEAV12@QEBVDMMVIDPNSOURCEMODE@@@Z @ 0x140039604 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_SOURCE_MODE@@@-$Set@VDMMVIDPNSOURCEMODE@@@@SAPEA.c)
 *     ?GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ @ 0x14008EE00 (-GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  bool v12; // zf
  struct DMMVIDPNTARGETMODE *PinnedMode; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct DMMVIDPNTARGETMODE *v18; // rdi
  __int64 Instance; // r14
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // edi
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r8
  struct DMMVIDPNTARGETMODE *(__fastcall *v36)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-30h] BYREF
  int v37; // [rsp+28h] [rbp-28h]
  int v38; // [rsp+30h] [rbp-20h] BYREF
  __int64 v39; // [rsp+38h] [rbp-18h]
  char v40; // [rsp+40h] [rbp-10h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 24);
  v38 = -1;
  v39 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v40 = 1;
    v38 = 7003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerEnter, v6, 7003);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v38, 7003);
  v11 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  *(_QWORD *)(v11 + 24) = this;
  *(_QWORD *)(v11 + 32) = a2;
  WdLogGlobalForLineNumber = 363;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( this && *((_DWORD *)this + 32) == 1833173004 )
    {
      v37 = 0;
      v12 = *((_BYTE *)this + 136) == 0;
      v36 = DMMVIDPNTARGETMODESET::GetPinnedMode;
      if ( v12 )
      {
        WdLogSingleEntry1(2LL, this);
        WdLogGlobalForLineNumber = 500;
        v31 = -1071774944;
LABEL_26:
        WdLogSingleEntry2(2LL, this, v31);
        WdLogGlobalForLineNumber = 417;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
        if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v32, (__int64)&EventProfilerExit, v33, v38);
        return (unsigned int)v31;
      }
      PinnedMode = DMMVIDPNTARGETMODESET::GetPinnedMode(this);
      v18 = PinnedMode;
      if ( PinnedMode )
      {
        Instance = Set<DMMVIDPNSOURCEMODE>::SetEnumerator<_D3DKMDT_VIDPN_SOURCE_MODE>::CreateInstance((__int64)PinnedMode);
        if ( Instance )
        {
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
          *(_DWORD *)(Instance + 16) = *((_DWORD *)v18 + 6);
          v20 = *((_DWORD *)v18 + 18);
          *(_DWORD *)(Instance + 20) = v20;
          if ( v20 != 1 )
          {
            if ( v20 == 2 )
            {
              *(enum _D3DKMDT_TEXT_RENDERING_FORMAT *)(Instance + 24) = *DMMVIDPNSOURCEMODE::GetTextInfo(v18);
              goto LABEL_11;
            }
            if ( (unsigned int)(v20 - 3) >= 2 )
            {
              if ( (unsigned int)(v20 - 1) <= 3 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 579;
              }
              goto LABEL_11;
            }
          }
          *(struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)(Instance + 24) = *DMMVIDPNSOURCEMODE::GetGraphicsInfo(v18);
LABEL_11:
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
          *(_QWORD *)a2 = Instance + 16;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
          if ( v40 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v38);
          }
          return 0LL;
        }
        WdLogSingleEntry1(6LL, this);
        WdLogGlobalForLineNumber = 538;
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
        v31 = -1073741801;
        goto LABEL_26;
      }
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14, v16, v17) + 24) = &v36;
      WdLogGlobalForLineNumber = 519;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(&v36, v26, v27, v28) + 24) = this;
      WdLogGlobalForLineNumber = 406;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
      if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit, v30, v38);
      return 1075708679LL;
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      WdLogGlobalForLineNumber = 387;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
      if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v38);
      return 3223192328LL;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    WdLogGlobalForLineNumber = 370;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit, v35, v38);
    return 3221225485LL;
  }
}
