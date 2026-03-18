/*
 * XREFs of ?bShouldMap@@YAHPEAUFILEVIEW@@0@Z @ 0x1401B1CCC
 * Callers:
 *     ?bMapRoutine@@YAHPEAUFONTFILEVIEW@@PEAUFILEVIEW@@W4_MAP_MODE@@@Z @ 0x1401B1BF4 (-bMapRoutine@@YAHPEAUFONTFILEVIEW@@PEAUFILEVIEW@@W4_MAP_MODE@@@Z.c)
 * Callees:
 *     ?QueryIsFAT@FileQueryObj@Gre@@QEBA_NPEA_N@Z @ 0x14033DDC4 (-QueryIsFAT@FileQueryObj@Gre@@QEBA_NPEA_N@Z.c)
 */

__int64 __fastcall bShouldMap(struct FILEVIEW *a1, struct FILEVIEW *a2)
{
  unsigned int v2; // ebx
  __int64 SessionState; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  bool v11; // [rsp+38h] [rbp+10h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  if ( !*(_QWORD *)a2 )
  {
    v2 = 1;
LABEL_6:
    if ( *((_BYTE *)a2 + 45) )
      v2 &= -(*((_BYTE *)a1 + 45) != 0);
    return v2;
  }
  if ( *((_DWORD *)a2 + 6) == *((_DWORD *)a1 + 6) )
  {
    SessionState = W32GetSessionState((_DWORD)a1, a2);
    v6 = *(_QWORD *)a2;
    v7 = *(_QWORD *)a1;
    if ( *(_QWORD *)a2 == *(_QWORD *)a1 || *(_DWORD *)(*(_QWORD *)(SessionState + 96) + 20384LL) )
      goto LABEL_4;
    v9 = v7 - v6;
    v10 = v6 - v7;
    if ( v9 >= 0 )
      v10 = v9;
    if ( v10 == 36000000000LL )
    {
      v12 = *((_QWORD *)a1 + 6);
      v11 = 0;
      if ( Gre::FileQueryObj::QueryIsFAT((Gre::FileQueryObj *)&v12, &v11) && v11 )
LABEL_4:
        v2 = 1;
    }
  }
  if ( v2 == 1 )
    goto LABEL_6;
  return v2;
}
