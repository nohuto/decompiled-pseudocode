/*
 * XREFs of RtlLookupFunctionTableEx @ 0x140231D80
 * Callers:
 *     <none>
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x140233240 (RtlpxLookupFunctionTable.c)
 */

__int64 __fastcall RtlLookupFunctionTableEx(unsigned __int64 a1, _QWORD *a2)
{
  if ( a1 < *((_QWORD *)&xmmword_141200030 + 1)
    || a1 >= *((_QWORD *)&xmmword_141200030 + 1) + (unsigned __int64)(unsigned int)qword_141200040 )
  {
    return RtlpxLookupFunctionTable(a1, a2);
  }
  *(_OWORD *)a2 = xmmword_141200030;
  a2[2] = qword_141200040;
  return *a2;
}
