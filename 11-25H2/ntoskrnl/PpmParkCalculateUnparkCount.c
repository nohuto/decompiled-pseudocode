/*
 * XREFs of PpmParkCalculateUnparkCount @ 0x140409510
 * Callers:
 *     PpmCheckComputeMultiClassHeteroResponse @ 0x140407D0C (PpmCheckComputeMultiClassHeteroResponse.c)
 *     PpmCheckComputeHeteroResponse @ 0x140408E70 (PpmCheckComputeHeteroResponse.c)
 * Callees:
 *     PpmHeteroIsMultiClassParkingEnabled @ 0x140409E50 (PpmHeteroIsMultiClassParkingEnabled.c)
 *     PpmEventParkingCountSelection @ 0x140409E6C (PpmEventParkingCountSelection.c)
 *     PpmEventHgsCoresUnparkedCount @ 0x140409FC8 (PpmEventHgsCoresUnparkedCount.c)
 *     PpmHeteroHgsCalculateContainmentCount @ 0x14040A0EC (PpmHeteroHgsCalculateContainmentCount.c)
 */

char PpmParkCalculateUnparkCount()
{
  unsigned int v0; // r8d
  int v1; // r9d
  __int64 v2; // rcx
  unsigned int v3; // r12d
  unsigned int v4; // r13d
  unsigned __int16 v5; // r14
  __int64 v7; // rbx
  unsigned __int8 v8; // si
  unsigned int v9; // r14d
  char *v10; // rdi
  char v11; // r11
  char v12; // al
  char v13; // bp
  _BYTE *v14; // rcx
  char v15; // r8
  char v16; // r9
  char v17; // r15
  unsigned __int8 v18; // dl
  unsigned __int8 v19; // cl
  char v20; // r8
  unsigned __int8 v21; // r9
  unsigned __int8 v22; // r10
  unsigned int v23; // r11d
  __int64 v24; // r8
  __int64 v25; // rdx
  bool v26; // zf
  int v27; // edx
  int v28; // r9d
  int v29; // ecx
  int v30; // r8d
  unsigned __int8 v31; // al
  char v32; // dl
  unsigned int v33[22]; // [rsp+60h] [rbp-58h] BYREF
  char v34; // [rsp+C0h] [rbp+8h]
  char v35; // [rsp+C8h] [rbp+10h]
  unsigned __int16 v36; // [rsp+D8h] [rbp+20h]

  v0 = 0;
  v33[0] = 0;
  v1 = 1;
  if ( PpmIsParkingEnabled )
  {
    v2 = 61LL * dword_140F0B70C;
    v3 = PpmCurrentProfile[0][v2 + 24];
    v4 = HIDWORD(PpmCurrentProfile[0][v2 + 23]);
    v35 = BYTE1(PpmCurrentProfile[0][v2 + 23]);
    v34 = PpmCurrentProfile[0][v2 + 23];
    if ( PpmCheckCurrentPipelineId == 5 )
    {
      v4 = 0;
      v3 = 0;
    }
    v5 = 0;
    v36 = 0;
    if ( PpmParkNumNodes )
    {
      while ( 1 )
      {
        v7 = PpmParkNodes + 208LL * v5;
        if ( ((unsigned __int8)v1 & *(_BYTE *)(v7 + 120)) == 0 )
        {
          *(_DWORD *)v7 += v1;
          v8 = v0;
          if ( *(_BYTE *)(v7 + 11) > (unsigned __int8)v0 )
            break;
        }
LABEL_14:
        v5 += v1;
        v36 = v5;
        if ( v5 >= (unsigned int)PpmParkNumNodes )
          return v1;
      }
      v9 = *(_DWORD *)v7;
      while ( 1 )
      {
        v10 = (char *)(*(_QWORD *)(v7 + 200) + 104LL * v8);
        v11 = *v10;
        v33[0] = v0;
        if ( ((unsigned __int8)(v8 != 0 ? 4 : 2) & *(_BYTE *)(v7 + 120)) == 0
          || (v26 = (unsigned __int8)((__int64 (*)(void))PpmHeteroIsMultiClassParkingEnabled)() == 0, v12 = v1, !v26) )
        {
          v12 = v0;
        }
        if ( !v11 || v12 )
          goto LABEL_12;
        v13 = PpmParkUnparkCores;
        if ( (unsigned __int8)((__int64 (*)(void))PpmHeteroIsMultiClassParkingEnabled)() )
        {
          if ( *(_BYTE *)(v7 + 121) == v15 )
            goto LABEL_19;
          v16 = v10[3];
          LOBYTE(v14) = v10[98];
        }
        else
        {
          if ( v8 || *(_BYTE *)(v7 + 121) == v15 || (v14 = *(_BYTE **)(v7 + 200), v14[107] < v14[109]) )
          {
LABEL_19:
            LOBYTE(v14) = *(_BYTE *)(v7 + 117);
            v16 = *(_BYTE *)(v7 + 116);
            goto LABEL_20;
          }
          v16 = v14[97];
          LOBYTE(v14) = v14[98];
        }
LABEL_20:
        v17 = v16;
        if ( (unsigned __int8)PpmHeteroIsMultiClassParkingEnabled(v14) && *(_BYTE *)(v7 + 121) != v20
          || v13 && PpmParkGranularity != 1
          || v19 <= v18
          || v21 >= (unsigned __int8)v23 )
        {
          v24 = v33[0];
        }
        else
        {
          ++v21;
          v24 = v33[0] | 1;
          v33[0] |= 1u;
        }
        v25 = (unsigned __int8)v10[4];
        if ( v13 )
        {
          v24 = (unsigned int)v24 | 2;
          v25 = (unsigned int)v25 / (unsigned __int8)PpmParkGranularity;
          v33[0] = v24;
        }
        if ( (unsigned __int8)v25 > v21 )
        {
          if ( (unsigned __int8)v25 >= v22 && v9 >= v4 )
          {
            v24 = (unsigned int)v24 | 8;
            v33[0] = v24;
            *(_DWORD *)v7 = 0;
            switch ( v34 )
            {
              case 0:
                goto LABEL_68;
              case 1:
                LOBYTE(v25) = v25 - v22;
                break;
              case 2:
                goto LABEL_66;
              case 3:
                v24 = *(unsigned __int8 *)(v7 + 119);
                v22 = PpmParkGranularity;
                if ( (unsigned __int8)v25 <= (unsigned int)v24 + (unsigned __int8)PpmParkGranularity )
LABEL_66:
                  LOBYTE(v25) = v22;
                else
                  LOBYTE(v25) = v25 - v24;
                break;
              default:
                break;
            }
          }
        }
        else
        {
          if ( (unsigned __int8)v25 >= v21 )
            goto LABEL_27;
          if ( (unsigned __int8)v25 >= (unsigned __int8)v23 )
            goto LABEL_42;
          if ( v9 < v3 )
            goto LABEL_28;
          v24 = (unsigned int)v24 | 4;
          v33[0] = v24;
          *(_DWORD *)v7 = 0;
          switch ( v35 )
          {
            case 0:
LABEL_68:
              LOBYTE(v25) = v21;
              break;
            case 1:
              LOBYTE(v25) = v22 + v25;
              break;
            case 2:
              goto LABEL_42;
            case 3:
              v24 = *(unsigned __int8 *)(v7 + 119);
              if ( (unsigned int)v24 + (unsigned __int8)v25 >= v23 )
              {
LABEL_42:
                LOBYTE(v25) = v23;
                goto LABEL_28;
              }
              LOBYTE(v25) = v24 + v25;
              break;
            default:
              goto LABEL_28;
          }
        }
LABEL_27:
        if ( (unsigned __int8)v25 >= (unsigned __int8)v23 )
          goto LABEL_42;
LABEL_28:
        if ( v13 )
          v25 = (unsigned __int8)PpmParkGranularity * (unsigned int)(unsigned __int8)v25;
        v26 = PpmHeteroHgsParkingEnabled == 0;
        v10[3] = v25;
        if ( !v26 )
        {
          v31 = *(_BYTE *)(v7 + 184);
          *(_BYTE *)(v7 + 186) = v25;
          if ( (unsigned __int8)v25 < v31 )
          {
            *(_BYTE *)(v7 + 186) = v31;
            v32 = 0;
          }
          else
          {
            v32 = v25 - v31;
          }
          *(_BYTE *)(v7 + 185) = v32;
          LOBYTE(v24) = v21;
          PpmHeteroHgsCalculateContainmentCount(v7, v33, v24);
        }
        PpmEventHgsCoresUnparkedCount(v7, v25, v24);
        LOBYTE(v27) = v17;
        LOBYTE(v28) = v10[3];
        LOBYTE(v29) = v8;
        LOBYTE(v30) = v10[4];
        PpmEventParkingCountSelection(v29, v27, v30, v28, *v10, v33[0], v35, v34, v3, v4, v9);
        v0 = 0;
        v1 = 1;
LABEL_12:
        v8 += v1;
        if ( v8 >= *(_BYTE *)(v7 + 11) )
        {
          v5 = v36;
          goto LABEL_14;
        }
      }
    }
  }
  return v1;
}
