/*
 * XREFs of CreateSharedSystemVisualBitmapObject @ 0x1402228B0
 * Callers:
 *     <none>
 * Callees:
 *     CreateSharedResourceObject @ 0x14007390C (CreateSharedResourceObject.c)
 */

__int64 __fastcall CreateSharedSystemVisualBitmapObject(_QWORD *a1)
{
  __int64 result; // rax
  struct DirectComposition::ResourceObject *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  result = CreateSharedResourceObject((void *)0xB9, &v3);
  *a1 = v3;
  return result;
}
