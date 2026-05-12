/*
 * XREFs of GenNamedValueListEnd @ 0x140143288
 * Callers:
 *     GenSetTableColumnParams @ 0x14013E8C0 (GenSetTableColumnParams.c)
 *     GenActivateParams @ 0x14013F600 (GenActivateParams.c)
 *     GenSetACEBooleanExpr @ 0x14013F6C0 (GenSetACEBooleanExpr.c)
 *     GenSetTPerPropertiesParams @ 0x140140A40 (GenSetTPerPropertiesParams.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GenNamedValueListEnd(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = *(unsigned int *)(a1 + 12);
  if ( (unsigned int)(v2 + 1) > *(_DWORD *)(a1 + 8) )
    return 3221225507LL;
  *(_BYTE *)(v2 + *(_QWORD *)a1) = -15;
  v3 = (unsigned int)(*(_DWORD *)(a1 + 12) + 1);
  *(_DWORD *)(a1 + 12) = v3;
  if ( (unsigned int)(v3 + 1) > *(_DWORD *)(a1 + 8) )
    return 3221225507LL;
  *(_BYTE *)(v3 + *(_QWORD *)a1) = -13;
  result = 0LL;
  ++*(_DWORD *)(a1 + 12);
  return result;
}
