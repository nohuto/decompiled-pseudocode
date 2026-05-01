/*
 * XREFs of ?RmpGameModeDemoteActiveRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@KPEAE@Z @ 0x18006383C
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001ACF0 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     CempListEntryRemoveAndClear @ 0x1800276C4 (CempListEntryRemoveAndClear.c)
 *     ?RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180060830 (-RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800608D4 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeUnapplyAndReleaseRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006836C (-RmpGameModeUnapplyAndReleaseRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE.c)
 */

void __fastcall RmpGameModeDemoteActiveRecipients(struct _RM_GAME_MODE_CONTEXT *a1, int a2, bool *a3)
{
  bool v4; // al
  char *v5; // rax
  __int64 v6; // rcx
  bool v7; // r10
  unsigned int v8; // r9d
  _QWORD *v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD ***v13; // rdx
  _QWORD *v14; // rbx
  char v15; // al
  _QWORD *v16; // r8
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // [rsp+20h] [rbp-10h] BYREF
  _QWORD ***v20; // [rsp+28h] [rbp-8h]

  v4 = (*((_BYTE *)a1 + 148) & 8) == 0 && *((_DWORD *)a1 + 34) != 0;
  *a3 = v4;
  v5 = (char *)a1 + 88;
  v6 = *((_QWORD *)a1 + 11);
  if ( (char *)v6 != v5 )
  {
    v7 = a2 != *(_DWORD *)(v6 + 20) || (*(_BYTE *)(v6 + 82) & 5) != 1;
    v8 = 0;
    v20 = (_QWORD ***)&v19;
    v19 = &v19;
    do
    {
      v9 = (_QWORD *)((char *)a1 + 16 * v8 + 88);
      v10 = (_QWORD *)*v9;
      if ( (_QWORD *)*v9 != v9 )
      {
        if ( v7 )
        {
          if ( (_QWORD *)v10[1] != v9
            || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9)
            || (*v11 = v10, v10[1] = v11, v12 = v19, v9[1] = v9, *v9 = v9, v13 = v20, (_QWORD **)v12[1] != &v19)
            || *v20 != &v19
            || *(_QWORD **)(*v10 + 8LL) != v10
            || *(_QWORD **)v10[1] != v10 )
          {
LABEL_32:
            __fastfail(3u);
          }
          *v20 = (_QWORD **)v10;
          v20 = (_QWORD ***)v10[1];
          *(_QWORD *)v10[1] = &v19;
          v10[1] = v13;
        }
        else if ( v8 )
        {
          do
          {
            v15 = *((_BYTE *)v10 + 82);
            v16 = v10;
            v10 = (_QWORD *)*v10;
            if ( (v15 & 5) != 1 )
            {
              if ( (_QWORD *)v10[1] != v16 )
                goto LABEL_32;
              v17 = (_QWORD *)v16[1];
              if ( (_QWORD *)*v17 != v16 )
                goto LABEL_32;
              *v17 = v10;
              v10[1] = v17;
              v18 = v20;
              if ( *v20 != &v19 )
                goto LABEL_32;
              v16[1] = v20;
              *v16 = &v19;
              *v18 = v16;
              v20 = (_QWORD ***)v16;
            }
          }
          while ( v10 != v9 );
        }
      }
      ++v8;
    }
    while ( v8 < 2 );
    if ( v19 != &v19 )
    {
      *((_DWORD *)a1 + 20) = 0;
      RtlReleaseSRWLockExclusive((char *)a1 + 72);
      while ( 1 )
      {
        v14 = v19;
        if ( v19 == &v19 )
          break;
        CempListEntryRemoveAndClear(v19);
        RmpGameModeUnapplyAndReleaseRecipientResources(a1, (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(v14 - 11));
        *((_DWORD *)v14 + 4) = 2;
        RmpGameModeDereferenceRecipientProcess((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(v14 - 11));
      }
      RmpGameModeAcquireLock(a1);
    }
  }
}
