/*
 * XREFs of ?SelectFont@@YAXPEAU_SELECT_FONT@@@Z @ 0x1C023EAC0
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectFontInternal @ 0x1C011A874 (GreSelectFontInternal.c)
 */

void __fastcall SelectFont(struct _SELECT_FONT *a1)
{
  GreSelectFontInternal(*(_QWORD *)a1, *((_QWORD *)a1 + 1), 1);
}
