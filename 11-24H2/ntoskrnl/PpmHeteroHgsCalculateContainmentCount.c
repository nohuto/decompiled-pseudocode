/*
 * XREFs of PpmHeteroHgsCalculateContainmentCount @ 0x1404EBB30
 * Callers:
 *     PpmParkCalculateUnparkCount @ 0x140423BD0 (PpmParkCalculateUnparkCount.c)
 * Callees:
 *     Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline @ 0x140457B34 (Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmEventHgsContainmentUnparkedCount @ 0x1404B0DD0 (PpmEventHgsContainmentUnparkedCount.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B4FB0 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_WpsHybridToNoneZoneFix__private_IsEnabledDeviceUsageNoInline @ 0x1405D6D5C (Feature_WpsHybridToNoneZoneFix__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmEventHgsContainmentUnparkedCountEx @ 0x1405DD848 (PpmEventHgsContainmentUnparkedCountEx.c)
 */

BOOLEAN __fastcall PpmHeteroHgsCalculateContainmentCount(__int64 a1, int *a2, unsigned __int16 a3)
{
  BOOLEAN result; // al
  char v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned int v9; // eax
  unsigned int v10; // r14d
  unsigned int v11; // r13d
  int v12; // ecx
  unsigned int v13; // r15d
  int v14; // ebp
  int v15; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v17; // r9
  char v18; // r15
  int v19; // eax
  int v20; // eax
  _BYTE *v21; // rcx
  char v22; // r14
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned __int16 v26; // ax
  unsigned __int16 v27; // [rsp+40h] [rbp-48h]
  int v28; // [rsp+44h] [rbp-44h]
  unsigned int v29; // [rsp+48h] [rbp-40h]
  unsigned __int16 v31; // [rsp+A8h] [rbp+20h]

  result = PpmHeteroHgsContainmentState;
  v6 = 0;
  if ( (PpmHeteroHgsContainmentState & 8) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 1272);
    v31 = *(_WORD *)(a1 + 1258);
    v27 = *(_WORD *)(a1 + 1256);
    v8 = 61LL * dword_140F0BA4C;
    v9 = PpmCurrentProfile[0][v8 + 64];
    if ( !v9 )
      v9 = *(unsigned __int16 *)(v7 + 8);
    v10 = HIDWORD(PpmCurrentProfile[0][v8 + 64]);
    if ( !v10 )
      v10 = *(unsigned __int16 *)(v7 + 10);
    v11 = HIDWORD(PpmCurrentProfile[0][v8 + 63]);
    v29 = PpmCurrentProfile[0][v8 + 63];
    v28 = *(_DWORD *)(v7 + 4);
    v12 = *(unsigned __int16 *)(a1 + 1256);
    if ( (_WORD)v12 )
    {
      v14 = ((unsigned __int16)v10 < (unsigned int)*(unsigned __int16 *)(a1 + 1258) + v12) + 1;
    }
    else
    {
      v13 = a3;
      if ( a3 > v9 )
      {
        v14 = 1;
        if ( (unsigned int)Feature_WpsHybridToNoneZoneFix__private_IsEnabledDeviceUsageNoInline() )
        {
          v15 = *a2 | 0x2000;
          *a2 = v15;
          if ( v13 > v10 )
          {
            v14 = 2;
            *a2 = v15 | 0x4000;
          }
        }
      }
      else
      {
        v14 = 0;
      }
    }
    IsEnabledDeviceUsageNoInline = Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline();
    v17 = 0LL;
    if ( IsEnabledDeviceUsageNoInline && *(_BYTE *)(v7 + 808) && !v14 && *(_DWORD *)(v7 + 812) == 1 )
    {
      *a2 |= 0x100u;
      v14 = 1;
    }
    v18 = v14;
    if ( !*(_BYTE *)(v7 + 824) )
    {
      v19 = Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline();
      v17 = 0LL;
      if ( !v19 && !*(_DWORD *)(v7 + 4) && *(_BYTE *)(v7 + 808) && *(_DWORD *)(v7 + 812) == 1 )
      {
        *a2 |= 0x100u;
        v14 = 1;
        v18 = 1;
      }
      v20 = *(_DWORD *)(v7 + 4);
      if ( v20 != v14 )
      {
        if ( v20 == 2 || v14 == 2 )
        {
          *(_BYTE *)(v7 + 816) = 1;
          *a2 |= 0x40u;
        }
        else
        {
          *(_BYTE *)(v7 + 824) = 1;
          if ( v14 == 1 )
          {
            *(_BYTE *)(v7 + 825) = 1;
          }
          else if ( !v14 )
          {
            *(_BYTE *)(v7 + 826) = 1;
          }
        }
      }
    }
    if ( *(_BYTE *)(v7 + 825) )
    {
      if ( ++*(_DWORD *)(v7 + 820) >= v11 )
      {
        if ( (unsigned int)(v14 - 1) <= 1 )
        {
          *(_BYTE *)(v7 + 816) = 1;
          *a2 |= 0x10u;
        }
        v6 = 1;
      }
      v21 = (_BYTE *)(v7 + 826);
    }
    else
    {
      v21 = (_BYTE *)(v7 + 826);
      if ( *(_BYTE *)(v7 + 826) )
      {
        if ( ++*(_DWORD *)(v7 + 820) >= v29 )
        {
          if ( !v14 )
          {
            if ( *(_BYTE *)(v7 + 808) && *(_DWORD *)(v7 + 812) == 1 && *(_DWORD *)(v7 + 4) == 1 )
            {
              *a2 |= 0x100u;
              v18 = 1;
            }
            else
            {
              *(_BYTE *)(v7 + 816) = 1;
              *a2 |= 0x20u;
            }
          }
          v6 = 1;
        }
      }
    }
    v22 = *(_BYTE *)(v7 + 816);
    if ( v22 )
    {
      *(_DWORD *)(v7 + 4) = v14;
    }
    else if ( !v6 )
    {
      goto LABEL_51;
    }
    *a2 |= 0x80u;
    *(_WORD *)(v7 + 824) = 0;
    *(_BYTE *)(v7 + 816) = 0;
    *(_DWORD *)(v7 + 820) = 0;
    *v21 = 0;
LABEL_51:
    v23 = *(_DWORD *)(v7 + 4);
    v24 = *(unsigned __int16 *)(v7 + 10);
    v25 = *(unsigned __int16 *)(v7 + 8);
    if ( v23 )
    {
      if ( v23 != 1 )
        goto LABEL_68;
      v26 = *(_WORD *)(a1 + 1258);
      if ( v26 > (unsigned __int16)v24 )
      {
        *(_WORD *)(a1 + 1258) = v24;
        v26 = v24;
      }
      v17 = *(unsigned __int16 *)(a1 + 1256);
      if ( (unsigned __int16)v17 > (unsigned __int16)v24 )
      {
        *(_WORD *)(a1 + 1256) = v24;
        v17 = (unsigned __int16)v24;
      }
      v25 = v26;
      if ( v26 == (_WORD)v24 && (_WORD)v17 == (_WORD)v24 )
      {
        LOWORD(v25) = v26 - v24;
        *(_WORD *)(a1 + 1258) = v26 - v24;
      }
      v21 = (_BYTE *)((unsigned __int16)v25 + (unsigned int)(unsigned __int16)v17);
      if ( (unsigned int)v21 <= (unsigned int)v24 || !((_WORD)v25 + (_WORD)v17 - (_WORD)v24) )
        goto LABEL_68;
      if ( (unsigned __int16)v17 > (unsigned __int16)v25 )
      {
        LOWORD(v17) = v24 - v25;
        *(_WORD *)(a1 + 1256) = v24 - v25;
        goto LABEL_68;
      }
      LOWORD(v25) = v24 - v17;
    }
    else
    {
      v21 = (_BYTE *)*(unsigned __int16 *)(a1 + 1258);
      LOWORD(v21) = *(_WORD *)(a1 + 1256) + (_WORD)v21;
      *(_WORD *)(a1 + 1258) = (_WORD)v21;
      *(_WORD *)(a1 + 1256) = 0;
      if ( (unsigned __int16)v21 < (unsigned __int16)v25 )
        goto LABEL_68;
    }
    *(_WORD *)(a1 + 1258) = v25;
LABEL_68:
    if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline(v21, v24, v25, v17) )
      return PpmEventHgsContainmentUnparkedCountEx(v27, v31, a3, a1, v28, v18, v22, (__int64)a2);
    else
      return PpmEventHgsContainmentUnparkedCount(v27, v31, a3, a1, v28, v18, v22, (__int64)a2);
  }
  return result;
}
