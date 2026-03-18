/*
 * XREFs of Controller_UcxEvtQueryUsbCapability @ 0x140033320
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pjqq_EtwWriteTransfer @ 0x1400338BC (McTemplateK0pjqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF__guid_ @ 0x140036DA8 (WPP_RECORDER_SF__guid_.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_UcxEvtQueryUsbCapability(
        __int64 a1,
        const void *a2,
        unsigned int a3,
        _WORD *a4,
        _DWORD *a5)
{
  unsigned int v8; // ebx
  __int64 v9; // r14
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // r9d
  int v15; // eax
  int v16; // r9d
  int v17; // r9d
  int v18; // r9d
  int v20; // [rsp+80h] [rbp+8h]

  v20 = a1;
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
LABEL_75:
        LOBYTE(v15) = 0;
        goto LABEL_76;
      }
      v13 = 199;
LABEL_5:
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), v10, 4, v13, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
      goto LABEL_6;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_75;
    v14 = 200;
LABEL_9:
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), v10, 4, v14, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
    goto LABEL_75;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_SECURE_TRANSFERS, 0x10uLL) == 16 )
  {
    if ( !*(_BYTE *)(v9 + 1001) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      v13 = 201;
      goto LABEL_5;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_75;
    v14 = 202;
    goto LABEL_9;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_STATIC_STREAMS, 0x10uLL) == 16 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), v10, 4, 203, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
    }
    *a5 = 2;
    if ( a3 >= 2 )
    {
      if ( a4 )
      {
        v15 = *(_DWORD *)(*(_QWORD *)(v9 + 88) + 116LL);
        *a4 = v15;
        goto LABEL_76;
      }
      goto LABEL_53;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_25:
      v8 = -1073741789;
      goto LABEL_75;
    }
    v16 = 204;
    LOBYTE(v10) = 4;
LABEL_24:
    WPP_RECORDER_SF_d(*(_QWORD *)(v9 + 72), v10, 4, v16, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids, a3);
    goto LABEL_25;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_FUNCTION_SUSPEND, 0x10uLL) == 16 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_75;
    v14 = 205;
    goto LABEL_9;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_SELECTIVE_SUSPEND, 0x10uLL) == 16 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_75;
    v14 = 206;
    goto LABEL_9;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_TIME_SYNC, 0x10uLL) == 16 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_75;
    v14 = 207;
    goto LABEL_9;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_CLEAR_TT_BUFFER_ON_ASYNC_TRANSFER_CANCEL, 0x10uLL) == 16 )
  {
    if ( !_bittest64((const signed __int64 *)(v9 + 736), 0x20u) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      v13 = 209;
      goto LABEL_5;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_75;
    v14 = 208;
    goto LABEL_9;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_HIGH_BANDWIDTH_ISOCH, 0x10uLL) == 16 )
  {
    *a5 = 4;
    if ( a3 >= 4 )
    {
      if ( a4 )
      {
        v11 = *(_DWORD *)(*(_QWORD *)(v9 + 88) + 108LL);
        if ( (v11 & 0x10) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v10) = 4;
            WPP_RECORDER_SF_(
              *(_QWORD *)(v9 + 72),
              v10,
              4,
              210,
              (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
          }
          v11 = *(_BYTE *)(v9 + 1007) != 0 ? 32 : 4;
          *(_DWORD *)a4 = v11;
          goto LABEL_75;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_6;
        v13 = 211;
        goto LABEL_5;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_53:
        v8 = -1073741811;
        goto LABEL_75;
      }
      v17 = 212;
LABEL_52:
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), v10, 4, v17, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
      goto LABEL_53;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v16 = 213;
LABEL_56:
    LOBYTE(v10) = 2;
    goto LABEL_24;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_ENDPOINT_OFFLOAD, 0x10uLL) != 16 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_(*(_QWORD *)(v9 + 72), v10, v12, v18);
    v8 = -1073741822;
    goto LABEL_75;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), v10, 4, 214, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
  }
  *a5 = 4;
  if ( a3 < 4 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v16 = 216;
    goto LABEL_56;
  }
  if ( !a4 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_53;
    v17 = 215;
    goto LABEL_52;
  }
  v11 = *(_DWORD *)(v9 + 1044);
  if ( !v11 )
    goto LABEL_6;
  if ( !--v11 )
  {
    *(_DWORD *)a4 = 1;
    goto LABEL_75;
  }
  LOBYTE(v15) = 0;
  if ( v11 == 1 )
    *(_DWORD *)a4 = 2;
  else
    v8 = -1073741637;
LABEL_76:
  LOBYTE(v11) = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) < 0 )
    McTemplateK0pjqq_EtwWriteTransfer(v11, v10, v12, v20, (__int64)a2, v8, v15);
  return v8;
}
