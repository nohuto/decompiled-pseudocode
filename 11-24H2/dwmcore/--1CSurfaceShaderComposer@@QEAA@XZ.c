/*
 * XREFs of ??1CSurfaceShaderComposer@@QEAA@XZ @ 0x180186ECC
 * Callers:
 *     ??R?$default_delete@VCSurfaceShaderComposer@@@std@@QEBAXPEAVCSurfaceShaderComposer@@@Z @ 0x180186E9C (--R-$default_delete@VCSurfaceShaderComposer@@@std@@QEBAXPEAVCSurfaceShaderComposer@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DConstantBuffer@@@WRL@Microsoft@@IEAAKXZ @ 0x180186F34 (-InternalRelease@-$ComPtr@VCD3DConstantBuffer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1SurfaceShader@CSurfaceShaderComposer@@QEAA@XZ @ 0x18024FE50 (--1SurfaceShader@CSurfaceShaderComposer@@QEAA@XZ.c)
 */

void __fastcall CSurfaceShaderComposer::~CSurfaceShaderComposer(CSurfaceShaderComposer *this)
{
  __int64 *v2; // rbx
  __int64 v3; // rdi

  Microsoft::WRL::ComPtr<CD3DConstantBuffer>::InternalRelease((char *)this + 80);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 7);
  v2 = (__int64 *)((char *)this + 48);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
  v3 = 6LL;
  do
  {
    CSurfaceShaderComposer::SurfaceShader::~SurfaceShader((CSurfaceShaderComposer::SurfaceShader *)--v2);
    --v3;
  }
  while ( v3 );
}
