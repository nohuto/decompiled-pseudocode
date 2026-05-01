/*
 * XREFs of ?RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18008D11C
 * Callers:
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800859E4 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18001D810 (-RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180060830 (-RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18008D224 (-RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 */

void __fastcall RmpGameModeRundown(struct _RM_GAME_MODE_CONTEXT *a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rcx
  int v4; // esi
  struct _RTL_BALANCED_NODE *v5; // rdx
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // rdi
  char v8; // al

  if ( *((_QWORD *)a1 + 8) )
  {
    RmpGameModeAcquireLock(a1);
    RmpGameModeQueuePolicyWorkerWithLock(a1);
    *((_BYTE *)a1 + 148) |= 4u;
    *((_DWORD *)a1 + 20) = 0;
    RtlReleaseSRWLockExclusive((char *)a1 + 72);
    TpWaitForWork(*((_QWORD *)a1 + 8), 0LL);
  }
  v2 = (unsigned __int64)a1 + 8;
  v3 = *(_QWORD *)v2;
  if ( (*(_BYTE *)(v2 + 8) & 1) != 0 && v3 )
    v3 ^= v2;
  v4 = *(_BYTE *)(v2 + 8) & 1;
  if ( v3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v3 )
        {
          v5 = (struct _RTL_BALANCED_NODE *)v3;
          if ( v4 )
            v3 ^= *(_QWORD *)v3;
          else
            v3 = *(_QWORD *)v3;
          v5->Children[0] = 0LL;
        }
        v6 = (unsigned __int64 *)(v3 + 8);
        if ( !*(_QWORD *)(v3 + 8) )
          break;
        if ( v4 )
          v3 ^= *v6;
        else
          v3 = *v6;
        *v6 = 0LL;
      }
      v7 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v4 && v7 )
        v7 ^= v3;
      RmpGameModeRundownRecipientProcessTreeCallback((struct _RTL_BALANCED_NODE *)v3, 0LL);
      if ( !v7 )
        break;
      v3 = v7;
    }
  }
  v8 = *(_BYTE *)(v2 + 8);
  *(_QWORD *)v2 = 0LL;
  *(_QWORD *)(v2 + 8) = 0LL;
  if ( (v8 & 1) != 0 )
    *(_BYTE *)(v2 + 8) = 1;
}
