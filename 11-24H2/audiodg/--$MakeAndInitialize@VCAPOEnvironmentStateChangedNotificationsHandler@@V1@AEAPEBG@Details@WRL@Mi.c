/*
 * XREFs of ??$MakeAndInitialize@VCAPOEnvironmentStateChangedNotificationsHandler@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCAPOEnvironmentStateChangedNotificationsHandler@@AEAPEBG@Z @ 0x140060EF0
 * Callers:
 *     ?GetEnvironmentStateChangedNotificationHandler@CAPOProcessingHost@@AEAAJPEBGPEAPEAVCAPOEnvironmentStateChangedNotificationsHandler@@@Z @ 0x14004CF50 (-GetEnvironmentStateChangedNotificationHandler@CAPOProcessingHost@@AEAAJPEBGPEAPEAVCAPOEnvironme.c)
 * Callees:
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14005555C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@CAPOEnvironmentStateChangedNotificationsHandler@@QEAAJPEBG@Z @ 0x14005FDF0 (-RuntimeClassInitialize@CAPOEnvironmentStateChangedNotificationsHandler@@QEAAJPEBG@Z.c)
 *     ??0CAPOEnvironmentStateChangedNotificationsHandler@@QEAA@XZ @ 0x1400616A4 (--0CAPOEnvironmentStateChangedNotificationsHandler@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAPOEnvironmentStateChangedNotificationsHandler,CAPOEnvironmentStateChangedNotificationsHandler,unsigned short const * &>(
        void ***a1,
        char **a2)
{
  void *v4; // rax
  int v5; // edi
  void **v6; // rbx
  __int64 v7; // r8
  const char *v8; // r9
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v4;
  if ( v4 )
  {
    v6 = (void **)CAPOEnvironmentStateChangedNotificationsHandler::CAPOEnvironmentStateChangedNotificationsHandler((CAPOEnvironmentStateChangedNotificationsHandler *)v4);
    v10 = 0LL;
    v5 = CAPOEnvironmentStateChangedNotificationsHandler::RuntimeClassInitialize(v6, *a2, v7, v8);
    if ( v5 >= 0 )
    {
      if ( v6 )
        (*((void (__fastcall **)(void **))*v6 + 1))(v6);
      *a1 = v6;
      if ( v6 )
        (*((void (__fastcall **)(void **))*v6 + 2))(v6);
      v5 = 0;
    }
    else if ( v6 )
    {
      (*((void (__fastcall **)(void **))*v6 + 2))(v6);
    }
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v10);
  return (unsigned int)v5;
}
