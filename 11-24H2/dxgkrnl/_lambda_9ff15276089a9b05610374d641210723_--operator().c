/*
 * XREFs of _lambda_9ff15276089a9b05610374d641210723_::operator() @ 0x14025E864
 * Callers:
 *     ?BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x14025EA10 (-BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONN.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall lambda_9ff15276089a9b05610374d641210723_::operator()(__int64 a1, int a2)
{
  __int64 v4; // rdx
  _DWORD *result; // rax

  if ( **(_DWORD **)a1 <= **(_DWORD **)(a1 + 8) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1761;
  }
  v4 = **(_QWORD **)(a1 + 16);
  result = *(_DWORD **)a1;
  *(_DWORD *)(v4 + 4LL * (unsigned int)--*result) = a2;
  return result;
}
