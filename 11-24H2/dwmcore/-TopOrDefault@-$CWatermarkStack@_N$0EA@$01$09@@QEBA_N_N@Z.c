/*
 * XREFs of ?TopOrDefault@?$CWatermarkStack@_N$0EA@$01$09@@QEBA_N_N@Z @ 0x18019CF80
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CWatermarkStack<bool,64,2,10>::TopOrDefault(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 )
    return *(_BYTE *)((unsigned int)(v1 - 1) + *(_QWORD *)a1);
  else
    return 0;
}
