/*
 * XREFs of RtlLookupFunctionTable @ 0x180015080
 * Callers:
 *     <none>
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1800166E0 (RtlpxLookupFunctionTable.c)
 */

__int64 __fastcall RtlLookupFunctionTable(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v6 = 0LL;
  if ( a1 < *((_QWORD *)&xmmword_1801E7440 + 1)
    || a1 >= *((_QWORD *)&xmmword_1801E7440 + 1) + (unsigned __int64)(unsigned int)qword_1801E7450 )
  {
    result = RtlpxLookupFunctionTable(a1, &v6);
  }
  else
  {
    result = xmmword_1801E7440;
    v6 = xmmword_1801E7440;
    v7 = qword_1801E7450;
  }
  if ( result )
  {
    *a2 = *((_QWORD *)&v6 + 1);
    *a3 = HIDWORD(v7);
  }
  return result;
}
