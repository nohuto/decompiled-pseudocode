/*
 * XREFs of KiEvaluateGroupSchedulingPreemption @ 0x1402A9340
 * Callers:
 *     ?KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KTHREAD@@PEAU1@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x1402A8CA0 (-KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@.c)
 *     KiCanDeferredReadyThreadBeScheduledToRescheduleContext @ 0x1402A9110 (KiCanDeferredReadyThreadBeScheduledToRescheduleContext.c)
 *     ?KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@KPEAPEAU_KSCB@@@Z @ 0x1402A92A0 (-KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403C9EC0 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 * Callees:
 *     KiShouldPreemptionBeDeferred @ 0x1402A8750 (KiShouldPreemptionBeDeferred.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402A96E0 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiGetComparisonRanks @ 0x1404869F0 (KiGetComparisonRanks.c)
 */

bool __fastcall KiEvaluateGroupSchedulingPreemption(__int64 *a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 v4; // rsi
  char v6; // dl
  __int64 v8; // r10
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // ecx
  __int64 v15; // rax
  unsigned int *v16; // rbp
  int v17; // r10d
  __int64 v18; // r11
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // r8
  __int64 v24; // r10
  unsigned int v25; // edx
  __int64 v26; // rax
  unsigned int v27; // eax
  char v28; // dl
  __int64 v30; // rcx
  int v31[10]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v32; // [rsp+50h] [rbp+8h] BYREF

  v4 = a1[2];
  v6 = *((_BYTE *)a1 + 32);
  v8 = *a1;
  v10 = 0;
  if ( (v6 & 1) != 0 )
  {
    v11 = *(_QWORD *)(a2 + 104);
    *a4 = 0LL;
    if ( v11 )
    {
      v12 = v11 + *(unsigned int *)(v8 + 216);
      if ( *(char *)(a2 + 195) < 16
        && (*(_DWORD *)(a2 + 120) & 0x200) == 0
        && !*(_DWORD *)(a2 + 484)
        && *(_BYTE *)(a2 + 390) != 1 )
      {
        v13 = v11 + *(unsigned int *)(v8 + 216);
        do
        {
          if ( (*(_BYTE *)(v13 + 112) & 2) != 0 )
            goto LABEL_13;
          v13 = *(_QWORD *)(v13 + 416);
        }
        while ( v13 );
        do
        {
          v14 = *(_DWORD *)(v12 + 124);
          if ( v14 )
            break;
          v12 = *(_QWORD *)(v12 + 416);
        }
        while ( v12 );
        if ( v14 )
        {
LABEL_13:
          *a4 = v11 + *(unsigned int *)(v8 + 216);
          return 1;
        }
      }
    }
    return 1;
  }
  v15 = *(_QWORD *)(v4 + 104);
  v16 = (unsigned int *)(v8 + 216);
  v31[0] = 0;
  if ( v15 )
  {
    v17 = 0;
    v18 = v15 + *v16;
    v19 = v18;
    if ( *(char *)(v4 + 195) < 16
      && (*(_DWORD *)(v4 + 120) & 0x200) == 0
      && ((v6 & 4) == 0 || !*(_DWORD *)(v4 + 484) && *(_BYTE *)(v4 + 390) != 1) )
    {
      v20 = v15 + *v16;
      do
      {
        if ( (*(_BYTE *)(v20 + 112) & 2) != 0 )
        {
          v17 = -1;
          goto LABEL_23;
        }
        v20 = *(_QWORD *)(v20 + 416);
      }
      while ( v20 );
      do
      {
        v17 += *(_DWORD *)(v19 + 124);
        if ( v17 )
          break;
        v19 = *(_QWORD *)(v19 + 416);
      }
      while ( v19 );
    }
LABEL_23:
    v31[0] = v17;
  }
  else
  {
    v18 = 0LL;
  }
  v21 = *(_QWORD *)(a2 + 104);
  v32 = 0;
  *a4 = 0LL;
  if ( v21 )
  {
    v22 = v21 + *v16;
    v23 = v22;
    if ( *(char *)(a2 + 195) < 16
      && (*(_DWORD *)(a2 + 120) & 0x200) == 0
      && !*(_DWORD *)(a2 + 484)
      && *(_BYTE *)(a2 + 390) != 1 )
    {
      v24 = v22;
      while ( (*(_BYTE *)(v24 + 112) & 2) == 0 )
      {
        v24 = *(_QWORD *)(v24 + 416);
        if ( !v24 )
        {
          do
          {
            v25 = *(_DWORD *)(v23 + 124);
            if ( v25 )
              break;
            v23 = *(_QWORD *)(v23 + 416);
          }
          while ( v23 );
          v32 = v25;
          if ( !v25 )
            goto LABEL_35;
LABEL_60:
          *a4 = v22;
          goto LABEL_39;
        }
      }
      v32 = -1;
      goto LABEL_60;
    }
LABEL_35:
    if ( (a3 & 2) == 0 )
    {
      v26 = v22;
      do
      {
        v10 += *(_DWORD *)(v26 + 124);
        v26 = *(_QWORD *)(v26 + 416);
      }
      while ( v26 );
      if ( v10
        && (unsigned __int8)KiIsThreadConstrainedBySchedulingGroup(a2)
        && (*(_DWORD *)(a2 + 120) & 0xC00) == 0
        && KiShouldPreemptionBeDeferred(v30) )
      {
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xBu);
      }
    }
  }
  else
  {
    v22 = 0LL;
  }
LABEL_39:
  if ( !v18 || !v22 )
    goto LABEL_40;
  v27 = v31[0];
  if ( v31[0] && v32 )
  {
    KiGetComparisonRanks(v18, v22, v31, &v32);
LABEL_40:
    v27 = v31[0];
  }
  if ( v32 < v27 )
    return 1;
  if ( v32 != v27 )
    return (a1[4] & 0x10) != 0 && (*(_BYTE *)(a2 + 195) || !*(_BYTE *)(v4 + 195));
  v28 = *(_BYTE *)(a2 + 195);
  if ( v28 > *(char *)(v4 + 195) || v28 == *(_BYTE *)(v4 + 195) && ((a1[4] & 0x18) != 0 || (a3 & 1) != 0) )
    return 1;
  if ( (a1[4] & 0x10) == 0 )
    return 0;
  return v28 != 0;
}
