/*
 * XREFs of GdiPreUserProcessCallout @ 0x14011E210
 * Callers:
 *     ??0tagPROCESSINFO@@QEAA@PEAU_EPROCESS@@@Z @ 0x140166A04 (--0tagPROCESSINFO@@QEAA@PEAU_EPROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GdiPreUserProcessCallout(_QWORD *a1, char a2)
{
  _QWORD *result; // rax

  if ( a2 )
  {
    a1[10] = 0LL;
    result = a1 + 28;
    a1[29] = a1 + 28;
    a1[28] = a1 + 28;
  }
  return result;
}
