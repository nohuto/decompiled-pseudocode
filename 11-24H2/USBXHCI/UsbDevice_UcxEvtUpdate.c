/*
 * XREFs of UsbDevice_UcxEvtUpdate @ 0x14003B700
 * Callers:
 *     <none>
 * Callees:
 *     Command_SendCommand @ 0x14000BCD4 (Command_SendCommand.c)
 *     Controller_IsControllerAccessible @ 0x14000BE64 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     UsbDevice_UpdateUsbDevice @ 0x14003BDAC (UsbDevice_UpdateUsbDevice.c)
 *     Feature_UISCSF__private_IsEnabledDeviceUsageNoInline @ 0x140048590 (Feature_UISCSF__private_IsEnabledDeviceUsageNoInline.c)
 *     UsbDevice_GetDeviceSpeedEx @ 0x14004D9A0 (UsbDevice_GetDeviceSpeedEx.c)
 *     UsbDevice_QueueTunnelStateDSM @ 0x14004DB7C (UsbDevice_QueueTunnelStateDSM.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

__int64 __fastcall UsbDevice_UcxEvtUpdate(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int16 v4; // ax
  __int64 v5; // rbp
  __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // r14
  int v9; // ecx
  __int64 v10; // rax
  unsigned int v11; // r10d
  _QWORD **v12; // rcx
  _QWORD *v13; // rcx
  __int64 *v14; // r15
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // rsi
  __int64 v18; // r14
  __int16 v19; // ax
  __int64 v20; // r14
  int DeviceSpeed; // eax
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  unsigned __int16 v29; // r9
  __int64 v30; // rcx
  unsigned int v31; // eax
  int v32; // edx
  __int64 *v33; // rax
  char v34; // cl
  __int64 v35; // rax
  __int64 *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 result; // rax
  int v41; // [rsp+28h] [rbp-80h]
  int v42; // [rsp+30h] [rbp-78h]
  __int64 v43; // [rsp+40h] [rbp-68h]
  _OWORD v44[2]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v45; // [rsp+68h] [rbp-40h]

  v2 = 0;
  v45 = 0LL;
  memset(v44, 0, sizeof(v44));
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v44[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v4 = -1;
  }
  else
  {
    v4 = 40;
  }
  LOWORD(v44[0]) = v4;
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v44);
  v5 = *((_QWORD *)&v44[0] + 1);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(*((_QWORD *)&v44[0] + 1) + 16LL),
         off_14006B128);
  v7 = *(_QWORD **)(v6 + 8);
  v8 = v7[11];
  v43 = v7[18];
  v9 = *(_DWORD *)(v5 + 24);
  if ( (v9 & 4) != 0 )
  {
    v10 = *(_QWORD *)((*(_BYTE *)(v6 + 665) != 0 ? 656LL : 648LL) + v6);
    if ( v10 )
      v11 = *(_DWORD *)(v10 + 44);
    else
      v11 = 0;
    v12 = (_QWORD **)(v6 + 656);
    if ( !*(_BYTE *)(v6 + 665) )
      v12 = (_QWORD **)(v6 + 648);
    v13 = *v12;
    v14 = (__int64 *)(v6 + 648);
    if ( v13 )
      v13 = (_QWORD *)v13[2];
    memset(v13, 0, v11);
    v16 = (__int64 *)(v6 + 648);
    if ( *(_BYTE *)(v6 + 665) )
      v16 = (__int64 *)(v6 + 656);
    v17 = *v16;
    if ( *v16 )
      v17 = *(_QWORD *)(v17 + 16);
    v18 = -(__int64)((*(_DWORD *)(v8 + 104) & 4) != 0);
    *(_DWORD *)(v17 + 4) |= 1u;
    v19 = *(_WORD *)(v5 + 48);
    v20 = v18 & 0x20;
    *(_DWORD *)(v20 + v17 + 40) &= 0x3FFFFFu;
    *(_WORD *)(v20 + v17 + 36) = v19;
    if ( (*(_QWORD *)(*(_QWORD *)(v6 + 8) + 744LL) & 0x20000000LL) == 0 )
      goto LABEL_46;
    if ( (unsigned int)Feature_UISCSF__private_IsEnabledDeviceUsageNoInline(v15) )
    {
      DeviceSpeed = UsbDevice_GetDeviceSpeedEx(v6);
      if ( DeviceSpeed )
      {
        v23 = DeviceSpeed - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              v26 = v25 - 1;
              if ( v26 )
              {
                v27 = v26 - 1;
                if ( v27 )
                {
                  if ( v27 != 1 )
                  {
                    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
LABEL_31:
                      v2 = -1073741811;
LABEL_65:
                      *(_QWORD *)(v6 + 432) = 0LL;
                      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
                               WdfDriverGlobals,
                               a2,
                               v2);
                    }
                    v28 = UsbDevice_GetDeviceSpeedEx(v22);
                    v29 = 37;
                    v42 = v28;
                    v41 = *(unsigned __int8 *)(v6 + 143);
                    v30 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL);
LABEL_30:
                    WPP_RECORDER_SF_dD(
                      v30,
                      2u,
                      0xCu,
                      v29,
                      (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
                      v41,
                      v42);
                    goto LABEL_31;
                  }
                  v31 = *(_DWORD *)(v20 + v17 + 32) & 0xFF0FFFFF | 0x700000;
                }
                else
                {
                  v31 = *(_DWORD *)(v20 + v17 + 32) & 0xFF0FFFFF | 0x600000;
                }
              }
              else
              {
                v31 = *(_DWORD *)(v20 + v17 + 32) & 0xFF0FFFFF | 0x500000;
              }
              goto LABEL_45;
            }
            goto LABEL_35;
          }
          goto LABEL_36;
        }
        goto LABEL_37;
      }
    }
    else
    {
      v32 = *(_DWORD *)(v6 + 20);
      if ( v32 )
      {
        if ( v32 != 1 )
        {
          if ( v32 != 2 )
          {
            if ( v32 != 3 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_31;
              v29 = 38;
              v42 = *(_DWORD *)(v6 + 20);
              v41 = *(unsigned __int8 *)(v6 + 143);
              v30 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL);
              goto LABEL_30;
            }
LABEL_35:
            v31 = *(_DWORD *)(v20 + v17 + 32) & 0xFF0FFFFF | 0x400000;
LABEL_45:
            *(_DWORD *)(v20 + v17 + 32) = v31;
LABEL_46:
            memset((void *)(v6 + 464), 0, 0x60uLL);
            *(_QWORD *)(v6 + 512) = v6;
            *(_QWORD *)(v6 + 504) = UsbDevice_UpdateCompletion;
            *(_DWORD *)(v6 + 500) = *(_DWORD *)(v6 + 500) & 0xFFFF03FF | 0x3400;
            *(_BYTE *)(v6 + 503) = *(_BYTE *)(v6 + 143);
            v33 = (__int64 *)(v6 + 648);
            v34 = *(_BYTE *)(v6 + 665);
            if ( v34 )
              v33 = (__int64 *)(v6 + 656);
            v35 = *v33;
            if ( v35 )
              v35 = *(_QWORD *)(v35 + 24);
            *(_QWORD *)(v6 + 488) = v35;
            v36 = (__int64 *)(v6 + 648);
            if ( v34 )
              v36 = (__int64 *)(v6 + 656);
            v37 = *v36;
            if ( v37 )
              v37 = *(_QWORD *)(v37 + 16);
            *(_QWORD *)(v6 + 536) = v37;
            if ( v34 )
              v14 = (__int64 *)(v6 + 656);
            v38 = *v14;
            if ( *v14 )
              LODWORD(v38) = *(_DWORD *)(v38 + 44);
            v39 = *(_QWORD *)(v6 + 8);
            *(_DWORD *)(v6 + 544) = v38;
            *(_DWORD *)(v6 + 548) = 1;
            *(_QWORD *)(v6 + 552) = v6;
            if ( Controller_IsControllerAccessible(v39) )
            {
              *(_QWORD *)(v6 + 432) = a2;
              *(_BYTE *)(v6 + 440) = 0;
              return Command_SendCommand(v43, v6 + 464);
            }
            v2 = -1073741810;
            goto LABEL_65;
          }
LABEL_36:
          v31 = *(_DWORD *)(v20 + v17 + 32) & 0xFF0FFFFF | 0x300000;
          goto LABEL_45;
        }
LABEL_37:
        v31 = *(_DWORD *)(v20 + v17 + 32) & 0xFF0FFFFF | 0x100000;
        goto LABEL_45;
      }
    }
    v31 = *(_DWORD *)(v20 + v17 + 32) & 0xFF0FFFFF | 0x200000;
    goto LABEL_45;
  }
  if ( (v9 & 0x80u) == 0
    || (v7[93] & 0x10000000LL) == 0
    || (result = UsbDevice_QueueTunnelStateDSM(v6, v5), !(_BYTE)result) )
  {
    UsbDevice_UpdateUsbDevice(v6, v5);
    goto LABEL_65;
  }
  return result;
}
