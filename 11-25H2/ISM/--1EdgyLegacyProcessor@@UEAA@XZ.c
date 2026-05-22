/*
 * XREFs of ??1EdgyLegacyProcessor@@UEAA@XZ @ 0x1801A0FD0
 * Callers:
 *     ??_EEdgyLegacyProcessor@@UEAAPEAXI@Z @ 0x1801A1020 (--_EEdgyLegacyProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1EdgyImpl@@QEAA@XZ @ 0x1801A4CA0 (--1EdgyImpl@@QEAA@XZ.c)
 */

void __fastcall EdgyLegacyProcessor::~EdgyLegacyProcessor(EdgyLegacyProcessor *this)
{
  EdgyImpl::~EdgyImpl((EdgyLegacyProcessor *)((char *)this + 80));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 9);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
