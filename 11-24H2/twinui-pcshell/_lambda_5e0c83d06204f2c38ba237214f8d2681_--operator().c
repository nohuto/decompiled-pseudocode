/*
 * XREFs of _lambda_5e0c83d06204f2c38ba237214f8d2681_::operator() @ 0x1804F9CF4
 * Callers:
 *     _lambda_5e0c83d06204f2c38ba237214f8d2681_::_lambda_invoker_cdecl_ @ 0x1804F3970 (_lambda_5e0c83d06204f2c38ba237214f8d2681_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x18003C668 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800994CC (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_3c37406fbe4e864ebad81fdb99069246_::__lambda_3c37406fbe4e864ebad81fdb99069246_ @ 0x1804EBD08 (_lambda_3c37406fbe4e864ebad81fdb99069246_--__lambda_3c37406fbe4e864ebad81fdb99069246_.c)
 *     ??$?0VGamingPosturePositioner@@@?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVGamingPosturePositioner@@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1804F3BC4 (--$-0VGamingPosturePositioner@@@-$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEA.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3c37406fbe4e864ebad81fdb99069246___ @ 0x1804F64E8 (Windows--Internal--ComTaskPool--QueueTask__lambda_3c37406fbe4e864ebad81fdb99069246___.c)
 */

void __fastcall lambda_5e0c83d06204f2c38ba237214f8d2681_::operator()(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  volatile int *v4; // rdx
  __int64 v5; // r8
  volatile int *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+10h] BYREF
  __int64 v13; // [rsp+68h] [rbp+18h] BYREF

  v12 = a1;
  v2 = *(_QWORD *)(a2 + 880);
  wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(
    &v12,
    (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2);
  v12 = 0LL;
  v9[1] = a2;
  v13 = v2;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v13, v4);
  v9[0] = 0LL;
  v10[0] = v5;
  v10[1] = a2;
  v11 = v2;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v11, v6);
  Windows::Internal::ComTaskPool::QueueTask__lambda_3c37406fbe4e864ebad81fdb99069246___(v7, 0, v8, v10);
  lambda_3c37406fbe4e864ebad81fdb99069246_::__lambda_3c37406fbe4e864ebad81fdb99069246_(v10);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v13);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v9);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
}
