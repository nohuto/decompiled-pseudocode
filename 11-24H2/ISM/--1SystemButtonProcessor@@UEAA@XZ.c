/*
 * XREFs of ??1SystemButtonProcessor@@UEAA@XZ @ 0x1801B2B80
 * Callers:
 *     ??_ESystemButtonProcessor@@UEAAPEAXI@Z @ 0x1801B2BC0 (--_ESystemButtonProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall SystemButtonProcessor::~SystemButtonProcessor(SystemButtonProcessor *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
