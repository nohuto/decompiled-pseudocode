/*
 * XREFs of Endpoint_UcxEvtDefaultEndpointUpdate @ 0x140038180
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_GetDequeuePointer @ 0x14000A01C (Endpoint_GetDequeuePointer.c)
 *     Endpoint_InitializeTransferRing @ 0x14000AAA8 (Endpoint_InitializeTransferRing.c)
 *     Command_SendCommand @ 0x14000BCD4 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     XilEndpoint_AcquireBuffer @ 0x14001D4EC (XilEndpoint_AcquireBuffer.c)
 *     XilEndpoint_ReleaseBuffer @ 0x14001F92C (XilEndpoint_ReleaseBuffer.c)
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 *     Feature_UISCSF__private_IsEnabledDeviceUsageNoInline @ 0x140048590 (Feature_UISCSF__private_IsEnabledDeviceUsageNoInline.c)
 *     UsbDevice_GetDeviceSpeedEx @ 0x14004D9A0 (UsbDevice_GetDeviceSpeedEx.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

__int64 __fastcall Endpoint_UcxEvtDefaultEndpointUpdate(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int16 v4; // ax
  __int64 v5; // rbx
  __int64 v6; // rsi
  _DWORD *v7; // rbp
  _DWORD *v8; // rbx
  _QWORD *v9; // r14
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v15; // r12
  unsigned int *v16; // rbx
  __int64 v17; // rbp
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v19; // rdx
  int DeviceSpeed; // eax
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  unsigned __int16 v29; // r9
  unsigned int v30; // eax
  int v31; // r8d
  __int16 v32; // ax
  char v33; // al
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // [rsp+28h] [rbp-90h]
  __int64 v37; // [rsp+30h] [rbp-88h]
  __int64 v38; // [rsp+40h] [rbp-78h]
  _OWORD v39[2]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v40; // [rsp+78h] [rbp-40h]

  v2 = 0;
  memset(v39, 0, sizeof(v39));
  v40 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v39[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v4 = -1;
  }
  else
  {
    v4 = 40;
  }
  LOWORD(v39[0]) = v4;
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v39);
  v5 = *((_QWORD *)&v39[0] + 1);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(*((_QWORD *)&v39[0] + 1) + 24LL),
         off_14006AFE8);
  v7 = (_DWORD *)(v5 + 32);
  v8 = (_DWORD *)(v6 + 152);
  v9 = (_QWORD *)(v6 + 16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)v6 + 72LL),
      4u,
      0xDu,
      0x20u,
      (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
      *(unsigned __int8 *)(*v9 + 143LL),
      *v8,
      *v7);
  v10 = *(_QWORD *)(*(_QWORD *)v6 + 88LL);
  v38 = *(_QWORD *)(*(_QWORD *)v6 + 144LL);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
          WdfDriverGlobals,
          a2,
          off_14006AE88);
  memset((void *)(v11 + 8), 0, 0x70uLL);
  *(_QWORD *)v11 = v6;
  *(_DWORD *)(v11 + 16) = *v7;
  v12 = XilEndpoint_AcquireBuffer((_BYTE *)v6, (*(_DWORD *)(v10 + 104) & 4) != 0 ? 2112 : 1056, v6, 829714501);
  *(_QWORD *)(v11 + 8) = v12;
  if ( !v12 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v37) = *v8;
      LODWORD(v36) = *(unsigned __int8 *)(*v9 + 143LL);
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)v6 + 72LL),
        2u,
        0xDu,
        0x21u,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        v36,
        v37);
    }
    v13 = *(_QWORD *)(v11 + 8);
    if ( v13 )
    {
      XilEndpoint_ReleaseBuffer(v6, v13);
      *(_QWORD *)(v11 + 8) = 0LL;
    }
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             a2,
             3221225626LL);
  }
  v15 = *(_QWORD *)(v12 + 16);
  v16 = (unsigned int *)(v15 + ((*(_DWORD *)(v10 + 104) & 4) != 0 ? 64LL : 32LL));
  v17 = v15 + ((*(_DWORD *)(v10 + 104) & 4) != 0 ? 128LL : 64LL);
  if ( (*(_QWORD *)(*(_QWORD *)v6 + 744LL) & 0x20000000LL) != 0 )
  {
    IsEnabledDeviceUsageNoInline = Feature_UISCSF__private_IsEnabledDeviceUsageNoInline(-(*(_DWORD *)(v10 + 104) & 4));
    v19 = *v9;
    if ( IsEnabledDeviceUsageNoInline )
    {
      DeviceSpeed = UsbDevice_GetDeviceSpeedEx(*v9);
      if ( DeviceSpeed )
      {
        v22 = DeviceSpeed - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
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
                  if ( v26 != 1 )
                  {
                    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      goto LABEL_41;
                    v27 = UsbDevice_GetDeviceSpeedEx(v21);
                    v29 = 34;
                    LODWORD(v37) = v27;
                    LODWORD(v36) = *(unsigned __int8 *)(v28 + 143);
LABEL_38:
                    WPP_RECORDER_SF_dD(
                      *(_QWORD *)(*(_QWORD *)v6 + 72LL),
                      2u,
                      0xCu,
                      v29,
                      (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
                      v36,
                      v37);
                    goto LABEL_41;
                  }
                  v30 = *v16 & 0xFF0FFFFF | 0x700000;
                }
                else
                {
                  v30 = *v16 & 0xFF0FFFFF | 0x600000;
                }
              }
              else
              {
                v30 = *v16 & 0xFF0FFFFF | 0x500000;
              }
              goto LABEL_40;
            }
            goto LABEL_29;
          }
          goto LABEL_30;
        }
        goto LABEL_31;
      }
    }
    else
    {
      v31 = *(_DWORD *)(v19 + 20);
      if ( v31 )
      {
        if ( v31 != 1 )
        {
          if ( v31 != 2 )
          {
            if ( v31 != 3 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_41;
              v29 = 35;
              LODWORD(v37) = *(_DWORD *)(v19 + 20);
              LODWORD(v36) = *(unsigned __int8 *)(v19 + 143);
              goto LABEL_38;
            }
LABEL_29:
            v30 = *v16 & 0xFF0FFFFF | 0x400000;
LABEL_40:
            *v16 = v30;
            goto LABEL_41;
          }
LABEL_30:
          v30 = *v16 & 0xFF0FFFFF | 0x300000;
          goto LABEL_40;
        }
LABEL_31:
        v30 = *v16 & 0xFF0FFFFF | 0x100000;
        goto LABEL_40;
      }
    }
    v30 = *v16 & 0xFF0FFFFF | 0x200000;
    goto LABEL_40;
  }
LABEL_41:
  *(_DWORD *)(v15 + 4) |= 2u;
  *(_DWORD *)(v17 + 4) ^= ((unsigned __int8)*(_DWORD *)(v17 + 4) ^ (unsigned __int8)(8 * *(_DWORD *)(v6 + 128))) & 0x38;
  v32 = *(_WORD *)(v11 + 16);
  *(_BYTE *)(v17 + 2) = 0;
  *(_DWORD *)v17 &= 0xFFFF80FF;
  *(_WORD *)(v17 + 6) = v32;
  *(_BYTE *)(v17 + 5) = 0;
  v33 = *(_BYTE *)(v6 + 99) & 3;
  if ( v33 != 1 )
  {
    if ( (*(_QWORD *)(*(_QWORD *)v6 + 736LL) & 0x10000000000000LL) == 0
      || v33 != 3
      || *(char *)(v6 + 98) >= 0
      || (v34 = *(_QWORD *)(v6 + 16), *(_WORD *)(v34 + 132) != 1529)
      || *(_WORD *)(v34 + 134) != 4353
      || *(_DWORD *)(v34 + 36) <= 1u )
    {
      v2 = 6;
    }
  }
  *(_DWORD *)(v17 + 4) = v2 & 0xFFFFFFFE | *(_DWORD *)(v17 + 4) & 0xFFFFFFF8;
  *(_QWORD *)(v17 + 8) = Endpoint_GetDequeuePointer(v6, 0);
  *(_DWORD *)(v6 + 160) = *(unsigned __int16 *)(v17 + 6);
  Endpoint_InitializeTransferRing((__int64 *)v6, 0);
  memset((void *)(v11 + 24), 0, 0x60uLL);
  *(_QWORD *)(v11 + 64) = Endpoint_EvaluateContextCompletion;
  v35 = *(_DWORD *)(v11 + 60);
  *(_QWORD *)(v11 + 72) = v11;
  *(_DWORD *)(v11 + 60) = v35 & 0xFFFF03FF | 0x3400;
  *(_BYTE *)(v11 + 63) = *(_BYTE *)(*(_QWORD *)(v6 + 16) + 143LL);
  *(_QWORD *)(v11 + 48) = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 24LL);
  *(_QWORD *)(v11 + 96) = v15;
  *(_DWORD *)(v11 + 104) = *(_DWORD *)(*(_QWORD *)(v11 + 8) + 44LL);
  *(_DWORD *)(v11 + 108) = 2;
  *(_QWORD *)(v11 + 112) = v6;
  return Command_SendCommand(v38, v11 + 24);
}
