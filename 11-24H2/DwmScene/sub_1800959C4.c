/*
 * XREFs of sub_1800959C4 @ 0x1800959C4
 * Callers:
 *     ?_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z @ 0x180095A0C (-_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z.c)
 * Callees:
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 *     sub_180026614 @ 0x180026614 (sub_180026614.c)
 *     sub_180095958 @ 0x180095958 (sub_180095958.c)
 */

__int64 __fastcall sub_1800959C4(__int64 a1)
{
  sub_18000B6A4(a1 + 64, 16LL, 5LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_180026614((void **)(a1 + 48));
  sub_180095958((void **)(a1 + 8));
  return sub_1800D2724(a1);
}
