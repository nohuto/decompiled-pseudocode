/*
 * XREFs of ?InitializePrivilegedOperations@RemoteLauncherForegroundHandler@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1803DF260
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RemoteLauncherForegroundHandler::InitializePrivilegedOperations(
        RemoteLauncherForegroundHandler *this,
        const struct _GUID *a2,
        struct IUnknown *a3)
{
  __int64 v4; // rax
  char *v5; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data4;
  if ( !v4 )
  {
    v5 = (char *)this + 56;
    QueryInterface = a3->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
    ((void (__fastcall *)(struct IUnknown *, GUID *, char *))QueryInterface)(
      a3,
      &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6,
      v5);
  }
  return 0LL;
}
