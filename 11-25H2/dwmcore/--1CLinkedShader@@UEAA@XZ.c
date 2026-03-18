/*
 * XREFs of ??1CLinkedShader@@UEAA@XZ @ 0x1801C776C
 * Callers:
 *     ??_GCLinkedShader@@UEAAPEAXI@Z @ 0x1801C7730 (--_GCLinkedShader@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAA@XZ @ 0x1801C7794 (--1-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAA@XZ.c)
 */

void __fastcall CLinkedShader::~CLinkedShader(CLinkedShader *this)
{
  CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::~CDeviceResourceTable<CD3DPixelShader,CLinkedShader>((char *)this + 32);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}
