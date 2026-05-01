/*
 * XREFs of ?SetFramedView@FrameWrapper@@UEAAJPEAUIUnknown@@@Z @ 0x1801F79A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UINtUserViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x180035150 (--$As@UINtUserViewWrapper@@@-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@W.c)
 *     ?ReconcileFramedView@FrameWrapper@@AEAAJXZ @ 0x1800B0FFC (-ReconcileFramedView@FrameWrapper@@AEAAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall FrameWrapper::SetFramedView(FrameWrapper *this, struct IUnknown *a2)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  __int64 (__fastcall ****v5)(_QWORD, GUID *, __int64 *); // r14
  int v6; // eax
  unsigned int LastError; // ebx
  __int64 (__fastcall *v8)(FrameWrapper *, __int64 *); // rbx
  int v9; // eax
  __int64 v10; // rdx
  const char *v11; // r9
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  unsigned int v19; // [rsp+50h] [rbp+30h] BYREF
  __int64 v20; // [rsp+58h] [rbp+38h] BYREF
  __int64 v21; // [rsp+60h] [rbp+40h] BYREF
  __int64 v22; // [rsp+68h] [rbp+48h] BYREF

  QueryInterface = a2->lpVtbl->QueryInterface;
  v5 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 40);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
  v6 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, _QWORD))QueryInterface)(
         a2,
         &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5,
         v5);
  LastError = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFC,
      (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v6);
    return LastError;
  }
  v20 = 0LL;
  v8 = *(__int64 (__fastcall **)(FrameWrapper *, __int64 *))(*(_QWORD *)this + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  v9 = v8(this, &v20);
  LastError = v9;
  if ( v9 < 0 )
  {
    v10 = 260LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v9);
LABEL_21:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
    return LastError;
  }
  v22 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 24LL))(v20, &v22);
  LastError = v9;
  if ( v9 < 0 )
  {
    v10 = 262LL;
    goto LABEL_7;
  }
  v19 = 0;
  if ( (unsigned int)GetWindowBand(v22, &v19) )
  {
    v21 = 0LL;
    v13 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<INtUserViewWrapper>(
            v5,
            &v21);
    LastError = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10A,
        (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
        (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
      goto LABEL_21;
    }
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 40LL))(v21, v19);
    LastError = v14;
    if ( v14 >= 0 )
    {
      FrameWrapper::ReconcileFramedView((FrameWrapper *)((char *)this - 32));
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
      LastError = 0;
      goto LABEL_21;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10B,
      (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v14);
    v15 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v16 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x108,
                  (unsigned int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
                  v11);
    v12 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  return LastError;
}
