/*
 * XREFs of VidSchiUpdateNativeFenceCurrentValue @ 0x1400478D4
 * Callers:
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14001A3B0 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     VidSchiCompleteSignalSyncObject @ 0x14001AD20 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x14002C1FC (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x14003D844 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     memset @ 0x140056780 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiUpdateNativeFenceCurrentValue(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v7; // eax
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 result; // rax
  _BYTE v11[8]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v12; // [rsp+38h] [rbp-41h] BYREF
  __int64 v13; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v14[2]; // [rsp+48h] [rbp-31h] BYREF
  int v15; // [rsp+58h] [rbp-21h]
  int v16; // [rsp+5Ch] [rbp-1Dh]
  _QWORD v17[8]; // [rsp+60h] [rbp-19h] BYREF

  v13 = a2;
  v12 = a3;
  memset(v17, 0, sizeof(v17));
  if ( a2 )
  {
    LODWORD(v17[3]) = 1;
    v17[0] = &v13;
    v17[1] = &v12;
  }
  v7 = *a4;
  v8 = *(unsigned int *)(a1 + 32);
  v9 = *(_QWORD *)(a1 + 24);
  v15 = 0;
  HIDWORD(v17[3]) = v7;
  v16 = 0;
  v14[1] = v17;
  v11[0] = 0;
  v14[0] = a1;
  result = DpSynchronizeExecution(v9, VidSchiUpdateNativeFenceCurrentValueAtISR, v14, v8, v11);
  if ( (int)result < 0 || v15 < 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    result = WdLogSingleEntry5(0LL, 281LL, 19LL, a1, v12, 0LL);
    WdLogGlobalForLineNumber = 906;
  }
  return result;
}
