/*
 * XREFs of PpmParkRecordNodeStatistics @ 0x140401FC4
 * Callers:
 *     PpmCheckRecordAllUtility @ 0x140401740 (PpmCheckRecordAllUtility.c)
 * Callees:
 *     PpmParkComputeSnapStatistics @ 0x14042A6D0 (PpmParkComputeSnapStatistics.c)
 *     PpmEventParkNodeRecordedStats @ 0x14044BBFC (PpmEventParkNodeRecordedStats.c)
 *     PpmEventParkNodeClassRecordedStats @ 0x1404C5A78 (PpmEventParkNodeClassRecordedStats.c)
 *     PpmPerfRecordMostActiveWorkloadClass @ 0x1404E26D8 (PpmPerfRecordMostActiveWorkloadClass.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmEventParkNodeClassRecordedStatsEx @ 0x1405DAC48 (PpmEventParkNodeClassRecordedStatsEx.c)
 *     PpmEventParkNodeRecordedStatsEx @ 0x1405DB128 (PpmEventParkNodeRecordedStatsEx.c)
 */

__int64 PpmParkRecordNodeStatistics()
{
  int v0; // edx
  __int64 result; // rax
  unsigned __int16 v2; // si
  int v3; // r13d
  __int64 v4; // rcx
  char v5; // r10
  char v6; // cl
  __int64 v7; // rbx
  char *v8; // rdi
  _BYTE *v9; // r14
  int v10; // edx
  int IsEnabledDeviceUsageNoInline; // eax
  int v12; // r8d
  int v13; // r9d
  unsigned __int8 v14; // di
  __int64 v15; // rcx
  char *v16; // r14
  char *v17; // r15
  __int64 v18; // r12
  _BYTE *v19; // rbp
  int v20; // edx
  int v21; // r8d
  int v22; // r9d
  char i; // [rsp+80h] [rbp+8h]
  char v24; // [rsp+88h] [rbp+10h]
  unsigned __int16 v25; // [rsp+90h] [rbp+18h]

  v0 = (int)PpmCurrentProfile[0];
  result = dword_140F0B38C;
  v2 = 0;
  v3 = PpmCheckMakeupCount;
  v4 = 61LL * dword_140F0B38C;
  v25 = 0;
  v5 = BYTE5(PpmCurrentProfile[0][v4 + 22]);
  v6 = HIBYTE(PpmCurrentProfile[0][v4 + 22]);
  v24 = v6;
  for ( i = v5; v2 < (unsigned int)PpmParkNumNodes; v25 = v2 )
  {
    LOBYTE(v0) = v5;
    v7 = PpmParkNodes + 1296LL * v2;
    v8 = (char *)(v7 + 1180);
    v9 = (_BYTE *)(v7 + 1176);
    if ( (unsigned __int8)PpmParkComputeSnapStatistics(v3, v0, v6, (int)v7 + 1112, v7 + 1176, v7 + 1178, v7 + 1180) )
    {
      IsEnabledDeviceUsageNoInline = Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline();
      v13 = v7 + 1112;
      if ( IsEnabledDeviceUsageNoInline )
      {
        PpmEventParkNodeRecordedStatsEx(v2, v7 + 48, *(unsigned __int16 *)v9, v13, *(_WORD *)v8);
      }
      else
      {
        LOBYTE(v12) = *v9;
        PpmEventParkNodeRecordedStats(*(unsigned __int16 *)(v7 + 4), *(_QWORD *)(v7 + 16), v12, v13, *v8);
      }
    }
    if ( *(_BYTE *)(v7 + 1185) )
    {
      v14 = 0;
      if ( *(_BYTE *)(v7 + 12) )
      {
        do
        {
          LOBYTE(v10) = i;
          v15 = *(_QWORD *)(v7 + 1288) + 640LL * v14;
          v16 = (char *)(v15 + 632);
          v17 = (char *)(v15 + 636);
          v18 = v15 + 576;
          v19 = (_BYTE *)(v15 + 634);
          if ( (unsigned __int8)PpmParkComputeSnapStatistics(
                                  v3,
                                  v10,
                                  v24,
                                  (int)v15 + 576,
                                  v15 + 634,
                                  v15 + 636,
                                  v15 + 632) )
          {
            if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline() )
            {
              LOBYTE(v22) = *v17;
              LOBYTE(v20) = v14;
              PpmEventParkNodeClassRecordedStatsEx(v7 + 48, v20, *(unsigned __int16 *)v19, v22, v18, *(_WORD *)v16);
            }
            else
            {
              LOBYTE(v21) = v14;
              LOBYTE(v22) = *v19;
              PpmEventParkNodeClassRecordedStats(
                *(unsigned __int16 *)(v7 + 4),
                *(_QWORD *)(v7 + 16),
                v21,
                v22,
                *v17,
                v18,
                *v16);
            }
          }
          ++v14;
        }
        while ( v14 < *(_BYTE *)(v7 + 12) );
        v2 = v25;
      }
    }
    PpmPerfRecordMostActiveWorkloadClass(v7);
    v5 = i;
    ++v2;
    v6 = v24;
    result = v2;
  }
  return result;
}
