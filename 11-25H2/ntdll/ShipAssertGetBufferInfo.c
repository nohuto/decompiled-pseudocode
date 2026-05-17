/*
 * XREFs of ShipAssertGetBufferInfo @ 0x1801360D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall ShipAssertGetBufferInfo(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  if ( a1 )
  {
    result = &qword_1801D0230;
    *a1 = &qword_1801D0230;
  }
  if ( a2 )
  {
    result = (__int64 *)&dword_1801CEF70;
    *a2 = &dword_1801CEF70;
  }
  return result;
}
