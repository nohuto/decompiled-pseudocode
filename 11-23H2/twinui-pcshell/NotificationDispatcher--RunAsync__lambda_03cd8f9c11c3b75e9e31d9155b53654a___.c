/*
 * XREFs of NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___ @ 0x180153F2C
 * Callers:
 *     _lambda_5f803f865b4b07caa2d72f9fc7ffab60_::operator() @ 0x180153E70 (_lambda_5f803f865b4b07caa2d72f9fc7ffab60_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z @ 0x1800C7D10 (-AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18013FF60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e_____lambda_a6d13e69f30641531d997813b368784e___ @ 0x180153FD8 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e_.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIApplicationViewVisibilityDebouncedNotificationServicePrivate@@UIApplicationViewVisibilityDebouncedNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewChangeListener@@UIApplicationViewCollection@@UIApplicationViewCollectionTestHook@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180164200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_180164200.c)
 */

__int64 __fastcall NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___(
        NotificationDispatcher *this,
        __int64 *a2)
{
  __int64 v3; // rax
  struct IAsyncCallback **CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e_____lambda_a6d13e69f30641531d997813b368784e; // rax
  __int64 v5; // rdx
  struct IAsyncCallback *v6; // rbx
  volatile signed __int32 *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rdx
  __int64 v12; // r9
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int32 *v15; // [rsp+48h] [rbp+10h] BYREF
  struct IAsyncCallback *v16; // [rsp+50h] [rbp+18h] BYREF

  v13[0] = 0LL;
  if ( v13 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v13[0] = v3;
  }
  v13[1] = a2[1];
  CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e_____lambda_a6d13e69f30641531d997813b368784e = (struct IAsyncCallback **)Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e_____lambda_a6d13e69f30641531d997813b368784e___(&v15, v13);
  v6 = *CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e_____lambda_a6d13e69f30641531d997813b368784e;
  *CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e_____lambda_a6d13e69f30641531d997813b368784e = 0LL;
  v7 = v15;
  v16 = v6;
  if ( v15 )
  {
    v15 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release(v7);
  }
  if ( v13[0] )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IApplicationViewVisibilityDebouncedNotificationServicePrivate,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewChangeListener,IApplicationViewCollection,IApplicationViewCollectionTestHook,Microsoft::WRL::FtmBase>::Release(
      v13[0],
      v5);
  if ( !v6 )
  {
    v9 = -2147024882;
    v11 = 28LL;
    v12 = 2147942414LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\NotificationDispatcher.h",
      (const char *)v12);
    goto LABEL_10;
  }
  v8 = NotificationDispatcher::AddTask(this, v6);
  v9 = v8;
  if ( v8 < 0 )
  {
    v12 = (unsigned int)v8;
    v11 = 29LL;
    goto LABEL_13;
  }
  v9 = 0;
LABEL_10:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
  return v9;
}
