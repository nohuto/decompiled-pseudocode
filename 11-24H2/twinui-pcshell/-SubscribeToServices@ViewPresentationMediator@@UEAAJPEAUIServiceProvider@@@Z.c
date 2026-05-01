/*
 * XREFs of ?SubscribeToServices@ViewPresentationMediator@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801BF460
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ViewPresentationMediator::SubscribeToServices(
        ViewPresentationMediator *this,
        struct IServiceProvider *a2)
{
  _QWORD *v2; // r14
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 160);
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 20);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, _QWORD *))QueryService)(
         a2,
         &GUID_5f563eea_a82c_4693_96ab_44f7c4a1262c,
         &GUID_5f563eea_a82c_4693_96ab_44f7c4a1262c,
         v2);
  if ( v6 < 0 )
  {
    v7 = 112LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\viewpresentationmediator\\lib\\viewpresentationmediator.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)*v2 + 56LL))(
         *v2,
         ((unsigned __int64)this + 80) & -(__int64)(this != (ViewPresentationMediator *)40));
  if ( v6 < 0 )
  {
    v7 = 113LL;
    goto LABEL_3;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)*v2 + 128LL))(
         *v2,
         ((unsigned __int64)this + 88) & -(__int64)(this != (ViewPresentationMediator *)40));
  if ( v6 < 0 )
  {
    v7 = 114LL;
    goto LABEL_3;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)*v2 + 152LL))(
         *v2,
         ((unsigned __int64)this + 96) & -(__int64)(this != (ViewPresentationMediator *)40));
  if ( v6 < 0 )
  {
    v7 = 115LL;
    goto LABEL_3;
  }
  return 0LL;
}
