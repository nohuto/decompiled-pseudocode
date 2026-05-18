/*
 * XREFs of sub_180095864 @ 0x180095864
 * Callers:
 *     ?_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z @ 0x1800958AC (-_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z.c)
 * Callees:
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 *     sub_1800264B4 @ 0x1800264B4 (sub_1800264B4.c)
 *     sub_1800957F8 @ 0x1800957F8 (sub_1800957F8.c)
 */

__int64 __fastcall sub_180095864(__int64 a1)
{
  sub_18000B2D4(a1 + 64, 16LL, 5LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_1800264B4((void **)(a1 + 48));
  sub_1800957F8((void **)(a1 + 8));
  return sub_1800D25C4(a1);
}
