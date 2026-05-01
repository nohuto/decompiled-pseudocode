/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_53fb1c4a60a47562c448770c0c0ac62e___ @ 0x180308D54
 * Callers:
 *     ?SetBackgroundColor@CFrameApplicationPresentation@@UEAAJK@Z @ 0x18030ABC0 (-SetBackgroundColor@CFrameApplicationPresentation@@UEAAJK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_910012da7138534dbba8c9356fab0dd8___ @ 0x180308A20 (Windows--Internal--ComTaskPool--QueueTask__lambda_910012da7138534dbba8c9356fab0dd8___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_53fb1c4a60a47562c448770c0c0ac62e___(
        _DWORD *a1,
        __int128 *a2)
{
  __int128 v5; // xmm0
  unsigned int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _DWORD *v13; // [rsp+50h] [rbp+8h] BYREF

  if ( a1[14] == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x820,
      (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  else
  {
    v13 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
    v10[0] = (__int64)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
    v5 = *a2;
    v6 = a1[12];
    v10[1] = (__int64)a1;
    v11 = v5;
    v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_910012da7138534dbba8c9356fab0dd8___(v8, v7, v6, (__int64)v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v10);
    if ( v9 >= 0 )
      ++a1[52];
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
    return (unsigned int)v9;
  }
}
