/*
 * XREFs of ??1CD3DConstantBuffer@@MEAA@XZ @ 0x18018EDAC
 * Callers:
 *     ??_ECD3DConstantBuffer@@MEAAPEAXI@Z @ 0x18018ED70 (--_ECD3DConstantBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CD3DConstantBuffer::~CD3DConstantBuffer(CD3DConstantBuffer *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 15);
  CD3DResource::~CD3DResource(this);
}
