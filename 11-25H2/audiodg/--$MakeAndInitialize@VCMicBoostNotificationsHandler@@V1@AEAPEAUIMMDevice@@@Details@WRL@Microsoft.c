/*
 * XREFs of ??$MakeAndInitialize@VCMicBoostNotificationsHandler@@V1@AEAPEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVCMicBoostNotificationsHandler@@AEAPEAUIMMDevice@@@Z @ 0x1400610A8
 * Callers:
 *     ?GetMicBoostNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCMicBoostNotificationsHandler@@@Z @ 0x14006230C (-GetMicBoostNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCMicBoostNotifica.c)
 * Callees:
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14005562C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@CMicBoostNotificationsHandler@@QEAAJPEAUIMMDevice@@@Z @ 0x1400608B8 (-RuntimeClassInitialize@CMicBoostNotificationsHandler@@QEAAJPEAUIMMDevice@@@Z.c)
 *     ??0CMicBoostNotificationsHandler@@QEAA@XZ @ 0x1400618E0 (--0CMicBoostNotificationsHandler@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CMicBoostNotificationsHandler,CMicBoostNotificationsHandler,IMMDevice * &>(
        CMicBoostNotificationsHandler **a1,
        struct IMMDevice **a2)
{
  void *v4; // rax
  int v5; // edi
  CMicBoostNotificationsHandler *v6; // rbx
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  CMicBoostNotificationsHandler *v9; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  if ( v4 )
  {
    v6 = CMicBoostNotificationsHandler::CMicBoostNotificationsHandler((CMicBoostNotificationsHandler *)v4);
    v9 = v6;
    v8 = 0LL;
    v5 = CMicBoostNotificationsHandler::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        (*(void (__fastcall **)(CMicBoostNotificationsHandler *))(*(_QWORD *)v6 + 8LL))(v6);
      *a1 = v6;
      if ( v6 )
        (*(void (__fastcall **)(CMicBoostNotificationsHandler *))(*(_QWORD *)v6 + 16LL))(v6);
      v5 = 0;
    }
    else if ( v6 )
    {
      (*(void (__fastcall **)(CMicBoostNotificationsHandler *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v8);
  return (unsigned int)v5;
}
