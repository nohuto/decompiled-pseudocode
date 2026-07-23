/*
 * XREFs of CmpValueEnumStackInitialize @ 0x140A4B228
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140457F40 (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     CmpValueEnumStackEntryInitialize @ 0x14048D244 (CmpValueEnumStackEntryInitialize.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall CmpValueEnumStackInitialize(_DWORD *a1)
{
  _OWORD *v2; // rbx
  __int64 result; // rax
  __int64 v4; // rdx

  memset_0(a1 + 1, 0, 0x54uLL);
  *a1 = -1;
  v2 = a1 + 4;
  do
  {
    result = CmpValueEnumStackEntryInitialize(v2);
    v2 += 2;
  }
  while ( v4 != 1 );
  return result;
}
