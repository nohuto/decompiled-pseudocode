/*
 * XREFs of ?Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDevice@@AEBUD3D11_BUFFER_DESC@@AEBUD3D11_SUBRESOURCE_DATA@@@Z @ 0x180187B04
 * Callers:
 *     ?Initialize@?$CTypedConstantBuffer@UVertexConstantBufferData@@@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@@@Z @ 0x180187A6C (-Initialize@-$CTypedConstantBuffer@UVertexConstantBufferData@@@@QEAAJPEAVCD3DDevice@@W4D3D11_USA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CTypedConstantBufferBase::Initialize(
        CTypedConstantBufferBase *this,
        struct CD3DDevice *a2,
        const struct D3D11_BUFFER_DESC *a3,
        const struct D3D11_SUBRESOURCE_DATA *a4)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this);
  return CD3DDevice::CreateBuffer(a2, a3, a4, (struct ID3D11Buffer **)this);
}
