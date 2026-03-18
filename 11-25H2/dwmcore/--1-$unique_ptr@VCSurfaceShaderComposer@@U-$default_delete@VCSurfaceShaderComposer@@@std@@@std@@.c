/*
 * XREFs of ??1?$unique_ptr@VCSurfaceShaderComposer@@U?$default_delete@VCSurfaceShaderComposer@@@std@@@std@@QEAA@XZ @ 0x180234508
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x18022EA8C (--1CD3DDevice@@MEAA@XZ.c)
 * Callees:
 *     ??R?$default_delete@VCSurfaceShaderComposer@@@std@@QEBAXPEAVCSurfaceShaderComposer@@@Z @ 0x18019073C (--R-$default_delete@VCSurfaceShaderComposer@@@std@@QEBAXPEAVCSurfaceShaderComposer@@@Z.c)
 */

void __fastcall std::unique_ptr<CSurfaceShaderComposer>::~unique_ptr<CSurfaceShaderComposer>(
        CSurfaceShaderComposer **a1)
{
  if ( *a1 )
    std::default_delete<CSurfaceShaderComposer>::operator()((__int64)a1, *a1);
}
