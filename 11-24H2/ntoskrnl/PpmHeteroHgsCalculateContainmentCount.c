/*
 * XREFs of PpmHeteroHgsCalculateContainmentCount @ 0x1404E2A70
 * Callers:
 *     PpmParkCalculateUnparkCount @ 0x140417A80 (PpmParkCalculateUnparkCount.c)
 * Callees:
 *     PpmEventHgsContainmentUnparkedCount @ 0x1404AB660 (PpmEventHgsContainmentUnparkedCount.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_WpsHybridToNoneZoneFix__private_IsEnabledDeviceUsageNoInline @ 0x1405D4328 (Feature_WpsHybridToNoneZoneFix__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmEventHgsContainmentUnparkedCountEx @ 0x1405DA6C8 (PpmEventHgsContainmentUnparkedCountEx.c)
 */

BOOLEAN __fastcall PpmHeteroHgsCalculateContainmentCount(__int64 a1, int *a2, unsigned __int16 a3)
{
  BOOLEAN result; // al
  unsigned int v4; // r9d
  char v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rdx
  unsigned int v10; // eax
  unsigned int v11; // ebp
  __int64 v12; // r8
  unsigned int v13; // r13d
  int v14; // ecx
  unsigned int v15; // r15d
  int v16; // esi
  int IsEnabledDeviceUsageNoInline; // eax
  int v18; // eax
  __int64 v19; // r9
  char v20; // r15
  int v21; // eax
  _BYTE *v22; // rcx
  char v23; // bp
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int16 v27; // ax
  unsigned __int16 v28; // [rsp+40h] [rbp-48h]
  unsigned int v29; // [rsp+44h] [rbp-44h]
  int v30; // [rsp+48h] [rbp-40h]
  unsigned __int16 v32; // [rsp+A8h] [rbp+20h]

  result = PpmHeteroHgsContainmentState;
  v4 = a3;
  v7 = 0;
  if ( (PpmHeteroHgsContainmentState & 8) == 0 )
    return result;
  v8 = *(_QWORD *)(a1 + 1280);
  v32 = *(_WORD *)(a1 + 1266);
  v28 = *(_WORD *)(a1 + 1264);
  v9 = 61LL * dword_140F0B38C;
  v10 = PpmCurrentProfile[0][v9 + 64];
  if ( !v10 )
    v10 = *(unsigned __int16 *)(v8 + 8);
  v11 = HIDWORD(PpmCurrentProfile[0][v9 + 64]);
  if ( !v11 )
    v11 = *(unsigned __int16 *)(v8 + 10);
  v12 = LODWORD(PpmCurrentProfile[0][v9 + 63]);
  v13 = HIDWORD(PpmCurrentProfile[0][v9 + 63]);
  v30 = *(_DWORD *)(v8 + 4);
  v14 = *(unsigned __int16 *)(a1 + 1264);
  v29 = PpmCurrentProfile[0][v9 + 63];
  if ( (_WORD)v14 )
  {
    v16 = ((unsigned __int16)v11 < (unsigned int)*(unsigned __int16 *)(a1 + 1266) + v14) + 1;
  }
  else
  {
    v15 = v4;
    if ( v4 > v10 )
    {
      v16 = 1;
      IsEnabledDeviceUsageNoInline = Feature_WpsHybridToNoneZoneFix__private_IsEnabledDeviceUsageNoInline();
      v12 = v29;
      if ( IsEnabledDeviceUsageNoInline )
      {
        v18 = *a2 | 0x2000;
        *a2 = v18;
        if ( v15 > v11 )
        {
          v16 = 2;
          *a2 = v18 | 0x4000;
        }
      }
    }
    else
    {
      v16 = 0;
    }
  }
  v19 = 256LL;
  if ( *(_BYTE *)(v8 + 808) && !v16 && *(_DWORD *)(v8 + 812) == 1 )
  {
    *a2 |= 0x100u;
    v16 = 1;
  }
  v20 = v16;
  if ( !*(_BYTE *)(v8 + 824) )
  {
    v21 = *(_DWORD *)(v8 + 4);
    if ( v21 != v16 )
    {
      if ( v21 == 2 || v16 == 2 )
      {
        *(_BYTE *)(v8 + 816) = 1;
        *a2 |= 0x40u;
      }
      else
      {
        *(_BYTE *)(v8 + 824) = 1;
        if ( v16 == 1 )
        {
          *(_BYTE *)(v8 + 825) = 1;
        }
        else if ( !v16 )
        {
          *(_BYTE *)(v8 + 826) = 1;
        }
      }
    }
  }
  if ( *(_BYTE *)(v8 + 825) )
  {
    if ( ++*(_DWORD *)(v8 + 820) >= v13 )
    {
      if ( (unsigned int)(v16 - 1) <= 1 )
      {
        *(_BYTE *)(v8 + 816) = 1;
        *a2 |= 0x10u;
      }
      v7 = 1;
    }
    v22 = (_BYTE *)(v8 + 826);
  }
  else
  {
    v22 = (_BYTE *)(v8 + 826);
    if ( *(_BYTE *)(v8 + 826) )
    {
      if ( ++*(_DWORD *)(v8 + 820) >= (unsigned int)v12 )
      {
        if ( !v16 )
        {
          if ( *(_BYTE *)(v8 + 808) && *(_DWORD *)(v8 + 812) == 1 && *(_DWORD *)(v8 + 4) == 1 )
          {
            *a2 |= 0x100u;
            v20 = 1;
          }
          else
          {
            *(_BYTE *)(v8 + 816) = 1;
            *a2 |= 0x20u;
          }
        }
        v7 = 1;
      }
    }
  }
  v23 = *(_BYTE *)(v8 + 816);
  if ( v23 )
  {
    *(_DWORD *)(v8 + 4) = v16;
LABEL_44:
    *a2 |= 0x80u;
    *(_WORD *)(v8 + 824) = 0;
    *(_BYTE *)(v8 + 816) = 0;
    *(_DWORD *)(v8 + 820) = 0;
    *v22 = 0;
    goto LABEL_45;
  }
  if ( v7 )
    goto LABEL_44;
LABEL_45:
  v24 = *(_DWORD *)(v8 + 4);
  v25 = *(unsigned __int16 *)(v8 + 10);
  v26 = *(unsigned __int16 *)(v8 + 8);
  if ( v24 )
  {
    if ( v24 == 1 )
    {
      v27 = *(_WORD *)(a1 + 1266);
      if ( v27 > (unsigned __int16)v25 )
      {
        *(_WORD *)(a1 + 1266) = v25;
        v27 = v25;
      }
      v19 = *(unsigned __int16 *)(a1 + 1264);
      if ( (unsigned __int16)v19 > (unsigned __int16)v25 )
      {
        *(_WORD *)(a1 + 1264) = v25;
        v19 = (unsigned __int16)v25;
      }
      v12 = v27;
      if ( v27 == (_WORD)v25 && (_WORD)v19 == (_WORD)v25 )
      {
        LOWORD(v12) = v27 - v25;
        *(_WORD *)(a1 + 1266) = v27 - v25;
      }
      v26 = (unsigned __int16)v19 + (unsigned int)(unsigned __int16)v12;
      if ( (unsigned int)v26 > (unsigned int)v25 && (_WORD)v19 + (_WORD)v12 - (_WORD)v25 )
      {
        if ( (unsigned __int16)v19 <= (unsigned __int16)v12 )
        {
          LOWORD(v12) = v25 - v19;
          *(_WORD *)(a1 + 1266) = v25 - v19;
        }
        else
        {
          LOWORD(v19) = v25 - v12;
          *(_WORD *)(a1 + 1264) = v25 - v12;
        }
      }
    }
  }
  else
  {
    *(_WORD *)(a1 + 1266) += *(_WORD *)(a1 + 1264);
    *(_WORD *)(a1 + 1264) = 0;
    if ( *(_WORD *)(a1 + 1266) >= (unsigned __int16)v26 )
      *(_WORD *)(a1 + 1266) = v26;
  }
  if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline(v26, v25, v12, v19) )
    return PpmEventHgsContainmentUnparkedCountEx(v28, v32, a3, a1, v30, v20, v23, (__int64)a2);
  else
    return PpmEventHgsContainmentUnparkedCount(v28, v32, a3, a1, v30, v20, v23, (__int64)a2);
}
