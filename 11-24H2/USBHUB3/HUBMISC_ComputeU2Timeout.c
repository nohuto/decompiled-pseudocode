/*
 * XREFs of HUBMISC_ComputeU2Timeout @ 0x14002EAA8
 * Callers:
 *     HUBDSM_ComputingU1U2TimeoutsAndExitLatency @ 0x140021500 (HUBDSM_ComputingU1U2TimeoutsAndExitLatency.c)
 * Callees:
 *     <none>
 */

char __fastcall HUBMISC_ComputeU2Timeout(__int64 *a1)
{
  bool v2; // r9
  int v3; // edx
  char v4; // cl
  char v5; // dl
  unsigned __int16 v6; // dx
  _QWORD *v7; // r10
  char v8; // r14
  __int64 v9; // rbp
  __int64 v10; // r9
  unsigned int v11; // esi
  unsigned int v12; // ebx
  __int64 v13; // r11
  _QWORD *v14; // rax
  char v15; // bl
  char v16; // si
  unsigned int v17; // r12d
  unsigned int v18; // r15d
  __int64 v19; // rdi
  __int64 v20; // r10
  unsigned __int16 v21; // r9
  unsigned __int16 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax

  v2 = (*(_DWORD *)(a1[1] + 204) & 0x400) != 0;
  if ( (*(_DWORD *)(a1[1] + 204) & 0x800) != 0 && *((_DWORD *)a1 + 683) == 2 )
    v2 = 0;
  if ( (*((_DWORD *)a1 + 413) & 0x80u) != 0
    || (*(_DWORD *)(*a1 + 40) & 0x8000) != 0
    || (v3 = *((_DWORD *)a1 + 556), (v3 & 0x180) != 0)
    || v2 )
  {
    _InterlockedAnd((volatile signed __int32 *)a1 + 556, 0xFFFFFFDF);
LABEL_55:
    v5 = 0;
    goto LABEL_56;
  }
  v4 = *((_BYTE *)a1 + 2228);
  *((_DWORD *)a1 + 556) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(16 * v4)) & 0x20;
  if ( (v4 & 8) == 0 )
    goto LABEL_55;
  if ( (a1[205] & 2) != 0 || (v4 & 0x20) == 0 )
  {
    v5 = -1;
    goto LABEL_56;
  }
  if ( v4 < 0 )
  {
    v5 = 1;
    goto LABEL_56;
  }
  if ( (v4 & 0x40) != 0 )
    goto LABEL_14;
  v6 = 0;
  v7 = (_QWORD *)(a1[6] + 16);
  v8 = 0;
  v9 = *v7 - 8LL;
  v10 = v9;
  if ( v7 == (_QWORD *)*v7 )
  {
LABEL_21:
    v15 = 0;
    v16 = 0;
    if ( v7 != (_QWORD *)*v7 )
      goto LABEL_22;
    goto LABEL_52;
  }
  while ( 1 )
  {
    v11 = *(_DWORD *)(v10 + 24);
    v12 = 0;
    if ( v11 )
      break;
LABEL_20:
    v14 = *(_QWORD **)(v10 + 8);
    v10 = (__int64)(v14 - 1);
    if ( v7 == v14 )
      goto LABEL_21;
  }
  v13 = v10 + 72;
  while ( (*(_BYTE *)(*(_QWORD *)v13 + 3LL) & 3) == 0 )
  {
    ++v12;
    v13 += 80LL;
    if ( v12 >= v11 )
      goto LABEL_20;
  }
  v8 = 1;
  v15 = 0;
  v16 = 0;
  do
  {
LABEL_22:
    v17 = *(_DWORD *)(v9 + 24);
    v18 = 0;
    if ( v17 )
    {
      v19 = v9 + 72;
      while ( 1 )
      {
        v20 = *(_QWORD *)v19;
        if ( *(char *)(*(_QWORD *)v19 + 2LL) >= 0 )
          v21 = *((_WORD *)a1 + 1106);
        else
          v21 = *((_WORD *)a1 + 1103);
        if ( (*(_BYTE *)(v20 + 3) & 3) == 0 )
        {
          if ( !v8 )
          {
            v22 = 5 * v21;
            goto LABEL_42;
          }
          goto LABEL_40;
        }
        if ( (*(_BYTE *)(v20 + 3) & 3) == 1 )
        {
          if ( v21 > 125 * (unsigned int)*(unsigned __int8 *)(v20 + 6) )
          {
            _InterlockedAnd((volatile signed __int32 *)a1 + 556, 0xFFFFFFDF);
            goto LABEL_55;
          }
LABEL_40:
          v22 = 1;
          goto LABEL_42;
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
LABEL_42:
        if ( v6 <= v22 )
          v6 = v22;
        ++v18;
        v19 += 80LL;
        if ( v18 >= v17 )
          goto LABEL_45;
      }
      v22 = 5 * v21;
      goto LABEL_42;
    }
LABEL_45:
    v23 = *(_QWORD *)(v9 + 8);
    v9 = v23 - 8;
  }
  while ( a1[6] + 16 != v23 );
  if ( v15 )
  {
    v5 = -1;
    goto LABEL_56;
  }
  if ( v16 && *((_BYTE *)a1 + 2222) )
    *((_BYTE *)a1 + 2222) = -1;
  if ( v6 < 0xFE00u )
  {
LABEL_52:
    v5 = HIBYTE(v6) + 1;
    goto LABEL_56;
  }
LABEL_14:
  v5 = -2;
LABEL_56:
  v24 = *a1;
  if ( (*(_DWORD *)(*a1 + 40) & 0x10000000) != 0 )
  {
    LODWORD(v24) = *((_DWORD *)a1 + 410);
    if ( (v24 & 2) == 0 )
    {
      LOBYTE(v24) = *((_BYTE *)a1 + 2222) - 1;
      if ( (unsigned __int8)v24 <= 0xFDu && v5 == -1 )
      {
        v5 = 0;
        _InterlockedAnd((volatile signed __int32 *)a1 + 556, 0xFFFFFFDF);
      }
    }
  }
  *((_BYTE *)a1 + 2223) = v5;
  return v24;
}
