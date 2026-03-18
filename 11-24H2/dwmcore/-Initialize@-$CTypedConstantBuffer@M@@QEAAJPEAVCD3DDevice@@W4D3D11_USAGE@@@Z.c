/*
 * XREFs of ?Initialize@?$CTypedConstantBuffer@M@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@@@Z @ 0x18018759C
 * Callers:
 *     ?Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDevice@@@Z @ 0x180187448 (-Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180106DC0 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTypedConstantBuffer<float>::Initialize(__int64 *a1, __int64 a2)
{
  unsigned int v2; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  _QWORD v9[2]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v10[6]; // [rsp+40h] [rbp-28h] BYREF

  v2 = 0;
  if ( !*a1 )
  {
    v10[1] = 0;
    v10[3] = 0;
    v10[4] = 0;
    v10[5] = 0;
    v9[1] = 0LL;
    v9[0] = a1 + 2;
    v10[0] = 16;
    v10[2] = 4;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
    *a1 = 0LL;
    if ( *(_DWORD *)(a2 + 1112) )
    {
      v5 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x67Fu, 0LL);
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD *, __int64 *))(**(_QWORD **)(a2 + 552) + 24LL))(
             *(_QWORD *)(a2 + 552),
             v10,
             v9,
             a1);
      v5 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x683u, 0LL);
    }
    v7 = CD3DDevice::TranslateDXGIorD3DErrorInContext(a2, v5, 0);
    v2 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x44u, 0LL);
  }
  return v2;
}
