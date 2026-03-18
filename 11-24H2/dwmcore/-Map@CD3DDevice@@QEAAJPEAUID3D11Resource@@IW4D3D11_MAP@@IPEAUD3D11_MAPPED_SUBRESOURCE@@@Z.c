/*
 * XREFs of ?Map@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x180106BE0
 * Callers:
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x1800401A0 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 *     ?SetData@CD3DConstantBuffer@@QEAAJV?$span@$$CBE$0?0@gsl@@@Z @ 0x180064E24 (-SetData@CD3DConstantBuffer@@QEAAJV-$span@$$CBE$0-0@gsl@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180106F10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x180250164 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::Map(
        CD3DDevice *this,
        struct ID3D11Resource *a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        struct D3D11_MAPPED_SUBRESOURCE *a6)
{
  int v7; // eax
  int v8; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // r9d
  int v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  if ( *((_DWORD *)this + 278) )
  {
    v8 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x9EBu, 0LL);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct ID3D11Resource *, _QWORD, __int64, _DWORD, struct D3D11_MAPPED_SUBRESOURCE *))(**((_QWORD **)this + 70) + 112LL))(
           *((_QWORD *)this + 70),
           a2,
           0LL,
           a4,
           0,
           a6);
    v8 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x9F1u, 0LL);
  }
  if ( *((_DWORD *)this + 278)
    || v8 != -2005532292 && v8 != -2147024882 && v8 != -2005270523
    || !*((_DWORD *)this + 112) )
  {
    goto LABEL_8;
  }
  if ( v8 != -2005270523 )
  {
LABEL_16:
    CD2DContext::TempDisableHardwareProtection((CD3DDevice *)((char *)this + 16));
    goto LABEL_8;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 69) + 312LL))(*((_QWORD *)this + 69));
  v11 = *((_DWORD *)this + 278);
  if ( v10 == -2005270480 )
  {
    if ( v11 )
      goto LABEL_16;
    *((_DWORD *)this + 278) = -2005270480;
    CD2DContext::TempDisableHardwareProtection((CD3DDevice *)((char *)this + 16));
LABEL_8:
    if ( v8 >= 0 )
      goto LABEL_9;
    goto LABEL_17;
  }
  if ( !v11 )
    *((_DWORD *)this + 278) = -2005270523;
LABEL_17:
  if ( *((_DWORD *)this + 278) )
    return 2291662989LL;
LABEL_9:
  v13 = 0;
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v8, 0LL, &v13) )
  {
    v12 = v13;
    if ( v13 == -2003304307 )
    {
      if ( v8 >= 0 )
        v8 = -2003304307;
      if ( !*((_DWORD *)this + 278) )
        *((_DWORD *)this + 278) = v8;
    }
    v8 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0xB31u, 0LL);
  }
  return (unsigned int)v8;
}
