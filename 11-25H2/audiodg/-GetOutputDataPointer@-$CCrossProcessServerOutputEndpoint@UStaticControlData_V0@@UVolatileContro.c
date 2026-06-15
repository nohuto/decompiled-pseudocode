/*
 * XREFs of ?GetOutputDataPointer@?$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140087280
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14000F4CC (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x14003018C (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     McTemplateU0pqqq_EventWriteTransfer @ 0x14004D70C (McTemplateU0pqqq_EventWriteTransfer.c)
 *     ?IsValidOffset@?$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@IEAA_N_J@Z @ 0x14008595C (-IsValidOffset@-$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UCont.c)
 *     McTemplateU0pxqxq_EventWriteTransfer @ 0x140087A1C (McTemplateU0pxqxq_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::GetOutputDataPointer(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // r13d
  __int64 v4; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rbp
  __int64 v11; // rax
  unsigned int v12; // r12d
  int v13; // edx
  unsigned int v14; // r8d
  int v15; // eax
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // edi
  __int64 v19; // r8
  int v20; // r10d
  __int64 v21; // rdi

  v3 = a2;
  *(_DWORD *)(a1 + 20) = a2;
  v4 = a1 - 480;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 16) = 2;
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(a1, a2, a1 - 480, 9, a2, *(_DWORD *)(a1 - 368), 0);
  v7 = *(_QWORD *)(a1 - 392);
  v8 = *(_DWORD *)(v7 + 164) & 1;
  if ( (*(_BYTE *)(v7 + 164) & 1) == 0 )
    goto LABEL_24;
  if ( !v3 )
    goto LABEL_24;
  v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 - 392) + 16LL), 0LL, 0LL);
  v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 - 392) + 24LL), 0LL, 0LL);
  if ( !CCrossProcessBaseEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::IsValidOffset(v4, v9)
    || !CCrossProcessBaseEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::IsValidOffset(v4, v10)
    || v9 < v10 )
  {
    goto LABEL_24;
  }
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 80LL))(v4, a3, v9);
  v11 = *(_QWORD *)(a1 - 392);
  v12 = *(_DWORD *)(a1 - 376) * v3;
  *(_OWORD *)(a1 + 96) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a3 + 32);
  v13 = *(_DWORD *)(v11 + 4) + 1;
  v14 = **(_DWORD **)(a1 - 392);
  v15 = 0;
  if ( v13 != *(_DWORD *)(*(_QWORD *)(a1 - 384) + 132LL) )
    v15 = v13;
  if ( v15 == v14 )
  {
    v16 = (unsigned __int64)(v14 + 1 < *(_DWORD *)(*(_QWORD *)(a1 - 384) + 132LL) ? v14 + 1 : 0) << 6;
    _InterlockedExchange(
      *(volatile __int32 **)(a1 - 392),
      v14 + 1 < *(_DWORD *)(*(_QWORD *)(a1 - 384) + 132LL) ? v14 + 1 : 0);
    *(_DWORD *)(v16 + *(_QWORD *)(a1 - 344) + 52) = 1;
    if ( (byte_1400C45C1 & 1) != 0 )
      McTemplateU0pxqxq_EventWriteTransfer(
        v14 << 6,
        v16,
        v4,
        v9,
        *(_DWORD *)(((unsigned __int64)v14 << 6) + *(_QWORD *)(a1 - 344) + 4),
        v10,
        v12);
    CCrossProcessEndpointTraceLogger::Glitch(
      a1 - 264,
      6u,
      (const unsigned __int16 *)"CpGlitchEvent::SERVER_OUTPUT_QUEUE_FULL_PACKET_DROP");
  }
  v17 = *(unsigned int *)(a1 - 312);
  if ( (unsigned int)v17 >= (int)v9 - (int)v10 )
    v18 = v10 + v17 - v9;
  else
    v18 = v12;
  v19 = *(_QWORD *)(a1 - 384);
  a2 = v9 % v17;
  v20 = *(_DWORD *)(v19 + 160);
  v8 = v20 + (unsigned int)(v9 % v17);
  if ( v18 < v12 )
  {
    if ( (byte_1400C45C1 & 1) != 0 )
      McTemplateU0pqqq_EventWriteTransfer(
        v8,
        v20 + (unsigned int)(v10 % *(unsigned int *)(a1 - 312)),
        v4,
        v8,
        v20 + v10 % *(unsigned int *)(a1 - 312),
        v12);
    if ( v10 > 0 )
      CCrossProcessEndpointTraceLogger::Glitch(
        a1 - 264,
        7u,
        (const unsigned __int16 *)"CpGlitchEvent::SERVER_OUTPUT_READ_POINTER_OVERWRITE");
    if ( v18 )
    {
      *(_DWORD *)(a1 + 88) = v18;
      *(_DWORD *)(a1 + 16) = 1;
    }
LABEL_24:
    _InterlockedExchange((volatile __int32 *)(a1 - 304), 1);
LABEL_25:
    v21 = *(_QWORD *)(a1 - 352);
    goto LABEL_26;
  }
  if ( v12 + (unsigned int)v8 > *(_DWORD *)(v19 + 168) )
  {
    *(_DWORD *)(a1 + 16) = 1;
    goto LABEL_25;
  }
  *(_DWORD *)(a1 + 16) = 0;
  v21 = *(_QWORD *)(a1 - 400) + (unsigned int)v8;
LABEL_26:
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v8, a2, v4, 10, v3, 0, 0);
  return v21;
}
