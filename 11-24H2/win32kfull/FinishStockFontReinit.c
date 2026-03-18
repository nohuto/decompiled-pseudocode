/*
 * XREFs of FinishStockFontReinit @ 0x140151630
 * Callers:
 *     <none>
 * Callees:
 *     FinishStockFontInit @ 0x140151750 (FinishStockFontInit.c)
 *     ?bSetStockFont@@YAHPEAXHH@Z @ 0x140151E58 (-bSetStockFont@@YAHPEAXHH@Z.c)
 *     hfontInitDefaultGuiFont @ 0x1403EADD8 (hfontInitDefaultGuiFont.c)
 */

__int64 __fastcall FinishStockFontReinit(Gre::Base *c)
{
  INT v1; // esi
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  __int64 v3; // rbx
  unsigned int CurrentProcessId; // eax
  __int64 v5; // r8
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // r8
  void *inited; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 result; // rax

  v1 = (int)c;
  v2 = Gre::Base::Globals(c);
  v3 = *(_QWORD *)(*((_QWORD *)v2 + 376) + 136LL);
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  LOBYTE(v5) = 10;
  HmgSetOwner(v3, CurrentProcessId & 0xFFFFFFFC, v5);
  GreDeleteObject(*(_QWORD *)(*((_QWORD *)v2 + 376) + 136LL));
  *(_QWORD *)(*((_QWORD *)v2 + 376) + 136LL) = 0LL;
  v6 = *(_QWORD *)(*((_QWORD *)v2 + 377) + 136LL);
  v7 = (unsigned int)PsGetCurrentProcessId();
  LOBYTE(v8) = 10;
  HmgSetOwner(v6, v7 & 0xFFFFFFFC, v8);
  GreDeleteObject(*(_QWORD *)(*((_QWORD *)v2 + 377) + 136LL));
  *(_QWORD *)(*((_QWORD *)v2 + 377) + 136LL) = 0LL;
  inited = (void *)hfontInitDefaultGuiFont(0xFFFFFFFFLL);
  bSetStockFont(inited, 17, 0);
  FinishStockFontInit(v1);
  result = W32GetSessionState(v11, v10, v12);
  *(_DWORD *)(*(_QWORD *)(result + 96) + 24128LL) = 0;
  return result;
}
