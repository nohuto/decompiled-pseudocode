/*
 * XREFs of ?ReleaseInputDataPointer@?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXI_K@Z @ 0x140088000
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14000F4CC (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     ?GetNextTimestampMessage@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAA_NPEAUSharedMessageQueueItem@@@Z @ 0x1400842B0 (-GetNextTimestampMessage@-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData.c)
 *     ?IsValidFlags@VolatileControlData_V0@@QEAA_NI@Z @ 0x140085908 (-IsValidFlags@VolatileControlData_V0@@QEAA_NI@Z.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x140085ED8 (McTemplateU0p_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::ReleaseInputDataPointer(
        __int64 a1,
        int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  _DWORD *v10; // rdi
  __int64 v11; // rcx
  void *v12; // rax
  _OWORD v14[4]; // [rsp+40h] [rbp-48h] BYREF

  memset_0(v14, 0, sizeof(v14));
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v5, v4, a1 - 472, 15, a2, 0, 0);
  v6 = *(_QWORD *)(a1 - 384);
  *(_DWORD *)(a1 + 20) = 0;
  LOBYTE(v7) = VolatileControlData_V0::IsValidFlags(*(VolatileControlData_V0 **)(a1 - 384), *(unsigned int *)(v6 + 164));
  if ( (_BYTE)v7 )
  {
    v10 = (_DWORD *)(a1 + 16);
    if ( !*(_DWORD *)(a1 + 16) )
    {
      v7 = *(_QWORD *)(a1 - 384);
      v9 = (unsigned int)(*(_DWORD *)(a1 - 368) * a2);
      _InterlockedAdd64((volatile signed __int64 *)(v7 + 24), v9);
    }
  }
  else
  {
    if ( (byte_1400C45C1 & 4) != 0 )
      McTemplateU0p_EventWriteTransfer(v9, v8, a1 - 472);
    v7 = *(_QWORD *)(a1 - 384);
    _InterlockedAnd((volatile signed __int32 *)(v7 + 164), 0xFFFFFFFE);
    v10 = (_DWORD *)(a1 + 16);
  }
  if ( a2 )
    LOBYTE(v7) = CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::GetNextTimestampMessage(
                   (_QWORD *)(a1 - 472),
                   v14);
  if ( (byte_1400C45C1 & 4) != 0 )
    LOBYTE(v7) = McTemplateU0pqxxx_EventWriteTransfer(v9, v8, a1 - 472, 16, a2, 0, *v10);
  v11 = *(_QWORD *)(a1 - 24);
  if ( v11 )
  {
    v12 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11);
    LOBYTE(v7) = SetEvent(v12);
  }
  *v10 = 3;
  return v7;
}
