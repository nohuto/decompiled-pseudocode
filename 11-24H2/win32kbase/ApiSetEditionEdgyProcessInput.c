/*
 * XREFs of ApiSetEditionEdgyProcessInput @ 0x14019180C
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1401FAE28 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 * Callees:
 *     EditionEdgyProcessInput @ 0x14014F568 (EditionEdgyProcessInput.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionEdgyProcessInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // ebx
  int (*v8)(void); // rax
  __int64 v9; // rdx

  v7 = 0;
  v8 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6672LL);
  if ( v8 && v8() >= 0 )
    return (unsigned int)EditionEdgyProcessInput(a1, v9, a3, a4);
  return v7;
}
