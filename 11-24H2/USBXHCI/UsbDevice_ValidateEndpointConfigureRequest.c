/*
 * XREFs of UsbDevice_ValidateEndpointConfigureRequest @ 0x140029C68
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002A1C8 (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_dq @ 0x14000212C (WPP_RECORDER_SF_dq.c)
 *     Endpoint_Disable @ 0x140002DBC (Endpoint_Disable.c)
 *     Controller_IsControllerAccessible @ 0x14000BE64 (Controller_IsControllerAccessible.c)
 *     Debug_FreAssertMsg @ 0x140019AC8 (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140043D58 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_SF_dddd @ 0x140044934 (WPP_RECORDER_SF_dddd.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_ValidateEndpointConfigureRequest(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // edx
  __int64 v9; // r10
  int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned int v13; // r12d
  unsigned int *v14; // r13
  __int64 v15; // r9
  int v16; // edx
  unsigned int v17; // eax
  __int64 v18; // rax
  unsigned __int16 v19; // r9
  unsigned int v20; // r12d
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // r10
  __int64 v25; // [rsp+28h] [rbp-60h]
  unsigned int v26; // [rsp+90h] [rbp+8h]
  unsigned int v27; // [rsp+A0h] [rbp+18h]
  __int64 v28; // [rsp+A8h] [rbp+20h]

  v2 = 0;
  if ( !*(_BYTE *)(a1 + 142) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        3u,
        0xCu,
        0x28u,
        (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
        *(unsigned __int8 *)(a1 + 143),
        *(_QWORD *)a1);
    return *(_DWORD *)(a2 + 24) != 0 ? 0xC0000001 : 0;
  }
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    v5 = *(_DWORD *)(a2 + 24) != 0 ? 0xC000000E : 0;
    if ( *(_DWORD *)(a2 + 40) )
    {
      do
      {
        v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
               WdfDriverGlobals,
               *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8LL * v2),
               off_14006AFE8);
        Endpoint_Disable(v7, 0LL);
        ++v2;
      }
      while ( v2 < *(_DWORD *)(a2 + 40) );
    }
    return v5;
  }
  v8 = *(_DWORD *)(a2 + 84);
  if ( !v8 )
  {
LABEL_24:
    v11 = 0LL;
    v12 = *(unsigned int *)(a2 + 84);
    v13 = 0;
    v14 = *(unsigned int **)(a2 + 88);
    v26 = 0;
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL);
    v28 = v15;
    if ( !(_DWORD)v12 )
    {
LABEL_44:
      if ( (_DWORD)v11 == (_DWORD)v12 )
      {
        if ( !(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline(v6, v12, v11, v15) )
          return 0;
        if ( *(_DWORD *)(a1 + 20) != 2 )
          return 0;
        v20 = 0;
        if ( !*(_DWORD *)(a2 + 24) )
          return 0;
        while ( 1 )
        {
          v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                  WdfDriverGlobals,
                  *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL * v20),
                  off_14006AFE8);
          v22 = v21;
          if ( !*(_WORD *)(v21 + 100) && *(_BYTE *)(v21 + 39) && ((*(_DWORD *)(v21 + 128) - 1) & 0xFFFFFFFB) == 0 )
          {
            v23 = *(_QWORD *)(a1 + 8);
            if ( ((*(_DWORD *)(*(_QWORD *)(v23 + 88) + 108LL) >> 11) & 1) == 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v22) = 2;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(v23 + 72),
                  v22,
                  12,
                  53,
                  (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
                  0);
              }
              return (unsigned int)-1073741670;
            }
            if ( *(_DWORD *)(v21 + 107) < 0xC01u )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v22) = 2;
                WPP_RECORDER_SF_(
                  *(_QWORD *)(v23 + 72),
                  v22,
                  12,
                  54,
                  (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids);
              }
              return (unsigned int)-1073741811;
            }
          }
          if ( ++v20 >= *(_DWORD *)(a2 + 24) )
            return 0;
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v25) = *(unsigned __int8 *)(a1 + 143);
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          2u,
          0xCu,
          0x34u,
          (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
          v25,
          v12,
          v11);
      }
      return (unsigned int)-1073741811;
    }
    while ( 1 )
    {
      if ( !*((_WORD *)v14 + 2) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741811;
        v19 = 44;
        goto LABEL_62;
      }
      v16 = *v14;
      if ( *v14 != 130 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_dddd(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v16,
            12,
            45,
            (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
            *(_BYTE *)(a1 + 143),
            *v14,
            130,
            v13);
        }
        return (unsigned int)-1073741811;
      }
      v17 = 0;
      v27 = 0;
      if ( *(_DWORD *)(a2 + 24) )
      {
        while ( *(unsigned __int8 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                                       WdfDriverGlobals,
                                       *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL * v17),
                                       off_14006AFE8)
                                   + 98) != *((_WORD *)v14 + 2) )
        {
          v17 = v27 + 1;
          v27 = v17;
          if ( v17 >= *(_DWORD *)(a2 + 24) )
          {
            v11 = v26;
            goto LABEL_32;
          }
        }
        v11 = ++v26;
LABEL_32:
        v15 = v28;
      }
      v6 = *(_QWORD *)((char *)v14 + 82);
      if ( v6 && !*(_QWORD *)((char *)v14 + 90) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = 46;
          goto LABEL_62;
        }
        return (unsigned int)-1073741811;
      }
      v18 = *(_QWORD *)((char *)v14 + 98);
      if ( v18 )
      {
        if ( !*(_QWORD *)((char *)v14 + 106) )
          break;
      }
      if ( v6 )
      {
        if ( !*(_QWORD *)(v15 + 80) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (unsigned int)-1073741811;
          v19 = 48;
          goto LABEL_62;
        }
        if ( !v18 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v19 = 49;
            goto LABEL_62;
          }
          return (unsigned int)-1073741811;
        }
      }
      else if ( v18 )
      {
        if ( *(_QWORD *)(v15 + 80) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (unsigned int)-1073741811;
          v19 = 51;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (unsigned int)-1073741811;
          v19 = 50;
        }
        goto LABEL_62;
      }
      ++v13;
      v12 = *(unsigned int *)(a2 + 84);
      v14 = (unsigned int *)((char *)v14 + *v14);
      if ( v13 >= (unsigned int)v12 )
        goto LABEL_44;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v19 = 47;
LABEL_62:
    LODWORD(v25) = *(unsigned __int8 *)(a1 + 143);
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      0xCu,
      v19,
      (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
      v25,
      v13);
    return (unsigned int)-1073741811;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v8,
      12,
      41,
      (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
      *(_DWORD *)(a2 + 84));
  }
  v9 = *(_QWORD *)(a1 + 8);
  v10 = *(_DWORD *)(v9 + 1036);
  if ( v10 )
  {
    v6 = (unsigned int)(v10 - 1);
    if ( (_DWORD)v6 )
    {
      if ( (_DWORD)v6 != 1 )
      {
        Debug_FreAssertMsg(
          (__int64)"Unexpected offload mode value",
          0,
          (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
          3105);
        return (unsigned int)-1073741823;
      }
      goto LABEL_24;
    }
    if ( *(_BYTE *)(a1 + 666) )
      goto LABEL_24;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), v8, 12, 43, (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids);
    }
    return (unsigned int)-1073741790;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), v8, 12, 42, (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids);
    }
    return (unsigned int)-1073741637;
  }
}
