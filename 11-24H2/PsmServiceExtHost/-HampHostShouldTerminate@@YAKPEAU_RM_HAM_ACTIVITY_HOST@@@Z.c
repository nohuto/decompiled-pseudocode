/*
 * XREFs of ?HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180007FF0
 * Callers:
 *     ?HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z @ 0x180007E8C (-HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180008680 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x1800850F8 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

__int64 __fastcall HampHostShouldTerminate(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned __int64 v2; // rcx
  char *v4; // r8
  struct _RM_HAM_ACTIVITY_HOST *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // al
  int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0;
  v10 = 0;
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v9, (union _RM_OPTIMIZATION_STATE *)&v10);
  v2 = *((_QWORD *)a1 + 83);
  if ( ((v2 >> 16) & 3) == 0 )
    return 0LL;
  if ( ((*((_QWORD *)a1 + 83) >> 16) & 3LL) == 1 )
  {
    if ( (v9 & 0x80u) != 0 && (v10 & 0x80u) == 0 && (v2 & 0x40000000000LL) == 0 )
    {
      v4 = 0LL;
      v5 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 76);
      if ( v5 != (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 608) )
        v4 = (char *)v5 - 96;
      while ( v4 )
      {
        if ( (v4[552] & 0x48) == 0 )
        {
          v8 = v4[562];
          if ( (v8 == 3 || v8 == 2 && (unsigned __int8)v4[563] >= 5u) && (*((_DWORD *)v4 + 28) & 0x2000) != 0 )
            return 0LL;
        }
        v6 = *((_QWORD *)v4 + 12);
        v7 = *((_QWORD *)v4 + 10);
        v4 = 0LL;
        if ( v6 != v7 + 608 )
          v4 = (char *)(v6 - 96);
      }
      return 1LL;
    }
    return 0LL;
  }
  if ( ((*((_QWORD *)a1 + 83) >> 16) & 3LL) != 2 )
    return ((*((_QWORD *)a1 + 83) >> 16) & 3LL) == 3;
  return (v2 & 0x8000000000000LL) == 0;
}
