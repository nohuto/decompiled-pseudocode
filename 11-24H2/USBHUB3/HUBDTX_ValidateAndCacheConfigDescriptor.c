/*
 * XREFs of HUBDTX_ValidateAndCacheConfigDescriptor @ 0x14002CB50
 * Callers:
 *     HUBDSM_ValidatingAlternateConfigurationDescriptor @ 0x140025140 (HUBDSM_ValidatingAlternateConfigurationDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400087B4 (McTemplateK0p_EtwWriteTransfer.c)
 *     FindMidiInterfaceDescriptor @ 0x140029FE0 (FindMidiInterfaceDescriptor.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x14003CA10 (HUBDESC_ParseConfigurationDescriptor.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x14003DA10 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     memmove @ 0x140046600 (memmove.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheConfigDescriptor(__int64 a1)
{
  struct _USB_CONFIGURATION_DESCRIPTOR *v1; // rdi
  unsigned int v3; // esi
  __int64 v4; // rax
  __int64 v5; // r9
  int v6; // edx
  bool v7; // cf
  int v8; // edx
  __int64 v9; // r9
  _BYTE *v10; // rdx
  __int64 v11; // rcx
  int v12; // r9d
  int v13; // eax
  char v14; // al
  struct _USB_CONFIGURATION_DESCRIPTOR *v15; // rcx
  struct _USB_CONFIGURATION_DESCRIPTOR *v16; // rdx
  __int64 bLength; // rax
  struct _USB_CONFIGURATION_DESCRIPTOR *v18; // r8
  unsigned __int64 v19; // rax
  unsigned __int8 bDescriptorType; // r9
  bool v21; // zf
  int v22; // r9d
  char v23; // al
  void *Pool2; // rax
  _BYTE *v25; // rax
  __int64 v26; // r8
  PUSB_INTERFACE_DESCRIPTOR MidiInterfaceDescriptor; // rax
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  _WORD v32[2]; // [rsp+50h] [rbp-9h] BYREF
  int v33; // [rsp+54h] [rbp-5h]
  __int64 v34; // [rsp+58h] [rbp-1h]
  int v35; // [rsp+60h] [rbp+7h]
  int v36; // [rsp+64h] [rbp+Bh]
  void (__fastcall *v37)(__int64, __int64); // [rsp+68h] [rbp+Fh]
  void *v38; // [rsp+70h] [rbp+17h]
  __int64 v39; // [rsp+78h] [rbp+1Fh]
  _BOOL8 v40; // [rsp+80h] [rbp+27h]
  char v41; // [rsp+C0h] [rbp+67h] BYREF

  v1 = *(struct _USB_CONFIGURATION_DESCRIPTOR **)(a1 + 2024);
  v41 = 0;
  v3 = 4077;
  if ( !v1 )
    v1 = (struct _USB_CONFIGURATION_DESCRIPTOR *)(a1 + 1740);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_14006C1E8);
  v5 = *(_QWORD *)(a1 + 8);
  v34 = 0LL;
  v40 = 0LL;
  v6 = *(_DWORD *)(v4 + 4);
  v32[0] = *(_WORD *)(a1 + 1998);
  v33 = *(_DWORD *)(a1 + 172);
  v32[1] = 0;
  *(_WORD *)((char *)&v34 + 5) = (v6 & 0x20) != 0;
  v36 = 0;
  HIBYTE(v34) = (v6 & 0x2000) != 0;
  v7 = (v6 & 0x4000) != 0;
  v8 = *(_DWORD *)(a1 + 264);
  v21 = (*(_DWORD *)(a1 + 1652) & 0x200000) == 0;
  BYTE4(v34) = v7;
  v39 = a1;
  v40 = !v21;
  LODWORD(v4) = *(_DWORD *)(v5 + 220);
  v9 = *(_QWORD *)(v5 + 1432);
  v35 = v4;
  v37 = (void (__fastcall *)(__int64, __int64))HUBMISC_LogDescriptorValidationErrorForDevice;
  v38 = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( !(unsigned __int8)HUBDESC_ValidateConfigurationDescriptorSet(
                           (_DWORD)v1,
                           v8,
                           (unsigned int)v32,
                           v9,
                           (__int64)&v41) )
  {
    *(_DWORD *)(a1 + 2440) = 1073807364;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_87;
    v12 = 72;
    goto LABEL_86;
  }
  v13 = *(unsigned __int16 *)(a1 + 1742);
  if ( v1->wTotalLength != (_WORD)v13 )
  {
    *(_DWORD *)(a1 + 2440) = 1073807364;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x49u,
        (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
        v1->wTotalLength,
        v13);
    v37(v39, 61LL);
    goto LABEL_87;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x2000u);
  if ( v41 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1648), 0x40u);
  if ( *(_BYTE *)(a1 + 2013) > 1u )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1648), 0x80u);
  if ( *(_BYTE *)(a1 + 2013) > 1u && v1->bNumInterfaces > 1u )
  {
    v14 = *(_BYTE *)(a1 + 2000);
    if ( !v14 || v14 == -17 && *(_BYTE *)(a1 + 2001) == 2 && *(_BYTE *)(a1 + 2002) == 1 )
    {
      v15 = v1 + 1;
      v16 = (struct _USB_CONFIGURATION_DESCRIPTOR *)((char *)v1 + v1->wTotalLength);
      while ( 1 )
      {
        if ( v15 >= v16 )
          goto LABEL_43;
        bLength = v15->bLength;
        v18 = v15;
        if ( !(_BYTE)bLength )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_43;
          v22 = 74;
          goto LABEL_42;
        }
        v15 = (struct _USB_CONFIGURATION_DESCRIPTOR *)((char *)v15 + bLength);
        v19 = (char *)v16 - (char *)v18;
        if ( (unsigned __int64)((char *)v16 - (char *)v18) < 2 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_43;
          v22 = 75;
          goto LABEL_42;
        }
        bDescriptorType = v18->bDescriptorType;
        if ( bDescriptorType == 11 )
          break;
        if ( bDescriptorType == 4 )
        {
          if ( v19 < 6 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_43;
            v22 = 77;
            goto LABEL_42;
          }
          v21 = v18->bConfigurationValue == 1;
LABEL_29:
          if ( v21 )
          {
            _InterlockedOr((volatile signed __int32 *)(a1 + 1640), 4u);
            if ( *(_BYTE *)(*(_QWORD *)a1 + 201LL) )
              _InterlockedOr((volatile signed __int32 *)(a1 + 1652), 0x2000000u);
            goto LABEL_43;
          }
        }
      }
      if ( v19 < 5 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_43;
        v22 = 76;
LABEL_42:
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          (_DWORD)v16,
          5,
          v22,
          (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids);
        goto LABEL_43;
      }
      v21 = v18->bNumInterfaces == 1;
      goto LABEL_29;
    }
  }
LABEL_43:
  if ( (*(_DWORD *)(a1 + 1640) & 4) == 0 && *(_BYTE *)(a1 + 2013) == 1 && v1->bNumInterfaces > 1u )
  {
    v23 = *(_BYTE *)(a1 + 2000);
    if ( !v23 || v23 == -17 && *(_BYTE *)(a1 + 2001) == 2 && *(_BYTE *)(a1 + 2002) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1640), 4u);
  }
  if ( !*(_QWORD *)(a1 + 2024) )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, v1->wTotalLength, 1681082453LL);
    *(_QWORD *)(a1 + 2024) = Pool2;
    if ( !Pool2 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_87;
      v12 = 78;
      goto LABEL_86;
    }
    memmove(Pool2, v1, v1->wTotalLength);
    v1 = *(struct _USB_CONFIGURATION_DESCRIPTOR **)(a1 + 2024);
  }
  v25 = (_BYTE *)HUBDESC_ParseConfigurationDescriptor(
                   (_DWORD)v1,
                   (_DWORD)v1,
                   -1,
                   -1,
                   -1,
                   -1,
                   -1,
                   0LL,
                   *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL));
  *(_QWORD *)(a1 + 2016) = v25;
  v10 = v25;
  if ( v25 )
  {
    LOBYTE(v11) = v25[5];
    if ( (_BYTE)v11 == 9 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1640), 2u);
      _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x800u);
    }
    else if ( (*(_DWORD *)(a1 + 1640) & 4) == 0 )
    {
      if ( (_BYTE)v11 == 1 )
      {
        MidiInterfaceDescriptor = FindMidiInterfaceDescriptor(v1, v25, v26, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL));
        if ( MidiInterfaceDescriptor )
          *(_QWORD *)(a1 + 2016) = MidiInterfaceDescriptor;
      }
      else if ( *(_WORD *)(a1 + 1998) > 0x200u && (*(_DWORD *)(a1 + 1652) & 0x800) == 0 )
      {
        v28 = *(_DWORD *)(a1 + 172);
        if ( v28 == 3 )
        {
          v11 = *(unsigned int *)(*(_QWORD *)a1 + 776LL);
          if ( (v11 & 1) == 0 )
            goto LABEL_71;
        }
        else if ( v28 != 2 )
        {
          goto LABEL_71;
        }
        v29 = HUBDESC_ParseConfigurationDescriptor(
                (_DWORD)v1,
                (_DWORD)v10,
                (unsigned __int8)v10[2],
                -1,
                8,
                6,
                98,
                0LL,
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL));
        if ( v29 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x800u);
          *(_QWORD *)(a1 + 2016) = v29;
        }
      }
    }
LABEL_71:
    if ( *(_BYTE *)(*(_QWORD *)a1 + 201LL) )
    {
      if ( (*(_DWORD *)(a1 + 1640) & 4) == 0 )
      {
        v30 = *(_QWORD *)(a1 + 2016);
        if ( *(_BYTE *)(v30 + 5) == 1 && !*(_BYTE *)(v30 + 7) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v10) = 2;
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
              (_DWORD)v10,
              5,
              79,
              (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids);
          }
          *(_QWORD *)(a1 + 2016) = 0LL;
          *(_DWORD *)(a1 + 2440) = 1073807393;
          goto LABEL_87;
        }
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 1640) & 6) == 6 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      (_DWORD)v10,
      5,
      80,
      (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids);
  }
  if ( (v1->bmAttributes & 0x20) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1640), 0x100u);
  if ( (*(_DWORD *)(a1 + 1652) & 0x100000) != 0 )
  {
    *(_DWORD *)(a1 + 2440) = 1073807387;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_87;
    v12 = 81;
LABEL_86:
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      (_DWORD)v10,
      5,
      v12,
      (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids);
LABEL_87:
    v3 = 4065;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer(
        v11,
        &USBHUB3_ETW_EVENT_INVALID_CONFIGURATION_DESCRIPTOR,
        (const GUID *)(a1 + 1524),
        *(_QWORD *)(a1 + 24));
  }
  return v3;
}
