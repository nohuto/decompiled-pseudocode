/*
 * XREFs of ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x180056C64
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180008670 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180009DD0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x18000A058 (-HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180056DAC (-HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180084C38 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

void __fastcall HampHostInvalidateActivities(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  int v8; // edi
  struct _HAM_ACTIVITY *FirstActivity; // rbx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  _DWORD v16[10]; // [rsp+20h] [rbp-28h] BYREF
  int v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = 0;
  v16[0] = 0;
  v8 = 0;
  if ( (*(_QWORD *)(a1 + 664) & 0x10000000000LL) == 0 )
  {
    RmHamHostGetCurrentState(
      (struct _RM_HAM_ACTIVITY_HOST *)a1,
      (union _RM_OPTIMIZATION_STATE *)&v17,
      (union _RM_OPTIMIZATION_STATE *)v16);
    if ( ((v17 & 0x80u) == 0 || SLOBYTE(v16[0]) < 0) && ((v17 & 0x100) == 0 || (v16[0] & 0x100) != 0) )
    {
      v15 = *(_QWORD *)(a1 + 664);
      if ( (v15 & 0x800000000LL) == 0 && ((v15 & 0x40000000000LL) == 0 || (v15 & 0x30000) == 0) )
        v8 = 1;
    }
  }
  FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)a1);
  if ( FirstActivity )
  {
    do
    {
      if ( HampActCanBeInvalidated(FirstActivity) && ((a4 & 1) == 0 || (*((_DWORD *)FirstActivity + 28) & 0x10000) != 0) )
      {
        HampActInvalidateAndNotify(v12, a2);
        v14 = *((_QWORD *)FirstActivity + 9);
        if ( v14 && *(_BYTE *)(v14 + 40) == 2 )
          *((_QWORD *)FirstActivity + 64) = a3;
      }
      v13 = *((_QWORD *)FirstActivity + 12);
      if ( v13 == *((_QWORD *)FirstActivity + 10) + 608LL )
        break;
      FirstActivity = (struct _HAM_ACTIVITY *)(v13 - 96);
    }
    while ( v13 != 96 );
  }
  HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)a1, v8, v10, v11);
}
