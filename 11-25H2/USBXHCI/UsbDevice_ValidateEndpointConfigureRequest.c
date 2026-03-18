/*
 * XREFs of UsbDevice_ValidateEndpointConfigureRequest @ 0x14002A6A8
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002AB24 (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     Controller_IsControllerAccessible @ 0x1400086E0 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     Endpoint_Disable @ 0x14000FDC4 (Endpoint_Disable.c)
 *     WPP_RECORDER_SF_dq @ 0x14002CC1C (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dddd @ 0x140044E38 (WPP_RECORDER_SF_dddd.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_ValidateEndpointConfigureRequest(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // r15
  unsigned int v5; // ebx
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // r10
  int v9; // ecx
  int v10; // ecx
  int v11; // r8d
  unsigned int v12; // edx
  unsigned int v13; // r12d
  unsigned int *v14; // r13
  __int64 v15; // r9
  int v16; // edx
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int16 v20; // r9
  __int64 v22; // [rsp+28h] [rbp-60h]
  int v23; // [rsp+90h] [rbp+8h]
  unsigned int v24; // [rsp+A0h] [rbp+18h]
  __int64 v25; // [rsp+A8h] [rbp+20h]

  v2 = 0;
  v3 = a2;
  if ( !*(_BYTE *)(a1 + 134) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        a2,
        12,
        37,
        (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
        *(_BYTE *)(a1 + 135),
        *(_QWORD *)a1);
    }
    return *(_DWORD *)(v3 + 24) != 0 ? 0xC0000001 : 0;
  }
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    v5 = *(_DWORD *)(v3 + 24) != 0 ? 0xC000000E : 0;
    if ( *(_DWORD *)(v3 + 40) )
    {
      do
      {
        v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
               WdfDriverGlobals,
               *(_QWORD *)(*(_QWORD *)(v3 + 48) + 8LL * v2),
               off_14006AFE8);
        Endpoint_Disable(v6, 0LL);
        ++v2;
      }
      while ( v2 < *(_DWORD *)(v3 + 40) );
    }
    return v5;
  }
  v7 = *(_DWORD *)(v3 + 84);
  if ( v7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v7) = 5;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v7,
        12,
        38,
        (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
        *(_DWORD *)(v3 + 84));
    }
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(_DWORD *)(v8 + 1044);
    if ( !v9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(v8 + 72), v7, 12, 39, (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids);
      }
      return (unsigned int)-1073741637;
    }
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
      {
        Debug_FreAssertMsg(
          (__int64)"Unexpected offload mode value",
          0,
          (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\usbdevice.c",
          2879);
        return (unsigned int)-1073741823;
      }
    }
    else if ( !*(_BYTE *)(a1 + 658) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(v8 + 72), v7, 12, 40, (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids);
      }
      return (unsigned int)-1073741790;
    }
  }
  v11 = 0;
  v12 = *(_DWORD *)(v3 + 84);
  v13 = 0;
  v14 = *(unsigned int **)(v3 + 88);
  v23 = 0;
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL);
  v25 = v15;
  if ( v12 )
  {
    while ( 1 )
    {
      if ( !*((_WORD *)v14 + 2) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741811;
        v20 = 41;
        goto LABEL_62;
      }
      v16 = *v14;
      if ( *v14 != 130 )
        break;
      v17 = 0;
      v24 = 0;
      if ( *(_DWORD *)(v3 + 24) )
      {
        while ( *(unsigned __int8 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                                       WdfDriverGlobals,
                                       *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8LL * v17),
                                       off_14006AFE8)
                                   + 98) != *((_WORD *)v14 + 2) )
        {
          v17 = v24 + 1;
          v24 = v17;
          if ( v17 >= *(_DWORD *)(v3 + 24) )
          {
            v11 = v23;
            goto LABEL_32;
          }
        }
        v11 = ++v23;
LABEL_32:
        v15 = v25;
      }
      v18 = *(_QWORD *)((char *)v14 + 82);
      if ( v18 && !*(_QWORD *)((char *)v14 + 90) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741811;
        v20 = 43;
        goto LABEL_62;
      }
      v19 = *(_QWORD *)((char *)v14 + 98);
      if ( v19 && !*(_QWORD *)((char *)v14 + 106) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741811;
        v20 = 44;
        goto LABEL_62;
      }
      if ( v18 )
      {
        if ( !*(_QWORD *)(v15 + 80) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (unsigned int)-1073741811;
          v20 = 45;
          goto LABEL_62;
        }
        if ( !v19 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (unsigned int)-1073741811;
          v20 = 46;
LABEL_62:
          LODWORD(v22) = *(unsigned __int8 *)(a1 + 135);
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            2u,
            0xCu,
            v20,
            (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
            v22,
            v13);
          return (unsigned int)-1073741811;
        }
      }
      else if ( v19 )
      {
        if ( *(_QWORD *)(v15 + 80) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (unsigned int)-1073741811;
          v20 = 48;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (unsigned int)-1073741811;
          v20 = 47;
        }
        goto LABEL_62;
      }
      ++v13;
      v12 = *(_DWORD *)(v3 + 84);
      v14 = (unsigned int *)((char *)v14 + *v14);
      if ( v13 >= v12 )
        goto LABEL_44;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v16,
        12,
        42,
        (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
        *(_BYTE *)(a1 + 135),
        *v14,
        130,
        v13);
    }
  }
  else
  {
LABEL_44:
    if ( v11 == v12 )
      return 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v22) = *(unsigned __int8 *)(a1 + 135);
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        0xCu,
        0x31u,
        (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
        v22,
        v12,
        v11);
    }
  }
  return (unsigned int)-1073741811;
}
