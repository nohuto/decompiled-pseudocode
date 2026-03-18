/*
 * XREFs of UsbDevice_SendConfigureEndpointCommand @ 0x14003B1DC
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002AB24 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x14003ABC0 (UsbDevice_HandleAddAndDropEndpointsState.c)
 * Callees:
 *     Command_SendCommand @ 0x140008550 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002AB24 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_SetConfigureRequestStatus @ 0x140034B18 (UsbDevice_SetConfigureRequestStatus.c)
 *     Feature_UISCSF__private_IsEnabledDeviceUsageNoInline @ 0x140048280 (Feature_UISCSF__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x140059AC0 (memset.c)
 */

__int64 __fastcall UsbDevice_SendConfigureEndpointCommand(__int64 a1, int a2)
{
  __int64 v3; // r15
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 *v8; // r10
  unsigned int *v9; // rcx
  int v10; // r8d
  unsigned int v11; // eax
  __int64 (__fastcall *v12)(__int64, int, __int128 *); // rax
  __int64 v13; // rcx
  __int64 v15; // rdx
  unsigned int v16; // eax
  char v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx

  v3 = a1 + 456;
  memset((void *)(a1 + 456), 0, 0x60uLL);
  v5 = 0;
  v6 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 648LL : 640LL) + a1);
  if ( v6 )
    v7 = *(_QWORD *)(v6 + 16);
  else
    v7 = 0LL;
  if ( !(unsigned int)Feature_UISCSF__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_19;
  v8 = *(__int64 **)(a1 + 8);
  if ( (v8[93] & 0x20000000) == 0 )
    goto LABEL_19;
  v9 = (unsigned int *)(v7 + 64);
  if ( (*(_DWORD *)(v8[11] + 104) & 4) == 0 )
    v9 = (unsigned int *)(v7 + 32);
  v10 = *(_DWORD *)(a1 + 20);
  switch ( v10 )
  {
    case 0:
      v11 = *v9 & 0xFF0FFFFF | 0x200000;
      goto LABEL_18;
    case 1:
      v11 = *v9 & 0xFF0FFFFF | 0x100000;
      goto LABEL_18;
    case 2:
      v11 = *v9 & 0xFF0FFFFF | 0x300000;
      goto LABEL_18;
    case 3:
      v11 = *v9 & 0xFF0FFFFF | 0x400000;
LABEL_18:
      *v9 = v11;
      goto LABEL_19;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dD(
      v8[9],
      2u,
      0xCu,
      0x38u,
      (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
      *(unsigned __int8 *)(a1 + 135),
      *(_DWORD *)(a1 + 20));
LABEL_19:
  if ( (a2 & 0xFFFFFFFD) != 0 )
  {
    if ( a2 != 1 )
    {
      UsbDevice_SetConfigureRequestStatus(a1, -1073741595);
      return UsbDevice_QueueConfigureEndpointEvent(v13, 2);
    }
    v12 = (__int64 (__fastcall *)(__int64, int, __int128 *))UsbDevice_DropEndpointsCompletion;
  }
  else
  {
    v12 = UsbDevice_EndpointsConfigureCompletion;
  }
  *(_QWORD *)(a1 + 496) = v12;
  v15 = a1 + 640;
  v16 = *(_DWORD *)(a1 + 492) & 0xFFFF31FF;
  *(_QWORD *)(a1 + 504) = a1;
  *(_DWORD *)(a1 + 492) = v16 | 0x3000;
  *(_BYTE *)(a1 + 495) = *(_BYTE *)(a1 + 135);
  v17 = *(_BYTE *)(a1 + 657);
  v18 = a1 + 648;
  if ( !v17 )
    v18 = a1 + 640;
  if ( *(_QWORD *)v18 )
    v19 = *(_QWORD *)(*(_QWORD *)v18 + 24LL);
  else
    v19 = 0LL;
  *(_QWORD *)(a1 + 480) = v19;
  *(_QWORD *)(a1 + 528) = v7;
  if ( v17 )
    v15 = a1 + 648;
  if ( *(_QWORD *)v15 )
    v5 = *(_DWORD *)(*(_QWORD *)v15 + 44LL);
  v20 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 536) = v5;
  *(_DWORD *)(a1 + 540) = 1;
  *(_QWORD *)(a1 + 544) = a1;
  return Command_SendCommand(*(_QWORD *)(v20 + 144), v3);
}
