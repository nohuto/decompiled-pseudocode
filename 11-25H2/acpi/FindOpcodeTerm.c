/*
 * XREFs of FindOpcodeTerm @ 0x140035F38
 * Callers:
 *     RegOpcodeHandler @ 0x14006D26C (RegOpcodeHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindOpcodeTerm(int a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rdx

  v1 = &ExOpcodeTable;
  v2 = 0LL;
  while ( v1[1] )
  {
    if ( a1 == *(_DWORD *)v1 )
      return v1[1];
    v1 += 2;
  }
  return v2;
}
