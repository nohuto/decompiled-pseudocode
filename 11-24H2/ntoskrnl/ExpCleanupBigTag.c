/*
 * XREFs of ExpCleanupBigTag @ 0x140652F34
 * Callers:
 *     ExInsertPoolTag @ 0x14021B9D0 (ExInsertPoolTag.c)
 * Callees:
 *     ExpRemoveTagForBigPages @ 0x14021B1B0 (ExpRemoveTagForBigPages.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ExpCleanupBigTag(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR result; // rax
  _QWORD v3[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v4; // [rsp+68h] [rbp+10h] BYREF
  int v5; // [rsp+70h] [rbp+18h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  BugCheckParameter4 = 0LL;
  v4 = 0LL;
  v3[0] = 0LL;
  ExpRemoveTagForBigPages(BugCheckParameter2, 0x88uLL, 1LL, &v5, v3, &v4, &BugCheckParameter4);
  result = BugCheckParameter4 - 1;
  if ( BugCheckParameter4 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    KeBugCheckEx(0x19u, 0x24uLL, BugCheckParameter2, 0x88uLL, BugCheckParameter4);
  return result;
}
