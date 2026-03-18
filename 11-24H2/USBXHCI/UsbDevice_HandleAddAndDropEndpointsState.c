/*
 * XREFs of UsbDevice_HandleAddAndDropEndpointsState @ 0x14003A4EC
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002A1C8 (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     TR_EnsureSegments @ 0x140016630 (TR_EnsureSegments.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002A1C8 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x14002A958 (UsbDevice_InitializeInputContextForAddDropEndpoints.c)
 *     XilCoreCommonBuffer_ReleaseBuffers @ 0x14002F6F4 (XilCoreCommonBuffer_ReleaseBuffers.c)
 *     TR_AcquireSegment @ 0x140030240 (TR_AcquireSegment.c)
 *     UsbDevice_SetConfigureRequestStatus @ 0x140032F88 (UsbDevice_SetConfigureRequestStatus.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x14003ABD8 (UsbDevice_SendConfigureEndpointCommand.c)
 *     TR_ReleaseSegment @ 0x14004B3EC (TR_ReleaseSegment.c)
 *     TR_SetClientAddressesForOffload @ 0x14004B464 (TR_SetClientAddressesForOffload.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_HandleAddAndDropEndpointsState(__int64 a1, __int64 a2)
{
  unsigned int *v4; // rsi
  unsigned int i; // r15d
  __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // ebx
  unsigned __int16 v9; // r9
  __int64 v10; // rcx
  __int64 v12; // r14
  __int64 v13; // rbx
  _QWORD **v14; // rdx
  int v15; // [rsp+28h] [rbp-30h]
  int v16; // [rsp+30h] [rbp-28h]

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1036LL) == 1 )
  {
    v4 = *(unsigned int **)(a2 + 88);
    for ( i = 0; i < *(_DWORD *)(a2 + 84); v4 = (unsigned int *)((char *)v4 + *v4) )
    {
      v6 = 0LL;
      if ( *(_DWORD *)(a2 + 24) )
      {
        while ( 1 )
        {
          v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                 WdfDriverGlobals,
                 *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v6),
                 off_14006AFE8);
          if ( *(unsigned __int8 *)(v7 + 98) == *((_WORD *)v4 + 2) )
            break;
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 >= *(_DWORD *)(a2 + 24) )
            goto LABEL_17;
        }
        if ( *(_QWORD *)((char *)v4 + 82) )
        {
          v8 = TR_SetClientAddressesForOffload(
                 *(_QWORD *)(v7 + 88),
                 *(_QWORD *)((char *)v4 + 82),
                 *(_QWORD *)((char *)v4 + 90),
                 *(_QWORD *)((char *)v4 + 98),
                 *(_QWORD *)((char *)v4 + 106));
          if ( v8 < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_12;
            v9 = 63;
            goto LABEL_11;
          }
        }
        else
        {
          v12 = *(_QWORD *)(v7 + 88);
          v13 = *(_QWORD *)(*(_QWORD *)(v12 + 40) + 120LL);
          TR_ReleaseSegment(v12, *(_QWORD *)(v12 + 176));
          *(_QWORD *)(v12 + 176) = 0LL;
          v14 = (_QWORD **)(v12 + 208);
          if ( *v14 != v14 )
            XilCoreCommonBuffer_ReleaseBuffers(v13 + 88, v14);
          *(_DWORD *)(v12 + 20) = 4096;
          v8 = TR_EnsureSegments(v12, 1u, 0);
          if ( v8 < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v9 = 64;
LABEL_11:
              v16 = v8;
              v15 = *(unsigned __int8 *)(a1 + 143);
              WPP_RECORDER_SF_dD(
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                2u,
                0xCu,
                v9,
                (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
                v15,
                v16);
            }
LABEL_12:
            UsbDevice_SetConfigureRequestStatus(a1, v8);
            return UsbDevice_QueueConfigureEndpointEvent(v10, 2);
          }
          *(_QWORD *)(v12 + 176) = TR_AcquireSegment(v12);
        }
      }
LABEL_17:
      ++i;
    }
  }
  v8 = UsbDevice_InitializeInputContextForAddDropEndpoints(a1, a2, 0);
  if ( v8 < 0 )
    goto LABEL_12;
  return UsbDevice_SendConfigureEndpointCommand(a1, 0LL);
}
