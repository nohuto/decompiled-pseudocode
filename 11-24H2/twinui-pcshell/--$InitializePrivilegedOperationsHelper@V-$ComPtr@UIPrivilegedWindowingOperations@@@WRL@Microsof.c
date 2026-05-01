/*
 * XREFs of ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedWindowingOperations@@@WRL@Microsoft@@$$V@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedWindowingOperations@@@WRL@Microsoft@@@Z @ 0x18007BBE4
 * Callers:
 *     ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@V?$ComPtr@UIPrivilegedForegroundOperations@@@23@V?$ComPtr@UIPrivilegedWindowingOperations@@@23@@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@34@AEAV?$ComPtr@UIPrivilegedWindowingOperations@@@34@@Z @ 0x18007BB0C (--$InitializePrivilegedOperationsHelper@V-$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microso.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall InitializePrivilegedOperationsHelper<Microsoft::WRL::ComPtr<IPrivilegedWindowingOperations>,>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 *a3)
{
  __int64 v4; // rax
  void (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbx

  v4 = *a1 - *(_QWORD *)&GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b.Data1;
  if ( *a1 == *(_QWORD *)&GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b.Data1 )
    v4 = a1[1] - *(_QWORD *)GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b.Data4;
  if ( v4 )
    return 2147500033LL;
  v6 = **a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a3);
  v6(a2, &GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b, a3);
  return 0LL;
}
