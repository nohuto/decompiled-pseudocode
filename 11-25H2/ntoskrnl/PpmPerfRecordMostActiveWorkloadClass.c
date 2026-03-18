/*
 * XREFs of PpmPerfRecordMostActiveWorkloadClass @ 0x1403B0CE4
 * Callers:
 *     PpmParkRecordNodeStatistics @ 0x1403B1824 (PpmParkRecordNodeStatistics.c)
 * Callees:
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     PpmEventHgsActiveWorkloadClass @ 0x140483748 (PpmEventHgsActiveWorkloadClass.c)
 *     Feature_NewWpsAssignmentAlgorithm__private_IsEnabledPreCheck @ 0x1404A4928 (Feature_NewWpsAssignmentAlgorithm__private_IsEnabledPreCheck.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall PpmPerfRecordMostActiveWorkloadClass(__int64 a1)
{
  int v2; // edi
  char v3; // r12
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r15
  char v6; // r13
  __int64 v7; // rbx
  unsigned int v8; // esi
  __int64 v9; // rdi
  unsigned __int64 v10; // r12
  unsigned int v11; // ecx
  __int64 i; // r8
  unsigned __int64 v13; // rdx
  __int64 Prcb; // rax
  __int64 v15; // rdx
  char v16; // di
  char v17; // bl
  char v18; // [rsp+20h] [rbp-248h]
  _QWORD v19[32]; // [rsp+30h] [rbp-238h] BYREF
  _QWORD v20[32]; // [rsp+130h] [rbp-138h] BYREF

  if ( PpmHeteroHgsParkingEnabled )
  {
    v2 = PpmHeteroWorkloadClasses;
    if ( (unsigned int)PpmHeteroWorkloadClasses <= 0x20 )
    {
      v3 = -1;
      v18 = -1;
      v4 = 0LL;
      v5 = 0LL;
      v6 = -1;
      memset_0(v20, 0, sizeof(v20));
      memset_0(v19, 0, sizeof(v19));
      v7 = 0LL;
      v8 = 1;
      if ( v2 )
      {
        do
        {
          LOWORD(v9) = *(_WORD *)(a1 + 4);
          v10 = *(_QWORD *)(a1 + 16);
LABEL_6:
          v11 = (unsigned __int16)v9 + 1;
          for ( i = (unsigned int)v7; ; i = (unsigned int)v7 )
          {
            if ( v10 )
            {
              _BitScanForward64(&v13, v10);
              v10 &= ~(1LL << v13);
              Prcb = KeGetPrcb(*((_DWORD *)qword_140F216A8 + 64 * (unsigned __int16)v9 + (unsigned __int8)v13));
              v15 = *(_QWORD *)(Prcb + 35416);
              v20[v7] += *(_QWORD *)(*(_QWORD *)(Prcb + 35424) + 8 * v7 + 8);
              v19[v7] += *(_QWORD *)(v15 + 8 * v7 + 8);
              goto LABEL_6;
            }
            v9 = (unsigned __int16)(v9 + 1);
            if ( (unsigned int)v9 >= v11 )
              break;
            v10 = *(_QWORD *)(8 * v9 + 8);
          }
          if ( v20[i] <= v4 )
          {
            v3 = v18;
          }
          else
          {
            v4 = v20[i];
            v18 = v7;
            v3 = v7;
          }
          if ( v19[i] > v5 )
          {
            v5 = v19[i];
            v6 = v7;
          }
          v7 = (unsigned int)(v7 + 1);
        }
        while ( (unsigned int)v7 < PpmHeteroWorkloadClasses );
      }
      v16 = 0;
      if ( v6 != -1 )
        v16 = v6;
      v17 = 0;
      if ( v3 != -1 )
        v17 = v3;
      Feature_NewWpsAssignmentAlgorithm__private_IsEnabledPreCheck();
      if ( v5 || v4 )
      {
        if ( 100 * v5 / (v4 + v5) >= (unsigned int)PpmHeteroWpsWorkloadProminenceCutoff )
        {
          if ( 100 * v4 / (v4 + v5) < (unsigned int)PpmHeteroWpsWorkloadProminenceCutoff )
            v17 = v16;
          else
            v8 = 4;
        }
        else
        {
          v16 = v17;
          v8 = 2;
        }
      }
      else
      {
        v8 = 8;
      }
      *(_BYTE *)(a1 + 188) = v16;
      *(_BYTE *)(a1 + 187) = v17;
      PpmEventHgsActiveWorkloadClass(a1, v20, v19, v8);
    }
  }
}
