/*
 * XREFs of ??1EdgyImpl@@QEAA@XZ @ 0x1801A4CA0
 * Callers:
 *     ??1EdgyLegacyProcessor@@UEAA@XZ @ 0x1801A0FD0 (--1EdgyLegacyProcessor@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x1801A5210 (-Reset@EdgyImpl@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall EdgyImpl::~EdgyImpl(EdgyImpl *this)
{
  __int64 v2; // rcx

  EdgyImpl::Reset(this);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
