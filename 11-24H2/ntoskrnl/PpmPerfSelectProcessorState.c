/*
 * XREFs of PpmPerfSelectProcessorState @ 0x1403A2AD8
 * Callers:
 *     PpmPerfSelectProcessorStates @ 0x1403A2A50 (PpmPerfSelectProcessorStates.c)
 * Callees:
 *     PpmGetPerfPolicyClass @ 0x1403A2FAC (PpmGetPerfPolicyClass.c)
 *     PpmEventPerfSelectProcessorState @ 0x1403A3000 (PpmEventPerfSelectProcessorState.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmPerfSelectProcessorState(__int64 *a1)
{
  char v1; // di
  __int64 v2; // rsi
  __int64 v4; // r11
  unsigned __int8 v5; // r8
  __int64 v6; // rdx
  __int64 *v7; // rbp
  __int64 PerfPolicyClass; // rbx
  int v9; // r9d
  __int64 v10; // r11
  unsigned int v11; // r12d
  char v12; // cl
  char v13; // r15
  char v14; // r10
  unsigned int v15; // r13d
  unsigned int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rax
  unsigned int v19; // r9d
  unsigned int v20; // ebx
  int v21; // eax
  unsigned __int8 v23; // r10
  unsigned int v24; // r8d
  unsigned int v25; // eax
  unsigned int v26; // edx
  unsigned int v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // r8d
  unsigned __int8 v33; // al
  char v34; // al
  char v35; // al
  unsigned int v36; // eax
  unsigned __int8 v37; // al
  unsigned int v38; // [rsp+60h] [rbp-68h]
  unsigned int v39; // [rsp+64h] [rbp-64h]
  __int64 v40; // [rsp+68h] [rbp-60h]
  __int64 v41; // [rsp+78h] [rbp-50h]
  char v42; // [rsp+D0h] [rbp+8h]
  unsigned int v43; // [rsp+D8h] [rbp+10h]
  unsigned int v44; // [rsp+E0h] [rbp+18h]

  v1 = 0;
  v2 = a1[1];
  v4 = a1[2];
  v44 = 0;
  v40 = *a1;
  v41 = *(_QWORD *)(v2 + 8);
  v5 = PpmMfBufferingThreshold;
  if ( (unsigned int)PpmMfBufferingThreshold > 0x64 )
    v5 = 100;
  v6 = 61LL * dword_140F0B38C;
  v7 = &PpmCurrentProfile[0][v6 + 5];
  if ( v4 && PpmCurrentProfile[0] == (__int64 *)PpmLowPowerProfile && byte_140F0B3CC && *(_BYTE *)(v4 + 233) < v5 )
  {
    v1 = 0;
    v7 = (__int64 *)((char *)&unk_140F06CC8 + v6 * 8);
  }
  PerfPolicyClass = (unsigned __int8)PpmGetPerfPolicyClass(a1);
  v11 = *((unsigned __int8 *)v7 + PerfPolicyClass + 56);
  v12 = *((_BYTE *)v7 + PerfPolicyClass + 50);
  v13 = *((_BYTE *)v7 + PerfPolicyClass + 52);
  v14 = *((_BYTE *)v7 + PerfPolicyClass + 137);
  v39 = *((unsigned __int8 *)v7 + PerfPolicyClass + 46);
  v38 = *((unsigned __int8 *)v7 + PerfPolicyClass + 48);
  v42 = v12;
  v43 = *((unsigned __int8 *)v7 + PerfPolicyClass + 54);
  v15 = (v43 + v11) >> 1;
  if ( v10 )
  {
    v16 = *((_DWORD *)v7 + PerfPolicyClass + 27);
    v17 = *((_DWORD *)v7 + PerfPolicyClass + 25);
    if ( v16 == v17 )
    {
      *(_BYTE *)(v2 + 60) = 0;
    }
    else
    {
      v32 = *(_DWORD *)(v10 + 240);
      if ( *(_BYTE *)(v2 + 60) )
      {
        if ( v32 > v17 )
        {
          *(_BYTE *)(v2 + 61) = 0;
        }
        else
        {
          v37 = *(_BYTE *)(v2 + 61) + 1;
          *(_BYTE *)(v2 + 61) = v37;
          if ( v37 >= *((_BYTE *)v7 + PerfPolicyClass + 116) )
            *(_WORD *)(v2 + 60) = 0;
        }
      }
      else if ( v32 < v16 )
      {
        *(_BYTE *)(v2 + 61) = 0;
      }
      else
      {
        v33 = *(_BYTE *)(v2 + 61) + 1;
        *(_BYTE *)(v2 + 61) = v33;
        if ( v33 >= *((_BYTE *)v7 + PerfPolicyClass + 118) )
          *(_WORD *)(v2 + 60) = 1;
      }
    }
  }
  if ( ((v9 - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( PpmPerfBoostAtGuaranteed || (unsigned int)(v9 - 5) <= 1 )
    {
      v19 = *(_DWORD *)(v2 + 24);
      v18 = v40;
    }
    else
    {
      v18 = v40;
      v19 = 100;
    }
  }
  else
  {
    v18 = v40;
    v19 = *(_DWORD *)(v40 + 452);
  }
  if ( !*(_BYTE *)(v18 + 522) )
  {
    v20 = v19;
    goto LABEL_12;
  }
  if ( *((_BYTE *)a1 + 68) && *((_BYTE *)a1 + 92) && v14 )
  {
    v1 = 1;
    v20 = v19;
    if ( v14 == 1 )
      v20 = 1;
    goto LABEL_12;
  }
  v23 = PpmPerfIdealAggressiveIncreaseThreshold;
  if ( (unsigned __int8)PpmPerfIdealAggressiveIncreaseThreshold > 0x64u )
    v23 = 100;
  if ( !(_BYTE)v15 )
  {
    v34 = v13;
    if ( !v13 )
      v34 = 2;
    v13 = v34;
    v35 = v12;
    if ( !v12 )
      v35 = 2;
    v42 = v35;
  }
  v24 = *((_DWORD *)a1 + 10);
  v20 = *(_DWORD *)(v2 + 56);
  if ( PpmPerfCalculateActualUtilization )
    v25 = v24 / *((unsigned __int16 *)a1 + 31);
  else
    v25 = v24 / v20;
  v44 = v25;
  v26 = v25;
  if ( v25 <= v11 )
  {
    *(_DWORD *)(v2 + 1184) = 0;
LABEL_21:
    v27 = v43;
    goto LABEL_22;
  }
  v30 = *(_DWORD *)(v2 + 1184) + 1;
  *(_DWORD *)(v2 + 1184) = v30;
  if ( v20 >= v19 || v30 < v38 )
    goto LABEL_21;
  *(_DWORD *)(v2 + 1184) = 0;
  switch ( v13 )
  {
    case 0:
      v26 = v44;
      v1 = 16;
      v20 = v24 / (unsigned __int8)v15;
      goto LABEL_36;
    case 1:
      v20 += PpmPerfSingleStepSize;
      v1 = 32;
      goto LABEL_36;
    case 2:
      v20 = v19;
      v1 = 64;
LABEL_36:
      v27 = v43;
      goto LABEL_37;
  }
  if ( v13 != 3 )
    goto LABEL_36;
  if ( v26 < v23 )
  {
    v36 = v24 / (unsigned __int8)v15;
    v27 = v43;
  }
  else
  {
    v27 = v43;
    v36 = v24 / v43;
  }
  v26 = v44;
  v20 = v36;
  v1 = 0x80;
LABEL_37:
  if ( v20 >= v19 )
    v20 = v19;
LABEL_22:
  if ( v26 >= v27 )
  {
    *(_DWORD *)(v2 + 1188) = 0;
    goto LABEL_24;
  }
  v31 = *(_DWORD *)(v2 + 1188) + 1;
  *(_DWORD *)(v2 + 1188) = v31;
  if ( v20 > 1 && v31 >= v39 )
  {
    *(_DWORD *)(v2 + 1188) = 0;
    switch ( v42 )
    {
      case 0:
        v20 = v24 / (unsigned __int8)v15;
        goto LABEL_24;
      case 1:
        if ( v20 > PpmPerfSingleStepSize )
        {
          v20 -= PpmPerfSingleStepSize;
          goto LABEL_24;
        }
        break;
      case 2:
        break;
      default:
        goto LABEL_24;
    }
    v20 = 1;
  }
LABEL_24:
  if ( v10 )
  {
    v28 = *(unsigned __int8 *)(v10 + 238);
    if ( (_BYTE)v28 )
    {
      *(_BYTE *)(v10 + 238) = 0;
      if ( v20 <= v28 )
        v20 = v28;
    }
    v29 = *(unsigned __int8 *)(v10 + 239);
    if ( (_BYTE)v29 )
    {
      *(_BYTE *)(v10 + 239) = 0;
      if ( v20 <= v29 )
        v20 = v29;
    }
  }
LABEL_12:
  v21 = guard_dispatch_icall_no_overrides(v41, v20);
  *(_DWORD *)(v2 + 56) = v21;
  return PpmEventPerfSelectProcessorState((_DWORD)a1, v44, v20, v21, v1);
}
