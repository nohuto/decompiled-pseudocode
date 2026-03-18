/*
 * XREFs of ?AcquireNextModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x14037D180
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE@@@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z @ 0x140038E50 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U-$DoubleLinkedListElementDeleter@V.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x140040B40 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x14037D55C (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a3,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a4)
{
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // esi
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // [rsp+20h] [rbp-50h] BYREF
  __int64 v33; // [rsp+28h] [rbp-48h]
  char v34; // [rsp+30h] [rbp-40h]
  __int128 v35; // [rsp+38h] [rbp-38h]
  __int64 v36; // [rsp+48h] [rbp-28h]
  __int128 v37; // [rsp+50h] [rbp-20h] BYREF
  __int64 v38; // [rsp+60h] [rbp-10h]
  __int64 v39; // [rsp+B0h] [rbp+40h] BYREF

  v32 = -1;
  v33 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 6011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 6011);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 6011);
  if ( a3 )
  {
    *(_QWORD *)&a3->Id = 0LL;
    v7 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
    if ( v7 )
    {
      v8 = (unsigned __int64)(a2 - 4) & -(__int64)(a2 != 0LL);
      if ( v8 && *(_DWORD *)v8 == 305419896 )
      {
        v12 = *(_QWORD *)(v8 + 8);
        if ( !v12 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1085;
        }
        if ( DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::ContainsByReference(
               v7 + 32,
               v12) )
        {
          DWORD2(v35) = 0;
          *(_QWORD *)&v35 = DMMVIDPNTARGETMODESET::GetNextMode;
          HIDWORD(v35) = HIDWORD(v33);
          v36 = v12;
          v37 = v35;
          v39 = 0LL;
          v38 = v12;
          v13 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET,DMMVIDPNTARGETMODE const *>>>(
                  v7,
                  &v37,
                  &v39);
          v18 = v13;
          if ( v13 == -1071774902 )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14, v16, v17) + 24) = v7;
            WdLogGlobalForLineNumber = 1111;
            if ( v39 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1114;
            }
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
            if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v32);
            return 1075708748LL;
          }
          else if ( v13 < 0 )
          {
            WdLogSingleEntry2(7LL, v8, v7);
            WdLogGlobalForLineNumber = 1122;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
            if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v32);
            return v18;
          }
          else
          {
            v19 = v39;
            if ( !v39 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1128;
            }
            *(_QWORD *)&a3->Id = v19;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
            if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v32);
            return 0LL;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v8, v7);
          WdLogGlobalForLineNumber = 1092;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
          if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v32);
          return 3223192368LL;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v8);
        WdLogGlobalForLineNumber = 1073;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
        if ( v34 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v32);
        }
        return 3223192337LL;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      WdLogGlobalForLineNumber = 1060;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
      if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit, v31, v32);
      return 3223192329LL;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, a2, this);
    WdLogGlobalForLineNumber = 1039;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit, v29, v32);
    return 3221225485LL;
  }
}
