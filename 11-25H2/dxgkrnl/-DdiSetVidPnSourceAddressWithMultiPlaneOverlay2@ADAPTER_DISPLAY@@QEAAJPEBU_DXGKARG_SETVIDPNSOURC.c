/*
 * XREFs of ?DdiSetVidPnSourceAddressWithMultiPlaneOverlay2@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2@@@Z @ 0x14006A100
 * Callers:
 *     ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay2 @ 0x14006BE40 (ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay2.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140021B00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140030700 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceAddressWithMultiPlaneOverlay2(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2 *a2,
        __int64 a3)
{
  KIRQL CurrentIrql; // al
  __int64 v6; // r14
  struct DXGTHREAD *v7; // rbx
  struct DXGTHREAD *Current; // rax
  int v9; // edi
  __int64 v10; // rsi
  KIRQL v11; // al
  __int64 v12; // rcx
  __int64 v13; // r8
  int v15; // [rsp+50h] [rbp-88h] BYREF
  __int64 v16; // [rsp+58h] [rbp-80h]
  char v17; // [rsp+60h] [rbp-78h]
  _BYTE v18[56]; // [rsp+68h] [rbp-70h] BYREF

  v15 = -1;
  v16 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v17 = 1;
    v15 = 5121;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 5121);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v15, 5121);
  if ( KeGetCurrentIrql() <= 2u )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1047;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"KeGetCurrentIrql() > DISPATCH_LEVEL",
      1047LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( KeGetCurrentIrql() >= 0xFu )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1048;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"KeGetCurrentIrql() < PROFILE_LEVEL",
      1048LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  CurrentIrql = KeGetCurrentIrql();
  v6 = CurrentIrql;
  v7 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v7 = Current) != 0LL) )
    v9 = *((_DWORD *)Current + 12);
  else
    v9 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v18,
    *((struct DXGADAPTER **)this + 2));
  v10 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2 *))(*((_QWORD *)this + 2) + 1000LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 288LL),
          a2);
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v18);
  if ( (_BYTE)v6 != KeGetCurrentIrql() )
  {
    v11 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v6, v11);
    WdLogGlobalForLineNumber = 1073;
  }
  if ( v7 && *((_DWORD *)v7 + 12) != v9 )
  {
    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v7 + 12), v9, 0LL);
    WdLogGlobalForLineNumber = 73;
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  if ( (_DWORD)v10 )
  {
    WdLogSingleEntry1(2LL, v10);
    WdLogGlobalForLineNumber = 1076;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v10,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v15);
  return (unsigned int)v10;
}
