/*
 * XREFs of ?DdiFlipOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_FLIPOVERLAY@@@Z @ 0x1401A33D0
 * Callers:
 *     ?FlipOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_FLIPOVERLAY@@@Z @ 0x1401E23F0 (-FlipOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_FLIPOVERLAY@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1400216A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140021B00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x140022430 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140030700 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiFlipOverlay(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_FLIPOVERLAY *a3)
{
  KIRQL CurrentIrql; // al
  __int64 v7; // r14
  struct DXGTHREAD *v8; // rdi
  struct DXGTHREAD *Current; // rax
  int v10; // ebp
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  KIRQL v16; // al
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // [rsp+50h] [rbp-98h] BYREF
  __int64 v22; // [rsp+58h] [rbp-90h]
  char v23; // [rsp+60h] [rbp-88h]
  _BYTE v24[56]; // [rsp+68h] [rbp-80h] BYREF

  v21 = -1;
  v22 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v23 = 1;
    v21 = 5034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 5034);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 5034);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  CurrentIrql = KeGetCurrentIrql();
  v7 = CurrentIrql;
  v8 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v8 = Current) != 0LL) )
    v10 = *((_DWORD *)Current + 12);
  else
    v10 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v24,
    *((struct DXGADAPTER **)this + 2));
  v11 = (*(int (__fastcall **)(void *, struct _DXGKARG_FLIPOVERLAY *))(*((_QWORD *)this + 2) + 760LL))(a2, a3);
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v24);
  if ( (_BYTE)v7 != KeGetCurrentIrql() )
  {
    v16 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v7, v16);
    WdLogGlobalForLineNumber = 3436;
  }
  if ( v8 )
  {
    v13 = *((int *)v8 + 12);
    if ( (_DWORD)v13 != v10 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, v13, v10, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
  v17[3] = v11;
  v17[4] = a3->hSource;
  v17[5] = a2;
  WdLogGlobalForLineNumber = 3441;
  if ( (_DWORD)v11 != -1073741811 && (_DWORD)v11 != -1073741801 && (_DWORD)v11 )
  {
    WdLogSingleEntry1(2LL, v11);
    WdLogGlobalForLineNumber = 3443;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v21);
  return (unsigned int)v11;
}
