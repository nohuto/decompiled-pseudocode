/*
 * XREFs of ?IsTextureMemoryHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x1801BB8F0
 * Callers:
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800516E0 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CComposition::IsTextureMemoryHeatMapEnabled(CComposition *this)
{
  int v2; // edx
  _DWORD *v3; // rax

  if ( !*((_DWORD *)this + 1570) )
    return 0;
  v2 = *((_DWORD *)this + 1570);
  v3 = 0LL;
  if ( v2 )
    v3 = (_DWORD *)(*((_QWORD *)this + 784) + 24LL * (unsigned int)(v2 - 1));
  return *v3 == 2;
}
