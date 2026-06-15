/*
 * XREFs of ?RuntimeClassInitialize@CMicBoostNotificationsHandler@@QEAAJPEAUIMMDevice@@@Z @ 0x1400607C8
 * Callers:
 *     ??$MakeAndInitialize@VCMicBoostNotificationsHandler@@V1@AEAPEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVCMicBoostNotificationsHandler@@AEAPEAUIMMDevice@@@Z @ 0x140060FB8 (--$MakeAndInitialize@VCMicBoostNotificationsHandler@@V1@AEAPEAUIMMDevice@@@Details@WRL@Microsoft.c)
 * Callees:
 *     ??4?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIMMDevice@@@Z @ 0x14000E37C (--4-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIMMDevice@@@Z.c)
 *     ?TryGetMicBoostPartAndInterfacesFromDevice@@YAJPEAUIMMDevice@@PEAPEAUIPart@@PEAPEAUIAudioVolumeLevel@@PEAPEAUIAudioMute@@@Z @ 0x140060880 (-TryGetMicBoostPartAndInterfacesFromDevice@@YAJPEAUIMMDevice@@PEAPEAUIPart@@PEAPEAUIAudioVolumeL.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMicBoostNotificationsHandler::RuntimeClassInitialize(
        CMicBoostNotificationsHandler *this,
        struct IMMDevice *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int MicBoostPartAndInterfacesFromDevice; // eax

  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::operator=((__int64 *)this + 5, (__int64)a2);
  v4 = *((_QWORD *)this + 7);
  v5 = 0;
  *((_QWORD *)this + 7) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v6 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  MicBoostPartAndInterfacesFromDevice = TryGetMicBoostPartAndInterfacesFromDevice(
                                          a2,
                                          (struct IPart **)this + 6,
                                          (struct IAudioVolumeLevel **)this + 8,
                                          (struct IAudioMute **)this + 7);
  if ( MicBoostPartAndInterfacesFromDevice < 0 )
    return (unsigned int)MicBoostPartAndInterfacesFromDevice;
  return v5;
}
