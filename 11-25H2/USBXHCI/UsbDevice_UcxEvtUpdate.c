/*
 * XREFs of UsbDevice_UcxEvtUpdate @ 0x14003B5F0
 * Callers:
 *     <none>
 * Callees:
 *     Command_SendCommand @ 0x140008550 (Command_SendCommand.c)
 *     Controller_IsControllerAccessible @ 0x1400086E0 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     UsbDevice_UpdateUsbDevice @ 0x14003BBF8 (UsbDevice_UpdateUsbDevice.c)
 *     Feature_UISCSF__private_IsEnabledDeviceUsageNoInline @ 0x140048280 (Feature_UISCSF__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UTMDSM__private_IsEnabledDeviceUsageNoInline @ 0x14004DEE0 (Feature_UTMDSM__private_IsEnabledDeviceUsageNoInline.c)
 *     UsbDevice_QueueTunnelStateDSM @ 0x14004E4DC (UsbDevice_QueueTunnelStateDSM.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140059AC0 (memset.c)
 */

__int64 __fastcall UsbDevice_UcxEvtUpdate(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int16 v4; // ax
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r13
  __int64 v9; // rax
  unsigned int v10; // r10d
  _QWORD **v11; // rcx
  _QWORD *v12; // rcx
  __int64 *v13; // r14
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int16 v17; // ax
  __int64 v18; // rsi
  __int64 v19; // r10
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  unsigned int v23; // eax
  __int64 *v24; // rax
  char v25; // cl
  __int64 v26; // rax
  __int64 *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 result; // rax
  __int64 v32; // [rsp+40h] [rbp-68h]
  _OWORD v33[2]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v34; // [rsp+68h] [rbp-40h]

  v2 = 0;
  v34 = 0LL;
  memset(v33, 0, sizeof(v33));
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v33[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v4 = -1;
  }
  else
  {
    v4 = 40;
  }
  LOWORD(v33[0]) = v4;
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v33);
  v5 = *((_QWORD *)&v33[0] + 1);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(*((_QWORD *)&v33[0] + 1) + 16LL),
         off_14006B128);
  v7 = *(_QWORD *)(v6 + 8);
  v8 = *(_QWORD *)(v7 + 88);
  v32 = *(_QWORD *)(v7 + 144);
  if ( (*(_DWORD *)(v5 + 24) & 4) != 0 )
  {
    v9 = *(_QWORD *)((*(_BYTE *)(v6 + 657) != 0 ? 648LL : 640LL) + v6);
    if ( v9 )
      v10 = *(_DWORD *)(v9 + 44);
    else
      v10 = 0;
    v11 = (_QWORD **)(v6 + 648);
    if ( !*(_BYTE *)(v6 + 657) )
      v11 = (_QWORD **)(v6 + 640);
    v12 = *v11;
    v13 = (__int64 *)(v6 + 640);
    if ( v12 )
      v12 = (_QWORD *)v12[2];
    memset(v12, 0, v10);
    v14 = (__int64 *)(v6 + 640);
    if ( *(_BYTE *)(v6 + 657) )
      v14 = (__int64 *)(v6 + 648);
    v15 = *v14;
    if ( *v14 )
      v15 = *(_QWORD *)(v15 + 16);
    v16 = -(__int64)((*(_DWORD *)(v8 + 104) & 4) != 0);
    *(_DWORD *)(v15 + 4) |= 1u;
    v17 = *(_WORD *)(v5 + 48);
    v18 = v15 + (v16 & 0x20) + 32;
    *(_DWORD *)(v18 + 8) &= 0x3FFFFFu;
    *(_WORD *)(v18 + 4) = v17;
    if ( (unsigned int)Feature_UISCSF__private_IsEnabledDeviceUsageNoInline() )
    {
      v19 = *(_QWORD *)(v6 + 8);
      if ( (*(_QWORD *)(v19 + 744) & 0x20000000LL) != 0 )
      {
        v20 = *(_DWORD *)(v6 + 20);
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( v22 )
            {
              if ( v22 != 1 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_dD(
                    *(_QWORD *)(v19 + 72),
                    2u,
                    0xCu,
                    0x23u,
                    (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
                    *(unsigned __int8 *)(v6 + 135),
                    *(_DWORD *)(v6 + 20));
                v2 = -1073741811;
                goto LABEL_53;
              }
              v23 = *(_DWORD *)v18 & 0xFF0FFFFF | 0x400000;
            }
            else
            {
              v23 = *(_DWORD *)v18 & 0xFF0FFFFF | 0x300000;
            }
          }
          else
          {
            v23 = *(_DWORD *)v18 & 0xFF0FFFFF | 0x100000;
          }
        }
        else
        {
          v23 = *(_DWORD *)v18 & 0xFF0FFFFF | 0x200000;
        }
        *(_DWORD *)v18 = v23;
      }
    }
    memset((void *)(v6 + 456), 0, 0x60uLL);
    *(_QWORD *)(v6 + 504) = v6;
    *(_QWORD *)(v6 + 496) = UsbDevice_UpdateCompletion;
    *(_DWORD *)(v6 + 492) = *(_DWORD *)(v6 + 492) & 0xFFFF03FF | 0x3400;
    *(_BYTE *)(v6 + 495) = *(_BYTE *)(v6 + 135);
    v24 = (__int64 *)(v6 + 640);
    v25 = *(_BYTE *)(v6 + 657);
    if ( v25 )
      v24 = (__int64 *)(v6 + 648);
    v26 = *v24;
    if ( v26 )
      v26 = *(_QWORD *)(v26 + 24);
    *(_QWORD *)(v6 + 480) = v26;
    v27 = (__int64 *)(v6 + 640);
    if ( v25 )
      v27 = (__int64 *)(v6 + 648);
    v28 = *v27;
    if ( v28 )
      v28 = *(_QWORD *)(v28 + 16);
    *(_QWORD *)(v6 + 528) = v28;
    if ( v25 )
      v13 = (__int64 *)(v6 + 648);
    v29 = *v13;
    if ( *v13 )
      LODWORD(v29) = *(_DWORD *)(v29 + 44);
    v30 = *(_QWORD *)(v6 + 8);
    *(_DWORD *)(v6 + 536) = v29;
    *(_DWORD *)(v6 + 540) = 1;
    *(_QWORD *)(v6 + 544) = v6;
    if ( Controller_IsControllerAccessible(v30) )
    {
      *(_QWORD *)(v6 + 424) = a2;
      *(_BYTE *)(v6 + 432) = 0;
      return Command_SendCommand(v32, v6 + 456);
    }
    v2 = -1073741810;
    goto LABEL_53;
  }
  if ( !(unsigned int)Feature_UTMDSM__private_IsEnabledDeviceUsageNoInline()
    || (*(_DWORD *)(v5 + 24) & 0x80u) == 0
    || (*(_QWORD *)(*(_QWORD *)(v6 + 8) + 744LL) & 0x10000000LL) == 0
    || (result = UsbDevice_QueueTunnelStateDSM(v6, v5), !(_BYTE)result) )
  {
    UsbDevice_UpdateUsbDevice(v6, v5);
LABEL_53:
    *(_QWORD *)(v6 + 424) = 0LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             a2,
             v2);
  }
  return result;
}
