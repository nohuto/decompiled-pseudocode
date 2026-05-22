/*
 * XREFs of ?GetPointerInfoTimePoint@QpcTimeConverter@@QEBA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@PEBUtagPOINTER_INFO@@@Z @ 0x180057F04
 * Callers:
 *     ?ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV?$optional@ULastUpData@ShellEdgyRecognizer@@@std@@@Z @ 0x180057C0C (-ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV-$optional@ULastUpData@ShellEd.c)
 *     ?UpdateContactState@ShellGesturesRecognizer@@AEAAXPEBUPointerInputInfo@@@Z @ 0x180066278 (-UpdateContactState@ShellGesturesRecognizer@@AEAAXPEBUPointerInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall QpcTimeConverter::GetPointerInfoTimePoint(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rax

  if ( *a1 )
    v3 = a1[1] * (*(_QWORD *)(a3 + 80) / *a1)
       + a1[1] * (*(_QWORD *)(a3 + 80) - *a1 * (*(_QWORD *)(a3 + 80) / *a1)) / *a1;
  else
    v3 = 1000LL * *(unsigned int *)(a3 + 64);
  *a2 = 1000 * v3;
  return a2;
}
