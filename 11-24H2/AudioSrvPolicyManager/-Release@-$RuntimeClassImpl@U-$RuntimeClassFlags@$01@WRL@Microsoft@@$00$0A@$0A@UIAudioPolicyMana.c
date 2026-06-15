/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800156F0
 * Callers:
 *     ??$MakeAndInitialize@VCWindowsPolicyManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCWindowsPolicyManager@@@Z @ 0x180027A9C (--$MakeAndInitialize@VCWindowsPolicyManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCWindowsPol.c)
 *     ??1?$ComPtr@VCWindowsPolicyManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800283D8 (--1-$ComPtr@VCWindowsPolicyManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180029E00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAu_ea_180029E00.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180029E10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAu_ea_180029E10.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioPolicyManager,ISessionInternalEvents,IAudioPolicyNotificationManager>::Release(
        volatile signed __int32 *a1)
{
  signed __int32 i; // edx
  unsigned __int32 v2; // ebx

  for ( i = *((_DWORD *)a1 + 7); i != 0x7FFFFFFF; i = *((_DWORD *)a1 + 7) )
  {
    if ( i == _InterlockedCompareExchange(a1 + 7, i - 1, i) )
      break;
  }
  v2 = i - 1;
  if ( i == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 432LL))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
