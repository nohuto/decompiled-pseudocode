/*
 * XREFs of ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x140014848
 * Callers:
 *     ADAPTER_DISPLAY_DdiSetVidPnSourceAddress @ 0x140014830 (ADAPTER_DISPLAY_DdiSetVidPnSourceAddress.c)
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
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(
        ADAPTER_DISPLAY *this,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESS *a2,
        __int64 a3)
{
  char v5; // r13
  __int64 v6; // rcx
  KIRQL CurrentIrql; // al
  __int64 v8; // r12
  struct DXGTHREAD *v9; // rdi
  int v10; // r15d
  unsigned int v11; // ebx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGTHREAD *Current; // rax
  KIRQL v17; // al
  __int64 v18; // rcx
  int v19; // [rsp+50h] [rbp-39h] BYREF
  __int64 v20; // [rsp+58h] [rbp-31h]
  char v21; // [rsp+60h] [rbp-29h]
  _BYTE v22[8]; // [rsp+68h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-19h] BYREF

  v19 = -1;
  v20 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v21 = 1;
    v19 = 5010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 5010);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry(&v19, 5010LL);
  v5 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1LL);
    v5 = 1;
  }
  v6 = *((_QWORD *)this + 2);
  if ( *(int *)(v6 + 3004) < 1105 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))(v6 + 640))(
            *(_QWORD *)(v6 + 288),
            a2);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 4804));
    CurrentIrql = KeGetCurrentIrql();
    v8 = CurrentIrql;
    v9 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v9 = Current) != 0LL) )
      v10 = *((_DWORD *)Current + 12);
    else
      v10 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v22,
      *((struct DXGADAPTER **)this + 2));
    v11 = (*(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *))(*((_QWORD *)this + 2)
                                                                                           + 640LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 288LL),
            a2);
    if ( v22[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)v8 != KeGetCurrentIrql() )
    {
      v17 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v8, v17);
      WdLogGlobalForLineNumber = 954;
    }
    if ( v9 )
    {
      v18 = *((int *)v9 + 12);
      if ( (_DWORD)v18 != v10 )
      {
        WdLogSingleEntry5(0LL, 275LL, 38LL, v18, v10, 0LL);
        WdLogGlobalForLineNumber = 73;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  }
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v12[3] = (int)v11;
  v12[4] = a2->VidPnSourceId;
  v12[5] = a2->PrimarySegment;
  v12[6] = a2->PrimaryAddress.QuadPart;
  v12[7] = a2->hAllocation;
  WdLogGlobalForLineNumber = 977;
  if ( v11 != -1073741811 && v11 != -1073741801 && v11 )
  {
    WdLogSingleEntry1(2LL, (int)v11);
    WdLogGlobalForLineNumber = 979;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      (int)v11,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v5 )
    DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v19);
  return v11;
}
