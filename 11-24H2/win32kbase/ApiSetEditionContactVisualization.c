/*
 * XREFs of ApiSetEditionContactVisualization @ 0x14011C748
 * Callers:
 *     ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x14011C6D4 (-DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z.c)
 * Callees:
 *     EditionContactVisualization @ 0x1401234C4 (EditionContactVisualization.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionContactVisualization(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  int v6; // esi
  int v7; // ebp
  unsigned int v8; // ebx
  int (*v9)(void); // rax
  int v10; // r8d

  v6 = a2;
  v7 = a1;
  v8 = 0;
  v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6544LL);
  if ( v9 && v9() >= 0 )
    return (unsigned int)EditionContactVisualization(v7, v6, v10, a4, a5);
  return v8;
}
