/*
 * XREFs of ?RegisterMicBoostNotification@CMicBoostNotificationsHandler@@AEAAJXZ @ 0x140060750
 * Callers:
 *     ?AddNotificationClient@CMicBoostNotificationsHandler@@QEAAJPEAVCAPOProcessingHostObject@@@Z @ 0x1400602EC (-AddNotificationClient@CMicBoostNotificationsHandler@@QEAAJPEAVCAPOProcessingHostObject@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCMicBoostNotificationsDelegator@@V1@PEAVCMicBoostNotificationsHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCMicBoostNotificationsDelegator@@$$QEAPEAVCMicBoostNotificationsHandler@@@Z @ 0x1400600AC (--$MakeAndInitialize@VCMicBoostNotificationsDelegator@@V1@PEAVCMicBoostNotificationsHandler@@@De.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMicBoostNotificationsHandler::RegisterMicBoostNotification(CMicBoostNotificationsHandler *this)
{
  CMicBoostNotificationsDelegator **v2; // rdi
  __int64 v3; // rcx
  int v4; // esi
  __int64 v5; // rdx
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CMicBoostNotificationsHandler *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 112) )
  {
    v10 = this;
    v2 = (CMicBoostNotificationsDelegator **)((char *)this + 128);
    v3 = *((_QWORD *)this + 16);
    *v2 = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    v4 = Microsoft::WRL::Details::MakeAndInitialize<CMicBoostNotificationsDelegator,CMicBoostNotificationsDelegator,CMicBoostNotificationsHandler *>(
           v2,
           &v10);
    if ( v4 < 0 )
    {
      v5 = 95LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp",
        (const char *)(unsigned int)v4);
      return (unsigned int)v4;
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, GUID *, CMicBoostNotificationsDelegator *))(**((_QWORD **)this + 6) + 112LL))(
           *((_QWORD *)this + 6),
           &GUID_7fb7b48f_531d_44a2_bcb3_5ad5a134b3dc,
           *v2);
    if ( v4 < 0 )
    {
      v5 = 96LL;
      goto LABEL_6;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, GUID *, CMicBoostNotificationsDelegator *))(**((_QWORD **)this + 6) + 112LL))(
           *((_QWORD *)this + 6),
           &GUID_df45aeea_b74a_4b6b_afad_2366b6aa012e,
           *v2);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x61,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
    *((_BYTE *)this + 112) = 1;
  }
  return 0LL;
}
