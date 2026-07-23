/*
 * XREFs of CmpIsKeyDeleted @ 0x140872540
 * Callers:
 *     CmpSyncKcbCacheForHive @ 0x1407DC3B0 (CmpSyncKcbCacheForHive.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpVEExecuteOpenLogic @ 0x1408788D0 (CmpVEExecuteOpenLogic.c)
 *     CmpQueryKeyDataFromCache @ 0x14087C8F0 (CmpQueryKeyDataFromCache.c)
 *     CmpQueryKeyDataFromNode @ 0x140880E50 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumberEx @ 0x140881510 (CmpFindSubKeyByNumberEx.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1408E2B94 (CmpVEExecuteRealStoreParseLogic.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmEqualTrans @ 0x14087D5B0 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x140BBB940 (CmListGetNextElement.c)
 */

char __fastcall CmpIsKeyDeleted(__int64 a1, __int64 a2)
{
  int v4; // esi
  struct _PRIVILEGE_SET *Pool; // rdi
  __int64 v6; // rax
  __int16 v7; // ax
  PPRIVILEGE_SET v8; // rcx
  bool v9; // bl
  __int64 v11; // r9
  __int64 NextElement; // rax
  __int64 i; // rcx
  struct _PRIVILEGE_SET *v14; // rdx
  __int128 v15; // [rsp+20h] [rbp-28h]
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-18h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 8) & 0x20000) != 0 )
    return 1;
  v4 = *(__int16 *)(a1 + 66);
  Pool = 0LL;
  v15 = 0LL;
  WORD1(v15) = -1;
  *(_OWORD *)Privileges = 0LL;
  if ( v4 < 2
    || (Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL, 8LL * (unsigned int)(v4 - 1), 0x35364D43u)) != 0LL )
  {
    v6 = *(__int16 *)(a1 + 66);
    Privileges[1] = Pool;
    WORD1(v15) = v6;
    if ( (_WORD)v6 )
    {
      for ( i = *(_QWORD *)(a1 + 192); i; LOWORD(v6) = v6 - 1 )
      {
        v14 = *(struct _PRIVILEGE_SET **)(i + 16);
        if ( (__int16)v6 >= 2 )
        {
          *((_QWORD *)Pool + (__int16)v6 - 2) = v14;
        }
        else
        {
          Privileges[(__int16)v6 - 1] = v14;
          Pool = Privileges[1];
        }
        i = *(_QWORD *)(i + 24);
      }
    }
    else
    {
      Privileges[v6 - 1] = (PPRIVILEGE_SET)a1;
      Pool = Privileges[1];
    }
  }
  else
  {
    Pool = Privileges[1];
  }
  v7 = WORD1(v15);
  v17 = 0LL;
  while ( 1 )
  {
    if ( v7 < 0
      || (v7 >= 2 ? (v8 = (PPRIVILEGE_SET)*((_QWORD *)Pool + v7 - 2)) : (v8 = Privileges[v7 - 1]),
          HIWORD(v8[3].Control) && BYTE1(v8[3].Control) == 1) )
    {
      v9 = 1;
      goto LABEL_14;
    }
    if ( v8[2].PrivilegeCount != -1 )
      break;
    --v7;
  }
  if ( a2 )
  {
    v11 = *((_QWORD *)&v15 + 1);
    while ( 1 )
    {
      NextElement = CmListGetNextElement(v11 + 208, &v17, 32LL);
      if ( !NextElement )
        break;
      if ( *(_DWORD *)(NextElement + 68) == 2 )
      {
        v9 = (unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56)) != 0;
        goto LABEL_14;
      }
    }
  }
  v9 = 0;
LABEL_14:
  if ( Pool )
    CmSiFreeMemory(Pool);
  return v9;
}
