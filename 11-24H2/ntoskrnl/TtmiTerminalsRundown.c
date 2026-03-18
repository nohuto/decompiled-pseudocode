/*
 * XREFs of TtmiTerminalsRundown @ 0x140770020
 * Callers:
 *     TtmiSessionsRundown @ 0x140769F5C (TtmiSessionsRundown.c)
 * Callees:
 *     TtmiLogTerminalRundown @ 0x14076EFFC (TtmiLogTerminalRundown.c)
 */

void __fastcall TtmiTerminalsRundown(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx

  v1 = (_QWORD *)(a1 + 40);
  v2 = *(_QWORD **)(a1 + 40);
  if ( v2 != (_QWORD *)(a1 + 40) )
  {
    do
    {
      TtmiLogTerminalRundown();
      v2 = (_QWORD *)*v2;
    }
    while ( v2 != v1 );
  }
}
