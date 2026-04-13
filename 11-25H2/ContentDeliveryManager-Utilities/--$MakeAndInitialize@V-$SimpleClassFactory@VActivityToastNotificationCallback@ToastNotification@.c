/*
 * XREFs of ??$MakeAndInitialize@V?$SimpleClassFactory@VActivityToastNotificationCallback@ToastNotification@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VActivityToastNotificationCallback@ToastNotification@@$0A@@12@@Z @ 0x18006556C
 * Callers:
 *     ??$CreateClassFactory@V?$SimpleClassFactory@VActivityToastNotificationCallback@ToastNotification@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800650B0 (--$CreateClassFactory@V-$SimpleClassFactory@VActivityToastNotificationCallback@ToastNotification.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180022490 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180029FF0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??0?$SimpleClassFactory@VActivityToastNotificationCallback@ToastNotification@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x18006687C (--0-$SimpleClassFactory@VActivityToastNotificationCallback@ToastNotification@@$0A@@WRL@Microsoft.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::SimpleClassFactory<ToastNotification::ActivityToastNotificationCallback,0>,Microsoft::WRL::SimpleClassFactory<ToastNotification::ActivityToastNotificationCallback,0>,>(
        __int64 *a1)
{
  unsigned int v2; // ebx
  void *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdi
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v3;
  if ( v3 )
  {
    v4 = Microsoft::WRL::SimpleClassFactory<ToastNotification::ActivityToastNotificationCallback,0>::SimpleClassFactory<ToastNotification::ActivityToastNotificationCallback,0>(v3);
    v5 = v4;
    v7 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    v2 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v7);
  return v2;
}
