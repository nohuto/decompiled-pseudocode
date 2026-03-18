/*
 * XREFs of CmpSearchForTrans @ 0x140885E18
 * Callers:
 *     CmpTransSearchAddTrans @ 0x140885A48 (CmpTransSearchAddTrans.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x1406EF5FC (CmpTransUowIsEqual.c)
 *     CmListGetNextElement @ 0x140BA9A30 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpSearchForTrans(__int64 a1, __int64 a2, const void *a3)
{
  __int64 v3; // rbp
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = a1 + 16;
  while ( 1 )
  {
    result = CmListGetNextElement(v3, &v8, 0LL);
    v7 = result;
    if ( !result )
      break;
    if ( a2 && a2 == *(_QWORD *)(result + 56) || a3 && CmpTransUowIsEqual(a3, (const void *)(result + 88)) )
      return v7;
  }
  return result;
}
