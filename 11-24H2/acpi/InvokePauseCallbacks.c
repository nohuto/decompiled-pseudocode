/*
 * XREFs of InvokePauseCallbacks @ 0x14004E99C
 * Callers:
 *     RunContext @ 0x140005EA0 (RunContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

void InvokePauseCallbacks()
{
  __int64 v0; // rcx
  __int64 v1; // rax

  while ( 1 )
  {
    v0 = qword_140088F20;
    if ( (__int64 *)qword_140088F20 == &qword_140088F20 )
      break;
    if ( *(__int64 **)(qword_140088F20 + 8) != &qword_140088F20
      || (v1 = *(_QWORD *)qword_140088F20, *(_QWORD *)(*(_QWORD *)qword_140088F20 + 8LL) != qword_140088F20) )
    {
      __fastfail(3u);
    }
    qword_140088F20 = *(_QWORD *)qword_140088F20;
    *(_QWORD *)(v1 + 8) = &qword_140088F20;
    (*(void (__fastcall **)(_QWORD))(v0 + 16))(*(_QWORD *)(v0 + 24));
  }
}
