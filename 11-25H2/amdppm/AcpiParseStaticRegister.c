/*
 * XREFs of AcpiParseStaticRegister @ 0x14002B140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiParseStaticRegister(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  if ( a3 < 0xC )
    return 3221225485LL;
  result = 0LL;
  *(_WORD *)a2 = 126;
  *(_BYTE *)(a2 + 2) = 0;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 4);
  *(_BYTE *)(a2 + 3) = 0;
  return result;
}
