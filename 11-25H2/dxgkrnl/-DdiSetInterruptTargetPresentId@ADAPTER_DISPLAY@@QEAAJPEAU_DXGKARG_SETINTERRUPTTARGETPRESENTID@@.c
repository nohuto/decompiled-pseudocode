/*
 * XREFs of ?DdiSetInterruptTargetPresentId@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETINTERRUPTTARGETPRESENTID@@@Z @ 0x140020F98
 * Callers:
 *     ADAPTER_DISPLAY_DdiSetInterruptTargetPresentId @ 0x140020F80 (ADAPTER_DISPLAY_DdiSetInterruptTargetPresentId.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140021B00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetInterruptTargetPresentId(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_SETINTERRUPTTARGETPRESENTID *a2,
        __int64 a3)
{
  struct DXGTHREAD *Current; // rax
  struct DXGTHREAD *v6; // rbx
  int v7; // eax
  KIRQL CurrentIrql; // al
  __int64 v9; // r14
  struct DXGTHREAD *v10; // rbx
  int v11; // esi
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGTHREAD *v16; // rax
  KIRQL v17; // al
  int v18; // [rsp+50h] [rbp-29h] BYREF
  struct DXGTHREAD *v19; // [rsp+58h] [rbp-21h]
  char v20; // [rsp+60h] [rbp-19h]
  _BYTE v21[8]; // [rsp+68h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-9h] BYREF

  v18 = -1;
  v19 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v20 = 1;
    v18 = 5155;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 5155);
  }
  else
  {
    v20 = 0;
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    Current = DXGTHREAD::GetCurrent();
    v19 = Current;
    v6 = Current;
    if ( Current )
    {
      if ( *((int *)Current + 13) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 203;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_ProfilerEntryCount >= 0", 203LL, 0LL, 0LL, 0LL, 0LL);
      }
      v7 = *((_DWORD *)v6 + 13);
      if ( !v7 )
        *((_DWORD *)v6 + 14) = 5155;
      *((_DWORD *)v6 + 13) = v7 + 1;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  CurrentIrql = KeGetCurrentIrql();
  v9 = CurrentIrql;
  v10 = 0LL;
  if ( CurrentIrql < 2u && (v16 = DXGTHREAD::GetCurrent(), (v10 = v16) != 0LL) )
    v11 = *((_DWORD *)v16 + 12);
  else
    v11 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v21,
    *((struct DXGADAPTER **)this + 2));
  v12 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_SETINTERRUPTTARGETPRESENTID *))(*((_QWORD *)this + 2) + 1432LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 288LL),
          a2);
  if ( v21[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v9 != KeGetCurrentIrql() )
  {
    v17 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v9, v17);
    WdLogGlobalForLineNumber = 1170;
  }
  if ( v10 && *((_DWORD *)v10 + 12) != v11 )
  {
    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v10 + 12), v11, 0LL);
    WdLogGlobalForLineNumber = 73;
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  if ( (_DWORD)v12 )
  {
    WdLogSingleEntry1(2LL, v12);
    WdLogGlobalForLineNumber = 1173;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v12,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v18);
  return (unsigned int)v12;
}
