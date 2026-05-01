/*
 * XREFs of ?Unregister@ApplicationViewCollectionRegistration@@UEAAXXZ @ 0x1805BC710
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ApplicationViewCollectionRegistration::Unregister(ApplicationViewCollectionRegistration *this)
{
  __int64 v2; // rcx

  *((_QWORD *)this + 2) = 0LL;
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 32LL))(v2, *((unsigned int *)this + 6));
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
    *((_DWORD *)this + 6) = 0;
  }
}
