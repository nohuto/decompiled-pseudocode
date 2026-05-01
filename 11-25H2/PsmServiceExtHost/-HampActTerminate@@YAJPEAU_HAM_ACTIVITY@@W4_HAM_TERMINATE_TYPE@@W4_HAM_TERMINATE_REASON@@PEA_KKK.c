/*
 * XREFs of ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x18003B650
 * Callers:
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004134C (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x180062DD0 (-HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMIN.c)
 * Callees:
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180007734 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009140 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180009DD0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180036438 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AA84 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampActTerminate(__int64 a1, signed int a2, unsigned int a3, _QWORD *a4, int a5, char a6)
{
  __int64 v6; // rdi
  int v11; // ebx
  struct _HAM_ACTIVITY *FirstActivity; // r8
  int v14; // r9d
  int v15; // r10d
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // [rsp+60h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(a1 + 80);
  v18 = 0;
  HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v6, 0);
  if ( *(_BYTE *)(a1 + 562) == 4 )
  {
    v11 = -1073741275;
    goto LABEL_3;
  }
  if ( !*(_QWORD *)(a1 + 512) )
  {
    v11 = -1073741436;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(a1 + 552) & 8) != 0 )
  {
    v11 = -1058275327;
    goto LABEL_3;
  }
  if ( (a6 & 1) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 112) & 0x10000) == 0 )
    {
      v11 = -1073741580;
      goto LABEL_3;
    }
    FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)v6);
    while ( FirstActivity )
    {
      if ( FirstActivity != (struct _HAM_ACTIVITY *)a1
        && *((_QWORD *)FirstActivity + 64) == *(_QWORD *)(v6 + 816)
        && (v15 & *((_DWORD *)FirstActivity + 28)) != 0
        && (*((_BYTE *)FirstActivity + 552) & 0x10) == 0 )
      {
        *(_DWORD *)(a1 + 552) = v14 | 0x10;
        v11 = -1058275328;
        goto LABEL_3;
      }
      v16 = *((_QWORD *)FirstActivity + 12);
      v17 = *((_QWORD *)FirstActivity + 10);
      FirstActivity = 0LL;
      if ( v16 != v17 + 608 )
        FirstActivity = (struct _HAM_ACTIVITY *)(v16 - 96);
    }
  }
  v11 = HampHostQueueTerminateEx(v6, a2, a3, *(struct _HAM_CLIENT_CONTEXT **)(a1 + 64), 1, a5, a4, &v18);
  if ( v11 >= 0 )
    v11 = 0;
LABEL_3:
  HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)v6);
  if ( v18 )
    HampDepGroupRunStateChangeWorker(*(struct _HAM_DEPENDENCY_GROUP **)(v6 + 704));
  return (unsigned int)v11;
}
