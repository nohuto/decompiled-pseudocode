/*
 * XREFs of HalGetMessageRoutingInfo @ 0x1402B4240
 * Callers:
 *     IopConnectMessageBasedInterrupt @ 0x1409C0F8C (IopConnectMessageBasedInterrupt.c)
 * Callees:
 *     HalpInterruptAffinityIsSteerable @ 0x1402B482C (HalpInterruptAffinityIsSteerable.c)
 *     HalpGetProcessorStateByNtIndex @ 0x1402B49A8 (HalpGetProcessorStateByNtIndex.c)
 *     HalpInterruptSetProblemEx @ 0x14037537C (HalpInterruptSetProblemEx.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 */

__int64 __fastcall HalGetMessageRoutingInfo(int *a1, _DWORD *a2)
{
  unsigned __int64 *v4; // rcx
  unsigned __int64 v5; // rbx
  char v6; // r14
  __int64 result; // rax
  int v8; // r15d
  __int64 v9; // r8
  unsigned int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // eax
  char v15; // r10
  unsigned int v16; // ecx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  int i; // ecx
  __int64 v20; // rax
  int v21; // eax
  unsigned int v22; // ecx
  unsigned __int16 v23; // r8
  unsigned int v24; // ecx
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  int j; // ecx
  __int64 v28; // rax
  unsigned int v29; // ecx
  int v30; // r9d
  unsigned int v31; // eax
  __int128 v32; // [rsp+30h] [rbp-30h] BYREF
  __int64 v33; // [rsp+40h] [rbp-20h]
  __int128 v34; // [rsp+48h] [rbp-18h]
  char v35; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v36; // [rsp+B0h] [rbp+50h] BYREF

  v33 = 0LL;
  v36 = 0;
  v35 = 0;
  v32 = 0LL;
  v34 = 0LL;
  if ( (unsigned int)*a1 > 1 )
  {
    HalpInterruptSetProblemEx(0, 20, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 1216);
    return 3221225485LL;
  }
  v4 = (unsigned __int64 *)(a1 + 4);
  v5 = *v4;
  if ( !*v4 || (v6 = 1, (v5 & (v5 ^ (v5 - 1))) != v5) )
    v6 = 0;
  result = HalpInterruptAffinityIsSteerable(v4, &v35);
  if ( (int)result < 0 )
  {
    HalpInterruptLastProblemController = 0LL;
    HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
    HalpInterruptLastProblem = 39;
    HalpInterruptLastProblemStatus = result;
    HalpInterruptLastProblemLine = 1242;
    return result;
  }
  v8 = a1[8];
  v9 = *((unsigned __int16 *)a1 + 12);
  LOWORD(v33) = *((_WORD *)a1 + 12);
  *(_QWORD *)&v32 = 0LL;
  if ( v8 == 1 )
  {
    if ( !v6 && !v35 )
    {
      HalpInterruptLastProblemController = 0LL;
      HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
      HalpInterruptLastProblem = 21;
      HalpInterruptLastProblemStatus = -1073741811;
      HalpInterruptLastProblemLine = 1276;
      return 3221225485LL;
    }
    v36 = 0;
    v10 = v9 + 1;
    while ( !v5 )
    {
      v23 = v9 + 1;
      LOWORD(v33) = v23;
      if ( v23 >= v10 )
      {
        LODWORD(v12) = -1073741275;
        goto LABEL_65;
      }
      v5 = *(_QWORD *)(8LL * v23 + 8);
      v9 = (unsigned __int16)v33;
    }
    _BitScanForward64((unsigned __int64 *)&v11, v5);
    v12 = 0LL;
    *((_QWORD *)&v32 + 1) = v5 & ~(1LL << v11);
    v13 = *((unsigned int *)qword_140F22998 + 64 * (unsigned __int16)v9 + (unsigned __int8)v11);
    v36 = *((_DWORD *)qword_140F22998 + 64 * (unsigned __int16)v9 + (unsigned __int8)v11);
    if ( v35 )
    {
      while ( (int)v12 >= 0 )
      {
        if ( (unsigned int)v13 >= (unsigned int)HalpInterruptProcessorCount )
        {
          v12 = 3221225485LL;
          break;
        }
        v31 = KeEnumerateNextProcessor(&v36, &v32);
        v13 = v36;
        v12 = v31;
      }
      if ( (unsigned int)v13 >= (unsigned int)HalpInterruptProcessorCount )
      {
LABEL_65:
        HalpInterruptLastProblemStatus = v12;
        HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
        HalpInterruptLastProblemController = 0LL;
        HalpInterruptLastProblem = 21;
        HalpInterruptLastProblemLine = 1301;
        return 3221225485LL;
      }
    }
    else if ( (unsigned int)v13 >= (unsigned int)HalpInterruptProcessorCount )
    {
      v30 = -1073741811;
LABEL_58:
      HalpInterruptLastProblemStatus = v30;
      HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
      HalpInterruptLastProblemController = 0LL;
      HalpInterruptLastProblem = 21;
      HalpInterruptLastProblemLine = 1312;
      return 3221225485LL;
    }
    if ( HalpGetProcessorStateByNtIndex(v13, v11, v9, v12) )
      goto LABEL_12;
    v30 = -1073741275;
    goto LABEL_58;
  }
  if ( v8 != 2 )
  {
    if ( v8 != 3 )
    {
      HalpInterruptLastProblemController = 0LL;
      HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
      HalpInterruptLastProblem = 20;
      HalpInterruptLastProblemStatus = 0;
      HalpInterruptLastProblemLine = 1466;
      return 3221225485LL;
    }
    if ( !HalpInterruptClusterModeEnabled )
    {
      HalpInterruptSetProblemEx(0, 20, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 1377);
      return 3221225485LL;
    }
    v15 = 0;
    v16 = v9 + 1;
    while ( 1 )
    {
      if ( v5 )
        goto LABEL_24;
      v9 = (unsigned __int16)(v9 + 1);
      LOWORD(v33) = v9;
      if ( (unsigned int)v9 >= v16 )
        break;
      v5 = *(_QWORD *)(8 * v9 + 8);
      LOWORD(v9) = v33;
    }
LABEL_60:
    v18 = v36;
    for ( i = -1073741275; ; i = 0 )
    {
      if ( i < 0 )
        goto LABEL_12;
      if ( (unsigned int)v18 >= (unsigned int)HalpInterruptProcessorCount )
      {
        HalpInterruptLastProblemController = 0LL;
        HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
        HalpInterruptLastProblem = 21;
        HalpInterruptLastProblemStatus = 0;
        HalpInterruptLastProblemLine = 1388;
        return 3221225485LL;
      }
      v20 = 3 * v18;
      if ( *(_DWORD *)(HalpInterruptTargets + 8 * v20) != 6 )
      {
        HalpInterruptLastProblemController = 0LL;
        HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
        HalpInterruptLastProblem = 20;
        HalpInterruptLastProblemStatus = 0;
        HalpInterruptLastProblemLine = 1403;
        return 3221225485LL;
      }
      v21 = *(_DWORD *)(HalpInterruptTargets + 8 * v20 + 8);
      if ( v15 )
      {
        if ( DWORD2(v34) == v21 )
          goto LABEL_30;
        if ( !v35 )
        {
          HalpInterruptSetProblemEx(0, 20, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 1448);
          return 3221225485LL;
        }
      }
      else
      {
        v15 = 1;
      }
      DWORD2(v34) = v21;
LABEL_30:
      v22 = (unsigned __int16)v9 + 1;
      while ( !v5 )
      {
        LOWORD(v33) = v9 + 1;
        LOWORD(v9) = v9 + 1;
        if ( (unsigned __int16)v9 >= v22 )
          goto LABEL_60;
        v5 = *(_QWORD *)(8LL * (unsigned __int16)v9 + 8);
        LOWORD(v9) = v33;
      }
LABEL_24:
      _BitScanForward64(&v17, v5);
      v5 &= ~(1LL << v17);
      v18 = *((unsigned int *)qword_140F22998 + 64 * (unsigned __int16)v9 + (unsigned __int8)v17);
      v36 = *((_DWORD *)qword_140F22998 + 64 * (unsigned __int16)v9 + (unsigned __int8)v17);
    }
  }
  if ( HalpInterruptClusterModeEnabled )
  {
    HalpInterruptSetProblemEx(0, 20, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 1329);
    return 3221225485LL;
  }
  v24 = v9 + 1;
  while ( 1 )
  {
    if ( v5 )
      goto LABEL_48;
    LOWORD(v33) = v9 + 1;
    LOWORD(v9) = v9 + 1;
    if ( (unsigned __int16)v9 >= v24 )
      break;
    v5 = *(_QWORD *)(8LL * (unsigned __int16)v9 + 8);
    LOWORD(v9) = v33;
  }
LABEL_66:
  v26 = v36;
  for ( j = -1073741275; j >= 0; j = 0 )
  {
    if ( (unsigned int)v26 >= (unsigned int)HalpInterruptProcessorCount )
    {
      HalpInterruptLastProblemController = 0LL;
      HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
      HalpInterruptLastProblem = 21;
      HalpInterruptLastProblemStatus = j;
      HalpInterruptLastProblemLine = 1340;
      return 3221225485LL;
    }
    v28 = 3 * v26;
    if ( *(_DWORD *)(HalpInterruptTargets + 8 * v28) != 5 )
    {
      HalpInterruptLastProblemController = 0LL;
      HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
      HalpInterruptLastProblem = 20;
      HalpInterruptLastProblemStatus = 0;
      HalpInterruptLastProblemLine = 1350;
      return 3221225485LL;
    }
    DWORD2(v34) |= *(_DWORD *)(HalpInterruptTargets + 8 * v28 + 8);
    v29 = (unsigned __int16)v9 + 1;
    while ( !v5 )
    {
      LOWORD(v33) = v9 + 1;
      LOWORD(v9) = v9 + 1;
      if ( (unsigned __int16)v9 >= v29 )
        goto LABEL_66;
      v5 = *(_QWORD *)(8LL * (unsigned __int16)v9 + 8);
      LOWORD(v9) = v33;
    }
LABEL_48:
    _BitScanForward64(&v25, v5);
    v5 &= ~(1LL << v25);
    v26 = *((unsigned int *)qword_140F22998 + 64 * (unsigned __int16)v9 + (unsigned __int8)v25);
    v36 = *((_DWORD *)qword_140F22998 + 64 * (unsigned __int16)v9 + (unsigned __int8)v25);
  }
  if ( !DWORD2(v34) )
    return 3221225485LL;
LABEL_12:
  v14 = *a1;
  *a2 = 1;
  if ( v14 )
  {
    a2[2] = 3;
    a2[20] = v8;
  }
  else
  {
    a2[2] = 1;
    a2[21] = a1[10];
    a2[20] = a1[11];
    a2[22] = a1[12];
  }
  return 0LL;
}
