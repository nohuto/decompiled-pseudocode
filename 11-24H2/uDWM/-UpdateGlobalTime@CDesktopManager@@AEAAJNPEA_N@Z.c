/*
 * XREFs of ?UpdateGlobalTime@CDesktopManager@@AEAAJNPEA_N@Z @ 0x1800269E0
 * Callers:
 *     ?ProcessAnimationTick@CDesktopManager@@CAJPEAT_LARGE_INTEGER@@0PEA_N@Z @ 0x180026830 (-ProcessAnimationTick@CDesktopManager@@CAJPEAT_LARGE_INTEGER@@0PEA_N@Z.c)
 * Callees:
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x180026AA0 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 *     ?FireTimeEvents@CDesktopManager@@AEAAJPEA_N@Z @ 0x180026DD0 (-FireTimeEvents@CDesktopManager@@AEAAJPEA_N@Z.c)
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x180027060 (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x180027170 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ?GetGlobalTime@CDesktopManager@@SANXZ @ 0x180027CA4 (-GetGlobalTime@CDesktopManager@@SANXZ.c)
 */

__int64 __fastcall CDesktopManager::UpdateGlobalTime(CDesktopManager *this, double a2, bool *a3)
{
  CAnimationEngine **v3; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  double GlobalTime; // xmm0_8
  CDesktopManager *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = this;
  v3 = (CAnimationEngine **)CDesktopManager::s_pDesktopManagerInstance;
  CDesktopManager::AdvanceTimelines(CDesktopManager::s_pDesktopManagerInstance, a2);
  v5 = CDesktopManager::FireTimeEvents((CDesktopManager *)v3, a3);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x7CBu, 0LL);
    return v6;
  }
  if ( CAnimationEngine::IsIdle(v3[22]) )
    return v6;
  LOBYTE(v9) = 0;
  GlobalTime = CDesktopManager::GetGlobalTime();
  CAnimationEngine::OnTick(v3[22], GlobalTime, (bool *)&v9);
  *a3 |= (unsigned __int8)v9;
  return v6;
}
