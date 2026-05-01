/*
 * XREFs of ?HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z @ 0x180007E8C
 * Callers:
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180007744 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 * Callees:
 *     ?HamReleaseEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006B08 (-HamReleaseEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HamAcquireEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006B20 (-HamAcquireEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180007FF0 (-HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180026DF0 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmActivityHostReferenceFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002704C (-RmActivityHostReferenceFromHam@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x1800850F8 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

unsigned __int8 __fastcall HampHostCheckQueueTerminateWorker(struct _RM_HAM_ACTIVITY_HOST *a1, char a2)
{
  char v4; // bl
  __int64 v5; // rax
  unsigned int v6; // esi
  __int64 v8; // rax
  _QWORD v9[7]; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+70h] [rbp+18h] BYREF
  int v11; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  if ( HampHostShouldTerminate(a1) )
  {
    v5 = *((_QWORD *)a1 + 83);
    if ( (v5 & 0x800000000LL) == 0 )
    {
      v10 = 0;
      v11 = 0;
      if ( (v5 & 0x10000000000LL) != 0
        || (RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v10, (union _RM_OPTIMIZATION_STATE *)&v11),
            (v10 & 0x80u) != 0)
        && (v11 & 0x80u) == 0
        || (v10 & 0x100) != 0 && (v11 & 0x100) == 0
        || (v8 = *((_QWORD *)a1 + 83), (v8 & 0x800000000LL) != 0) )
      {
        v6 = 0;
      }
      else if ( (v8 & 0x40000000000LL) == 0 || (v6 = 0, (v8 & 0x30000) == 0) )
      {
        v6 = 1;
      }
      *((_QWORD *)a1 + 83) |= 0x800000000uLL;
      RmActivityHostReferenceFromHam(a1);
      TpPostWork(*((_QWORD *)a1 + 79));
      HampHostCheckUpdateSuspendWaitState(a1, v6);
    }
    if ( a2 && (*((_DWORD *)a1 + 166) & 0x30000LL) != 0 )
    {
      do
      {
        v9[0] = *((_QWORD *)a1 + 102);
        HamReleaseEnforcementLocks(a1);
        RtlWaitOnAddress((char *)a1 + 816, v9, 8LL);
        HamAcquireEnforcementLocks(a1);
      }
      while ( (*((_DWORD *)a1 + 166) & 0x30000LL) != 0 );
    }
    return 1;
  }
  return v4;
}
