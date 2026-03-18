/*
 * XREFs of PpmHeteroHgsCalculateContainmentCount @ 0x14040A0EC
 * Callers:
 *     PpmParkCalculateUnparkCount @ 0x140409510 (PpmParkCalculateUnparkCount.c)
 * Callees:
 *     PpmEventHgsContainmentUnparkedCount @ 0x14040A4EC (PpmEventHgsContainmentUnparkedCount.c)
 *     Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline @ 0x1404F2210 (Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall PpmHeteroHgsCalculateContainmentCount(__int64 a1, _DWORD *a2, unsigned __int8 a3)
{
  __int64 result; // rax
  char v4; // r14
  unsigned int v5; // r10d
  __int64 v8; // rbx
  char v9; // al
  __int64 *v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // r9d
  __int64 v13; // rdx
  unsigned int v14; // r15d
  unsigned int v15; // r12d
  int v16; // eax
  int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r8d
  char v21; // r13
  _BYTE *v22; // rcx
  char v23; // r10
  int v24; // eax
  unsigned int v25; // edx
  unsigned __int8 v26; // r8
  int v27; // eax
  unsigned __int8 v28; // al
  unsigned __int8 v29; // r9
  unsigned __int8 v30; // r8
  unsigned __int8 v31; // cl
  char v32; // [rsp+40h] [rbp-48h]
  int v33; // [rsp+44h] [rbp-44h]
  char v35; // [rsp+A8h] [rbp+20h]

  result = (unsigned int)PpmHeteroHgsContainmentState;
  v4 = 0;
  v5 = a3;
  if ( (PpmHeteroHgsContainmentState & 8) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 192);
    v35 = *(_BYTE *)(a1 + 185);
    v9 = *(_BYTE *)(a1 + 184);
    v10 = PpmCurrentProfile[0];
    v32 = v9;
    v11 = 61LL * dword_140F0B70C;
    v12 = PpmCurrentProfile[0][v11 + 64];
    if ( !v12 )
      v12 = *(unsigned __int8 *)(v8 + 8);
    v13 = HIDWORD(PpmCurrentProfile[0][v11 + 64]);
    if ( !(_DWORD)v13 )
      v13 = *(unsigned __int8 *)(v8 + 9);
    v14 = HIDWORD(PpmCurrentProfile[0][v11 + 63]);
    v15 = PpmCurrentProfile[0][v11 + 63];
    v33 = *(_DWORD *)(v8 + 4);
    v16 = *(unsigned __int8 *)(a1 + 184);
    if ( (_BYTE)v16 )
    {
      v10 = (__int64 *)((unsigned int)*(unsigned __int8 *)(a1 + 185) + v16);
      v17 = ((unsigned __int8)v13 < (unsigned int)v10) + 1;
    }
    else
    {
      v17 = v5 > v12;
    }
    if ( (unsigned int)Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline(v10, v13)
      && *(_BYTE *)(v8 + 808)
      && !v17
      && *(_DWORD *)(v8 + 812) == 1 )
    {
      *a2 |= 0x100u;
      v17 = 1;
    }
    v21 = v17;
    if ( !*(_BYTE *)(v8 + 824) )
    {
      if ( !(unsigned int)Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline(v19, v18)
        && !*(_DWORD *)(v8 + 4)
        && *(_BYTE *)(v8 + 808)
        && *(_DWORD *)(v8 + 812) == 1 )
      {
        *a2 |= 0x100u;
        v17 = 1;
        v21 = 1;
      }
      v27 = *(_DWORD *)(v8 + 4);
      if ( v27 != v17 )
      {
        if ( v27 == 2 || v17 == 2 )
        {
          *(_BYTE *)(v8 + 816) = 1;
          *a2 |= 0x40u;
        }
        else
        {
          *(_BYTE *)(v8 + 824) = 1;
          if ( v17 == 1 )
          {
            *(_BYTE *)(v8 + 825) = 1;
          }
          else if ( !v17 )
          {
            *(_BYTE *)(v8 + 826) = 1;
          }
        }
      }
    }
    if ( *(_BYTE *)(v8 + 825) )
    {
      if ( ++*(_DWORD *)(v8 + 820) >= v14 )
      {
        if ( (unsigned int)(v17 - 1) <= 1 )
        {
          *(_BYTE *)(v8 + 816) = 1;
          *a2 |= 0x10u;
        }
        v4 = 1;
      }
      v22 = (_BYTE *)(v8 + 826);
    }
    else
    {
      v22 = (_BYTE *)(v8 + 826);
      if ( *(_BYTE *)(v8 + 826) )
      {
        if ( ++*(_DWORD *)(v8 + 820) >= v15 )
        {
          if ( !v17 )
          {
            if ( *(_BYTE *)(v8 + 808) && *(_DWORD *)(v8 + 812) == 1 && *(_DWORD *)(v8 + 4) == 1 )
            {
              *a2 |= 0x100u;
              v21 = 1;
            }
            else
            {
              *(_BYTE *)(v8 + 816) = 1;
              *a2 |= 0x20u;
            }
          }
          v4 = 1;
        }
      }
    }
    v23 = *(_BYTE *)(v8 + 816);
    if ( v23 )
    {
      *(_DWORD *)(v8 + 4) = v17;
    }
    else if ( !v4 )
    {
      goto LABEL_14;
    }
    *a2 |= 0x80u;
    *(_WORD *)(v8 + 824) = 0;
    *(_BYTE *)(v8 + 816) = 0;
    *(_DWORD *)(v8 + 820) = 0;
    *v22 = 0;
LABEL_14:
    v24 = *(_DWORD *)(v8 + 4);
    v25 = *(unsigned __int8 *)(v8 + 9);
    v26 = *(_BYTE *)(v8 + 8);
    if ( v24 )
    {
      if ( v24 != 1 )
        goto LABEL_16;
      v28 = *(_BYTE *)(a1 + 185);
      if ( v28 > (unsigned __int8)v25 )
      {
        *(_BYTE *)(a1 + 185) = v25;
        v28 = v25;
      }
      v29 = *(_BYTE *)(a1 + 184);
      if ( v29 > (unsigned __int8)v25 )
      {
        *(_BYTE *)(a1 + 184) = v25;
        v29 = v25;
      }
      v30 = v28;
      if ( v28 == (_BYTE)v25 && v29 == (_BYTE)v25 )
      {
        v30 = v28 - v25;
        *(_BYTE *)(a1 + 185) = v28 - v25;
      }
      LODWORD(v22) = v30 + v29;
      if ( (unsigned int)v22 <= v25 || !(v30 + v29 - (_BYTE)v25) )
        goto LABEL_16;
      if ( v29 > v30 )
      {
        *(_BYTE *)(a1 + 184) = v25 - v30;
LABEL_16:
        LOBYTE(v20) = a3;
        LOBYTE(v25) = v35;
        LOBYTE(v22) = v32;
        return PpmEventHgsContainmentUnparkedCount((_DWORD)v22, v25, v20, a1, v33, v21, v23, (__int64)a2);
      }
      v26 = v25 - v29;
    }
    else
    {
      v31 = *(_BYTE *)(a1 + 184) + *(_BYTE *)(a1 + 185);
      *(_BYTE *)(a1 + 185) = v31;
      *(_BYTE *)(a1 + 184) = 0;
      if ( v31 < v26 )
        goto LABEL_16;
    }
    *(_BYTE *)(a1 + 185) = v26;
    goto LABEL_16;
  }
  return result;
}
