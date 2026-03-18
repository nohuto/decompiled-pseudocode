/*
 * XREFs of ?DdiSubmitCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x140020B88
 * Callers:
 *     ADAPTER_RENDER_DdiSubmitCommand @ 0x140020B70 (ADAPTER_RENDER_DdiSubmitCommand.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1400216A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140021B00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommand(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SUBMITCOMMAND *a2,
        __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  KIRQL CurrentIrql; // al
  __int64 v11; // r14
  struct DXGTHREAD *v12; // rbx
  int v13; // esi
  __int64 v14; // r12
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DXGTHREAD *Current; // rax
  KIRQL v22; // al
  __int64 v23; // rcx
  int v24; // [rsp+50h] [rbp-29h] BYREF
  __int64 v25; // [rsp+58h] [rbp-21h]
  char v26; // [rsp+60h] [rbp-19h]
  _BYTE v27[8]; // [rsp+68h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-9h] BYREF

  v24 = -1;
  v25 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v26 = 1;
    v24 = 5013;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 5013);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry(&v24, 5013LL);
  v5 = *((_QWORD *)this + 2);
  v6 = *(_QWORD *)(v5 + 3128);
  if ( !v6
    || (v7 = *(_QWORD *)(v6 + 744)) == 0
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v6 + 736) + 8LL) + 72LL))(v7)
    && *(struct _KTHREAD **)(v5 + 3136) != KeGetCurrentThread() )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v5 + 256)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventBlockThread, v9, 73);
      KeWaitForSingleObject((PVOID)(v5 + 256), Executive, 0, 0, 0LL);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v5 + 280), 1u);
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  CurrentIrql = KeGetCurrentIrql();
  v11 = CurrentIrql;
  v12 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v12 = Current) != 0LL) )
    v13 = *((_DWORD *)Current + 12);
  else
    v13 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v27,
    *((struct DXGADAPTER **)this + 2));
  v14 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMAND *))(*((_QWORD *)this + 2) + 528LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 288LL),
          a2);
  if ( v27[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v11 != KeGetCurrentIrql() )
  {
    v22 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v11, v22);
    WdLogGlobalForLineNumber = 1374;
  }
  if ( v12 )
  {
    v23 = *((int *)v12 + 12);
    if ( (_DWORD)v23 != v13 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, v23, v13, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  v15 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v15[3] = v14;
  v15[4] = a2->hDevice;
  v15[5] = a2->DmaBufferSegmentId;
  v15[6] = a2->DmaBufferPhysicalAddress.QuadPart;
  v15[7] = a2->DmaBufferSize;
  WdLogGlobalForLineNumber = 1381;
  v16 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v16[3] = a2->DmaBufferSubmissionStartOffset;
  v16[4] = a2->DmaBufferSubmissionEndOffset;
  v16[5] = a2->pDmaBufferPrivateData;
  v16[6] = a2->DmaBufferPrivateDataSize;
  v16[7] = a2->DmaBufferPrivateDataSubmissionStartOffset;
  WdLogGlobalForLineNumber = 1388;
  v17 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v17[3] = a2->DmaBufferPrivateDataSubmissionEndOffset;
  v17[4] = a2->SubmissionFenceId;
  v17[5] = a2->NodeOrdinal;
  v17[6] = a2->Flags.Value;
  WdLogGlobalForLineNumber = 1394;
  if ( (_DWORD)v14 )
  {
    WdLogSingleEntry1(2LL, v14);
    WdLogGlobalForLineNumber = 1396;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v14,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v24);
  return (unsigned int)v14;
}
