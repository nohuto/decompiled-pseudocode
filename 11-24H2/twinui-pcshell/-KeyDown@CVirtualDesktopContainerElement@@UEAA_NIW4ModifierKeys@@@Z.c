/*
 * XREFs of ?KeyDown@CVirtualDesktopContainerElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x1804DF620
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CVirtualDesktopContainerElement::KeyDown(_QWORD *a1, int a2)
{
  char v3; // di
  __int64 v4; // rcx
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( a2 == 39 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, _DWORD))(*a1 + 272LL))(a1, &v6, a1[21], 4LL, 0);
    if ( v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*a1 + 288LL))(a1);
      v3 = 1;
    }
LABEL_8:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
    return v3;
  }
  if ( a2 == 37 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, _DWORD))(*a1 + 272LL))(a1, &v6, a1[21], 3LL, 0);
    if ( v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*a1 + 288LL))(a1);
      v3 = 1;
    }
    goto LABEL_8;
  }
  v4 = a1[21];
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 240LL))(v4);
  return v3;
}
