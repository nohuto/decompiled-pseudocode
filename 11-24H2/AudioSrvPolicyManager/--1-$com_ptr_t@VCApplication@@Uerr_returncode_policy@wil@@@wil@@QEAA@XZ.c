/*
 * XREFs of ??1?$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002849C
 * Callers:
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x18002867C (--1CDuckingNotification@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18002A830 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 *     ??1CProcess@@MEAA@XZ @ 0x1800309E4 (--1CProcess@@MEAA@XZ.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x180038194 (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x180039578 (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 *     _CWindowsPolicyManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18004A56C (_CWindowsPolicyManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _CApplicationManager::OnApplicationClosed_::_1_::dtor$0 @ 0x18004B05B (_CApplicationManager--OnApplicationClosed_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029FB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 */

__int64 __fastcall wil::com_ptr_t<CApplication,wil::err_returncode_policy>::~com_ptr_t<CApplication,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(v1);
  return result;
}
