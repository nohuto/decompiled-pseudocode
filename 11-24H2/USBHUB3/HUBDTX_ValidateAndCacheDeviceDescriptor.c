/*
 * XREFs of HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x14002D190
 * Callers:
 *     HUBDSM_ValidatingAlternateDeviceDescriptor @ 0x140025160 (HUBDSM_ValidatingAlternateDeviceDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400087B4 (McTemplateK0p_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DDDD @ 0x14002E3F4 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ValidateDeviceDescriptor @ 0x14003DE2C (HUBDESC_ValidateDeviceDescriptor.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     memset @ 0x140046900 (memset.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheDeviceDescriptor(__int64 *a1, __int16 a2)
{
  __int64 *v2; // rsi
  _WORD *v4; // r15
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rdx
  _DWORD *v8; // r14
  int v9; // eax
  __int64 v10; // rax
  _DWORD *v11; // rcx
  int v12; // edx
  __int64 *v13; // rax
  __int64 v14; // rcx
  char v15; // al
  bool v16; // cf
  int v17; // edx
  bool v18; // zf
  char v19; // al
  __int64 v21; // [rsp+30h] [rbp-31h]
  __int64 v22; // [rsp+38h] [rbp-29h]
  _WORD v23[2]; // [rsp+58h] [rbp-9h] BYREF
  int v24; // [rsp+5Ch] [rbp-5h]
  __int64 v25; // [rsp+60h] [rbp-1h]
  int v26; // [rsp+68h] [rbp+7h]
  int v27; // [rsp+6Ch] [rbp+Bh]
  __int64 (__fastcall *v28)(_QWORD, _QWORD); // [rsp+70h] [rbp+Fh]
  void *v29; // [rsp+78h] [rbp+17h]
  __int64 *v30; // [rsp+80h] [rbp+1Fh]
  __int64 v31; // [rsp+88h] [rbp+27h]
  char v32; // [rsp+C8h] [rbp+67h] BYREF

  v2 = a1 + 1;
  v32 = 0;
  v4 = (_WORD *)a1 + 870;
  v5 = 4077;
  v6 = a1[1];
  if ( *(_BYTE *)(v6 + 1472) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = *a1;
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(v6 + 1432),
        v7,
        5,
        82,
        (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
        v4[4],
        v4[5],
        *(_DWORD *)(*a1 + 96),
        *(_WORD *)(v6 + 200));
    }
    v8 = a1 + 33;
    *((_DWORD *)a1 + 66) = 0;
    memset(v4, 0, 0x100uLL);
    v2 = a1 + 1;
  }
  else
  {
    v8 = a1 + 33;
  }
  v9 = *v8;
  if ( *v8 != 18 )
  {
    if ( v9 )
    {
      *((_DWORD *)a1 + 610) = 1073807365;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v22) = 18;
        LODWORD(v21) = v9;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*v2 + 1432),
          2u,
          5u,
          0x53u,
          (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
          v21,
          v22);
      }
    }
    else
    {
      *((_DWORD *)a1 + 610) = 1073807360;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(*v2 + 1432), a2, 5, 84, (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids);
      }
    }
LABEL_23:
    v5 = 4065;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer(
        v6,
        &USBHUB3_ETW_EVENT_INVALID_DEVICE_DESCRIPTOR,
        (const GUID *)((char *)a1 + 1524),
        a1[3]);
    return v5;
  }
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          WdfDriverGlobals->Driver,
          off_14006C1E8);
  v23[1] = 0;
  v11 = v8;
  v25 = 0LL;
  v27 = 0;
  v12 = *(_DWORD *)(v10 + 4);
  v23[0] = *((_WORD *)a1 + 999);
  v24 = *((_DWORD *)a1 + 43);
  v13 = v2;
  v31 = 0LL;
  if ( (v12 & 0x20) != 0 )
  {
    BYTE5(v25) = 1;
    v13 = a1 + 1;
    v11 = a1 + 33;
  }
  if ( (v12 & 0x2000) != 0 )
  {
    HIBYTE(v25) = 1;
    v2 = v13;
    v8 = v11;
  }
  v14 = *v2;
  v15 = BYTE4(v25);
  v16 = (v12 & 0x4000) != 0;
  v17 = *v8;
  if ( v16 )
    v15 = 1;
  v30 = a1;
  v18 = (*((_DWORD *)a1 + 413) & 0x200000) == 0;
  BYTE4(v25) = v15;
  v19 = v31;
  if ( !v18 )
    v19 = 1;
  LOBYTE(v31) = v19;
  v26 = *(_DWORD *)(v14 + 220);
  v28 = HUBMISC_LogDescriptorValidationErrorForDevice;
  v29 = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( !(unsigned __int8)HUBDESC_ValidateDeviceDescriptor(
                           (_DWORD)v4,
                           v17,
                           (unsigned int)v23,
                           (unsigned int)&v32,
                           *(_QWORD *)(v14 + 1432)) )
  {
    *((_DWORD *)a1 + 610) = 1073807365;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v21) = *v8;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*v2 + 1432),
        2u,
        5u,
        0x55u,
        (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
        v21);
    }
    goto LABEL_23;
  }
  *(_OWORD *)((char *)a1 + 1996) = *(_OWORD *)v4;
  *((_WORD *)a1 + 1006) = v4[8];
  if ( v32 )
    _InterlockedOr((volatile signed __int32 *)a1 + 410, 0x20000u);
  return v5;
}
