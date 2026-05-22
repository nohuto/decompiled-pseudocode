/*
 * XREFs of ??1SpectrumListener@@UEAA@XZ @ 0x1800CDE44
 * Callers:
 *     ??_GSpectrumListener@@UEAAPEAXI@Z @ 0x1800CDEF0 (--_GSpectrumListener@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$unique_ptr@VSpeechRuntimeListener@@U?$default_delete@VSpeechRuntimeListener@@@std@@@std@@QEAA@XZ @ 0x1800CDE24 (--1-$unique_ptr@VSpeechRuntimeListener@@U-$default_delete@VSpeechRuntimeListener@@@std@@@std@@QE.c)
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x1800CE2DC (-Unregister@SpectrumListener@@QEAAXXZ.c)
 */

void __fastcall SpectrumListener::~SpectrumListener(SpectrumListener *this)
{
  *(_QWORD *)this = &SpectrumListener::`vftable';
  SpectrumListener::Unregister(this);
  std::unique_ptr<SpeechRuntimeListener>::~unique_ptr<SpeechRuntimeListener>((_QWORD *)this + 4);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  *((_DWORD *)this + 3) = -1073741823;
}
