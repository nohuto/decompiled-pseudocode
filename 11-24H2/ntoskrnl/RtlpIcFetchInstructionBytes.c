/*
 * XREFs of RtlpIcFetchInstructionBytes @ 0x140BB8454
 * Callers:
 *     RtlpIcDecodeModRm @ 0x140BB72B0 (RtlpIcDecodeModRm.c)
 *     RtlpIcEmulateInstruction @ 0x140BB7A08 (RtlpIcEmulateInstruction.c)
 *     RtlpIcFetchImmediateOperand @ 0x140BB83D8 (RtlpIcFetchImmediateOperand.c)
 *     RtlpIcParseInstructionPrefix @ 0x140BB851C (RtlpIcParseInstructionPrefix.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpIcFetchInstructionBytes(__int64 a1, _BYTE *a2, int a3, _DWORD *a4)
{
  __int64 v4; // r10
  __int64 v6; // rcx
  __int64 v7; // rcx

  v4 = (unsigned int)*a4;
  if ( (int)v4 + a3 > (unsigned int)*(unsigned __int8 *)(a1 + 5) )
    return 3221225990LL;
  *a4 = v4 + a3;
  v6 = v4 + a1 + 6;
  if ( a3 )
  {
    v7 = v6 - (_QWORD)a2;
    do
    {
      *a2 = a2[v7];
      ++a2;
      --a3;
    }
    while ( a3 );
  }
  return 0LL;
}
