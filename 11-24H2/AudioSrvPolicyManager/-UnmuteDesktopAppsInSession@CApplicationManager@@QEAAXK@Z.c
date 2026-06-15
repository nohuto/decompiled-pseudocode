/*
 * XREFs of ?UnmuteDesktopAppsInSession@CApplicationManager@@QEAAXK@Z @ 0x1800397EC
 * Callers:
 *     ?ApplySessionMuteChanges@CApplicationManager@@QEAAJKK@Z @ 0x1800368B4 (-ApplySessionMuteChanges@CApplicationManager@@QEAAJKK@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAAEAPEAVCApplication@@AEAPEAU__POSITION@@@Z @ 0x18000D920 (-GetNext@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     WPP_SF_d @ 0x18002B464 (WPP_SF_d.c)
 */

void __fastcall CApplicationManager::UnmuteDesktopAppsInSession(CApplicationManager *this, int a2)
{
  _DWORD *v4; // rcx
  _QWORD *Next; // rax
  _QWORD *v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x26u, &WPP_8d4f0c2ae8213c98c7518ad68b13e68c_Traceguids, a2);
  }
  v6 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v6 )
  {
    Next = ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::GetNext((__int64)v4, &v6);
    v4 = (_DWORD *)*Next;
    if ( *(_DWORD *)(*Next + 212LL) == a2 && !v4[163] )
    {
      v4[155] = 0;
      v4[156] = 0;
      v4[157] = 0;
      v4[158] = 0;
      v4[159] = 0;
      v4[160] = 0;
      v4[161] = 1;
    }
  }
  CApplicationManager::ApplyPBMPolicyForAllAppsInSession(this, a2, 0);
}
