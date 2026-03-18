/*
 * XREFs of Controller_UcxEvtQueryUsbCapability @ 0x140036A80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pjqq_EtwWriteTransfer @ 0x140033050 (McTemplateK0pjqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1400352FC (WPP_RECORDER_SF__guid_.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140043D58 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_UcxEvtQueryUsbCapability(
        __int64 a1,
        const void *a2,
        unsigned int a3,
        _WORD *a4,
        _DWORD *a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  int v14; // r9d
  int v15; // eax
  int v16; // r9d
  int v17; // r9d
  __int64 v18; // r9
  int v19; // r9d
  __int64 v21; // [rsp+28h] [rbp-50h]

  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B290);
  *a5 = 0;
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_CHAINED_MDLS, 0x10uLL) == 16 )
  {
    if ( (*(_QWORD *)(v9 + 736) & 0x80u) != 0LL )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_6:
        v8 = -1073741637;
LABEL_85:
        v15 = 0;
        goto LABEL_86;
      }
      v13 = 196;
LABEL_5:
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), v10, 4, v13, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
      goto LABEL_6;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_85;
    v14 = 197;
LABEL_9:
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), v10, 4, v14, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
    goto LABEL_85;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_SECURE_TRANSFERS, 0x10uLL) == 16 )
  {
    if ( !*(_BYTE *)(v9 + 1001) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      v13 = 198;
      goto LABEL_5;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_85;
    v14 = 199;
    goto LABEL_9;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_STATIC_STREAMS, 0x10uLL) == 16 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), v10, 4, 200, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
    }
    *a5 = 2;
    if ( a3 >= 2 )
    {
      if ( a4 )
      {
        v15 = *(_DWORD *)(*(_QWORD *)(v9 + 88) + 116LL);
        *a4 = v15;
        goto LABEL_86;
      }
      goto LABEL_53;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_25:
      v8 = -1073741789;
      goto LABEL_85;
    }
    v16 = 201;
    LOBYTE(v10) = 4;
LABEL_24:
    WPP_RECORDER_SF_d(*(_QWORD *)(v9 + 72), v10, 4, v16, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, a3);
    goto LABEL_25;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_FUNCTION_SUSPEND, 0x10uLL) == 16 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_85;
    v14 = 202;
    goto LABEL_9;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_SELECTIVE_SUSPEND, 0x10uLL) == 16 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_85;
    v14 = 203;
    goto LABEL_9;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_TIME_SYNC, 0x10uLL) == 16 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_85;
    v14 = 204;
    goto LABEL_9;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_CLEAR_TT_BUFFER_ON_ASYNC_TRANSFER_CANCEL, 0x10uLL) == 16 )
  {
    if ( !_bittest64((const signed __int64 *)(v9 + 736), 0x20u) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      v13 = 206;
      goto LABEL_5;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_85;
    v14 = 205;
    goto LABEL_9;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_HIGH_BANDWIDTH_ISOCH, 0x10uLL) == 16 )
  {
    *a5 = 4;
    if ( a3 >= 4 )
    {
      if ( a4 )
      {
        v11 = *(unsigned int *)(*(_QWORD *)(v9 + 88) + 108LL);
        if ( (v11 & 0x10) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v10) = 4;
            WPP_RECORDER_SF_(
              *(_QWORD *)(v9 + 72),
              v10,
              4,
              207,
              (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
          }
          v11 = *(_BYTE *)(v9 + 1005) != 0 ? 32 : 4;
          *(_DWORD *)a4 = v11;
          goto LABEL_85;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_6;
        v13 = 208;
        goto LABEL_5;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_53:
        v8 = -1073741811;
        goto LABEL_85;
      }
      v17 = 209;
LABEL_52:
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), v10, 4, v17, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
      goto LABEL_53;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v16 = 210;
LABEL_56:
    LOBYTE(v10) = 2;
    goto LABEL_24;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_ENDPOINT_OFFLOAD, 0x10uLL) != 16 )
  {
    if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline(v11, v10, v12, v18) )
    {
      if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_CONTROLLER_EUSB2_DOUBLE_ISOCH_COMPATIBLE, 0x10uLL) == 16 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v9 + 88) + 108LL) & 0x800) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_6;
          v13 = 215;
          goto LABEL_5;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_85;
        v14 = 214;
        goto LABEL_9;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = 216;
LABEL_83:
        HIDWORD(v21) = HIDWORD(a2);
        WPP_RECORDER_SF__guid_(*(_QWORD *)(v9 + 72), v10, v12, v19);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = 217;
      goto LABEL_83;
    }
    v8 = -1073741822;
    goto LABEL_85;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), v10, 4, 211, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
  }
  *a5 = 4;
  if ( a3 < 4 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v16 = 213;
    goto LABEL_56;
  }
  if ( !a4 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_53;
    v17 = 212;
    goto LABEL_52;
  }
  v11 = *(unsigned int *)(v9 + 1036);
  if ( !(_DWORD)v11 )
    goto LABEL_6;
  v11 = (unsigned int)(v11 - 1);
  if ( !(_DWORD)v11 )
  {
    *(_DWORD *)a4 = 1;
    goto LABEL_85;
  }
  v15 = 0;
  if ( (_DWORD)v11 == 1 )
    *(_DWORD *)a4 = 2;
  else
    v8 = -1073741637;
LABEL_86:
  LOBYTE(v11) = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) < 0 )
  {
    LODWORD(v21) = v8;
    McTemplateK0pjqq_EtwWriteTransfer(v11, v10, v12, a1, a2, v21, v15);
  }
  return v8;
}
