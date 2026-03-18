/*
 * XREFs of PpmCheckComputeHeteroResponse @ 0x140408E70
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     PpmCheckComputeMultiClassHeteroResponse @ 0x140407D0C (PpmCheckComputeMultiClassHeteroResponse.c)
 *     PpmEventTraceHeteroResponse @ 0x140409318 (PpmEventTraceHeteroResponse.c)
 *     PpmParkCalculateUnparkCount @ 0x140409510 (PpmParkCalculateUnparkCount.c)
 *     PpmHeteroIsMultiClassParkingEnabled @ 0x140409E50 (PpmHeteroIsMultiClassParkingEnabled.c)
 *     PpmHeteroUtilityGreaterThanOrEqualThreshold @ 0x14040A458 (PpmHeteroUtilityGreaterThanOrEqualThreshold.c)
 *     qsort @ 0x1404FC5A0 (qsort.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char PpmCheckComputeHeteroResponse()
{
  __int64 v0; // rcx
  char v1; // si
  __int64 v2; // rdi
  int v3; // r14d
  __int64 v4; // rbx
  unsigned __int64 v5; // r15
  __int64 v6; // r13
  __int64 v7; // r12
  unsigned int v8; // ecx
  unsigned __int64 v9; // rdx
  _DWORD *Prcb; // rax
  unsigned int v11; // ecx
  int v12; // edx
  int v13; // edx
  unsigned int v14; // eax
  bool v15; // zf
  __int64 v17; // rcx
  int v18; // r10d
  __int64 v19; // r9
  _QWORD *v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  int *v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  unsigned __int8 v27; // cl
  unsigned int v28; // r13d
  __int64 v29; // rbx
  int v30; // r15d
  int v31; // eax
  int v32; // r9d
  int v33; // ecx
  unsigned __int8 v34; // al
  unsigned int v35; // edx
  int v36; // r9d
  int v37; // eax
  int v38; // [rsp+38h] [rbp-D0h]
  int v39; // [rsp+40h] [rbp-C8h]
  char *v40; // [rsp+48h] [rbp-C0h]
  unsigned int v41; // [rsp+50h] [rbp-B8h]
  __int64 v42; // [rsp+58h] [rbp-B0h]
  _DWORD v43[64]; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD Base[64]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v45[64]; // [rsp+268h] [rbp+160h] BYREF

  v0 = 488LL * dword_140F0B70C;
  v40 = (char *)PpmCurrentProfile[0] + v0 + 40;
  if ( PpmHeteroPolicy == 4 )
  {
    if ( (unsigned __int8)PpmHeteroIsMultiClassParkingEnabled() )
    {
      PpmCheckComputeMultiClassHeteroResponse();
      return 1;
    }
    v0 = 0LL;
    v39 = 0;
    if ( PpmParkNumNodes )
    {
LABEL_4:
      v1 = 0;
      v2 = PpmParkNodes + 208LL * (unsigned int)v0;
      if ( PpmHeteroHgsParkingEnabled && !PpmHeteroPolicy && !*(_BYTE *)(*(_QWORD *)(v2 + 200) + 104LL) )
        goto LABEL_25;
      v3 = 0;
      LOWORD(v4) = *(_WORD *)(v2 + 4);
      v5 = *(_QWORD *)(v2 + 16);
      v6 = 0LL;
      v42 = 0LL;
      v7 = *(unsigned __int8 *)(*(_QWORD *)(v2 + 200) + 108LL);
      v41 = *(unsigned __int8 *)(*(_QWORD *)(v2 + 200) + 108LL);
      while ( 1 )
      {
        v8 = (unsigned __int16)v4 + 1;
        while ( !v5 )
        {
          v4 = (unsigned __int16)(v4 + 1);
          if ( (unsigned int)v4 >= v8 )
          {
            qsort(Base, (unsigned int)v6, 4uLL, PpmUtilityComparer);
            qsort(v43, (unsigned int)v6, 4uLL, PpmUtilityComparer);
            v17 = *(unsigned __int8 *)(v2 + 10);
            v18 = 0;
            v19 = 0LL;
            v38 = 0;
            if ( *(_BYTE *)(v2 + 10) )
            {
              v20 = (_QWORD *)(*(_QWORD *)(v2 + 72) + 8 * v17);
              v21 = *(unsigned __int8 *)(v2 + 10);
              do
              {
                v19 += *v20 * v42;
                v22 = v21;
                v17 = (unsigned int)(v17 - 1);
                --v21;
                v45[v17] = v19;
                v23 = *v20-- * v22;
                v18 += v23;
              }
              while ( (_DWORD)v17 );
              v38 = v18;
            }
            if ( (_DWORD)v7 )
            {
              v24 = v43;
              v25 = v7;
              do
              {
                v26 = *v24++;
                v3 -= v26;
                --v25;
              }
              while ( v25 );
            }
            v27 = *(_BYTE *)(*(_QWORD *)(v2 + 200) + 104LL);
            if ( PpmHeteroHgsParkingEnabled )
              v27 = *(_BYTE *)(v2 + 10);
            v28 = v27;
            LODWORD(v29) = v7;
            if ( (unsigned int)v7 < v27 )
            {
              while ( (unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(
                                      v18,
                                      Base[(unsigned int)v29],
                                      v45[(unsigned int)v29],
                                      (unsigned __int8)v40[(unsigned int)v29 + 307],
                                      0) )
              {
                if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(v38, v3, 0, v36, 0) )
                  break;
                v37 = v43[(unsigned int)v29];
                LODWORD(v29) = v29 + 1;
                v3 -= v37;
                if ( (unsigned int)v29 >= v28 )
                  break;
                v18 = v38;
              }
              LODWORD(v7) = v41;
              if ( (unsigned int)v29 <= v41 )
              {
LABEL_41:
                v18 = v38;
                goto LABEL_38;
              }
              v33 = 2;
            }
            else
            {
LABEL_38:
              while ( 2 )
              {
                v30 = v29;
                if ( (_DWORD)v29 )
                {
                  v29 = (unsigned int)(v29 - 1);
                  v3 += v43[v29];
                  v31 = PpmHeteroUtilityGreaterThanOrEqualThreshold(
                          v18,
                          Base[v29],
                          v45[v29],
                          (unsigned __int8)v40[v29 + 179],
                          0);
                  v18 = v38;
                  if ( !v31 )
                    continue;
                  if ( !(unsigned int)PpmHeteroUtilityGreaterThanOrEqualThreshold(v38, v3, 0, v32, 0) )
                    goto LABEL_41;
                  LODWORD(v29) = v30;
                }
                break;
              }
              v33 = (unsigned int)v29 < (unsigned int)v7;
            }
            if ( *(char *)(v2 + 124) == v33 )
            {
              v34 = *(_BYTE *)(v2 + 122) + 1;
              v35 = v34;
              *(_BYTE *)(v2 + 122) = v34;
            }
            else
            {
              *(_BYTE *)(v2 + 124) = v33;
              v35 = 1;
              *(_BYTE *)(v2 + 122) = 1;
              v1 = 4;
            }
            if ( PpmCheckCurrentPipelineId == 5 )
            {
              v1 |= 0x10u;
              goto LABEL_21;
            }
            if ( v33 == 2 )
            {
              if ( v35 >= (unsigned __int8)v40[178] )
              {
                v1 |= 0x20u;
LABEL_21:
                *(_BYTE *)(*(_QWORD *)(v2 + 200) + 107LL) = v29;
              }
            }
            else if ( v33 == 1 && v35 >= (unsigned __int8)v40[177] )
            {
              v1 |= 0x40u;
              goto LABEL_21;
            }
            v15 = PpmHeteroHgsParkingEnabled == 0;
            *(_BYTE *)(v2 + 120) = *(_BYTE *)(v2 + 120) & 0xF9 | 4;
            if ( !v15 )
            {
              v1 |= 0x80u;
              *(_BYTE *)(*(_QWORD *)(v2 + 200) + 108LL) = *(_BYTE *)(*(_QWORD *)(v2 + 200) + 107LL);
              *(_BYTE *)(v2 + 184) = *(_BYTE *)(*(_QWORD *)(v2 + 200) + 107LL);
            }
            PpmEventTraceHeteroResponse(v2, (unsigned int)Base, (unsigned int)v45, v38, v29, v1 | 1);
            LODWORD(v0) = v39;
LABEL_25:
            v0 = (unsigned int)(v0 + 1);
            v39 = v0;
            if ( (unsigned int)v0 >= PpmParkNumNodes )
              goto LABEL_26;
            goto LABEL_4;
          }
          v5 = *(_QWORD *)(8 * v4 + 8);
        }
        _BitScanForward64(&v9, v5);
        v5 &= ~(1LL << v9);
        Prcb = (_DWORD *)KeGetPrcb(*((_DWORD *)qword_140F216A8 + 64 * (unsigned __int16)v4 + (unsigned __int8)v9));
        v11 = Prcb[8822];
        if ( PpmCheckCurrentPipelineId != 5 )
          v11 -= Prcb[8824];
        v12 = Prcb[8828];
        if ( v12 )
          v11 = (v12 * v11) >> 16;
        Base[v6] = v11;
        v13 = Prcb[8828];
        v14 = Prcb[8825];
        if ( v13 )
          v14 = (v13 * v14) >> 16;
        v43[v6] = v14;
        v3 += v14;
        v42 += v11;
        v6 = (unsigned int)(v6 + 1);
      }
    }
  }
LABEL_26:
  PpmParkCalculateUnparkCount(v0);
  return 1;
}
