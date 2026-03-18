/*
 * XREFs of ApiSetEditionPromotePointer @ 0x1400C2CB4
 * Callers:
 *     ?PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z @ 0x1400C2BB0 (-PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z.c)
 * Callees:
 *     EditionPromotePointer @ 0x140140828 (EditionPromotePointer.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionPromotePointer(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // esi
  unsigned __int16 v5; // bp
  unsigned int v6; // ebx
  int (*v7)(void); // rax

  v4 = a2;
  v5 = a1;
  v6 = 0;
  v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6304LL);
  if ( v7 && v7() >= 0 )
    return (unsigned int)EditionPromotePointer(v5, v4, a3);
  return v6;
}
