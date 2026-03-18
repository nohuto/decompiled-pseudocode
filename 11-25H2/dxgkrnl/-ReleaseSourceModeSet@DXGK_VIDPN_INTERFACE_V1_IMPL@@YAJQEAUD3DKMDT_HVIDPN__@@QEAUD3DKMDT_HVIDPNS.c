/*
 * XREFs of ?ReleaseSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x140386F80
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14001B358 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x14003B78C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x14005F3A0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::ReleaseSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 Container; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r11
  struct D3DKMDT_HVIDPN__ *v24; // rax
  struct D3DKMDT_HVIDPN__ *v25; // rdx
  struct D3DKMDT_HVIDPN__ **v26; // rcx
  int v27; // [rsp+20h] [rbp-20h] BYREF
  __int64 v28; // [rsp+28h] [rbp-18h]
  char v29; // [rsp+30h] [rbp-10h]

  v27 = -1;
  v28 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v29 = 1;
    v27 = 7044;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 7044);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 7044);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 32) = this;
  WdLogGlobalForLineNumber = 3513;
  if ( this && *((_DWORD *)this + 16) == 1833172997 )
  {
    if ( a2 && *((_DWORD *)a2 + 32) == 1833173004 )
    {
      v10 = *((_QWORD *)a2 + 14);
      if ( !v10 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3551;
      }
      if ( !*(_QWORD *)(v10 + 40) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 68;
      }
      v11 = *(_QWORD *)(v10 + 40);
      if ( !*(_QWORD *)(v11 + 72) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 68;
      }
      if ( *(DXGK_VIDPN_INTERFACE_V1_IMPL **)(v11 + 72) == this )
      {
        v12 = *((_QWORD *)a2 + 14);
        if ( v12 == v10 )
        {
          if ( a2 == *(struct D3DKMDT_HVIDPN__ *const *)(v10 + 120) )
          {
            WdLogSingleEntry2(7LL, a2, *(unsigned int *)(v10 + 24));
            WdLogGlobalForLineNumber = 909;
            auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)(v10 + 120), 0LL);
            if ( *((_DWORD *)a2 + 24) != 1 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 914;
            }
          }
          if ( *((_DWORD *)a2 + 24) == 1
            && DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
                 *(_QWORD *)(v10 + 112),
                 (__int64)a2) )
          {
            v24 = a2 + 2;
            v25 = (struct D3DKMDT_HVIDPN__ *)*((_QWORD *)a2 + 1);
            if ( *((struct D3DKMDT_HVIDPN__ *const *)v25 + 1) != a2 + 2
              || (v26 = (struct D3DKMDT_HVIDPN__ **)*((_QWORD *)a2 + 2), *v26 != v24) )
            {
              __fastfail(3u);
            }
            *v26 = v25;
            *((_QWORD *)v25 + 1) = v26;
            *(_QWORD *)v24 = 0LL;
            *((_QWORD *)a2 + 2) = 0LL;
            --*(_QWORD *)(v23 + 32);
          }
          ReferenceCounted::Release((ReferenceCounted *)(a2 + 22));
        }
        else
        {
          WdLogSingleEntry3(2LL, v12, a2, v10);
          WdLogGlobalForLineNumber = 898;
        }
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
        if ( v29 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v27);
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
        WdLogGlobalForLineNumber = 3558;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
        if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v27);
        return 3223192368LL;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, a2);
      WdLogGlobalForLineNumber = 3539;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
      if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v27);
      return 3223192328LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 3524;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v27);
    return 3223192323LL;
  }
}
