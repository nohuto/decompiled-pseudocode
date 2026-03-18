/*
 * XREFs of UsbDevice_SendConfigureEndpointCommand @ 0x14003ABD8
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002A1C8 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x14003A4EC (UsbDevice_HandleAddAndDropEndpointsState.c)
 * Callees:
 *     Command_SendCommand @ 0x14000BCD4 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002A1C8 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_SetConfigureRequestStatus @ 0x140032F88 (UsbDevice_SetConfigureRequestStatus.c)
 *     Feature_UISCSF__private_IsEnabledDeviceUsageNoInline @ 0x140048590 (Feature_UISCSF__private_IsEnabledDeviceUsageNoInline.c)
 *     UsbDevice_GetDeviceSpeedEx @ 0x14004D9A0 (UsbDevice_GetDeviceSpeedEx.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

__int64 __fastcall UsbDevice_SendConfigureEndpointCommand(__int64 a1, int a2)
{
  __int64 v3; // r12
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int *v10; // rsi
  int DeviceSpeed; // eax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  unsigned __int16 v19; // r9
  unsigned int v20; // eax
  int v21; // edx
  __int64 (__fastcall *v22)(__int64, int, __int128 *); // rax
  __int64 v23; // rcx
  __int64 v25; // rdx
  unsigned int v26; // eax
  char v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // [rsp+28h] [rbp-30h]
  int v32; // [rsp+30h] [rbp-28h]

  v3 = a1 + 464;
  memset((void *)(a1 + 464), 0, 0x60uLL);
  v5 = 0;
  v6 = *(_QWORD *)((*(_BYTE *)(a1 + 665) != 0 ? 656LL : 648LL) + a1);
  if ( v6 )
    v7 = *(_QWORD *)(v6 + 16);
  else
    v7 = 0LL;
  v8 = *(_QWORD *)(a1 + 8);
  if ( (*(_QWORD *)(v8 + 744) & 0x20000000LL) != 0 )
  {
    v9 = *(unsigned int *)(*(_QWORD *)(v8 + 88) + 104LL);
    LOBYTE(v9) = -(v9 & 4);
    v10 = (unsigned int *)(v7 + ((_BYTE)v9 != 0 ? 64LL : 32LL));
    if ( (unsigned int)Feature_UISCSF__private_IsEnabledDeviceUsageNoInline(v9) )
    {
      DeviceSpeed = UsbDevice_GetDeviceSpeedEx(a1);
      if ( DeviceSpeed )
      {
        v13 = DeviceSpeed - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                v17 = v16 - 1;
                if ( v17 )
                {
                  if ( v17 != 1 )
                  {
                    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      goto LABEL_30;
                    v18 = UsbDevice_GetDeviceSpeedEx(v12);
                    v19 = 61;
                    v32 = v18;
                    v31 = *(unsigned __int8 *)(a1 + 143);
LABEL_27:
                    WPP_RECORDER_SF_dD(
                      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                      2u,
                      0xCu,
                      v19,
                      (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
                      v31,
                      v32);
                    goto LABEL_30;
                  }
                  v20 = *v10 & 0xFF0FFFFF | 0x700000;
                }
                else
                {
                  v20 = *v10 & 0xFF0FFFFF | 0x600000;
                }
              }
              else
              {
                v20 = *v10 & 0xFF0FFFFF | 0x500000;
              }
              goto LABEL_29;
            }
            goto LABEL_18;
          }
          goto LABEL_19;
        }
        goto LABEL_20;
      }
    }
    else
    {
      v21 = *(_DWORD *)(a1 + 20);
      if ( v21 )
      {
        if ( v21 != 1 )
        {
          if ( v21 != 2 )
          {
            if ( v21 != 3 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_30;
              v19 = 62;
              v32 = *(_DWORD *)(a1 + 20);
              v31 = *(unsigned __int8 *)(a1 + 143);
              goto LABEL_27;
            }
LABEL_18:
            v20 = *v10 & 0xFF0FFFFF | 0x400000;
LABEL_29:
            *v10 = v20;
            goto LABEL_30;
          }
LABEL_19:
          v20 = *v10 & 0xFF0FFFFF | 0x300000;
          goto LABEL_29;
        }
LABEL_20:
        v20 = *v10 & 0xFF0FFFFF | 0x100000;
        goto LABEL_29;
      }
    }
    v20 = *v10 & 0xFF0FFFFF | 0x200000;
    goto LABEL_29;
  }
LABEL_30:
  if ( (a2 & 0xFFFFFFFD) != 0 )
  {
    if ( a2 != 1 )
    {
      UsbDevice_SetConfigureRequestStatus(a1, -1073741595);
      return UsbDevice_QueueConfigureEndpointEvent(v23, 2);
    }
    v22 = (__int64 (__fastcall *)(__int64, int, __int128 *))UsbDevice_DropEndpointsCompletion;
  }
  else
  {
    v22 = UsbDevice_EndpointsConfigureCompletion;
  }
  *(_QWORD *)(a1 + 504) = v22;
  v25 = a1 + 648;
  v26 = *(_DWORD *)(a1 + 500) & 0xFFFF31FF;
  *(_QWORD *)(a1 + 512) = a1;
  *(_DWORD *)(a1 + 500) = v26 | 0x3000;
  *(_BYTE *)(a1 + 503) = *(_BYTE *)(a1 + 143);
  v27 = *(_BYTE *)(a1 + 665);
  v28 = a1 + 656;
  if ( !v27 )
    v28 = a1 + 648;
  if ( *(_QWORD *)v28 )
    v29 = *(_QWORD *)(*(_QWORD *)v28 + 24LL);
  else
    v29 = 0LL;
  *(_QWORD *)(a1 + 488) = v29;
  *(_QWORD *)(a1 + 536) = v7;
  if ( v27 )
    v25 = a1 + 656;
  if ( *(_QWORD *)v25 )
    v5 = *(_DWORD *)(*(_QWORD *)v25 + 44LL);
  v30 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 544) = v5;
  *(_DWORD *)(a1 + 548) = 1;
  *(_QWORD *)(a1 + 552) = a1;
  return Command_SendCommand(*(_QWORD *)(v30 + 144), v3);
}
