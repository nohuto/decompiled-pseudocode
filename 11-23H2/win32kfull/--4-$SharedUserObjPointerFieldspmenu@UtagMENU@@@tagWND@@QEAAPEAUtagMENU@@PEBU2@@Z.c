/*
 * XREFs of ??4?$SharedUserObjPointerFieldspmenu@UtagMENU@@@tagWND@@QEAAPEAUtagMENU@@PEBU2@@Z @ 0x1C01FFB7C
 * Callers:
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagWND::SharedUserObjPointerFieldspmenu<tagMENU>::operator=(_QWORD *a1)
{
  __int64 result; // rax

  *(_QWORD *)(*(a1 - 16) + 152LL) = 0LL;
  result = 0LL;
  *a1 = 0LL;
  return result;
}
