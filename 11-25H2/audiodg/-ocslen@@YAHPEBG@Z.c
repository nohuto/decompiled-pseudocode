/*
 * XREFs of ?ocslen@@YAHPEBG@Z @ 0x14008C980
 * Callers:
 *     ?Add@CExpansionVector@ATL@@QEAAHPEBG0@Z @ 0x140089A70 (-Add@CExpansionVector@ATL@@QEAAHPEBG0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ocslen(const unsigned __int16 *a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 0LL;
  result = -1LL;
  do
    ++result;
  while ( a1[result] );
  return result;
}
