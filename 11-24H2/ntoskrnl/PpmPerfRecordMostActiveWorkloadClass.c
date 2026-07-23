/*
 * XREFs of PpmPerfRecordMostActiveWorkloadClass @ 0x1404E26D8
 * Callers:
 *     PpmParkRecordNodeStatistics @ 0x140401FC4 (PpmParkRecordNodeStatistics.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     Feature_NewWpsAssignmentAlgorithm__private_IsEnabledPreCheck @ 0x14049FBE8 (Feature_NewWpsAssignmentAlgorithm__private_IsEnabledPreCheck.c)
 *     PpmEventHgsActiveWorkloadClass @ 0x1404E4500 (PpmEventHgsActiveWorkloadClass.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

_UNKNOWN **__fastcall PpmPerfRecordMostActiveWorkloadClass(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 v2; // rsi
  int v3; // edi
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // r12
  char v6; // r13
  unsigned int v7; // ebx
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 Prcb; // rax
  __int64 v13; // rdx
  char v14; // di
  char v15; // bl
  char v16; // [rsp+28h] [rbp-E0h]
  unsigned int v17; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned __int16 *i; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+38h] [rbp-D0h]
  __int16 v20; // [rsp+40h] [rbp-C8h]
  int v21; // [rsp+42h] [rbp-C6h]
  __int16 v22; // [rsp+46h] [rbp-C2h]
  __int64 v23; // [rsp+48h] [rbp-C0h]
  _QWORD v24[32]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v25[32]; // [rsp+158h] [rbp+50h] BYREF
  _UNKNOWN *retaddr; // [rsp+290h] [rbp+188h] BYREF

  result = &retaddr;
  v23 = a1;
  v2 = a1;
  v21 = 0;
  v22 = 0;
  v17 = 0;
  if ( PpmHeteroHgsParkingEnabled )
  {
    v3 = PpmHeteroWorkloadClasses;
    if ( (unsigned int)PpmHeteroWorkloadClasses <= 0x20 )
    {
      v16 = -1;
      v4 = 0LL;
      v5 = 0LL;
      v6 = -1;
      memset_0(v25, 0, sizeof(v25));
      memset_0(v24, 0, sizeof(v24));
      v7 = 0;
      v8 = 1;
      if ( v3 )
      {
        do
        {
          if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline() )
          {
            v20 = 0;
            v11 = *(_QWORD *)(v2 + 56);
            i = (unsigned __int16 *)(v2 + 48);
            v19 = v11;
            if ( !(unsigned int)KeEnumerateNextProcessor(&v17, &i) )
            {
              do
              {
                Prcb = KeGetPrcb(v17);
                v13 = *(_QWORD *)(Prcb + 35416);
                v25[v7] += *(_QWORD *)(*(_QWORD *)(Prcb + 35424) + 8LL * v7 + 8);
                v24[v7] += *(_QWORD *)(v13 + 8LL * v7 + 8);
              }
              while ( !(unsigned int)KeEnumerateNextProcessor(&v17, &i) );
              v2 = v23;
            }
          }
          else
          {
            v20 = *(_WORD *)(v2 + 4);
            v19 = *(_QWORD *)(v2 + 16);
            for ( i = 0LL; !(unsigned int)KeEnumerateNextProcessor(&v17, &i); v24[v7] += *(_QWORD *)(v10 + 8LL * v7 + 8) )
            {
              v9 = KeGetPrcb(v17);
              v10 = *(_QWORD *)(v9 + 35416);
              v25[v7] += *(_QWORD *)(*(_QWORD *)(v9 + 35424) + 8LL * v7 + 8);
            }
          }
          if ( v25[v7] > v4 )
          {
            v4 = v25[v7];
            v16 = v7;
          }
          if ( v24[v7] > v5 )
          {
            v5 = v24[v7];
            v6 = v7;
          }
          ++v7;
        }
        while ( v7 < PpmHeteroWorkloadClasses );
      }
      v14 = 0;
      if ( v6 != -1 )
        v14 = v6;
      v15 = 0;
      if ( v16 != -1 )
        v15 = v16;
      Feature_NewWpsAssignmentAlgorithm__private_IsEnabledPreCheck();
      if ( v5 || v4 )
      {
        if ( 100 * v5 / (v4 + v5) >= (unsigned int)PpmHeteroWpsWorkloadProminenceCutoff )
        {
          if ( 100 * v4 / (v4 + v5) >= (unsigned int)PpmHeteroWpsWorkloadProminenceCutoff )
            v8 = 4;
          else
            v15 = v14;
        }
        else
        {
          v14 = v15;
          v8 = 2;
        }
      }
      else
      {
        v8 = 8;
      }
      *(_BYTE *)(v2 + 1271) = v14;
      *(_BYTE *)(v2 + 1270) = v15;
      return (_UNKNOWN **)PpmEventHgsActiveWorkloadClass(v2, v25, v24, v8);
    }
  }
  return result;
}
