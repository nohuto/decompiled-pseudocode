/*
 * XREFs of ?HampPdcCleanup@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18008370C
 * Callers:
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180085964 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampSlsBlockerEntryDestroy@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x18006BD2C (-HampSlsBlockerEntryDestroy@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_E.c)
 */

void __fastcall HampPdcCleanup(struct _HAM_PDC_CONTEXT *a1)
{
  unsigned __int64 v1; // rbx
  struct _HAM_PDC_CONTEXT *v2; // rsi
  unsigned __int64 v3; // rdx
  int v4; // ebp
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // rdi
  char v7; // al
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  v1 = (unsigned __int64)a1 + 48;
  v2 = a1;
  v3 = *((_QWORD *)a1 + 6);
  if ( (*((_BYTE *)a1 + 56) & 1) != 0 && v3 )
    v3 ^= v1;
  v4 = *((_BYTE *)a1 + 56) & 1;
  if ( v3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v3 )
        {
          a1 = (struct _HAM_PDC_CONTEXT *)v3;
          if ( v4 )
            v3 ^= *(_QWORD *)v3;
          else
            v3 = *(_QWORD *)v3;
          *(_QWORD *)a1 = 0LL;
        }
        v5 = (unsigned __int64 *)(v3 + 8);
        if ( !*(_QWORD *)(v3 + 8) )
          break;
        if ( v4 )
          v3 ^= *v5;
        else
          v3 = *v5;
        *v5 = 0LL;
      }
      v6 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v4 && v6 )
        v6 ^= v3;
      HampSlsBlockerEntryDestroy(a1, (struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *)v3);
      if ( !v6 )
        break;
      v3 = v6;
    }
  }
  v7 = *(_BYTE *)(v1 + 8);
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  if ( (v7 & 1) != 0 )
    *(_BYTE *)(v1 + 8) = 1;
  if ( *((_QWORD *)v2 + 3) )
    Pdcv2ActivationClientUnregister();
  v8 = *((_QWORD *)v2 + 10);
  if ( v8 )
    TpReleaseWork(v8);
  v9 = *((_QWORD *)v2 + 11);
  if ( v9 )
    TpReleaseWork(v9);
  v10 = *((_QWORD *)v2 + 9);
  if ( v10 )
    TpReleaseWork(v10);
}
