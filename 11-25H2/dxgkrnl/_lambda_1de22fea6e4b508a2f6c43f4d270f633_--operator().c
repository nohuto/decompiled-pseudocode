/*
 * XREFs of _lambda_1de22fea6e4b508a2f6c43f4d270f633_::operator() @ 0x140257944
 * Callers:
 *     ?BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x140257AF0 (-BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONN.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall lambda_1de22fea6e4b508a2f6c43f4d270f633_::operator()(__int64 a1, int a2)
{
  __int64 v4; // rdx
  _DWORD *result; // rax

  if ( **(_DWORD **)a1 <= **(_DWORD **)(a1 + 8) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1747;
  }
  v4 = **(_QWORD **)(a1 + 16);
  result = *(_DWORD **)a1;
  *(_DWORD *)(v4 + 4LL * (unsigned int)--*result) = a2;
  return result;
}
