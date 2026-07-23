/*
 * XREFs of PpmParkCalculateUnparkCount @ 0x140417A80
 * Callers:
 *     PpmCheckComputeMultiClassHeteroResponse @ 0x140416940 (PpmCheckComputeMultiClassHeteroResponse.c)
 *     PpmCheckComputeHeteroResponse @ 0x1404E3AD0 (PpmCheckComputeHeteroResponse.c)
 *     PpmCheckComputeHeteroResponseEx @ 0x1405DC8E0 (PpmCheckComputeHeteroResponseEx.c)
 *     PpmCheckComputeMultiClassHeteroResponseEx @ 0x1405DD1F4 (PpmCheckComputeMultiClassHeteroResponseEx.c)
 * Callees:
 *     PpmHeteroIsMultiClassParkingEnabled @ 0x140407990 (PpmHeteroIsMultiClassParkingEnabled.c)
 *     PpmEventParkingCountSelection @ 0x1404700AC (PpmEventParkingCountSelection.c)
 *     PpmHeteroHgsCalculateContainmentCount @ 0x1404E2A70 (PpmHeteroHgsCalculateContainmentCount.c)
 *     PpmEventHgsCoresUnparkedCount @ 0x1404E4750 (PpmEventHgsCoresUnparkedCount.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmEventParkingCountSelectionEx @ 0x1405DB53C (PpmEventParkingCountSelectionEx.c)
 */

char PpmParkCalculateUnparkCount()
{
  int v0; // r8d
  int v1; // r9d
  __int64 v2; // rcx
  unsigned int v3; // r12d
  unsigned int v4; // r13d
  unsigned __int16 v5; // r14
  __int64 v6; // rbx
  unsigned __int8 v7; // si
  unsigned int v8; // r14d
  __int64 v9; // rdi
  __int16 v10; // r11
  bool v11; // zf
  char v12; // al
  char v13; // bp
  char v14; // r8
  unsigned __int16 v15; // r9
  _WORD *v16; // rcx
  unsigned __int16 v17; // r15
  unsigned __int8 v18; // dl
  unsigned __int8 v19; // cl
  char v20; // r8
  unsigned __int16 v21; // r9
  unsigned __int16 v22; // r10
  unsigned int v23; // r11d
  int v24; // r8d
  __int64 v25; // rdx
  int v26; // r8d
  int v27; // r8d
  __int64 v28; // r8
  unsigned __int16 v29; // ax
  __int16 v30; // dx
  int IsEnabledDeviceUsageNoInline; // eax
  int v32; // edx
  int v33; // r8d
  int v34; // r9d
  int v35; // ecx
  int v37[22]; // [rsp+60h] [rbp-58h] BYREF
  char v38; // [rsp+C0h] [rbp+8h]
  char v39; // [rsp+C8h] [rbp+10h]
  unsigned __int16 v40; // [rsp+D8h] [rbp+20h]

  v0 = 0;
  v37[0] = 0;
  v1 = 1;
  if ( PpmIsParkingEnabled )
  {
    v2 = 61LL * dword_140F0B38C;
    v3 = PpmCurrentProfile[0][v2 + 24];
    v4 = HIDWORD(PpmCurrentProfile[0][v2 + 23]);
    v39 = BYTE1(PpmCurrentProfile[0][v2 + 23]);
    v38 = PpmCurrentProfile[0][v2 + 23];
    if ( PpmCheckCurrentPipelineId == 5 )
    {
      v4 = 0;
      v3 = 0;
    }
    v5 = 0;
    v40 = 0;
    if ( PpmParkNumNodes )
    {
      while ( 1 )
      {
        v6 = PpmParkNodes + 1296LL * v5;
        if ( ((unsigned __int8)v1 & *(_BYTE *)(v6 + 1184)) == 0 )
        {
          *(_DWORD *)v6 += v1;
          v7 = v0;
          if ( *(_BYTE *)(v6 + 12) > (unsigned __int8)v0 )
            break;
        }
LABEL_68:
        v5 += v1;
        v40 = v5;
        if ( v5 >= (unsigned int)PpmParkNumNodes )
          return v1;
      }
      v8 = *(_DWORD *)v6;
      while ( 1 )
      {
        v9 = *(_QWORD *)(v6 + 1288) + 640LL * v7;
        v10 = *(_WORD *)v9;
        v37[0] = v0;
        if ( ((unsigned __int8)(v7 != 0 ? 4 : 2) & *(_BYTE *)(v6 + 1184)) == 0
          || (v11 = !PpmHeteroIsMultiClassParkingEnabled(), v12 = v1, !v11) )
        {
          v12 = v0;
        }
        if ( !v10 || v12 )
          goto LABEL_66;
        v13 = PpmParkUnparkCores;
        if ( PpmHeteroIsMultiClassParkingEnabled() )
        {
          if ( *(_BYTE *)(v6 + 1185) != v14 )
          {
            v15 = *(_WORD *)(v9 + 6);
            goto LABEL_21;
          }
        }
        else if ( !v7 && *(_BYTE *)(v6 + 1185) != v14 )
        {
          v16 = *(_WORD **)(v6 + 1288);
          if ( v16[323] >= v16[325] )
          {
            v15 = v16[317];
            goto LABEL_21;
          }
        }
        v15 = *(_WORD *)(v6 + 1176);
LABEL_21:
        v17 = v15;
        if ( PpmHeteroIsMultiClassParkingEnabled() && *(_BYTE *)(v6 + 1185) != v20
          || v13 && PpmParkGranularity != 1
          || v21 >= (unsigned __int16)v23
          || v19 <= v18 )
        {
          v24 = v37[0];
        }
        else
        {
          ++v21;
          v24 = v37[0] | 1;
          v37[0] |= 1u;
        }
        v25 = *(unsigned __int16 *)(v9 + 8);
        if ( v13 )
        {
          v24 |= 2u;
          v37[0] = v24;
          v25 = (unsigned int)v25 / (unsigned __int16)PpmParkGranularity;
        }
        if ( (unsigned __int16)v25 >= v21 )
        {
          if ( (unsigned __int16)v25 > v21 && (unsigned __int16)v25 >= v22 && v8 >= v4 )
          {
            v37[0] = v24 | 8;
            *(_DWORD *)v6 = 0;
            switch ( v38 )
            {
              case 0:
                goto LABEL_52;
              case 1:
                LOWORD(v25) = v25 - v22;
                break;
              case 2:
                goto LABEL_50;
              case 3:
                v27 = *(unsigned __int16 *)(v6 + 1182);
                v22 = PpmParkGranularity;
                if ( (unsigned __int16)v25 <= v27 + (unsigned int)(unsigned __int16)PpmParkGranularity )
LABEL_50:
                  v25 = v22;
                else
                  LOWORD(v25) = v25 - v27;
                break;
              default:
                break;
            }
          }
        }
        else
        {
          if ( (unsigned __int16)v25 >= (unsigned __int16)v23 )
            goto LABEL_54;
          if ( v8 < v3 )
            goto LABEL_55;
          v37[0] = v24 | 4;
          *(_DWORD *)v6 = 0;
          switch ( v39 )
          {
            case 0:
LABEL_52:
              v25 = v21;
              break;
            case 1:
              LOWORD(v25) = v22 + v25;
              break;
            case 2:
              goto LABEL_54;
            case 3:
              v26 = *(unsigned __int16 *)(v6 + 1182);
              if ( v26 + (unsigned int)(unsigned __int16)v25 >= v23 )
                goto LABEL_54;
              LOWORD(v25) = v26 + v25;
              break;
            default:
              goto LABEL_55;
          }
        }
        if ( (unsigned __int16)v25 >= (unsigned __int16)v23 )
LABEL_54:
          v25 = (unsigned __int16)v23;
LABEL_55:
        v28 = 0LL;
        if ( v13 )
          v25 = (unsigned __int16)PpmParkGranularity * (unsigned int)(unsigned __int16)v25;
        v11 = PpmHeteroHgsParkingEnabled == 0;
        *(_WORD *)(v9 + 6) = v25;
        if ( !v11 )
        {
          v29 = *(_WORD *)(v6 + 1264);
          *(_WORD *)(v6 + 1268) = v25;
          if ( (unsigned __int16)v25 >= v29 )
          {
            v30 = v25 - v29;
          }
          else
          {
            *(_WORD *)(v6 + 1268) = v29;
            v30 = 0;
          }
          *(_WORD *)(v6 + 1266) = v30;
          PpmHeteroHgsCalculateContainmentCount(v6, v37, v21);
        }
        PpmEventHgsCoresUnparkedCount(v6, v25, v28);
        IsEnabledDeviceUsageNoInline = Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline();
        LOBYTE(v35) = v7;
        if ( IsEnabledDeviceUsageNoInline )
        {
          PpmEventParkingCountSelectionEx(
            v35,
            v17,
            *(unsigned __int16 *)(v9 + 8),
            *(unsigned __int16 *)(v9 + 6),
            *(_WORD *)v9,
            v37[0],
            v39,
            v38,
            v3,
            v4,
            v8);
        }
        else
        {
          LOBYTE(v32) = v17;
          LOBYTE(v34) = *(_BYTE *)(v9 + 6);
          LOBYTE(v33) = *(_BYTE *)(v9 + 8);
          PpmEventParkingCountSelection(v35, v32, v33, v34, *(_BYTE *)v9, v37[0], v39, v38, v3, v4, v8);
        }
        v1 = 1;
        v0 = 0;
LABEL_66:
        v7 += v1;
        if ( v7 >= *(_BYTE *)(v6 + 12) )
        {
          v5 = v40;
          goto LABEL_68;
        }
      }
    }
  }
  return v1;
}
