/*
 * XREFs of ?OnWindowArrangementEnd@CWindowList@@AEAAJXZ @ 0x180065DC4
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180049B90 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?Free@WPF@@YAXPEAVHeapBase@1@PEAX@Z @ 0x180021B70 (-Free@WPF@@YAXPEAVHeapBase@1@PEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ @ 0x180065E8C (-RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnWindowArrangementEnd@CWindowArrangementTransition@@QEAAXXZ @ 0x180105E00 (-OnWindowArrangementEnd@CWindowArrangementTransition@@QEAAXXZ.c)
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x18010C02C (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::OnWindowArrangementEnd(CWindowList *this)
{
  unsigned int v2; // edi
  CWindowArrangementTransition *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  WPF *v6; // rcx
  void *v7; // r8
  struct WPF::HeapBase *v8; // rdx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = (CWindowArrangementTransition *)*((_QWORD *)this + 67);
  if ( v3 )
    CWindowArrangementTransition::OnWindowArrangementEnd(v3);
  v4 = *((_QWORD *)this + 88);
  if ( v4
    && (*(_BYTE *)(v4 + 677) |= 0x80u, v5 = CWindowList::RunAcrylicSheetEndArrangementAnimation(this), v2 = v5, v5 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1E7Au, 0LL);
  }
  else
  {
    CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(this, 0);
    v8 = (struct WPF::HeapBase *)*((_QWORD *)this + 67);
    if ( v8 )
    {
      WPF::Free(v6, v8, v7);
      *((_QWORD *)this + 67) = 0LL;
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return v2;
}
