/*
 * XREFs of ??1CSurfaceShaderComposer@@QEAA@XZ @ 0x1801906D4
 * Callers:
 *     ??R?$default_delete@VCSurfaceShaderComposer@@@std@@QEBAXPEAVCSurfaceShaderComposer@@@Z @ 0x18019073C (--R-$default_delete@VCSurfaceShaderComposer@@@std@@QEBAXPEAVCSurfaceShaderComposer@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DConstantBuffer@@@WRL@Microsoft@@IEAAKXZ @ 0x18019061C (-InternalRelease@-$ComPtr@VCD3DConstantBuffer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1SurfaceShader@CSurfaceShaderComposer@@QEAA@XZ @ 0x18025B380 (--1SurfaceShader@CSurfaceShaderComposer@@QEAA@XZ.c)
 */

void __fastcall CSurfaceShaderComposer::~CSurfaceShaderComposer(CSurfaceShaderComposer *this)
{
  __int64 *v2; // rbx
  __int64 v3; // rdi

  Microsoft::WRL::ComPtr<CD3DConstantBuffer>::InternalRelease((struct CMILPoolResource **)this + 10);
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
