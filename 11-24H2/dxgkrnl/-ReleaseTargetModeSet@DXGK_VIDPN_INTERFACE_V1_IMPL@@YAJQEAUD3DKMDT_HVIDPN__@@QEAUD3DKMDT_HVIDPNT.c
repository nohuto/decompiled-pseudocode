/*
 * XREFs of ?ReleaseTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1403738C0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14000BDB4 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x140039D4C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x14005FC58 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::ReleaseTargetModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 Container; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r11
  struct D3DKMDT_HVIDPN__ *v23; // rax
  struct D3DKMDT_HVIDPN__ *v24; // rdx
  struct D3DKMDT_HVIDPN__ **v25; // rcx
  int v26; // [rsp+20h] [rbp-20h] BYREF
  __int64 v27; // [rsp+28h] [rbp-18h]
  char v28; // [rsp+30h] [rbp-10h]

  v26 = -1;
  v27 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 7049;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 7049);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 7049);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 32) = this;
  WdLogGlobalForLineNumber = 4083;
  if ( this && *((_DWORD *)this + 16) == 1833172997 )
  {
    if ( a2 && *((_DWORD *)a2 + 32) == 1833173005 )
    {
      v10 = *((_QWORD *)a2 + 14);
      if ( !v10 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4121;
      }
      if ( !*(_QWORD *)(v10 + 40) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 68;
      }
      if ( (DXGK_VIDPN_INTERFACE_V1_IMPL *)ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v10 + 40) + 64LL) == this )
      {
        v11 = *((_QWORD *)a2 + 14);
        if ( v11 == v10 )
        {
          if ( a2 == *(struct D3DKMDT_HVIDPN__ *const *)(v10 + 112) )
          {
            WdLogSingleEntry2(7LL, a2, *(unsigned int *)(v10 + 24));
            WdLogGlobalForLineNumber = 925;
            auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)(v10 + 112), 0LL);
            if ( *((_DWORD *)a2 + 24) != 1 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 930;
            }
          }
          if ( *((_DWORD *)a2 + 24) == 1
            && DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
                 *(_QWORD *)(v10 + 120),
                 (__int64)a2) )
          {
            v23 = a2 + 2;
            v24 = (struct D3DKMDT_HVIDPN__ *)*((_QWORD *)a2 + 1);
            if ( *((struct D3DKMDT_HVIDPN__ *const *)v24 + 1) != a2 + 2
              || (v25 = (struct D3DKMDT_HVIDPN__ **)*((_QWORD *)a2 + 2), *v25 != v23) )
            {
              __fastfail(3u);
            }
            *v25 = v24;
            *((_QWORD *)v24 + 1) = v25;
            *(_QWORD *)v23 = 0LL;
            *((_QWORD *)a2 + 2) = 0LL;
            --*(_QWORD *)(v22 + 32);
          }
          ReferenceCounted::Release((ReferenceCounted *)(a2 + 22));
        }
        else
        {
          WdLogSingleEntry3(2LL, v11, a2, v10);
          WdLogGlobalForLineNumber = 914;
        }
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
        if ( v28 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v26);
        }
        return 0LL;
      }
      else
      {
        if ( !*(_QWORD *)(v10 + 40) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 68;
        }
        Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v10 + 40) + 64LL);
        WdLogSingleEntry3(2LL, Container, a2, this);
        WdLogGlobalForLineNumber = 4128;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
        if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v26);
        return 3223192368LL;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, a2);
      WdLogGlobalForLineNumber = 4109;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
      if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v26);
      return 3223192329LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 4094;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v26);
    return 3223192323LL;
  }
}
