/*
 * XREFs of GenNamedValueBegin @ 0x14014314C
 * Callers:
 *     GenNamedValueBytes @ 0x140143188 (GenNamedValueBytes.c)
 *     GenNamedValueInt @ 0x1401431F0 (GenNamedValueInt.c)
 *     GenNamedValueListBegin @ 0x140143248 (GenNamedValueListBegin.c)
 * Callees:
 *     GenInteger @ 0x140142F4C (GenInteger.c)
 */

__int64 __fastcall GenNamedValueBegin(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rcx

  v3 = *(unsigned int *)(a1 + 12);
  if ( (unsigned int)(v3 + 1) > *(_DWORD *)(a1 + 8) )
    return 3221225507LL;
  *(_BYTE *)(v3 + *(_QWORD *)a1) = -14;
  ++*(_DWORD *)(a1 + 12);
  return GenInteger(a1, a2);
}
