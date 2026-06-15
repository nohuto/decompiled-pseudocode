/*
 * XREFs of ?UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z @ 0x18001DD98
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_fa599cec30de65717babd3487277861b__void_::_Do_call @ 0x18001F520 (std--_Func_impl_no_alloc__lambda_fa599cec30de65717babd3487277861b__void_--_Do_call.c)
 * Callees:
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18000A540 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18000CE00 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     WPP_SF_d @ 0x18002B464 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::UpdateModernStandbyAudioState(CApplicationManager *this, unsigned int a2)
{
  CApplicationManager *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx

  v3 = g_ApplicationManager;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( !*((_BYTE *)v3 + 24) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 47LL, &WPP_8d4f0c2ae8213c98c7518ad68b13e68c_Traceguids, a2);
    }
    CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)v3, a2, 3);
    CApplicationManager::ApplyPBMPolicyForAllAppsInSession(v3, a2, 0);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
