/*
 * XREFs of ?Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDevice@@@Z @ 0x180187448
 * Callers:
 *     ?Create@CSharedDirect3DResources@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAPEAV12@@Z @ 0x1801BE728 (-Create@CSharedDirect3DResources@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAPEAV12@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@?$CTypedConstantBuffer@M@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@@@Z @ 0x18018759C (-Initialize@-$CTypedConstantBuffer@M@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@@@Z.c)
 *     ?Initialize@?$CTypedConstantBuffer@ULightVSConstantBuffer@@@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@@@Z @ 0x1801876BC (-Initialize@-$CTypedConstantBuffer@ULightVSConstantBuffer@@@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@.c)
 *     ?Initialize@?$CTypedConstantBuffer@ULightPSConstantBuffer@@@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@@@Z @ 0x1801877DC (-Initialize@-$CTypedConstantBuffer@ULightPSConstantBuffer@@@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@.c)
 *     ?Initialize@?$CTypedConstantBuffer@ULightNoOpConstantBuffer@@@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@@@Z @ 0x1801878FC (-Initialize@-$CTypedConstantBuffer@ULightNoOpConstantBuffer@@@@QEAAJPEAVCD3DDevice@@W4D3D11_USAG.c)
 *     ?Initialize@CD3DDynamicAppendBuffer@@QEAAJPEAVCD3DDevice@@I@Z @ 0x180187A20 (-Initialize@CD3DDynamicAppendBuffer@@QEAAJPEAVCD3DDevice@@I@Z.c)
 *     ?Initialize@?$CTypedConstantBuffer@UVertexConstantBufferData@@@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@@@Z @ 0x180187A6C (-Initialize@-$CTypedConstantBuffer@UVertexConstantBufferData@@@@QEAAJPEAVCD3DDevice@@W4D3D11_USA.c)
 */

__int64 __fastcall CDrawListEntryBatch::CSharedDirect3DResources::Init(
        CDrawListEntryBatch::CSharedDirect3DResources *this,
        struct CD3DDevice *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax

  v4 = CD3DDynamicAppendBuffer::Initialize(
         (CDrawListEntryBatch::CSharedDirect3DResources *)((char *)this + 16),
         a2,
         0x27100u);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x2Au, 0LL);
  }
  else
  {
    v6 = CD3DDynamicAppendBuffer::Initialize(
           (CDrawListEntryBatch::CSharedDirect3DResources *)((char *)this + 64),
           a2,
           0x3E80u);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x2Bu, 0LL);
    }
    else
    {
      v7 = CTypedConstantBuffer<VertexConstantBufferData>::Initialize((char *)this + 112, a2);
      v5 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x2Cu, 0LL);
      }
      else
      {
        v8 = CTypedConstantBuffer<float>::Initialize((char *)this + 272, a2);
        v5 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x31u, 0LL);
        }
        else
        {
          v9 = CTypedConstantBuffer<LightVSConstantBuffer>::Initialize((char *)this + 304, a2);
          v5 = v9;
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x32u, 0LL);
          }
          else
          {
            v10 = CTypedConstantBuffer<LightPSConstantBuffer>::Initialize((char *)this + 592, a2);
            v5 = v10;
            if ( v10 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x33u, 0LL);
            }
            else
            {
              v11 = CTypedConstantBuffer<LightNoOpConstantBuffer>::Initialize((char *)this + 848, a2);
              v5 = v11;
              if ( v11 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x34u, 0LL);
            }
          }
        }
      }
    }
  }
  return v5;
}
