/*
 * XREFs of HUBMISC_ComputeU1Timeout @ 0x14002E6F0
 * Callers:
 *     HUBDSM_ComputingU1U2TimeoutsAndExitLatency @ 0x1400214C0 (HUBDSM_ComputingU1U2TimeoutsAndExitLatency.c)
 * Callees:
 *     Feature_UTSP__private_IsEnabledDeviceUsageNoInline @ 0x14000C908 (Feature_UTSP__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall HUBMISC_ComputeU1Timeout(__int64 *a1)
{
  unsigned __int8 v1; // di
  bool v3; // si
  __int64 v4; // rcx
  int v5; // edx
  char v6; // cl
  unsigned __int16 v7; // r14
  _QWORD *v8; // rdx
  char v9; // r15
  __int64 v10; // rbp
  __int64 v11; // r8
  unsigned int v12; // esi
  unsigned int v13; // r10d
  __int64 v14; // r9
  _QWORD *v15; // rax
  unsigned int v16; // r11d
  unsigned int v17; // r10d
  __int64 v18; // r9
  __int64 v19; // r8
  unsigned __int16 v20; // dx
  unsigned __int16 v21; // dx
  __int64 v22; // rax
  __int64 result; // rax

  v1 = 1;
  v3 = (*(_DWORD *)(a1[1] + 204) & 0x400) != 0;
  if ( (*(_DWORD *)(a1[1] + 204) & 0x800) != 0 )
  {
    if ( (unsigned int)Feature_UTSP__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *((_DWORD *)a1 + 681) == 2 )
        v3 = 0;
    }
    else if ( (*((_DWORD *)a1 + 409) & 0x200000) == 0 )
    {
      v3 = 0;
    }
  }
  if ( (*((_DWORD *)a1 + 411) & 0x80u) != 0
    || (v4 = *a1, (*(_DWORD *)(*a1 + 40) & 0x8000) != 0)
    || (v5 = *((_DWORD *)a1 + 554), (v5 & 0x140) != 0)
    || (*(_DWORD *)(v4 + 44) & 8) != 0
    || (*(_DWORD *)(v4 + 2504) & 8) != 0
    || v3 )
  {
LABEL_48:
    _InterlockedAnd((volatile signed __int32 *)a1 + 554, 0xFFFFFFEF);
    goto LABEL_49;
  }
  v6 = *((_BYTE *)a1 + 2220);
  *((_DWORD *)a1 + 554) = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(16 * v6)) & 0x10;
  if ( (v6 & 4) == 0 )
  {
LABEL_49:
    v1 = 0;
    goto LABEL_50;
  }
  if ( (v6 & 0x10) == 0 )
  {
    v1 = -1;
    goto LABEL_50;
  }
  if ( v6 < 0 )
    goto LABEL_50;
  if ( (v6 & 0x40) != 0 )
  {
    v1 = 127;
    goto LABEL_50;
  }
  v7 = 0;
  v8 = (_QWORD *)(a1[6] + 16);
  v9 = 0;
  v10 = *v8 - 8LL;
  v11 = v10;
  if ( v8 == (_QWORD *)*v8 )
    goto LABEL_45;
  do
  {
    v12 = *(_DWORD *)(v11 + 24);
    v13 = 0;
    if ( v12 )
    {
      v14 = v11 + 72;
      while ( (*(_BYTE *)(*(_QWORD *)v14 + 3LL) & 3) == 0 )
      {
        ++v13;
        v14 += 72LL;
        if ( v13 >= v12 )
          goto LABEL_24;
      }
      v9 = 1;
LABEL_26:
      while ( 1 )
      {
        v16 = *(_DWORD *)(v10 + 24);
        v17 = 0;
        if ( v16 )
          break;
LABEL_44:
        v22 = *(_QWORD *)(v10 + 8);
        v10 = v22 - 8;
        if ( a1[6] + 16 == v22 )
          goto LABEL_45;
      }
      v18 = v10 + 72;
      while ( 1 )
      {
        v19 = *(_QWORD *)v18;
        if ( *(char *)(*(_QWORD *)v18 + 2LL) >= 0 )
          v20 = *((_WORD *)a1 + 1101);
        else
          v20 = *((unsigned __int8 *)a1 + 2196);
        if ( (*(_BYTE *)(v19 + 3) & 3) != 0 )
        {
          if ( (*(_BYTE *)(v19 + 3) & 3) == 1 )
          {
            if ( v20 > 125 * (unsigned int)*(unsigned __int8 *)(v19 + 6) )
              goto LABEL_48;
            v21 = 1;
            goto LABEL_41;
          }
          if ( (*(_BYTE *)(v19 + 3) & 3u) - 2 < 2 )
          {
LABEL_40:
            v21 = 5 * v20;
            goto LABEL_41;
          }
          v21 = 0;
        }
        else
        {
          if ( !v9 )
            goto LABEL_40;
          v21 = 5;
        }
LABEL_41:
        if ( v7 <= v21 )
          v7 = v21;
        ++v17;
        v18 += 72LL;
        if ( v17 >= v16 )
          goto LABEL_44;
      }
    }
LABEL_24:
    v15 = *(_QWORD **)(v11 + 8);
    v11 = (__int64)(v15 - 1);
  }
  while ( v8 != v15 );
  if ( v8 != (_QWORD *)*v8 )
    goto LABEL_26;
LABEL_45:
  v1 = 127;
  if ( (unsigned __int8)v7 < 0x7Fu )
    v1 = v7;
LABEL_50:
  result = *a1;
  if ( (*(_DWORD *)(*a1 + 40) & 0x10000000) != 0 )
  {
    result = *((unsigned int *)a1 + 408);
    if ( (result & 2) != 0 )
    {
      result = v1;
      if ( v1 )
        result = 255LL;
      v1 = result;
    }
  }
  *((_BYTE *)a1 + 2214) = v1;
  return result;
}
