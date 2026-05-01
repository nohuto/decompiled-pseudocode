/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_7bc44750849f411daf11246e0ad82942___ @ 0x180055600
 * Callers:
 *     ?SetPosition@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x1800555A0 (-SetPosition@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_cd700f2a7d541494bae9b45ccb614160___ @ 0x1800556B8 (Windows--Internal--ComTaskPool--QueueTask__lambda_cd700f2a7d541494bae9b45ccb614160___.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_7bc44750849f411daf11246e0ad82942___(
        unsigned int *a1,
        __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // edi
  __int64 v9[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  unsigned int *v12; // [rsp+50h] [rbp+10h] BYREF

  if ( a1[14] == 2 )
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x820,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      v9[0]);
  }
  else
  {
    v12 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
    v9[0] = (__int64)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
    v10[0] = *a2;
    v9[1] = (__int64)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
    v4 = a1[12];
    v10[1] = a2[1];
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_cd700f2a7d541494bae9b45ccb614160___(v6, v5, v4, v9);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v10);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v9);
    if ( v7 >= 0 )
      ++a1[53];
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a2);
  return (unsigned int)v7;
}
