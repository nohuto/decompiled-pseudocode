/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_2461923bd7d30a187d21cb937ed01b39___ @ 0x1804F71AC
 * Callers:
 *     ?DisplaySettingsChange@GamingPosturePositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1804FC0C0 (-DisplaySettingsChange@GamingPosturePositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x18003C668 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800994CC (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_6134154151224943773d07617b636c50___ @ 0x1804F6630 (Windows--Internal--ComTaskPool--QueueTask__lambda_6134154151224943773d07617b636c50___.c)
 *     _lambda_6134154151224943773d07617b636c50_::__lambda_6134154151224943773d07617b636c50_ @ 0x1804F8BC0 (_lambda_6134154151224943773d07617b636c50_--__lambda_6134154151224943773d07617b636c50_.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_2461923bd7d30a187d21cb937ed01b39___(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  volatile int *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v10[2]; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+38h] [rbp-10h] BYREF
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = a1;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v13, (volatile int *)a2);
  v3 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  v10[0] = v3;
  v10[1] = *(_QWORD *)(a2 + 8);
  v11 = *(_DWORD *)(a2 + 16);
  v12 = v4;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v12, v5);
  v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_6134154151224943773d07617b636c50___(v6, 0, v7, v10);
  lambda_6134154151224943773d07617b636c50_::__lambda_6134154151224943773d07617b636c50_(v10);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v13);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a2);
  return v8;
}
