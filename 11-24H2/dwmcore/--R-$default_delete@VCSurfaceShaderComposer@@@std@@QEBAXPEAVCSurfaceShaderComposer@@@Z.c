/*
 * XREFs of ??R?$default_delete@VCSurfaceShaderComposer@@@std@@QEBAXPEAVCSurfaceShaderComposer@@@Z @ 0x180186E9C
 * Callers:
 *     ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x1801927D0 (-GenerateShaders@CD3DDevice@@AEAAJXZ.c)
 *     ??1?$unique_ptr@VCSurfaceShaderComposer@@U?$default_delete@VCSurfaceShaderComposer@@@std@@@std@@QEAA@XZ @ 0x180229058 (--1-$unique_ptr@VCSurfaceShaderComposer@@U-$default_delete@VCSurfaceShaderComposer@@@std@@@std@@.c)
 * Callees:
 *     ??1CSurfaceShaderComposer@@QEAA@XZ @ 0x180186ECC (--1CSurfaceShaderComposer@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::default_delete<CSurfaceShaderComposer>::operator()(__int64 a1, CSurfaceShaderComposer *a2)
{
  if ( a2 )
  {
    CSurfaceShaderComposer::~CSurfaceShaderComposer(a2);
    operator delete(a2, 0x70uLL);
  }
}
