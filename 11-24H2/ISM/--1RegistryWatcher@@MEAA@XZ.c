/*
 * XREFs of ??1RegistryWatcher@@MEAA@XZ @ 0x18010A1F8
 * Callers:
 *     ??_ERegistryWatcher@@MEAAPEAXI@Z @ 0x18010A2A0 (--_ERegistryWatcher@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RegistryWatcher::~RegistryWatcher(RegistryWatcher *this)
{
  __int64 *v2; // rdi
  HKEY v3; // rcx

  *(_QWORD *)this = &RegistryWatcher::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  v2 = (__int64 *)((char *)this + 16);
  if ( *((_QWORD *)this + 4) )
  {
    if ( *v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 280LL))(*v2);
    CloseHandle(*((HANDLE *)this + 4));
    *((_QWORD *)this + 4) = 0LL;
  }
  v3 = (HKEY)*((_QWORD *)this + 3);
  if ( v3 )
  {
    RegCloseKey(v3);
    *((_QWORD *)this + 3) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
