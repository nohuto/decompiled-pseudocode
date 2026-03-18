/*
 * XREFs of ??1CD3DConstantBuffer@@MEAA@XZ @ 0x180187B9C
 * Callers:
 *     ??_ECD3DConstantBuffer@@MEAAPEAXI@Z @ 0x180187B60 (--_ECD3DConstantBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CD3DConstantBuffer::~CD3DConstantBuffer(CD3DConstantBuffer *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 15);
  CD3DResource::~CD3DResource(this);
}
