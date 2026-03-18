/*
 * XREFs of KiEvaluateGroupSchedulingPreemption @ 0x1403184D0
 * Callers:
 *     KiDirectSwitchThread @ 0x140315A20 (KiDirectSwitchThread.c)
 *     ?KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KTHREAD@@PEAU1@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x140317FB0 (-KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@.c)
 *     ?KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@KPEAPEAU_KSCB@@@Z @ 0x140318430 (-KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403DD240 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 * Callees:
 *     KiShouldPreemptionBeDeferred @ 0x140350F00 (KiShouldPreemptionBeDeferred.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x140350F20 (KiIsThreadConstrainedBySchedulingGroup.c)
 */

bool __fastcall KiEvaluateGroupSchedulingPreemption(__int64 *a1, __int64 a2, char a3, _QWORD *a4)
{
  char v4; // r10
  __int64 v6; // rsi
  unsigned int v7; // r8d
  __int64 v8; // r11
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rax
  unsigned int v16; // ebp
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // r10d
  __int64 v22; // r11
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // ecx
  bool v27; // zf
  char v28; // dl
  unsigned __int8 v29; // dl
  unsigned int v30; // eax
  unsigned __int8 v31; // cl
  __int64 v32; // rax
  __int64 i; // rcx
  __int64 v34; // rcx
  char v35; // r9
  unsigned int v36; // r10d

  v4 = *((_BYTE *)a1 + 32);
  v6 = a1[2];
  v7 = 0;
  v8 = *a1;
  if ( (v4 & 1) == 0 )
  {
    v15 = *(_QWORD *)(v6 + 104);
    v16 = 0;
    if ( v15 )
    {
      v17 = v15 + *(unsigned int *)(v8 + 216);
      v18 = v17;
      if ( *(char *)(v6 + 195) < 16
        && (*(_DWORD *)(v6 + 120) & 0x200) == 0
        && ((v4 & 4) == 0 || !*(_DWORD *)(v6 + 484) && *(_BYTE *)(v6 + 390) != 1) )
      {
        v19 = v15 + *(unsigned int *)(v8 + 216);
        do
        {
          if ( (*(_BYTE *)(v19 + 112) & 2) != 0 )
          {
            v16 = -1;
            goto LABEL_24;
          }
          v19 = *(_QWORD *)(v19 + 416);
        }
        while ( v19 );
        do
        {
          v16 = *(_DWORD *)(v18 + 124);
          if ( v16 )
            break;
          v18 = *(_QWORD *)(v18 + 416);
        }
        while ( v18 );
      }
    }
    else
    {
      v17 = 0LL;
    }
LABEL_24:
    v20 = *(_QWORD *)(a2 + 104);
    v21 = 0;
    *a4 = 0LL;
    if ( v20 )
    {
      v22 = v20 + *(unsigned int *)(v8 + 216);
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
              v21 = *(_DWORD *)(v23 + 124);
              if ( v21 )
                break;
              v23 = *(_QWORD *)(v23 + 416);
            }
            while ( v23 );
            if ( !v21 )
              goto LABEL_35;
LABEL_64:
            *a4 = v22;
            goto LABEL_39;
          }
        }
        v21 = -1;
        goto LABEL_64;
      }
LABEL_35:
      if ( (a3 & 2) == 0 )
      {
        v25 = v22;
        v26 = 0;
        do
        {
          v26 += *(_DWORD *)(v25 + 124);
          v25 = *(_QWORD *)(v25 + 416);
        }
        while ( v25 );
        if ( v26
          && (unsigned __int8)KiIsThreadConstrainedBySchedulingGroup(a2, v23, 0LL, a4)
          && (*(_DWORD *)(a2 + 120) & 0xC00) == 0
          && (unsigned __int8)KiShouldPreemptionBeDeferred(v34) )
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
    if ( v17 && v22 && v16 && v21 )
    {
      if ( v17 == v22 )
        goto LABEL_42;
      v29 = *(_BYTE *)(v17 + 114);
      v30 = v7;
      v31 = *(_BYTE *)(v22 + 114);
      if ( v29 > v31 )
      {
        v35 = 1;
        do
        {
          v36 = *(_DWORD *)(v17 + 124);
          v17 = *(_QWORD *)(v17 + 416);
          if ( v36 <= v30 )
            v36 = v30;
          v30 = v36;
        }
        while ( *(_BYTE *)(v17 + 114) > v31 );
      }
      else
      {
        if ( v29 >= v31 )
        {
LABEL_58:
          v32 = *(_QWORD *)(v17 + 416);
          for ( i = *(_QWORD *)(v22 + 416); v32 != i; i = *(_QWORD *)(i + 416) )
          {
            v17 = v32;
            v22 = i;
            v32 = *(_QWORD *)(v32 + 416);
          }
          v16 = *(_DWORD *)(v17 + 124);
          v21 = *(_DWORD *)(v22 + 124);
          goto LABEL_40;
        }
        v35 = -1;
        do
        {
          v36 = *(_DWORD *)(v22 + 124);
          v22 = *(_QWORD *)(v22 + 416);
          if ( v36 <= v30 )
            v36 = v30;
          v30 = v36;
        }
        while ( v29 < *(_BYTE *)(v22 + 114) );
      }
      if ( v17 != v22 )
        goto LABEL_58;
      if ( v35 <= 0 )
      {
        v27 = v36 == v7;
        goto LABEL_41;
      }
      v16 = v36;
      v21 = v7;
    }
LABEL_40:
    v27 = v21 == v16;
    if ( v21 < v16 )
      return 1;
LABEL_41:
    if ( !v27 )
      return (a1[4] & 0x10) != 0 && (*(_BYTE *)(a2 + 195) != (_BYTE)v7 || *(_BYTE *)(v6 + 195) == (_BYTE)v7);
LABEL_42:
    v28 = *(_BYTE *)(a2 + 195);
    if ( v28 <= *(char *)(v6 + 195) && (v28 != *(_BYTE *)(v6 + 195) || (a1[4] & 0x18) == 0 && (a3 & 1) == 0) )
    {
      if ( (a1[4] & 0x10) == 0 )
        return 0;
      if ( !v28 )
        return 0;
    }
    return 1;
  }
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
        v7 += *(_DWORD *)(v12 + 124);
        if ( v7 )
          break;
        v12 = *(_QWORD *)(v12 + 416);
      }
      while ( v12 );
      if ( v7 )
LABEL_13:
        *a4 = v11 + *(unsigned int *)(v8 + 216);
    }
  }
  return 1;
}
