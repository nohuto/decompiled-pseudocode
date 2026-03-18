/*
 * XREFs of HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x14007CEB8
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x14007C7A0 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140001FE8 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddDsmEvent @ 0x14000A820 (HUBSM_AddDsmEvent.c)
 *     HUBFDO_CompleteGetDescriptorRequest @ 0x14000CDAC (HUBFDO_CompleteGetDescriptorRequest.c)
 *     HUBMISC_GetActivityIdIrp @ 0x140030314 (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memmove @ 0x140045DC0 (memmove.c)
 *     memset @ 0x1400460C0 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x14007FBD4 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetDescriptorFromNodeConnection(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // edi
  __int64 v6; // r15
  __int64 v9; // rax
  _QWORD *v10; // rsi
  int v11; // r12d
  int v12; // ebx
  int ActivityIdIrp; // eax
  __int64 v14; // rcx
  const GUID *v15; // r8
  __int64 i; // rbx
  __int64 v17; // r14
  unsigned __int16 *v18; // rbx
  char v19; // r8
  unsigned __int16 *v20; // rdx
  int v21; // edi
  char v22; // al
  unsigned __int16 v23; // r10
  __int64 v24; // r8
  unsigned int v25; // r15d
  unsigned __int16 *v26; // r9
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  unsigned __int16 *v30; // rax
  __int64 v32; // [rsp+20h] [rbp-89h]
  int v33; // [rsp+30h] [rbp-79h]
  unsigned __int16 *v34; // [rsp+38h] [rbp-71h] BYREF
  __int64 v35; // [rsp+40h] [rbp-69h]
  __int64 v36; // [rsp+48h] [rbp-61h]
  __int64 v37; // [rsp+50h] [rbp-59h]
  _QWORD v38[9]; // [rsp+58h] [rbp-51h] BYREF
  __int128 v39; // [rsp+A0h] [rbp-9h] BYREF

  v4 = 0;
  v35 = a2;
  v36 = a1;
  v6 = a2;
  v34 = 0LL;
  memset(v38, 0, sizeof(v38));
  v39 = 0LL;
  LOBYTE(v33) = 0;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    v9,
                    off_14006C198);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, unsigned __int16 **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          v6,
          a3,
          &v34,
          0LL);
  if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(v10[316], 2u, 3u, 0x46u, (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids, v11);
    return HUBFDO_CompleteGetDescriptorRequest((__int64)v10, v33, v6, v11, v4);
  }
  v11 = HUBFDO_IoctlValidateParameters((_DWORD)v10, 4, a4, (_DWORD)v34, 13LL, a3);
  if ( v11 >= 0 )
  {
    v12 = *v34;
    v33 = v12;
    if ( a3 != 12 )
      memset(v34 + 6, 0, a3 - 12);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, v6);
      ActivityIdIrp = HUBMISC_GetActivityIdIrp();
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
      {
        v15 = (const GUID *)&v39;
        LODWORD(v32) = v12;
        if ( ActivityIdIrp < 0 )
          v15 = 0LL;
        McTemplateK0pq_EtwWriteTransfer(
          v14,
          &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_DESCRIPTOR_FROM_NODE_CONNECTION_START,
          v15,
          v10[31],
          v32);
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v10[2]);
    for ( i = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
                WdfDriverGlobals,
                v10[2],
                0LL,
                1LL);
          i;
          i = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
                WdfDriverGlobals,
                v10[2],
                i,
                1LL) )
    {
      if ( i != v10[333]
        && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                 + 1616))(
                                   WdfDriverGlobals,
                                   i,
                                   off_14006C0F8)
                               + 48) == v33 )
      {
        break;
      }
    }
    if ( !i
      || (v37 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                  WdfDriverGlobals,
                  i,
                  off_14006C0F8),
          (v17 = *(_QWORD *)(v37 + 24)) == 0)
      || (*(_DWORD *)(v17 + 1636) & 2) == 0 )
    {
      v11 = -1073741810;
      goto LABEL_50;
    }
    v18 = v34;
    v19 = *((_BYTE *)v34 + 7);
    v34[2] = 1664;
    switch ( v19 )
    {
      case 1:
        v21 = a3;
        v20 = (unsigned __int16 *)(v17 + 1988);
        if ( (unsigned __int64)(unsigned int)a3 - 12 > 0x12 )
        {
          v4 = 18;
          goto LABEL_48;
        }
LABEL_47:
        v4 = v21 - 12;
        goto LABEL_48;
      case 2:
        v20 = *(unsigned __int16 **)(v17 + 2016);
        if ( v20 && !*((_BYTE *)v18 + 6) )
        {
LABEL_23:
          v21 = a3;
          if ( v20[1] < (unsigned __int64)(unsigned int)a3 - 12 )
          {
            v4 = v20[1];
LABEL_48:
            memmove(v34 + 6, v20, v4);
            goto LABEL_50;
          }
          goto LABEL_47;
        }
        break;
      case 15:
        v20 = *(unsigned __int16 **)(v17 + 2056);
        if ( v20 )
          goto LABEL_23;
        break;
    }
    if ( v19 == 3 )
    {
      v22 = *((_BYTE *)v18 + 6);
      if ( v22 )
      {
        if ( v22 == *(_BYTE *)(v17 + 2004) && v18[4] == 1033 )
        {
          if ( (*(_DWORD *)(v17 + 1632) & 0x40) == 0 )
          {
            v11 = -1073741823;
LABEL_50:
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v10[2]);
            return HUBFDO_CompleteGetDescriptorRequest((__int64)v10, v33, v6, v11, v4);
          }
          v24 = *(unsigned __int16 *)(v17 + 2148);
          v23 = (*(_DWORD *)(v17 + 1636) & 0x800) != 0 ? 0xC : 0;
          LOWORD(v24) = v24 - v23;
          v25 = (unsigned __int16)v24;
          if ( (unsigned __int16)v24 >= (unsigned __int64)(unsigned int)a3 - 12 )
            v25 = a3 - 12;
          if ( v25 <= v18[5] )
          {
            v26 = v34;
            if ( (_BYTE)v25 )
              *((_BYTE *)v34 + 12) = v25;
            if ( (unsigned __int8)v25 > 1u )
              *((_BYTE *)v26 + 13) = 3;
            if ( (unsigned __int8)v25 > 2u )
              memmove(
                v26 + 7,
                (const void *)(*(_QWORD *)(v17 + 2152) + 2 * ((unsigned __int64)v23 >> 1)),
                (unsigned int)(unsigned __int8)v25 - 2);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, unsigned __int16 *))(WdfFunctions_01015 + 1088))(
              WdfDriverGlobals,
              v10[2],
              v24,
              v26);
            v4 = v25;
            v6 = v35;
            return HUBFDO_CompleteGetDescriptorRequest((__int64)v10, v33, v6, v11, v4);
          }
          v6 = v35;
        }
      }
    }
    v27 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            v36,
            off_14006C290);
    *(_QWORD *)(v27 + 152) = *(_QWORD *)(v18 + 2);
    v28 = v27 + 24;
    *(_QWORD *)(v27 + 32) = *(_QWORD *)(*(_QWORD *)(v37 + 24) + 24LL);
    v29 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v17);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      v29,
      "User Mode FDO Request",
      4720LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v10[2]);
    *(_DWORD *)v28 = 3276936;
    *(_DWORD *)(v28 + 36) = a3 - 12;
    *(_DWORD *)(v28 + 32) = 11;
    v30 = v34;
    *(_QWORD *)(v28 + 48) = 0LL;
    *(_QWORD *)(v28 + 40) = v30 + 6;
    *(_DWORD *)(v28 + 56) = 5000;
    LOBYTE(v38[0]) = 15;
    LODWORD(v38[3]) = 2228227;
    v38[1] = v28;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
      WdfDriverGlobals,
      v6,
      v38);
    *(_QWORD *)(v17 + 496) = v6;
    return HUBSM_AddDsmEvent(v17, 4051LL);
  }
  return HUBFDO_CompleteGetDescriptorRequest((__int64)v10, v33, v6, v11, v4);
}
