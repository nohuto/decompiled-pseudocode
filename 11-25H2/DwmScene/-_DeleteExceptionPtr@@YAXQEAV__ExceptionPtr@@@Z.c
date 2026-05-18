/*
 * XREFs of ?_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z @ 0x1800958AC
 * Callers:
 *     sub_18002B550 @ 0x18002B550 (sub_18002B550.c)
 * Callees:
 *     sub_180095C50 @ 0x180095C50 (sub_180095C50.c)
 */

void __fastcall _DeleteExceptionPtr(struct __ExceptionPtr *const a1)
{
  sub_180095C50();
  sub_180095864((__int64)a1);
}
