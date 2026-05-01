/*
 * XREFs of ?ClearFastpathRegistrationProperties@CopilotHotkeyManager@@AEAAXXZ @ 0x180622BFC
 * Callers:
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180624D18 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 *     ?OnApplicationViewChanged@CopilotHotkeyManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180633860 (-OnApplicationViewChanged@CopilotHotkeyManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?OnPenButtonCopilotAction@CopilotHotkeyManager@@QEAAXAEBUPenButtonActionData@@@Z @ 0x180633C80 (-OnPenButtonCopilotAction@CopilotHotkeyManager@@QEAAXAEBUPenButtonActionData@@@Z.c)
 *     ?UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ @ 0x1806366E4 (-UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C577C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CopilotHotkeyManager::ClearFastpathRegistrationProperties(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // [rsp+30h] [rbp+8h] BYREF

  wil::AcquireSRWLockExclusive(&v2, this + 25);
  std::wstring::assign(&this[65].Ptr, 0LL, 0LL);
  LODWORD(this[69].Ptr) = 0;
  this[70].Ptr = 0LL;
  LODWORD(this[64].Ptr) = 0;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v2);
}
