/*
 * XREFs of ?HampSlsEndScenarioInstance@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x1800703AC
 * Callers:
 *     ?HampPdcPlmWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18006F9E0 (-HampPdcPlmWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampSlsBlockerEntryDestroy@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x18006BF4C (-HampSlsBlockerEntryDestroy@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_E.c)
 */

void __fastcall HampSlsEndScenarioInstance(struct _HAM_SLEEP_STUDY_CONTEXT *a1)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 v3; // rdx
  struct _HAM_SLEEP_STUDY_CONTEXT *v4; // rcx
  int v5; // ebp
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // rbx
  char v8; // al

  v1 = (unsigned __int64)a1 + 16;
  v3 = *((_QWORD *)a1 + 2);
  if ( (*((_BYTE *)a1 + 24) & 1) != 0 && v3 )
    v3 ^= v1;
  v4 = (struct _HAM_SLEEP_STUDY_CONTEXT *)((char *)a1 + 16);
  v5 = *(_BYTE *)(v1 + 8) & 1;
  if ( v3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v3 )
        {
          v4 = (struct _HAM_SLEEP_STUDY_CONTEXT *)v3;
          if ( v5 )
            v3 ^= *(_QWORD *)v3;
          else
            v3 = *(_QWORD *)v3;
          *(_QWORD *)v4 = 0LL;
        }
        v6 = (unsigned __int64 *)(v3 + 8);
        if ( !*(_QWORD *)(v3 + 8) )
          break;
        if ( v5 )
          v3 ^= *v6;
        else
          v3 = *v6;
        *v6 = 0LL;
      }
      v7 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v5 && v7 )
        v7 ^= v3;
      HampSlsBlockerEntryDestroy(v4, (struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *)v3);
      if ( !v7 )
        break;
      v3 = v7;
    }
    v4 = (struct _HAM_SLEEP_STUDY_CONTEXT *)((char *)a1 + 16);
  }
  v8 = *(_BYTE *)(v1 + 8);
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  if ( (v8 & 1) != 0 )
    *(_BYTE *)(v1 + 8) = 1;
  *(_QWORD *)v4 = 0LL;
  *((_QWORD *)v4 + 1) = 0LL;
  *((_DWORD *)a1 + 8) &= ~1u;
}
