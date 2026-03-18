/*
 * XREFs of PfTTraceListFree @ 0x140950884
 * Callers:
 *     PfTCleanup @ 0x140746568 (PfTCleanup.c)
 *     PfTTraceListAdd @ 0x1409506E0 (PfTTraceListAdd.c)
 * Callees:
 *     PfTFreeTraceDump @ 0x1404A9C78 (PfTFreeTraceDump.c)
 */

void __fastcall PfTTraceListFree(__int64 a1, _QWORD **a2)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rax

  while ( 1 )
  {
    v4 = *a2;
    if ( *a2 == a2 )
      break;
    if ( (_QWORD **)v4[1] != a2 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *a2 = v5;
    v5[1] = a2;
    PfTFreeTraceDump(a1, v4);
  }
}
