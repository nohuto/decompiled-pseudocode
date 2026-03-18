/*
 * XREFs of ?FillLanczosUpBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x18027C74C
 * Callers:
 *     ?RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x18027C820 (-RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAE.c)
 * Callees:
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x180064D50 (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE$0-0@gsl@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall FillLanczosUpBuffer(struct CSurfaceShaderComposer *a1, int a2, int a3, int a4, signed int a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  const void *v8[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+40h] [rbp-38h] BYREF
  float v10; // [rsp+48h] [rbp-30h]
  float v11; // [rsp+4Ch] [rbp-2Ch]
  float v12; // [rsp+50h] [rbp-28h]
  float v13; // [rsp+54h] [rbp-24h]
  __int64 v14; // [rsp+58h] [rbp-20h]

  v9 = 0LL;
  v14 = 0LL;
  v8[0] = (const void *)32;
  v10 = (float)a2;
  v11 = (float)a3;
  v8[1] = &v9;
  v12 = (float)a4;
  v13 = (float)a5;
  v5 = CSurfaceShaderComposer::SetScratchConstantBuffer((__int64)a1, v8, 0);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x1Fu, 0LL);
  return v6;
}
