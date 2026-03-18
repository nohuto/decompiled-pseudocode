/*
 * XREFs of ?Initialize@?$CTypedConstantBuffer@ULightPSConstantBuffer@@@@QEAAJPEAVCD3DDevice@@W4D3D11_USAGE@@@Z @ 0x18018E9F8
 * Callers:
 *     ?Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDevice@@@Z @ 0x18018E664 (-Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180142A00 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTypedConstantBuffer<LightPSConstantBuffer>::Initialize(__int64 *a1, __int64 a2)
{
  unsigned int v2; // edi
  int v5; // eax
  int v6; // ebx
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
    v10[0] = 240;
    v10[2] = 4;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
    *a1 = 0LL;
    if ( *(_DWORD *)(a2 + 1112) )
    {
      v6 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x69Bu, 0LL);
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD *, __int64 *))(**(_QWORD **)(a2 + 552) + 24LL))(
             *(_QWORD *)(a2 + 552),
             v10,
             v9,
             a1);
      v6 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x69Fu, 0LL);
    }
    v7 = CD3DDevice::TranslateDXGIorD3DErrorInContext(a2, v6, 0);
    v2 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x44u, 0LL);
  }
  return v2;
}
