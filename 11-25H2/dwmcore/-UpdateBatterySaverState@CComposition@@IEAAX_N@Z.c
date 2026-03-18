/*
 * XREFs of ?UpdateBatterySaverState@CComposition@@IEAAX_N@Z @ 0x1802665B8
 * Callers:
 *     ?s_PowerNotification@CComposition@@KAKPEAXK0@Z @ 0x1802310B0 (-s_PowerNotification@CComposition@@KAKPEAXK0@Z.c)
 * Callees:
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800E5580 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 */

void __fastcall CComposition::UpdateBatterySaverState(CComposition *this, char a2)
{
  CGlobalComposition *v2; // rcx
  bool v3; // zf

  v2 = g_pComposition;
  v3 = *((_DWORD *)g_pComposition + 1629) == 0;
  *((_BYTE *)g_pComposition + 6495) = a2;
  if ( !v3 )
  {
    *(_BYTE *)(*((_QWORD *)v2 + 77) + 749LL) = 1;
    CComposition::ScheduleCompositionPass((__int64)v2, 0, 0x40000u);
  }
}
