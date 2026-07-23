/*
 * XREFs of MiMarkResumptionPoint @ 0x140421720
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMarkResumptionPoint(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax

  if ( a3 )
  {
    if ( a4 != 3 )
    {
      result = *(unsigned int *)(a1 + 4);
      *(_QWORD *)(a1 + 72) = a2;
      *(_DWORD *)(a1 + 4) = result ^ ((unsigned __int8)result ^ (unsigned __int8)(4 * a3)) & 0x1C;
    }
  }
  return result;
}
