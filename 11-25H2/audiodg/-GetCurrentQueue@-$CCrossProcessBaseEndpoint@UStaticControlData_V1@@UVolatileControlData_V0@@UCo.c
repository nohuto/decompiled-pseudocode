/*
 * XREFs of ?GetCurrentQueue@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAAXPEAPEAUSharedMessageQueueItem@@PEAI11PEA_N@Z @ 0x140083EF4
 * Callers:
 *     ?GetNextTimestampMessage@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAA_NPEAUSharedMessageQueueItem@@@Z @ 0x1400842B0 (-GetNextTimestampMessage@-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData.c)
 *     ?PeekNextTimestampMessage@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAA_NPEAPEAUSharedMessageQueueItem@@PEA_N@Z @ 0x1400859BC (-PeekNextTimestampMessage@-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlDat.c)
 * Callees:
 *     ?IsValidQueueIndex@@YA_NII@Z @ 0x140053264 (-IsValidQueueIndex@@YA_NII@Z.c)
 */

unsigned __int64 __fastcall CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::GetCurrentQueue(
        _QWORD *a1,
        unsigned __int64 *a2,
        unsigned int *a3,
        unsigned int *a4,
        _DWORD *a5,
        char *a6)
{
  _QWORD *v6; // rsi
  char v7; // di
  unsigned int *v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // rax
  unsigned int v15; // edx
  unsigned __int64 result; // rax
  unsigned int *v17; // rax
  unsigned int v18; // ecx
  __int64 v19; // rax
  unsigned int v20; // ecx
  __int64 v21; // rax
  unsigned int v22; // ecx
  __int64 v23; // rax

  v6 = a1 + 12;
  v7 = 0;
  v12 = (unsigned int *)a1[11];
  if ( v12[45] == -1 )
  {
    v20 = *v12;
    v21 = a1[11];
    *a3 = v20;
    v22 = *(_DWORD *)(v21 + 4);
    v23 = *v6;
    *a4 = v22;
    *a5 = *(_DWORD *)(v23 + 132);
    result = a1[17];
    *a2 = result;
  }
  else
  {
    v13 = v12[46];
    v14 = a1[11];
    *a3 = v13;
    v15 = *(_DWORD *)(v14 + 188);
    *a4 = v15;
    if ( v13 == v15 || !IsValidQueueIndex(v13, *(_DWORD *)(*v6 + 148LL)) )
    {
      *a2 = a1[17];
      v17 = (unsigned int *)a1[11];
      *a3 = *v17;
      v18 = v17[1];
      v19 = *v6;
      *a4 = v18;
      *a5 = *(_DWORD *)(v19 + 132);
      _InterlockedExchange((volatile __int32 *)(a1[11] + 180LL), -1);
      _InterlockedExchange((volatile __int32 *)(a1[11] + 184LL), 0);
      result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1[11] + 188LL), 0);
    }
    else
    {
      v7 = 1;
      *a2 = a1[18];
      result = (unsigned __int64)a5;
      *a5 = *(_DWORD *)(*v6 + 148LL);
    }
  }
  *a6 = v7;
  return result;
}
