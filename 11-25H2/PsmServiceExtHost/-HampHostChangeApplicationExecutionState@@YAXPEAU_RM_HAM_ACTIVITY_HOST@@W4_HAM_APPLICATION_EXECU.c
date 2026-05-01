/*
 * XREFs of ?HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECUTION_STATE@@K@Z @ 0x1800091E4
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000BC20 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800277F0 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180009FC8 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18000AEE4 (-HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18000AF38 (-HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x1800171F0 (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x180027100 (-HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18002BFA0 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 */

void __fastcall HampHostChangeApplicationExecutionState(__int64 a1, int a2, char a3)
{
  __int64 v3; // r9
  __int64 v6; // rbx
  char v7; // al
  struct _HAM_APPLICATION *v8; // rbx
  char v9; // bp
  _DWORD *v10; // r8
  _DWORD *v11; // r9
  int v12; // ecx
  int v13; // ecx
  int v14; // [rsp+30h] [rbp+8h] BYREF

  v3 = 624LL;
  if ( a1 )
    v3 = a1 + 560;
  if ( *(_DWORD *)v3 == 2 )
  {
    if ( !*(_BYTE *)(a1 + 592) && (a3 & 1) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 1064);
      HampWakeContextAcquireLockExclusive((struct _HAM_HOST_WAKE_CONTEXT *)v6);
      v7 = *(_BYTE *)(v6 + 184);
      *(_BYTE *)(v6 + 185) |= 0x10u;
      *(_BYTE *)(v6 + 184) = v7 ^ (v7 ^ (16 * a2)) & 0x70;
      HampWakeContextQueueWorker((struct _HAM_HOST_WAKE_CONTEXT *)v6);
      HampWakeContextReleaseLockExclusive((struct _HAM_HOST_WAKE_CONTEXT *)v6);
    }
    v8 = *(struct _HAM_APPLICATION **)(a1 + 792);
    v9 = *(_BYTE *)(a1 + 592);
    HampAppAcquireLockExclusive(v8);
    v10 = (_DWORD *)((char *)v8 + 616);
    v11 = (_DWORD *)((char *)v8 + 620);
    if ( v9 )
      v12 = *v10 >> 25;
    else
      v12 = *v11 >> 5;
    v13 = v12 & 7;
    if ( v13 == a2 || v13 == 4 && a2 )
      goto LABEL_14;
    switch ( a2 )
    {
      case 0:
        break;
      case 1:
      case 2:
        if ( v13 == 3 )
        {
LABEL_14:
          HampAppReleaseLockExclusive(v8);
          return;
        }
        break;
      case 3:
        break;
      default:
        goto LABEL_14;
    }
    if ( v9 )
    {
      *v10 ^= (*v10 ^ (a2 << 25)) & 0xE000000;
    }
    else
    {
      v14 = *v11 ^ (*v11 ^ (32 * a2)) & 0xE0;
      HampAppCommitStateSummary(v8, (union _HAM_EXTERNAL_STATE_SUMMARY *)&v14);
    }
    goto LABEL_14;
  }
}
