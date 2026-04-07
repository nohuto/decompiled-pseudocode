/*
 * XREFs of ?ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z @ 0x180056600
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18000FCB0 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?ReleaseCVICache@CDesktopManager@@SAXXZ @ 0x180021CB4 (-ReleaseCVICache@CDesktopManager@@SAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x1800566A0 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?OnNotifyRoundTripReply@CLivePreview@@QEAA_NI@Z @ 0x1800566FC (-OnNotifyRoundTripReply@CLivePreview@@QEAA_NI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ProcessBackChannelMessage(CWindowList *this, const struct MIL_MESSAGE *a2)
{
  unsigned int v3; // ebx
  int started; // eax
  int v6; // ebx
  CWindowData *v7; // rdi
  CWindowData *i; // rbx
  __int64 v9; // r8
  char *v10; // rax
  PVOID RestartKey; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  if ( *(_DWORD *)a2 == 8 )
  {
    if ( !CLivePreview::OnNotifyRoundTripReply(
            *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57),
            *((_DWORD *)a2 + 2)) )
    {
      started = CDesktopManager::PostStartAnimations(CDesktopManager::s_pDesktopManagerInstance);
      v3 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x597u, 0LL);
    }
  }
  else if ( *(_DWORD *)a2 == 5 )
  {
    v6 = *((_DWORD *)a2 + 3);
    v12 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( v6 == 1 )
    {
      RestartKey = 0LL;
      while ( 1 )
      {
        v10 = (char *)RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
        if ( !v10 )
          break;
        v7 = (CWindowData *)(v10 + 80);
        for ( i = (CWindowData *)*((_QWORD *)v10 + 10); i != v7; i = *(CWindowData **)i )
          CWindowData::ClearSnapshot(i, 1, v9, 1);
      }
      CDesktopManager::ReleaseCVICache();
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
    return 0;
  }
  else
  {
    v3 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147418113, 0x5A0u, 0LL);
  }
  return v3;
}
