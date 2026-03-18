/*
 * XREFs of ?AcquireFirstTargetInfo@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1402602F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@@SAPEAVDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x14008FA38 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET_.c)
 *     ??$AcquireDdiEnumeratorCachedTargetInfo@V?$mem_fun_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENTTARGETSET@@@KM_STL@@@DMMVIDEOPRESENTTARGETSET@@QEAAJV?$mem_fun_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENTTARGETSET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x14025E6F0 (--$AcquireDdiEnumeratorCachedTargetInfo@V-$mem_fun_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENT.c)
 */

__int64 __fastcall DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AcquireFirstTargetInfo(
        DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *const a2,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET **a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DMMVIDEOPRESENTTARGET *(__fastcall *v19)(DMMVIDEOPRESENTTARGETSET *); // [rsp+20h] [rbp-30h] BYREF
  int v20; // [rsp+28h] [rbp-28h]
  int v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+38h] [rbp-18h]
  char v23; // [rsp+40h] [rbp-10h]
  __int64 v24; // [rsp+68h] [rbp+18h] BYREF

  v21 = -1;
  v22 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v23 = 1;
    v21 = 6045;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 6045);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 6045);
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v8 = ExposedViaHandle<DMMVIDEOPRESENTTARGETSET,D3DKMDT_HVIDEOPRESENTTARGETSET__ *>::GetFromHandle((__int64)this);
    if ( v8 )
    {
      v20 = 0;
      v24 = 0LL;
      v19 = DMMVIDEOPRESENTTARGETSET::GetFirstTarget;
      v11 = DMMVIDEOPRESENTTARGETSET::AcquireDdiEnumeratorCachedTargetInfo<KM_STL::mem_fun_t<DMMVIDEOPRESENTTARGET *,DMMVIDEOPRESENTTARGETSET>>(
              v8,
              (__int64)&v19,
              &v24);
      if ( v11 == -1071774971 )
      {
        WdLogSingleEntry1(3LL, v8);
        WdLogGlobalForLineNumber = 5553;
        if ( v24 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 5556;
        }
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
        if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v21);
        return 1075708747LL;
      }
      else if ( v11 >= 0 )
      {
        v16 = v24;
        if ( !v24 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 5570;
        }
        *(_QWORD *)a2 = v16;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
        if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v21);
        return 0LL;
      }
      else
      {
        WdLogSingleEntry1(2LL, v8);
        WdLogGlobalForLineNumber = 5564;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
        if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v21);
        return (unsigned int)v11;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      WdLogGlobalForLineNumber = 5534;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
      if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v21);
      return 3223192342LL;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    WdLogGlobalForLineNumber = 5517;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit, v6, v21);
    }
    return 3221225485LL;
  }
}
