/*
 * XREFs of InitializeEnergyEstimationForEfficiencyClass @ 0x140046278
 * Callers:
 *     InitializeEnergyEstimation @ 0x140029660 (InitializeEnergyEstimation.c)
 * Callees:
 *     EnumerateNextDevice @ 0x140004B78 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1400053BC (ResetEnumerationContext.c)
 *     InitializeEnumerationContext @ 0x1400054C4 (InitializeEnumerationContext.c)
 *     memset @ 0x140010340 (memset.c)
 *     EnableEnergyEstimation @ 0x14002823C (EnableEnergyEstimation.c)
 *     DisableEnergyEstimation @ 0x14003B140 (DisableEnergyEstimation.c)
 *     DisablePerformanceMonitoringCounters @ 0x14003B204 (DisablePerformanceMonitoringCounters.c)
 *     EnablePerformanceMonitoringCounters @ 0x14003B26C (EnablePerformanceMonitoringCounters.c)
 */

__int64 __fastcall InitializeEnergyEstimationForEfficiencyClass(unsigned int a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax
  int v4; // r11d
  __int64 v5; // rdi
  __int64 v6; // r9
  unsigned int v7; // edx
  unsigned int v8; // r8d
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  int v11; // r11d
  _OWORD v12[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v13 = 0LL;
  v1 = (unsigned __int64)a1 << 8;
  memset(v12, 0, sizeof(v12));
  InitializeEnumerationContext((__int64)&qword_1400191C8, 32, (__int64)v12);
  ResetEnumerationContext((__int64 *)v12);
  while ( 1 )
  {
    result = EnumerateNextDevice((__int64 *)v12, &v13);
    if ( (_DWORD)result )
      break;
    if ( _bittest64((const signed __int64 *)(v13 + 280), 0x25u) )
    {
      if ( *(unsigned __int8 *)(v13 + 376) == a1 )
      {
        result = EnableEnergyEstimation(v13);
        v4 = result;
        if ( (int)result < 0 )
          break;
      }
    }
  }
  if ( v4 >= 0 )
    goto LABEL_35;
  InitializeEnumerationContext((__int64)&qword_1400191C8, 32, (__int64)v12);
  ResetEnumerationContext((__int64 *)v12);
  while ( 1 )
  {
    result = EnumerateNextDevice((__int64 *)v12, &v13);
    if ( (_DWORD)result )
      break;
    if ( _bittest64((const signed __int64 *)(v13 + 280), 0x25u) && *(unsigned __int8 *)(v13 + 376) == a1 )
      DisableEnergyEstimation(v13);
  }
  *(__int64 *)((char *)&Globals[254] + v1) = 0LL;
  v5 = 0LL;
  *(__int64 *)((char *)&Globals[253] + v1) = 0LL;
  v6 = 0LL;
  v7 = *(_DWORD *)((char *)&Globals[228] + v1);
  if ( v7 )
  {
    v8 = *(_DWORD *)((char *)&Globals[228] + v1);
    do
    {
      result = 3 * v6;
      v7 = v8;
      if ( (*(_DWORD *)((_BYTE *)&Globals[229] + 12 * v6 + v1) & 1) == 0 )
      {
        if ( (_DWORD)v6 != (_DWORD)v5 )
        {
          v9 = v1 + 12 * v6;
          v10 = v1 + 12 * v5;
          *(__int64 *)((char *)&Globals[228] + v10 + 4) = *(__int64 *)((char *)&Globals[228] + v9 + 4);
          result = *(unsigned int *)((char *)&Globals[229] + v9 + 4);
          *(_DWORD *)((char *)&Globals[229] + v10 + 4) = result;
          v7 = *(_DWORD *)((char *)&Globals[228] + v1);
        }
        v5 = (unsigned int)(v5 + 1);
      }
      v6 = (unsigned int)(v6 + 1);
      v8 = v7;
    }
    while ( (unsigned int)v6 < v7 );
  }
  if ( v7 != (_DWORD)v5 )
  {
    result = (__int64)memset((char *)&unk_140019894 + 12 * v5 + v1, 0, 12LL * (v7 - (unsigned int)v5));
    *(_DWORD *)((char *)&Globals[228] + v1) = v5;
  }
  if ( !(_DWORD)v5 )
    goto LABEL_35;
  ResetEnumerationContext((__int64 *)v12);
  while ( 1 )
  {
    result = EnumerateNextDevice((__int64 *)v12, &v13);
    if ( (_DWORD)result )
      break;
    if ( _bittest64((const signed __int64 *)(v13 + 280), 0x25u) )
    {
      if ( *(unsigned __int8 *)(v13 + 376) == a1 )
      {
        result = EnablePerformanceMonitoringCounters(v13);
        v11 = result;
        if ( (int)result < 0 )
          break;
      }
    }
  }
  if ( v11 < 0 || !*(__int64 *)((char *)&Globals[253] + v1) )
  {
    InitializeEnumerationContext((__int64)&qword_1400191C8, 32, (__int64)v12);
    ResetEnumerationContext((__int64 *)v12);
    while ( 1 )
    {
      result = EnumerateNextDevice((__int64 *)v12, &v13);
      if ( (_DWORD)result )
        break;
      if ( _bittest64((const signed __int64 *)(v13 + 280), 0x25u) && *(unsigned __int8 *)(v13 + 376) == a1 )
        DisablePerformanceMonitoringCounters(v13);
    }
    *(__int64 *)((char *)&Globals[254] + v1) = 0LL;
    *(__int64 *)((char *)&Globals[253] + v1) = 0LL;
LABEL_35:
    if ( !*(__int64 *)((char *)&Globals[253] + v1) )
    {
      result = (__int64)ComputeProcessorEnergy;
      *(__int64 *)((char *)&Globals[253] + v1) = (__int64)ComputeProcessorEnergy;
    }
  }
  return result;
}
