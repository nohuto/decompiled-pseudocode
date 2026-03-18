/*
 * XREFs of _lambda_9913d0abb7c2ea8d45a858df1e180213_::operator() @ 0x14025E7D4
 * Callers:
 *     ?BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x14025EA10 (-BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONN.c)
 * Callees:
 *     <none>
 */

char __fastcall lambda_9913d0abb7c2ea8d45a858df1e180213_::operator()(__int64 a1, int a2)
{
  __int64 v2; // r8
  int v4; // ebx
  __int64 v5; // r10
  int v6; // r11d
  char result; // al
  unsigned int i; // ecx

  v2 = 0LL;
  v4 = a2 & 0x7FFFFFFF;
  while ( (unsigned int)v2 < **(_DWORD **)a1 )
  {
    v5 = **(_QWORD **)(a1 + 16);
    v6 = *(_DWORD *)(v5 + 4 * v2);
    if ( (v6 & 0x7FFFFFFF) == v4 )
    {
LABEL_5:
      result = 1;
      *(_DWORD *)(v5 + 4 * v2) = v6 | a2 & 0x80000000;
      return result;
    }
    v2 = (unsigned int)(v2 + 1);
  }
  for ( i = **(_DWORD **)(a1 + 24); i < **(_DWORD **)(a1 + 32); ++i )
  {
    v2 = i;
    v5 = **(_QWORD **)(a1 + 16);
    v6 = *(_DWORD *)(v5 + 4LL * i);
    if ( (v6 & 0x7FFFFFFF) == v4 )
      goto LABEL_5;
  }
  return 0;
}
