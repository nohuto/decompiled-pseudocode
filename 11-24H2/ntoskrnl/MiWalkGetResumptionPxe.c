/*
 * XREFs of MiWalkGetResumptionPxe @ 0x140451770
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiWalkGetResumptionPxe(__int64 a1, int a2)
{
  unsigned __int64 result; // rax
  int v3; // r8d
  __int64 v4; // rcx

  result = *(_QWORD *)(a1 + 72);
  v3 = (*(_DWORD *)(a1 + 4) >> 2) & 7;
  if ( a2 != v3 )
  {
    v4 = (unsigned int)(a2 - v3);
    do
    {
      result = ((result >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
