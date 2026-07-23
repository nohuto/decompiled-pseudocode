/*
 * XREFs of EtwpUpdateGroupMasks @ 0x1409D112C
 * Callers:
 *     EtwpUpdateLoggerGroupMasks @ 0x1409D108C (EtwpUpdateLoggerGroupMasks.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A39934 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpUpdateSelectedGroupMasks @ 0x14048A210 (EtwpUpdateSelectedGroupMasks.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpUpdateGroupMasks(int *a1, _DWORD *a2)
{
  int *v2; // r9
  __int64 v3; // r10
  _DWORD v5[8]; // [rsp+20h] [rbp-38h] BYREF

  v5[7] = -1;
  v2 = EtwpEnableFlagMap;
  v5[0] = 0x1FFFFFFF;
  v5[1] = 0x3FFFFFFF;
  v5[2] = 1610612735;
  v3 = 8LL;
  v5[3] = 0x7FFFFFFF;
  v5[4] = -1610612737;
  v5[5] = -1073741825;
  v5[6] = -536870913;
  do
  {
    if ( a2 && (*v2 & a2[(unsigned __int64)(unsigned int)*v2 >> 29] & 0x1FFFFFFF) != 0 )
      a2[(unsigned __int64)(unsigned int)v2[1] >> 29] |= v2[1] & 0x1FFFFFFF;
    v2 += 2;
    --v3;
  }
  while ( v3 );
  return EtwpUpdateSelectedGroupMasks(a1, v5, a2);
}
