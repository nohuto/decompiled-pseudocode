/*
 * XREFs of ?InitializeMulticastSessionManager@@YAJPEAPEAUIMulticastSessionManager@@@Z @ 0x180100784
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800D0124 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCMulticastSessionManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCMulticastSessionManager@@@Z @ 0x1800FF454 (--$MakeAndInitialize@VCMulticastSessionManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCMultica.c)
 *     ??$copy_to@UIMulticastSessionManager@@@?$com_ptr_t@VCMulticastSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIMulticastSessionManager@@@Z @ 0x1800FF798 (--$copy_to@UIMulticastSessionManager@@@-$com_ptr_t@VCMulticastSessionManager@@Uerr_returncode_po.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMulticastSessionManager@@UIMulticastManagerNotificationClient@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801009A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMulticastSessio.c)
 */

__int64 __fastcall InitializeMulticastSessionManager(struct IMulticastSessionManager **a1)
{
  CMulticastSessionManager *v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = s_MulticastSessionManager;
  s_MulticastSessionManager = 0LL;
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMulticastSessionManager,IMulticastManagerNotificationClient>::Release(v2);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<CMulticastSessionManager,CMulticastSessionManager,>(&s_MulticastSessionManager);
  v5 = v3;
  if ( v3 >= 0 )
  {
    wil::com_ptr_t<CMulticastSessionManager,wil::err_returncode_policy>::copy_to<IMulticastSessionManager>(v4, a1);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
      (const char *)(unsigned int)v3);
    return v5;
  }
}
