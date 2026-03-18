/*
 * XREFs of ApiSetEditionNotifyDwmForSystemVisualCreation @ 0x140125F48
 * Callers:
 *     ?SetSystemVisual@CHwndTargetProp@@QEAAJW4_HwndTargetType@@PEAUCompositionObject@@@Z @ 0x140125ED0 (-SetSystemVisual@CHwndTargetProp@@QEAAJW4_HwndTargetType@@PEAUCompositionObject@@@Z.c)
 * Callees:
 *     EditionNotifyDwmForSystemVisualCreation @ 0x140130BBC (EditionNotifyDwmForSystemVisualCreation.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionNotifyDwmForSystemVisualCreation(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  int (*v6)(void); // rax

  v4 = a2;
  v6 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 7408LL);
  if ( v6 && v6() >= 0 )
    return EditionNotifyDwmForSystemVisualCreation(a1, v4, a3);
  else
    return 0LL;
}
