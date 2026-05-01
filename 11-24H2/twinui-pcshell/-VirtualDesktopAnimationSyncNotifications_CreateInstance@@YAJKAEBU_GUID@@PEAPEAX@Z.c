/*
 * XREFs of ?VirtualDesktopAnimationSyncNotifications_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x1802A1418
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x180096284 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedForegroundOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180098EB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedForeg.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ChainInterfaces@UIVirtualDesktopAnimationSyncNotificationServicePrivate@@UIVirtualDesktopAnimationSyncNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18020F3B8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ChainInterfaces@UIV.c)
 *     ??$MakeAndInitialize@VVirtualDesktopAnimationSyncNotifications@@V1@AEAK@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VVirtualDesktopAnimationSyncNotifications@@@WRL@Microsoft@@@012@AEAK@Z @ 0x1802A14C8 (--$MakeAndInitialize@VVirtualDesktopAnimationSyncNotifications@@V1@AEAK@Details@WRL@Microsoft@@Y.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopAnimationSyncNotifications_CreateInstance(int a1, const struct _GUID *a2, void **a3)
{
  int CanCastTo; // ebx
  __int64 v5; // rdx
  volatile int *v6; // rdx
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v10 = a1;
  *a3 = 0LL;
  v11 = 0LL;
  CanCastTo = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopAnimationSyncNotifications,VirtualDesktopAnimationSyncNotifications,unsigned long &>(
                &v11,
                &v10);
  if ( CanCastTo >= 0 )
  {
    *a3 = 0LL;
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::ChainInterfaces<IVirtualDesktopAnimationSyncNotificationServicePrivate,IVirtualDesktopAnimationSyncNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::CanCastTo(
                  v11,
                  &GUID_5c757a3f_6157_41b3_a760_926c0b131916,
                  a3);
    if ( CanCastTo >= 0 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
      goto LABEL_7;
    }
    v5 = 150LL;
  }
  else
  {
    v5 = 149LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopanimationsyncnotifications.cpp",
    (const char *)(unsigned int)CanCastTo);
LABEL_7:
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedForegroundOperations,Microsoft::WRL::FtmBase>::Release(
      v7,
      v6);
  }
  return (unsigned int)CanCastTo;
}
