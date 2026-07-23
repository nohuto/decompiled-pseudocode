/*
 * XREFs of AlpcHandleDataDestroyProcedure @ 0x140A0DFA0
 * Callers:
 *     <none>
 * Callees:
 *     ObReleaseDuplicateInfo @ 0x140A0E008 (ObReleaseDuplicateInfo.c)
 */

__int64 __fastcall AlpcHandleDataDestroyProcedure(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rsi
  _QWORD *v5; // rdi

  v1 = *(_DWORD *)(a1 + 4);
  v2 = 0LL;
  if ( v1 )
  {
    v5 = (_QWORD *)(a1 + 24);
    do
    {
      if ( !*v5 )
        break;
      ObReleaseDuplicateInfo(a1 + 48 * v2 + 8);
      v2 = (unsigned int)(v2 + 1);
      v5 += 6;
    }
    while ( (unsigned int)v2 < v1 );
  }
  return 0LL;
}
