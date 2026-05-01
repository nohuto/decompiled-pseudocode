/*
 * XREFs of ?IsApplicationRunningSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x1802E8D30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApplicationManager::IsApplicationRunningSafe(
        CApplicationManager *this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplication *, GUID *, __int64 *),
        int *a3)
{
  int v5; // esi
  __int64 (__fastcall *v6)(struct IImmersiveApplication *, GUID *, __int64 *); // rbx
  int v7; // ebx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  *a3 = 0;
  v9 = 0LL;
  v6 = **a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  v7 = v6((struct IImmersiveApplication *)a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v9);
  if ( v7 >= 0 )
  {
    LOBYTE(v5) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 408LL))(v9) != 0;
    *a3 = v5;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  return (unsigned int)v7;
}
