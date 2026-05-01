/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_33b4202f4967ef1cd2a31cded00016d1__&_::CTaskWrapper__lambda_33b4202f4967ef1cd2a31cded00016d1__&___lambda_33b4202f4967ef1cd2a31cded00016d1__&_ @ 0x1804ACDAC
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_33b4202f4967ef1cd2a31cded00016d1__&_ @ 0x1802B6318 (Windows--Internal--ComTaskPool--QueueTask__lambda_33b4202f4967ef1cd2a31cded00016d1__-_.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x18003C668 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18029BC1C (--0-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_33b4202f4967ef1cd2a31cded00016d1____::CTaskWrapper__lambda_33b4202f4967ef1cd2a31cded00016d1______lambda_33b4202f4967ef1cd2a31cded00016d1____(
        __int64 a1,
        __int64 a2)
{
  volatile int *v4; // rdx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 16));
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 40);
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef((__int64 *)(a1 + 56), v4);
  wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>(
    (__int64 *)(a1 + 64),
    (__int64 *)(a2 + 48));
  *(_QWORD *)a1 = &off_180744F50;
  return a1;
}
