/*
 * XREFs of HUBMISC_ComputeU2Timeout @ 0x14002E960
 * Callers:
 *     HUBDSM_ComputingU1U2TimeoutsAndExitLatency @ 0x1400214C0 (HUBDSM_ComputingU1U2TimeoutsAndExitLatency.c)
 * Callees:
 *     Feature_UTSP__private_IsEnabledDeviceUsageNoInline @ 0x14000C908 (Feature_UTSP__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall HUBMISC_ComputeU2Timeout(__int64 *a1)
{
  bool v2; // di
  int v3; // edx
  char v4; // cl
  char v5; // dl
  unsigned __int16 v6; // dx
  _QWORD *v7; // r9
  char v8; // r14
  __int64 v9; // rbp
  __int64 v10; // r8
  unsigned int v11; // esi
  unsigned int v12; // r11d
  __int64 v13; // r10
  _QWORD *v14; // rax
  char v15; // r11
  char v16; // si
  unsigned int v17; // r12d
  unsigned int v18; // r15d
  __int64 v19; // rdi
  __int64 v20; // r9
  unsigned __int16 v21; // r8
  unsigned __int16 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rax

  v2 = (*(_DWORD *)(a1[1] + 204) & 0x400) != 0;
  if ( (*(_DWORD *)(a1[1] + 204) & 0x800) != 0 )
  {
    if ( (unsigned int)Feature_UTSP__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *((_DWORD *)a1 + 681) == 2 )
        v2 = 0;
    }
    else if ( (*((_DWORD *)a1 + 409) & 0x200000) == 0 )
    {
      v2 = 0;
    }
  }
  if ( (*((_DWORD *)a1 + 411) & 0x80u) != 0
    || (*(_DWORD *)(*a1 + 40) & 0x8000) != 0
    || (v3 = *((_DWORD *)a1 + 554), (v3 & 0x180) != 0)
    || v2 )
  {
LABEL_41:
    _InterlockedAnd((volatile signed __int32 *)a1 + 554, 0xFFFFFFDF);
    goto LABEL_42;
  }
  v4 = *((_BYTE *)a1 + 2220);
  *((_DWORD *)a1 + 554) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(16 * v4)) & 0x20;
  if ( (v4 & 8) == 0 )
  {
LABEL_42:
    v5 = 0;
    goto LABEL_43;
  }
  if ( (a1[204] & 2) != 0 || (v4 & 0x20) == 0 )
  {
    v5 = -1;
    goto LABEL_43;
  }
  if ( v4 < 0 )
  {
    v5 = 1;
    goto LABEL_43;
  }
  if ( (v4 & 0x40) != 0 )
    goto LABEL_17;
  v6 = 0;
  v7 = (_QWORD *)(a1[6] + 16);
  v8 = 0;
  v9 = *v7 - 8LL;
  v10 = v9;
  if ( v7 == (_QWORD *)*v7 )
  {
LABEL_24:
    v15 = 0;
    v16 = 0;
    if ( v7 != (_QWORD *)*v7 )
      goto LABEL_25;
    goto LABEL_62;
  }
  while ( 1 )
  {
    v11 = *(_DWORD *)(v10 + 24);
    v12 = 0;
    if ( v11 )
      break;
LABEL_23:
    v14 = *(_QWORD **)(v10 + 8);
    v10 = (__int64)(v14 - 1);
    if ( v7 == v14 )
      goto LABEL_24;
  }
  v13 = v10 + 72;
  while ( (*(_BYTE *)(*(_QWORD *)v13 + 3LL) & 3) == 0 )
  {
    ++v12;
    v13 += 72LL;
    if ( v12 >= v11 )
      goto LABEL_23;
  }
  v8 = 1;
  v15 = 0;
  v16 = 0;
  do
  {
LABEL_25:
    v17 = *(_DWORD *)(v9 + 24);
    v18 = 0;
    if ( v17 )
    {
      v19 = v9 + 72;
      while ( 1 )
      {
        v20 = *(_QWORD *)v19;
        if ( *(char *)(*(_QWORD *)v19 + 2LL) >= 0 )
          v21 = *((_WORD *)a1 + 1102);
        else
          v21 = *((_WORD *)a1 + 1099);
        if ( (*(_BYTE *)(v20 + 3) & 3) == 0 )
        {
          if ( !v8 )
          {
            v22 = 5 * v21;
            goto LABEL_52;
          }
          goto LABEL_50;
        }
        if ( (*(_BYTE *)(v20 + 3) & 3) == 1 )
        {
          if ( v21 > 125 * (unsigned int)*(unsigned __int8 *)(v20 + 6) )
            goto LABEL_41;
LABEL_50:
          v22 = 1;
          goto LABEL_52;
        }
        if ( (*(_BYTE *)(v20 + 3) & 3) == 2 )
          break;
        if ( (*(_BYTE *)(v20 + 3) & 3) == 3 )
        {
          if ( (*(_BYTE *)(v20 + 3) & 0x30) != 0 )
            break;
          v16 = 1;
          if ( v21 <= 125 * (unsigned int)*(unsigned __int8 *)(v20 + 6) )
            break;
          v15 = 1;
          v22 = 255;
        }
        else
        {
          v22 = 0;
        }
LABEL_52:
        if ( v6 <= v22 )
          v6 = v22;
        ++v18;
        v19 += 72LL;
        if ( v18 >= v17 )
          goto LABEL_55;
      }
      v22 = 5 * v21;
      goto LABEL_52;
    }
LABEL_55:
    v24 = *(_QWORD *)(v9 + 8);
    v9 = v24 - 8;
  }
  while ( a1[6] + 16 != v24 );
  if ( v15 )
  {
    v5 = -1;
    goto LABEL_43;
  }
  if ( v16 && *((_BYTE *)a1 + 2214) )
    *((_BYTE *)a1 + 2214) = -1;
  if ( v6 < 0xFE00u )
  {
LABEL_62:
    v5 = HIBYTE(v6) + 1;
    goto LABEL_43;
  }
LABEL_17:
  v5 = -2;
LABEL_43:
  v23 = *a1;
  if ( (*(_DWORD *)(*a1 + 40) & 0x10000000) != 0 )
  {
    LODWORD(v23) = *((_DWORD *)a1 + 408);
    if ( (v23 & 2) == 0 )
    {
      LOBYTE(v23) = *((_BYTE *)a1 + 2214) - 1;
      if ( (unsigned __int8)v23 <= 0xFDu && v5 == -1 )
      {
        v5 = 0;
        _InterlockedAnd((volatile signed __int32 *)a1 + 554, 0xFFFFFFDF);
      }
    }
  }
  *((_BYTE *)a1 + 2215) = v5;
  return v23;
}
