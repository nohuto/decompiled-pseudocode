/*
 * XREFs of ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1402E1830
 * Callers:
 *     ADAPTER_RENDER_DdiBuildPagingBuffer @ 0x140036110 (ADAPTER_RENDER_DdiBuildPagingBuffer.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1400216A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140021B00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x140022430 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402A5DC0 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 *     ?DxgkrnlLogBuildPagingBufferInformation@ADAPTER_RENDER@@AEAAXJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1402E1B50 (-DxgkrnlLogBuildPagingBufferInformation@ADAPTER_RENDER@@AEAAXJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiBuildPagingBuffer(
        ADAPTER_RENDER *this,
        struct _DXGKARG_BUILDPAGINGBUFFER *a2,
        __int64 a3)
{
  KIRQL CurrentIrql; // al
  __int64 v6; // r14
  struct DXGTHREAD *v7; // rdi
  int v8; // r15d
  __int64 v9; // rsi
  ADAPTER_RENDER *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  KIRQL v14; // al
  struct DXGTHREAD *DxgThread; // [rsp+50h] [rbp-88h] BYREF
  int v16; // [rsp+58h] [rbp-80h] BYREF
  __int64 v17; // [rsp+60h] [rbp-78h]
  char v18; // [rsp+68h] [rbp-70h]
  _BYTE v19[8]; // [rsp+70h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-60h] BYREF

  v16 = -1;
  v17 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 5016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 5016);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 5016);
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
    (DXGVALIDATIONPROCESSATTACH *)v19,
    *((struct DXGADAPTER **)this + 2));
  v9 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_BUILDPAGINGBUFFER *))(*((_QWORD *)this + 2) + 544LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 288LL),
         a2);
  if ( v19[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v6 != KeGetCurrentIrql() )
  {
    v14 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v6, v14);
    WdLogGlobalForLineNumber = 2057;
  }
  if ( v7 )
  {
    v10 = (ADAPTER_RENDER *)*((int *)v7 + 12);
    if ( (_DWORD)v10 != v8 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v7 + 12), v8, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  ADAPTER_RENDER::DxgkrnlLogBuildPagingBufferInformation(v10, v9, a2);
  if ( (_DWORD)v9 && (_DWORD)v9 != -1071775743 && (_DWORD)v9 != -1071775486 )
  {
    WdLogSingleEntry1(2LL, v9);
    WdLogGlobalForLineNumber = 2062;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v9,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v16);
  return (unsigned int)v9;
}
