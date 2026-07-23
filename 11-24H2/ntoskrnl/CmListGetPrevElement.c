/*
 * XREFs of CmListGetPrevElement @ 0x1409C52A0
 * Callers:
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 *     CmGetKeyFlags @ 0x140A86838 (CmGetKeyFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmListGetPrevElement(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = *a2;
  if ( !*a2 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    *a2 = v2;
  }
  if ( a1 == v2 )
    return 0LL;
  v3 = *(_QWORD *)(v2 + 8);
  result = v2 - 32;
  *a2 = v3;
  return result;
}
