/*
 * XREFs of ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180007680
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z @ 0x1800077B0 (-OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z.c)
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180007864 (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x1800143DC (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x180014548 (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x180014624 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x18002DAE8 (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800D98E0 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?OnStoryboardTimeout@CStoryboard@@QEAAJXZ @ 0x1800DB948 (-OnStoryboardTimeout@CStoryboard@@QEAAJXZ.c)
 */

__int64 __fastcall CAnimationScheduler::OnAnimationClockChanged(__int64 a1, struct _GUID *a2, int a3)
{
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  __int64 i; // rbx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 j; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 k; // r14
  __int64 v19; // rbx
  __int64 v20; // rax
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+20h] [rbp-40h] BYREF
  struct _GUID v22; // [rsp+30h] [rbp-30h] BYREF
  __int128 v23; // [rsp+40h] [rbp-20h]

  v21 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = a3 - 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 == 1 )
              CAnimationScheduler::_RecycleAbandonedStoryboards((CAnimationScheduler *)(a1 - 8));
          }
          else
          {
            for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 32); i = (unsigned int)(i + 1) )
            {
              v13 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i);
              v22 = *(struct _GUID *)(v13 + 48);
              v14 = *(_QWORD *)&v22.Data1 - *(_QWORD *)&a2->Data1;
              if ( *(_QWORD *)&v22.Data1 == *(_QWORD *)&a2->Data1 )
                v14 = *(_QWORD *)v22.Data4 - *(_QWORD *)a2->Data4;
              if ( !v14 )
                CAnimationScheduler::OnAnimationComplete((CAnimationScheduler *)(a1 - 8), *(_DWORD *)(v13 + 72));
            }
          }
        }
        else
        {
          for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 32); j = (unsigned int)(j + 1) )
          {
            v16 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * j);
            v22 = *(struct _GUID *)(v16 + 48);
            v17 = *(_QWORD *)&v22.Data1 - *(_QWORD *)&a2->Data1;
            if ( *(_QWORD *)&v22.Data1 == *(_QWORD *)&a2->Data1 )
              v17 = *(_QWORD *)v22.Data4 - *(_QWORD *)a2->Data4;
            if ( !v17 && *(_DWORD *)(v16 + 24) != 4 )
              CStoryboard::Abandon((CStoryboard *)v16);
          }
        }
      }
      else
      {
        v22 = *a2;
        CAnimationScheduler::_ScheduleStoryboardsForAnimationClock((CAnimationScheduler *)(a1 - 8), &v22);
      }
    }
    else
    {
      for ( k = 0LL; (unsigned int)k < *(_DWORD *)(a1 + 32); k = (unsigned int)(k + 1) )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * k);
        if ( v19 )
          _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
        v23 = *(_OWORD *)(v19 + 48);
        v20 = v23 - *(_QWORD *)&a2->Data1;
        if ( (_QWORD)v23 == *(_QWORD *)&a2->Data1 )
          v20 = *((_QWORD *)&v23 + 1) - *(_QWORD *)a2->Data4;
        if ( !v20
          && !*(_DWORD *)(v19 + 24)
          && (int)CStoryboard::OnStoryboardTimeout((CStoryboard *)v19) >= 0
          && *(_DWORD *)(v19 + 24) == 4 )
        {
          CAnimationScheduler::_ScheduleBlockedStoryboards((CAnimationScheduler *)(a1 - 8), *(_DWORD *)(v19 + 64));
        }
        CStoryboard::Release((CStoryboard *)v19);
      }
    }
  }
  else
  {
    v22 = *a2;
    CAnimationScheduler::_SetStoryboardTriggerForAnimationClock((CAnimationScheduler *)(a1 - 8), &v22);
  }
  return CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
}
