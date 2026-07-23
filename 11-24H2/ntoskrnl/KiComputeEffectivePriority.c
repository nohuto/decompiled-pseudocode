/*
 * XREFs of KiComputeEffectivePriority @ 0x1403FCAF0
 * Callers:
 *     KiDirectSwitchThread @ 0x14041E720 (KiDirectSwitchThread.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiUpdateThreadPriority @ 0x1402E0E50 (KiUpdateThreadPriority.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x1405C275C (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     KiScheduleNextForegroundBoost @ 0x1405C2800 (KiScheduleNextForegroundBoost.c)
 */

__int64 __fastcall KiComputeEffectivePriority(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 v4; // rdi
  char v5; // bp
  char v6; // si
  int v8; // r13d
  __int64 v9; // rcx
  char v10; // dl
  char v11; // al
  char v12; // dl
  unsigned __int8 v13; // bl
  unsigned int v14; // edx
  int v15; // eax
  char v16; // cl
  char v17; // r8
  char v18; // dl
  int v19; // r15d
  int v20; // eax
  int v21; // edx
  char v22; // dl
  char v23; // al
  __int64 v24; // rcx
  unsigned __int8 v25; // r8
  bool v26; // zf
  __int64 v27; // rcx
  int v28; // eax
  char v29; // bl
  char v30; // bl
  char v31; // bl
  __int64 v32; // rcx
  int IsEnabledNoReportingNoInline; // eax
  int v34; // r8d
  int v35; // ecx
  int v36; // r8d
  char v37; // al
  signed int v38; // eax
  char v40; // [rsp+31h] [rbp-37h]

  v4 = a1;
  v5 = 0;
  v6 = 63;
  v8 = (char)a2;
  v40 = 0;
  if ( *(char *)(a1 + 195) < 16 )
  {
    v13 = 0;
    v14 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 436);
    if ( a3 < *(_QWORD *)(a1 + 32) )
    {
      if ( *(char *)(a1 + 563) < 14 )
      {
        a1 = 4080LL;
        if ( (*(_WORD *)(v4 + 518) & 0xFF0) != 0 || v14 < 2 )
        {
LABEL_53:
          a2 = v13;
          v24 = *(unsigned int *)(*(_QWORD *)(v4 + 544) + 136LL);
          v25 = v13 | 2;
          if ( (v24 & 0x2000) == 0 )
            v25 = v13;
          if ( (v25 & 1) != 0 || (*(_DWORD *)(v4 + 120) & 8) != 0 || *(char *)(v4 + 195) <= 0 )
          {
            if ( KiSchedulerForegroundBoostDecayPolicy
              && v25 >= 4u
              && (v25 & 2) != 0
              && (*(_DWORD *)(v4 + 120) & 8) == 0
              && *(char *)(v4 + 195) > 0 )
            {
              v40 = v5 | 2;
            }
          }
          else if ( (char)v8 > *(char *)(v4 + 870) )
          {
            v26 = (unsigned int)Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(v24) == 0;
            v28 = *(char *)(v4 + 563);
            if ( v26 )
            {
              v29 = v28 + v8;
              if ( v28 + v8 >= 16 )
                v29 = 15;
              v30 = v29 - v28;
            }
            else
            {
              v27 = v28 + (*(unsigned __int16 *)(v4 + 518) & 0xFu);
              if ( (int)v27 >= 16 )
                v27 = 15LL;
              v31 = v27 + v8;
              if ( (int)v27 + v8 >= 16 )
                v31 = 15;
              v30 = v31 - v27;
            }
            Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(v27);
            *(_BYTE *)(v4 + 870) = v30;
            IsEnabledNoReportingNoInline = Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(v32);
            v34 = *(char *)(v4 + 563);
            if ( IsEnabledNoReportingNoInline )
            {
              if ( v34 < 16 )
              {
                v36 = v34 + (*(_WORD *)(v4 + 518) & 0xF);
                if ( v36 <= *(char *)(v4 + 563) )
                  v36 = *(char *)(v4 + 563);
                v37 = 0;
                if ( *(char *)(v4 + 870) > 0 )
                  v37 = *(_BYTE *)(v4 + 870);
                v34 = v37 + v36;
                if ( v34 >= 16 )
                  v34 = 15;
                a2 = *(unsigned __int16 *)(v4 + 518) >> 4;
                if ( (unsigned __int8)a2 > v34 )
                  v34 = (unsigned __int8)a2;
              }
            }
            else if ( v34 < 16 )
            {
              v35 = v34 + (*(_WORD *)(v4 + 518) & 0xF);
              if ( __OFSUB__(v35, v34) || v35 == v34 )
                v35 = *(char *)(v4 + 563);
              v34 += *(char *)(v4 + 870);
              if ( v34 <= v35 )
                v34 = v35;
              a2 = *(unsigned __int16 *)(v4 + 518) >> 4;
              if ( (unsigned __int8)a2 > v34 )
                v34 = (unsigned __int8)a2;
              if ( v34 >= 16 && (*(_DWORD *)(v4 + 120) & 0x400000) == 0 )
                v34 = 15;
            }
            v38 = *(_DWORD *)(v4 + 856);
            if ( v38 )
            {
              _BitScanReverse((unsigned int *)&v38, v38);
              if ( v34 < v38 )
                LOBYTE(v34) = v38;
            }
            v6 = v34;
          }
          goto LABEL_99;
        }
      }
    }
    else
    {
      v13 = 4;
      if ( v14 < 2 )
        v13 = 5;
    }
    v5 = 1;
    v40 = 1;
    v15 = Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(a1);
    v16 = *(_BYTE *)(v4 + 195);
    if ( v15 )
    {
      if ( v16 >= 16 && (*(_DWORD *)(v4 + 120) & 0x400000) == 0 )
      {
        v17 = *(_BYTE *)(v4 + 195);
        goto LABEL_51;
      }
      if ( KiSchedulerForegroundBoostDecayPolicy )
      {
        v22 = 3;
        if ( (*(_BYTE *)(v4 + 518) & 0xF) != 0 )
        {
          *(_DWORD *)(v4 + 872) = MEMORY[0xFFFFF78000000320];
          *(_WORD *)(v4 + 518) &= 0xFFF0u;
        }
      }
      else
      {
        v22 = 2;
      }
      v17 = KiComputeThreadPriority(v4, v22, 1);
    }
    else
    {
      if ( v16 >= 16 && (*(_DWORD *)(v4 + 120) & 0x400000) == 0 )
      {
        v17 = *(_BYTE *)(v4 + 195);
        goto LABEL_51;
      }
      v18 = 6;
      v19 = *(char *)(v4 + 870);
      if ( KiSchedulerForegroundBoostDecayPolicy )
      {
        v18 = 7;
        if ( (*(_BYTE *)(v4 + 518) & 0xF) != 0 )
        {
          *(_DWORD *)(v4 + 872) = MEMORY[0xFFFFF78000000320];
          *(_WORD *)(v4 + 518) &= 0xFFF0u;
        }
      }
      v20 = KiComputeThreadPriority(v4, v18, 0);
      v21 = *(char *)(v4 + 563);
      v17 = v20;
      if ( v19 >= 1 )
        v21 = v19 + v21 - 1;
      if ( v20 < v21 )
        v17 = v21;
    }
    *(_WORD *)(v4 + 518) &= 0xF00Fu;
    v23 = *(_BYTE *)(v4 + 870);
    if ( v23 >= 1 )
      *(_BYTE *)(v4 + 870) = v23 - 1;
    else
      *(_BYTE *)(v4 + 870) = 0;
LABEL_51:
    v6 = 63;
    if ( !a4 )
      v6 = v17;
    goto LABEL_53;
  }
  if ( !a4 )
  {
    v40 = 1;
    goto LABEL_99;
  }
  v9 = 4080LL;
  LOWORD(v9) = *(_WORD *)(v4 + 518) & 0xFF0;
  a2 = 256LL;
  v40 = (unsigned __int16)v9 < 0x100u;
  if ( a3 >= *(_QWORD *)(v4 + 32) )
  {
    v40 = 1;
    if ( (unsigned int)Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(v9) )
    {
      if ( *(char *)(v4 + 195) < 16 || (*(_DWORD *)(v4 + 120) & 0x400000) != 0 )
      {
        if ( KiSchedulerForegroundBoostDecayPolicy )
        {
          v12 = 3;
          if ( (*(_BYTE *)(v4 + 518) & 0xF) != 0 )
          {
            *(_DWORD *)(v4 + 872) = MEMORY[0xFFFFF78000000320];
            *(_WORD *)(v4 + 518) &= 0xFFF0u;
          }
        }
        else
        {
          v12 = 2;
        }
        KiComputeThreadPriority(v4, v12, 1);
        *(_WORD *)(v4 + 518) &= 0xF00Fu;
        v11 = *(_BYTE *)(v4 + 870);
        if ( v11 >= 1 )
        {
LABEL_13:
          *(_BYTE *)(v4 + 870) = v11 - 1;
          goto LABEL_99;
        }
        *(_BYTE *)(v4 + 870) = 0;
      }
    }
    else if ( *(char *)(v4 + 195) < 16 || (*(_DWORD *)(v4 + 120) & 0x400000) != 0 )
    {
      v10 = 6;
      if ( KiSchedulerForegroundBoostDecayPolicy )
      {
        v10 = 7;
        if ( (*(_BYTE *)(v4 + 518) & 0xF) != 0 )
        {
          *(_DWORD *)(v4 + 872) = MEMORY[0xFFFFF78000000320];
          *(_WORD *)(v4 + 518) &= 0xFFF0u;
        }
      }
      KiComputeThreadPriority(v4, v10, 0);
      *(_WORD *)(v4 + 518) &= 0xF00Fu;
      v11 = *(_BYTE *)(v4 + 870);
      if ( v11 < 1 )
      {
        *(_BYTE *)(v4 + 870) = 0;
        goto LABEL_99;
      }
      goto LABEL_13;
    }
  }
LABEL_99:
  if ( v6 != 63 )
    KiUpdateThreadPriority(0LL, a2, v4, v6, 0);
  if ( (v40 & 2) != 0 )
    KiScheduleNextForegroundBoost(v4);
  return v40 & 1;
}
