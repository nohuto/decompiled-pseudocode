/*
 * XREFs of ?AcquireNextSourceInfo@DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@PEAPEBU3@@Z @ 0x140259A20
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x14005F3A0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@@SAPEAVDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@Z @ 0x14008E78C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET_.c)
 *     ??$AcquireDdiEnumeratorCachedSourceInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDEOPRESENTSOURCE@@VDMMVIDEOPRESENTSOURCESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDEOPRESENTSOURCE@@VDMMVIDEOPRESENTSOURCESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1402606B8 (--$AcquireDdiEnumeratorCachedSourceInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDEOPRESENTSOURCE@@VD.c)
 */

__int64 __fastcall DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AcquireNextSourceInfo(
        DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *const a2,
        struct _D3DKMDT_VIDEO_PRESENT_SOURCE *a3,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE **a4)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // esi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  struct _D3DKMDT_VIDEO_PRESENT_SOURCE v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // [rsp+20h] [rbp-50h] BYREF
  __int64 v32; // [rsp+28h] [rbp-48h]
  char v33; // [rsp+30h] [rbp-40h]
  __int128 v34; // [rsp+38h] [rbp-38h]
  __int64 v35; // [rsp+48h] [rbp-28h]
  __int128 v36; // [rsp+50h] [rbp-20h] BYREF
  __int64 v37; // [rsp+60h] [rbp-10h]
  struct _D3DKMDT_VIDEO_PRESENT_SOURCE v38; // [rsp+B0h] [rbp+40h] BYREF

  v31 = -1;
  v32 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v33 = 1;
    v31 = 6042;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 6042);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 6042);
  if ( a3 )
  {
    *a3 = 0LL;
    v10 = ExposedViaHandle<DMMVIDEOPRESENTSOURCESET,D3DKMDT_HVIDEOPRESENTSOURCESET__ *>::GetFromHandle((__int64)this);
    if ( v10 )
    {
      v13 = (unsigned __int64)(a2 - 4) & -(__int64)(a2 != 0LL);
      if ( v13 && *(_DWORD *)v13 == 305419896 )
      {
        v14 = *(_QWORD *)(v13 + 8);
        if ( !v14 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 5201;
        }
        if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
               v10 + 8,
               v14) )
        {
          DWORD2(v34) = 0;
          *(_QWORD *)&v34 = DMMVIDEOPRESENTSOURCESET::GetNextSource;
          HIDWORD(v34) = HIDWORD(v32);
          v35 = v14;
          v36 = v34;
          v38 = 0LL;
          v37 = v14;
          v19 = DMMVIDEOPRESENTSOURCESET::AcquireDdiEnumeratorCachedSourceInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDEOPRESENTSOURCE *,DMMVIDEOPRESENTSOURCESET,DMMVIDEOPRESENTSOURCE const *>>>(
                  v10,
                  &v36,
                  &v38);
          if ( v19 == -1071774972 )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17, v20, v21) + 24) = v10;
            WdLogGlobalForLineNumber = 5227;
            if ( v38 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5230;
            }
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
            if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v31);
            return 1075708748LL;
          }
          else if ( v19 >= 0 )
          {
            v26 = v38;
            if ( !*(_QWORD *)&v38 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 5245;
            }
            *a3 = v26;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
            if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v31);
            return 0LL;
          }
          else
          {
            WdLogSingleEntry2(2LL, v13, v10);
            WdLogGlobalForLineNumber = 5239;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
            if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v31);
            return (unsigned int)v19;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v13, v10);
          WdLogGlobalForLineNumber = 5208;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
          if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v31);
          return 3223192368LL;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v13);
        WdLogGlobalForLineNumber = 5188;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
        if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit, v30, v31);
        return 3223192324LL;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      WdLogGlobalForLineNumber = 5175;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
      if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v31);
      return 3223192341LL;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, a2, this);
    WdLogGlobalForLineNumber = 5154;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit, v8, v31);
    }
    return 3221225485LL;
  }
}
