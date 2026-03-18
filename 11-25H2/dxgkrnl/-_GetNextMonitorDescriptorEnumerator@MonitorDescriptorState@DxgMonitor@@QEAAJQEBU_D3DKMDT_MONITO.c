/*
 * XREFs of ?_GetNextMonitorDescriptorEnumerator@MonitorDescriptorState@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU3@@Z @ 0x1403E446C
 * Callers:
 *     ?AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@QEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU3@@Z @ 0x1403E4240 (-AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORD.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::_GetNextMonitorDescriptorEnumerator(
        const struct _D3DKMDT_MONITOR_DESCRIPTOR ****this,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR *const a2,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a3,
        __int64 a4)
{
  const struct _D3DKMDT_MONITOR_DESCRIPTOR **v7; // rbx
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v8; // rax
  const struct _D3DKMDT_MONITOR_DESCRIPTOR ***v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r15
  D3DKMDT_MONITOR_DESCRIPTOR_ID v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 result; // rax
  __int64 v18; // rax
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v19; // rcx
  const struct _D3DKMDT_MONITOR_DESCRIPTOR ***v20; // rax
  const struct _D3DKMDT_MONITOR_DESCRIPTOR ***v21; // rdx
  __int128 v22; // [rsp+20h] [rbp-38h] BYREF
  __int128 v23; // [rsp+30h] [rbp-28h]

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1854;
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1855;
  }
  v7 = (const struct _D3DKMDT_MONITOR_DESCRIPTOR **)(this + 21);
  if ( !a2 || (v8 = *v7, *v7 == (const struct _D3DKMDT_MONITOR_DESCRIPTOR *)v7) )
  {
LABEL_23:
    WdLogSingleEntry2(2LL, a2, this);
    result = 3223192368LL;
    WdLogGlobalForLineNumber = 1870;
  }
  else
  {
    while ( v8 != &a2[1] )
    {
      if ( v7 == (const struct _D3DKMDT_MONITOR_DESCRIPTOR **)v8 )
        goto LABEL_23;
      v8 = *(const struct _D3DKMDT_MONITOR_DESCRIPTOR **)&v8->Id;
    }
    v9 = this[16];
    if ( !v9
      || (v10 = ((__int64 (__fastcall *)(const struct _D3DKMDT_MONITOR_DESCRIPTOR ***))(*v9)[1])(v9), (v11 = v10) == 0)
      || (v12 = a2->Id + 1, (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10) <= v12) )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, a2, a3, a4) + 24) = this;
      WdLogGlobalForLineNumber = 1884;
      goto LABEL_15;
    }
    v22 = 0LL;
    v23 = 0LL;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v11 + 32LL))(v11, v12, &v22) )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13, v15, v16) + 24) = this;
      WdLogGlobalForLineNumber = 1898;
LABEL_15:
      *a3 = 0LL;
      return 0LL;
    }
    v18 = operator new(0x30uLL, 0x4D677844u, 256LL, v16);
    v19 = (const struct _D3DKMDT_MONITOR_DESCRIPTOR *)v18;
    if ( v18 )
    {
      *(_DWORD *)v18 = a2->Id + 1;
      *(_DWORD *)(v18 + 4) = DWORD1(v22);
      *(_QWORD *)(v18 + 8) = *((_QWORD *)&v22 + 1);
      *(_QWORD *)(v18 + 16) = v23;
      *(_DWORD *)(v18 + 24) = DWORD2(v23);
      v20 = (const struct _D3DKMDT_MONITOR_DESCRIPTOR ***)(v18 + 32);
      v21 = this[22];
      if ( *v21 != v7 )
        __fastfail(3u);
      *v20 = v7;
      v19[1].DataSize = (SIZE_T)v21;
      *v21 = (const struct _D3DKMDT_MONITOR_DESCRIPTOR **)v20;
      this[22] = v20;
      *a3 = v19;
      return 0LL;
    }
    WdLogSingleEntry0(2LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 1912;
  }
  return result;
}
