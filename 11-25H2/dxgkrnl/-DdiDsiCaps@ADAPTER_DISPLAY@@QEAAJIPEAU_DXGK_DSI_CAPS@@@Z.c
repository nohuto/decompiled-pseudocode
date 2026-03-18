/*
 * XREFs of ?DdiDsiCaps@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGK_DSI_CAPS@@@Z @ 0x1401A2918
 * Callers:
 *     ?DdiDsiCaps@KernelDriver@@UEBAJPEAU_DXGK_DSI_CAPS@@@Z @ 0x1402764F0 (-DdiDsiCaps@KernelDriver@@UEBAJPEAU_DXGK_DSI_CAPS@@@Z.c)
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

__int64 __fastcall ADAPTER_DISPLAY::DdiDsiCaps(ADAPTER_DISPLAY *this, unsigned int a2, struct _DXGK_DSI_CAPS *a3)
{
  KIRQL CurrentIrql; // al
  __int64 v7; // r14
  struct DXGTHREAD *v8; // rbx
  struct DXGTHREAD *Current; // rax
  int v10; // ebp
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(_QWORD, _QWORD, struct _DXGK_DSI_CAPS *); // rax
  int v13; // edi
  KIRQL v14; // al
  __int64 v15; // rcx
  __int64 v16; // r8
  int v18; // [rsp+50h] [rbp-98h] BYREF
  __int64 v19; // [rsp+58h] [rbp-90h]
  char v20; // [rsp+60h] [rbp-88h]
  _BYTE v21[56]; // [rsp+68h] [rbp-80h] BYREF

  v18 = -1;
  v19 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v20 = 1;
    v18 = 5144;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 5144);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 5144);
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
    (DXGVALIDATIONPROCESSATTACH *)v21,
    *((struct DXGADAPTER **)this + 2));
  v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 1440LL);
  if ( v11 && (v12 = *(__int64 (__fastcall **)(_QWORD, _QWORD, struct _DXGK_DSI_CAPS *))(v11 + 32)) != 0LL )
    v13 = v12(*(_QWORD *)(v11 + 8), a2, a3);
  else
    v13 = -1073741637;
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v21);
  if ( (_BYTE)v7 != KeGetCurrentIrql() )
  {
    v14 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v7, v14);
    WdLogGlobalForLineNumber = 4822;
  }
  if ( v8 && *((_DWORD *)v8 + 12) != v10 )
  {
    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v8 + 12), v10, 0LL);
    WdLogGlobalForLineNumber = 73;
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  if ( v13 == -1073741823
    || v13 == -1073741811
    || v13 == -1073741637
    || v13
    && (WdLogSingleEntry1(2LL, v13),
        WdLogGlobalForLineNumber = 4824,
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Driver returned an invalid NTSTATUS code: 0x%I64x",
          v13,
          0LL,
          0LL,
          0LL,
          0LL),
        v13 < 0) )
  {
    WdLogSingleEntry1(2LL, v13);
    WdLogGlobalForLineNumber = 4833;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The driver failed DxgkDdiDsiCaps. Status: 0x%I64x",
      v13,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v18);
  return (unsigned int)v13;
}
