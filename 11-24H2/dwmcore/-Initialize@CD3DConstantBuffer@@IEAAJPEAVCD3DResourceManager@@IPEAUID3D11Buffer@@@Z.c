/*
 * XREFs of ?Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z @ 0x1800454C8
 * Callers:
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x18004523C (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 * Callees:
 *     ?RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z @ 0x18004554C (-RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DConstantBuffer::Initialize(
        CD3DConstantBuffer *this,
        struct CD3DResourceManager *a2,
        int a3,
        struct ID3D11Buffer *a4)
{
  __int64 v7; // rcx

  *((_QWORD *)this + 5) = a2;
  *((_DWORD *)this + 28) = a3;
  *((_BYTE *)this + 118) = 1;
  CD3DResourceManager::RegisterResource(a2, this);
  if ( *((struct ID3D11Buffer **)this + 15) != a4 )
  {
    if ( a4 )
      ((void (__fastcall *)(struct ID3D11Buffer *))a4->lpVtbl->AddRef)(a4);
    v7 = *((_QWORD *)this + 15);
    *((_QWORD *)this + 15) = a4;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *((_DWORD *)this + 32) = a3;
  return 0LL;
}
