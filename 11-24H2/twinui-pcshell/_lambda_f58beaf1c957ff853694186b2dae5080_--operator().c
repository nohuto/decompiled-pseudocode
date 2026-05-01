/*
 * XREFs of _lambda_f58beaf1c957ff853694186b2dae5080_::operator() @ 0x18030F95C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f58beaf1c957ff853694186b2dae5080__&_::Run @ 0x180310B60 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f58beaf1c957ff853694186b2dae5080__-_--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z @ 0x18007B140 (-GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z.c)
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x1801E9010 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 *     ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18030FEA4 (-GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_f58beaf1c957ff853694186b2dae5080_::operator()(RTL_SRWLOCK **a1)
{
  const unsigned __int16 *v2; // rbx
  int Window; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned __int16 **v6; // r8
  struct HWND__ v8[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v9; // [rsp+28h] [rbp-18h]
  __int64 v10; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  HWND v12; // [rsp+58h] [rbp+18h] BYREF

  v2 = 0LL;
  *(_QWORD *)&v8[0].unused = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( (unsigned int)EdpGetIsManaged() )
  {
    v12 = 0LL;
    Window = CWin32ApplicationView::GetWindow((CWin32ApplicationView *)&(*a1)[19], &v12);
    v4 = Window;
    if ( Window < 0 )
    {
      v5 = 381LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)Window);
      goto LABEL_10;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v8);
    v9 = -1LL;
    v10 = -1LL;
    Window = EdpHelpers::GetEnterpriseIdForWindow((EdpHelpers *)v12, v8, v6);
    v4 = Window;
    if ( Window < 0 )
    {
      v5 = 384LL;
      goto LABEL_9;
    }
    v2 = *(const unsigned __int16 **)&v8[0].unused;
  }
  Window = CApplicationViewBase::SetEnterpriseId(*a1 + 3, v2);
  v4 = Window;
  if ( Window < 0 )
  {
    v5 = 387LL;
    goto LABEL_9;
  }
LABEL_10:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v8);
  return v4;
}
