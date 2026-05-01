/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_5997640efe376a9387473cba5853814f___ @ 0x1804F7234
 * Callers:
 *     _lambda_3915b0af65937f5328b5adc87798a766_::operator()_winrt::Windows::System::Threading::ThreadPoolTimer_ @ 0x1804F3C70 (_lambda_3915b0af65937f5328b5adc87798a766_--operator()_winrt--Windows--System--Threading--ThreadP.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x18003C668 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800994CC (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4df33f58deefb1a102d6f826bdf590f4___ @ 0x1804F658C (Windows--Internal--ComTaskPool--QueueTask__lambda_4df33f58deefb1a102d6f826bdf590f4___.c)
 *     _lambda_6134154151224943773d07617b636c50_::__lambda_6134154151224943773d07617b636c50_ @ 0x1804F8BC0 (_lambda_6134154151224943773d07617b636c50_--__lambda_6134154151224943773d07617b636c50_.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_5997640efe376a9387473cba5853814f___(
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
  char v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+38h] [rbp-10h] BYREF
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = a1;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v13, (volatile int *)a2);
  v3 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  v10[0] = v3;
  v10[1] = *(_QWORD *)(a2 + 8);
  v11 = *(_BYTE *)(a2 + 16);
  v12 = v4;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v12, v5);
  v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_4df33f58deefb1a102d6f826bdf590f4___(v6, 0, v7, v10);
  lambda_6134154151224943773d07617b636c50_::__lambda_6134154151224943773d07617b636c50_(v10);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v13);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a2);
  return v8;
}
