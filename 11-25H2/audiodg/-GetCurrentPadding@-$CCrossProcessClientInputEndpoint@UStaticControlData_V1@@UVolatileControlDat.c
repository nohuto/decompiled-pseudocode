/*
 * XREFs of ?GetCurrentPadding@?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140087AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?PeekNextTimestampMessage@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAA_NPEAPEAUSharedMessageQueueItem@@PEA_N@Z @ 0x1400859BC (-PeekNextTimestampMessage@-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlDat.c)
 *     McTemplateU0pqxxxx_EventWriteTransfer @ 0x140085FC8 (McTemplateU0pqxxxx_EventWriteTransfer.c)
 */

char __fastcall CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::GetCurrentPadding(
        __int64 a1,
        _QWORD *a2)
{
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // rcx
  double v7; // xmm0_8
  char v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  v9 = 0;
  LOBYTE(v4) = CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::PeekNextTimestampMessage(
                 (_QWORD *)(a1 - 8),
                 &v10,
                 &v9);
  if ( (_BYTE)v4 )
  {
    v6 = v10;
    v7 = *(float *)(a1 + 164);
    *(_DWORD *)(a1 + 484) = *(_DWORD *)(v10 + 56);
    v4 = *(_DWORD *)(v6 + 56);
    v5 = (unsigned int)(int)((double)v4 * 10000000.0 / v7 + 0.5);
  }
  else
  {
    *(_DWORD *)(a1 + 484) = 0;
    v5 = 0LL;
  }
  *a2 = v5;
  if ( (byte_1400C45C1 & 4) != 0 )
    LOBYTE(v4) = McTemplateU0pqxxxx_EventWriteTransfer(
                   **(unsigned int **)(a1 + 80),
                   *(unsigned int *)(*(_QWORD *)(a1 + 80) + 4LL),
                   a1 - 8,
                   3,
                   **(_DWORD **)(a1 + 80),
                   *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL),
                   v5,
                   0);
  return v4;
}
