/*
 * XREFs of SepInternalFillNoAttribs @ 0x1403B8A6C
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B7650 (SepInternalQuerySecurityAttributesTokenEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepInternalFillNoAttribs(_OWORD *a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax

  *a3 = 16;
  if ( a2 < 0x10 )
    return 3221225507LL;
  result = 0LL;
  *a1 = 0LL;
  *(_WORD *)a1 = 1;
  return result;
}
