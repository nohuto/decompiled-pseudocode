/*
 * XREFs of VidSchiUpdateNativeFenceMonitoredValue @ 0x140045ECC
 * Callers:
 *     ?VidSchiAcquireSyncObjectForHwQueue@@YAJPEAU_VIDSCH_SYNC_OBJECT@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14000396C (-VidSchiAcquireSyncObjectForHwQueue@@YAJPEAU_VIDSCH_SYNC_OBJECT@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchSubmitWaitFromCpu @ 0x14000DF30 (VidSchSubmitWaitFromCpu.c)
 *     VidSchiUnwaitNativeFenceWaiters @ 0x1400458E8 (VidSchiUnwaitNativeFenceWaiters.c)
 * Callees:
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     memset @ 0x140056340 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiUpdateNativeFenceMonitoredValue(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // r9
  _BYTE v8[8]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v9; // [rsp+38h] [rbp-21h] BYREF
  __int64 v10; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v11[2]; // [rsp+48h] [rbp-11h] BYREF
  int v12; // [rsp+58h] [rbp-1h]
  int v13; // [rsp+5Ch] [rbp+3h]
  _QWORD v14[8]; // [rsp+60h] [rbp+7h] BYREF

  v10 = a2;
  v9 = a3;
  v8[0] = 0;
  memset(v14, 0, sizeof(v14));
  v4 = *(unsigned int *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 24);
  v12 = 0;
  v14[0] = &v10;
  v14[1] = &v9;
  v13 = 0;
  v11[1] = v14;
  LODWORD(v14[3]) = 1;
  v11[0] = a1;
  result = DpSynchronizeExecution(v5, VidSchiUpdateNativeFenceMonitoredValueAtISR, v11, v4, v8);
  if ( (int)result < 0 || v12 < 0 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    g_DxgMmsBugcheckExportIndex = 1;
    result = WdLogSingleEntry5(0LL, 281LL, 18LL, v7, v10, v9);
    WdLogGlobalForLineNumber = 906;
  }
  return result;
}
