/*
 * XREFs of PackAffectedThreadsFromThreadCleanup @ 0x1C01165E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C003A03C (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1C0116644 (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 */

void __fastcall PackAffectedThreadsFromThreadCleanup(tagQ **a1)
{
  _QWORD *v2; // rax
  _QWORD *i; // rdx

  v2 = (_QWORD *)(SGDGetUserSessionState(a1) + 16880);
  for ( i = (_QWORD *)*v2; i != v2; i = (_QWORD *)*i )
  {
    if ( a1 == (tagQ **)i[2] )
    {
      if ( i )
        i[2] = 0LL;
      break;
    }
  }
  if ( tagQ::AreMultipleThreadsAttached(a1[54]) )
    PackAffectedThreadList((const struct tagTHREADINFO *)a1, 0LL);
}
