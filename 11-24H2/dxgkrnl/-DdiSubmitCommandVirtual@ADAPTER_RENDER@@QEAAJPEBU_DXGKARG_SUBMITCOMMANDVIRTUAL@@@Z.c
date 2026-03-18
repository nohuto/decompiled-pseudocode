/*
 * XREFs of ?DdiSubmitCommandVirtual@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMANDVIRTUAL@@@Z @ 0x1402FD060
 * Callers:
 *     ADAPTER_RENDER_DdiSubmitCommandVirtual @ 0x1400378C0 (ADAPTER_RENDER_DdiSubmitCommandVirtual.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1400156B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140015B10 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x140016440 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402AC210 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommandVirtual(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SUBMITCOMMANDVIRTUAL *a2,
        __int64 a3)
{
  KIRQL CurrentIrql; // al
  __int64 v6; // rbp
  struct DXGTHREAD *v7; // rbx
  int v8; // r15d
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax
  __int64 DmaBufferSize; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  KIRQL v23; // al
  struct DXGTHREAD *DxgThread; // [rsp+50h] [rbp-88h] BYREF
  int v25; // [rsp+58h] [rbp-80h] BYREF
  __int64 v26; // [rsp+60h] [rbp-78h]
  char v27; // [rsp+68h] [rbp-70h]
  _BYTE v28[8]; // [rsp+70h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-60h] BYREF

  v25 = -1;
  v26 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v27 = 1;
    v25 = 5063;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 5063);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 5063);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  CurrentIrql = KeGetCurrentIrql();
  v6 = CurrentIrql;
  v7 = 0LL;
  if ( CurrentIrql < 2u
    && (DxgThread = 0LL, (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0)
    && ((v7 = DxgThread) != 0LL || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v7 = DxgThread) != 0LL)) )
  {
    v8 = *((_DWORD *)v7 + 12);
  }
  else
  {
    v8 = 0;
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v28,
    *((struct DXGADAPTER **)this + 2));
  v9 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMANDVIRTUAL *))(*((_QWORD *)this + 2) + 936LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 288LL),
         a2);
  if ( v28[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v6 != KeGetCurrentIrql() )
  {
    v23 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v6, v23);
    WdLogGlobalForLineNumber = 1415;
  }
  if ( v7 )
  {
    v11 = *((int *)v7 + 12);
    if ( (_DWORD)v11 != v8 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v7 + 12), v8, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
  v14[3] = v9;
  v14[4] = a2->hContext;
  v14[5] = a2->DmaBufferVirtualAddress;
  DmaBufferSize = a2->DmaBufferSize;
  v14[6] = DmaBufferSize;
  WdLogGlobalForLineNumber = 1421;
  v19 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferSize, v16, v17, v18);
  v19[3] = a2->pDmaBufferPrivateData;
  v19[4] = a2->DmaBufferPrivateDataSize;
  v19[5] = a2->SubmissionFenceId;
  v19[6] = a2->NodeOrdinal;
  v19[7] = a2->Flags.Value;
  WdLogGlobalForLineNumber = 1428;
  if ( (_DWORD)v9 != -1073741811 && (_DWORD)v9 )
  {
    WdLogSingleEntry1(2LL, v9);
    WdLogGlobalForLineNumber = 1430;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v9,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v25);
  return (unsigned int)v9;
}
