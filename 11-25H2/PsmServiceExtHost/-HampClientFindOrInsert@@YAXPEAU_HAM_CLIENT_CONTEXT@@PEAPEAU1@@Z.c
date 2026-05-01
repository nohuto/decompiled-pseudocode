/*
 * XREFs of ?HampClientFindOrInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAPEAU1@@Z @ 0x18003D138
 * Callers:
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003EC6C (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_H.c)
 * Callees:
 *     CemRcTableFindOrInsertEx @ 0x180040C80 (CemRcTableFindOrInsertEx.c)
 */

void __fastcall HampClientFindOrInsert(struct _HAM_CLIENT_CONTEXT *a1, struct _HAM_CLIENT_CONTEXT **a2)
{
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  v4 = 0LL;
  v5 = 0LL;
  if ( *((_WORD *)a1 + 110) )
  {
    *(_QWORD *)&v4 = (char *)a1 + 220;
    DWORD2(v4) = *((_DWORD *)a1 + 42);
  }
  else
  {
    v5 = *((_QWORD *)a1 + 19);
  }
  CemRcTableFindOrInsertEx(
    *((_QWORD *)a1 + 4),
    (unsigned int)&v4,
    (unsigned int)HampClientCompareByLookupKey,
    (_DWORD)a1);
  if ( !a1 && _InterlockedIncrement64((volatile signed __int64 *)0x18) <= 1 )
    __fastfail(0xEu);
  *a2 = 0LL;
}
