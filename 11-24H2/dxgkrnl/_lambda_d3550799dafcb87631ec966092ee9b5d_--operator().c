/*
 * XREFs of _lambda_d3550799dafcb87631ec966092ee9b5d_::operator() @ 0x14025E8C0
 * Callers:
 *     ?BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x14025EA10 (-BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_d3550799dafcb87631ec966092ee9b5d_::operator()(__int64 a1)
{
  _QWORD *v2; // rdi
  unsigned int *v3; // r11
  int v4; // edx
  __int64 result; // rax
  __int64 v6; // r9
  unsigned int v7; // ecx
  __int64 v8; // r10
  int v9; // ecx

  if ( **(_DWORD **)a1 >= **(_DWORD **)(a1 + 8) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1770;
  }
  v2 = *(_QWORD **)(a1 + 16);
  v3 = *(unsigned int **)a1;
  v4 = **(_DWORD **)(a1 + 8);
  result = *(unsigned int *)(*v2 + 4LL * (unsigned int)(v4 - 1));
  v6 = (unsigned int)(v4 - 2);
  v7 = **(_DWORD **)a1;
  if ( (unsigned int)v6 >= v7 )
  {
    v8 = (unsigned int)(v6 + 1);
    do
    {
      v9 = *(_DWORD *)(*v2 + 4 * v6);
      v6 = (unsigned int)(v6 - 1);
      *(_DWORD *)(*v2 + 4 * v8) = v9;
      v8 = (unsigned int)(v8 - 1);
      v7 = *v3;
    }
    while ( (unsigned int)v6 >= *v3 );
  }
  *v3 = v7 + 1;
  return result;
}
