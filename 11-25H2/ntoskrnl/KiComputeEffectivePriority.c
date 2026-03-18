/*
 * XREFs of KiComputeEffectivePriority @ 0x140316760
 * Callers:
 *     KiDirectSwitchThread @ 0x140315A20 (KiDirectSwitchThread.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x1402E7250 (KiComputeThreadPriority.c)
 *     KiUpdateThreadPriority @ 0x1403170A0 (KiUpdateThreadPriority.c)
 *     KiComputeNewPriority @ 0x1404E8FCC (KiComputeNewPriority.c)
 *     KiScheduleNextForegroundBoost @ 0x1405C0D28 (KiScheduleNextForegroundBoost.c)
 */

__int64 __fastcall KiComputeEffectivePriority(__int64 a1, int a2, unsigned __int64 a3, char a4)
{
  char v4; // si
  char v7; // di
  int v8; // r14d
  char v9; // r11
  unsigned int v10; // edx
  char v11; // cl
  char v12; // r8
  char v13; // cl
  int v14; // r15d
  int v15; // eax
  int v16; // edx
  char v17; // al
  unsigned __int8 v18; // r8
  int v19; // r11d
  int v20; // eax
  int v21; // r9d
  char v22; // r10
  char v23; // r10
  unsigned int v24; // r8d
  int v25; // ecx
  signed int v26; // eax
  char v28; // [rsp+31h] [rbp-27h]

  v4 = 0;
  v7 = 63;
  v28 = 0;
  v8 = (char)a2;
  if ( *(char *)(a1 + 195) >= 16 )
  {
    if ( a4 )
    {
      LOBYTE(a2) = 0;
      v28 = (*(_WORD *)(a1 + 518) & 0xFF0u) < 0x100;
      if ( a3 >= *(_QWORD *)(a1 + 32) )
      {
        v28 = 1;
        KiComputeNewPriority(a1, 256LL, 1LL);
      }
    }
    else
    {
      v28 = 1;
    }
    goto LABEL_55;
  }
  v9 = 0;
  v10 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 436);
  if ( a3 >= *(_QWORD *)(a1 + 32) )
  {
    v9 = 4;
    if ( v10 < 2 )
      v9 = 5;
    goto LABEL_12;
  }
  if ( *(char *)(a1 + 563) >= 14 || (*(_WORD *)(a1 + 518) & 0xFF0) == 0 && v10 >= 2 )
  {
LABEL_12:
    v11 = *(_BYTE *)(a1 + 195);
    v4 = 1;
    v28 = 1;
    if ( *(char *)(a1 + 195) < 16 || (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
    {
      v13 = 6;
      v14 = *(char *)(a1 + 870);
      if ( KiSchedulerForegroundBoostDecayPolicy )
      {
        v13 = 7;
        if ( (*(_BYTE *)(a1 + 518) & 0xF) != 0 )
        {
          *(_DWORD *)(a1 + 872) = MEMORY[0xFFFFF78000000320];
          *(_WORD *)(a1 + 518) &= 0xFFF0u;
        }
      }
      v15 = KiComputeThreadPriority(a1, v13);
      v16 = *(char *)(a1 + 563);
      v12 = v15;
      if ( v14 >= 1 )
        v16 = v14 + v16 - 1;
      if ( v15 < v16 )
        v12 = v16;
      *(_WORD *)(a1 + 518) &= 0xF00Fu;
      v17 = *(_BYTE *)(a1 + 870);
      if ( v17 >= 1 )
        *(_BYTE *)(a1 + 870) = v17 - 1;
      else
        *(_BYTE *)(a1 + 870) = 0;
    }
    else
    {
      v12 = v11;
    }
    v7 = 63;
    if ( !a4 )
      v7 = v12;
  }
  LOBYTE(a2) = v9;
  v18 = v9 | 2;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 136LL) & 0x2000) == 0 )
    v18 = v9;
  if ( (v18 & 1) != 0 || (v19 = *(_DWORD *)(a1 + 120), (v19 & 8) != 0) || *(char *)(a1 + 195) <= 0 )
  {
    if ( KiSchedulerForegroundBoostDecayPolicy
      && v18 >= 4u
      && (v18 & 2) != 0
      && (*(_DWORD *)(a1 + 120) & 8) == 0
      && *(char *)(a1 + 195) > 0 )
    {
      v28 = v4 | 2;
    }
  }
  else if ( (char)v8 > *(char *)(a1 + 870) )
  {
    v20 = *(char *)(a1 + 563);
    v21 = v20;
    v22 = v20 + v8;
    if ( v20 + v8 >= 16 )
      v22 = 15;
    v23 = v22 - v20;
    *(_BYTE *)(a1 + 870) = v23;
    if ( v20 < 16 )
    {
      a2 = v20;
      v25 = v20 + (*(_WORD *)(a1 + 518) & 0xF);
      if ( !__OFSUB__(v25, v20) && v25 != v20 )
        a2 = v20 + (*(_WORD *)(a1 + 518) & 0xF);
      v21 = v20 + v23;
      if ( v21 <= a2 )
        v21 = a2;
      v24 = *(unsigned __int16 *)(a1 + 518);
      if ( (unsigned __int8)(v24 >> 4) > v21 )
        v21 = (unsigned __int8)(v24 >> 4);
      if ( v21 >= 16 && (v19 & 0x400000) == 0 )
        v21 = 15;
    }
    v26 = *(_DWORD *)(a1 + 856);
    if ( v26 )
    {
      _BitScanReverse((unsigned int *)&v26, v26);
      if ( v21 < v26 )
        LOBYTE(v21) = v26;
    }
    v7 = v21;
  }
LABEL_55:
  if ( v7 != 63 )
    KiUpdateThreadPriority(0, (_BYTE)a2, a1, v7, 0);
  if ( (v28 & 2) != 0 )
    KiScheduleNextForegroundBoost(a1);
  return v28 & 1;
}
