/*
 * XREFs of ?Initialize@?$CTypedConstantBuffer@UVertexConstantBufferData@@@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@@@Z @ 0x180187A6C
 * Callers:
 *     ?Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDevice@@@Z @ 0x180187448 (-Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDevice@@AEBUD3D11_BUFFER_DESC@@AEBUD3D11_SUBRESOURCE_DATA@@@Z @ 0x180187B04 (-Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDevice@@AEBUD3D11_BUFFER_DESC@@AEBUD3D11_SUBR.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CTypedConstantBuffer<VertexConstantBufferData>::Initialize(__int64 a1, struct CD3DDevice *a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  struct D3D11_SUBRESOURCE_DATA v5; // [rsp+30h] [rbp-38h] BYREF
  struct D3D11_BUFFER_DESC v6; // [rsp+40h] [rbp-28h] BYREF

  v2 = 0;
  if ( !*(_QWORD *)a1 )
  {
    v6.Usage = D3D11_USAGE_DEFAULT;
    v6.CPUAccessFlags = 0;
    v6.MiscFlags = 0;
    v6.StructureByteStride = 0;
    *(_QWORD *)&v5.SysMemPitch = 0LL;
    v5.pSysMem = (const void *)(a1 + 16);
    v6.ByteWidth = 128;
    v6.BindFlags = 4;
    v3 = CTypedConstantBufferBase::Initialize((CTypedConstantBufferBase *)a1, a2, &v6, &v5);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x44u, 0LL);
  }
  return v2;
}
