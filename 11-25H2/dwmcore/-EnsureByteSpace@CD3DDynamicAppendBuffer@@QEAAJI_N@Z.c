/*
 * XREFs of ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x18018DEA0
 * Callers:
 *     ?PrepareIndexBuffer@CD3DBatchExecutionContext@@AEAAJI@Z @ 0x180142160 (-PrepareIndexBuffer@CD3DBatchExecutionContext@@AEAAJI@Z.c)
 *     ?EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x180142F10 (-EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 *     ?EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180162780 (-EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComma.c)
 *     ?EmitGeometry@CMegaRectBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@@Z @ 0x180163A80 (-EmitGeometry@CMegaRectBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@@Z.c)
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180164BE0 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComm.c)
 *     ?EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x1801658F0 (-EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 *     ?Initialize@CD3DDynamicAppendBuffer@@QEAAJPEAVCD3DDevice@@I@Z @ 0x18018EC3C (-Initialize@CD3DDynamicAppendBuffer@@QEAAJPEAVCD3DDevice@@I@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateBuffer@CD3DDevice@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Buffer@@@Z @ 0x18020C150 (-CreateBuffer@CD3DDevice@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11B.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDynamicAppendBuffer::EnsureByteSpace(CD3DDynamicAppendBuffer *this, UINT a2, char a3)
{
  struct ID3D11Buffer *v3; // r9
  UINT v5; // ecx
  unsigned int v6; // ebx
  UINT v7; // esi
  UINT v8; // eax
  UINT v9; // edx
  UINT v10; // eax
  CD3DDevice *v11; // rbx
  int v12; // eax
  struct ID3D11Buffer *v13; // r14
  __int64 v14; // rcx
  struct ID3D11Buffer *v16; // [rsp+30h] [rbp-30h] BYREF
  D3D11_BUFFER_DESC v17; // [rsp+38h] [rbp-28h] BYREF

  v3 = 0LL;
  v5 = *((_DWORD *)this + 10);
  v6 = 0;
  v16 = 0LL;
  v7 = a2;
  if ( a2 > v5 )
  {
    if ( !a3 )
    {
      v8 = v5;
      if ( !v5 )
        v8 = a2;
      v9 = v5 + a2;
      while ( v8 < v9 )
        v8 *= 2;
      v7 = v8;
      if ( v8 > *((_DWORD *)this + 11) )
        v7 = *((_DWORD *)this + 11);
    }
    v10 = *((_DWORD *)this + 4);
    v17.MiscFlags = 0;
    v17.StructureByteStride = 0;
    v11 = *(CD3DDevice **)this;
    v17.BindFlags = v10;
    v17.ByteWidth = v7;
    v17.Usage = D3D11_USAGE_DYNAMIC;
    v17.CPUAccessFlags = 0x10000;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
    v12 = CD3DDevice::CreateBuffer(v11, &v17, 0LL, &v16);
    v6 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x48u, 0LL);
      v3 = v16;
    }
    else
    {
      v3 = v16;
      if ( *((struct ID3D11Buffer **)this + 1) != v16 )
      {
        v13 = v16;
        if ( v16 )
        {
          ((void (__fastcall *)(struct ID3D11Buffer *))v16->lpVtbl->AddRef)(v16);
          v3 = v16;
        }
        v14 = *((_QWORD *)this + 1);
        *((_QWORD *)this + 1) = v13;
        if ( v14 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          v3 = v16;
        }
      }
      *((_DWORD *)this + 9) = 0;
      *((_DWORD *)this + 10) = v7;
    }
  }
  if ( v3 )
  {
    v16 = 0LL;
    ((void (__fastcall *)(struct ID3D11Buffer *))v3->lpVtbl->Release)(v3);
  }
  return v6;
}
