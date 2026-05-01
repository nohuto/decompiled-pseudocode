/*
 * XREFs of ?OnApplicationViewChanged@ScreenManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180178E30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x18003C668 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18021CA1C (-InternalRelease@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5da5069c1ec2393567e9fe231930dfb9___ @ 0x180523310 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_5da5069c1ec2393567e9fe231930dfb9___.c)
 *     _lambda_5da5069c1ec2393567e9fe231930dfb9_::__lambda_5da5069c1ec2393567e9fe231930dfb9_ @ 0x180523464 (_lambda_5da5069c1ec2393567e9fe231930dfb9_--__lambda_5da5069c1ec2393567e9fe231930dfb9_.c)
 */

__int64 __fastcall ScreenManager::OnApplicationViewChanged(__int64 a1, __int64 a2, int a3)
{
  volatile int *v6; // rdx
  __int64 v7; // r8
  volatile int *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+28h] [rbp-18h] BYREF
  __int64 v14; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+38h] [rbp-8h] BYREF

  if ( (unsigned int)(a3 - 1) <= 1 && *(_QWORD *)(a1 + 296) )
  {
    v13 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
    v12 = a1 - 24;
    Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v12, v6);
    v14 = v7;
    Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v14, v8);
    v15 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
    Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5da5069c1ec2393567e9fe231930dfb9___(v10, v9, v11, &v14);
    lambda_5da5069c1ec2393567e9fe231930dfb9_::__lambda_5da5069c1ec2393567e9fe231930dfb9_(&v14);
    Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease(&v12);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  }
  return 0LL;
}
