/*
 * XREFs of HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x14002D888
 * Callers:
 *     HUBDSM_ValidatingSerialNumberStringDescriptorFor1xDevice @ 0x140025E20 (HUBDSM_ValidatingSerialNumberStringDescriptorFor1xDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400087B4 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBMISC_LogDescriptorValidationErrorForDevice @ 0x140030D30 (HUBMISC_LogDescriptorValidationErrorForDevice.c)
 *     HUBDESC_InternalValidateStringDescriptor @ 0x140039FC4 (HUBDESC_InternalValidateStringDescriptor.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memmove @ 0x140045DC0 (memmove.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheSerialNumberStringDescriptor(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ecx
  int v4; // ecx
  bool v5; // cf
  __int64 v6; // rcx
  bool v7; // zf
  __int64 v8; // rsi
  int v9; // r9d
  int v10; // edx
  __int64 v11; // rcx
  char v12; // r13
  unsigned int v13; // r15d
  unsigned int v14; // esi
  unsigned int v15; // r14d
  unsigned __int16 *v16; // rdi
  void *v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // edi
  __int64 Pool2; // rax
  int v21; // eax
  int v22; // eax
  unsigned int v23; // edi
  __int64 v25; // [rsp+28h] [rbp-41h]
  unsigned int v26; // [rsp+30h] [rbp-39h]
  __int64 v27; // [rsp+38h] [rbp-31h]
  _WORD v28[2]; // [rsp+40h] [rbp-29h] BYREF
  int v29; // [rsp+44h] [rbp-25h]
  __int64 v30; // [rsp+48h] [rbp-21h]
  int v31; // [rsp+50h] [rbp-19h]
  int v32; // [rsp+54h] [rbp-15h]
  __int64 (__fastcall *v33)(_QWORD, _QWORD); // [rsp+58h] [rbp-11h]
  void *v34; // [rsp+60h] [rbp-9h]
  __int64 v35; // [rsp+68h] [rbp-1h]
  _BOOL8 v36; // [rsp+70h] [rbp+7h]
  int v37; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v38; // [rsp+D8h] [rbp+6Fh]
  unsigned int v39; // [rsp+E0h] [rbp+77h]
  unsigned int v40; // [rsp+E8h] [rbp+7Fh]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_14006C1E8);
  v28[0] = *(_WORD *)(a1 + 1990);
  v3 = *(_DWORD *)(a1 + 172);
  v30 = 0LL;
  v29 = v3;
  v4 = *(_DWORD *)(v2 + 4);
  v36 = 0LL;
  v28[1] = 0;
  *(_WORD *)((char *)&v30 + 5) = (v4 & 0x20) != 0;
  v32 = 0;
  HIBYTE(v30) = (v4 & 0x2000) != 0;
  v5 = (v4 & 0x4000) != 0;
  v6 = *(_QWORD *)(a1 + 8);
  v35 = a1;
  v7 = (*(_DWORD *)(a1 + 1644) & 0x200000) == 0;
  v8 = *(_QWORD *)(v6 + 1432);
  BYTE4(v30) = v5;
  v27 = v8;
  v36 = !v7;
  v31 = *(_DWORD *)(v6 + 220);
  v33 = HUBMISC_LogDescriptorValidationErrorForDevice;
  v34 = &HUBMISC_LogDescriptorValidationWarningForDevice;
  v26 = *(_DWORD *)(a1 + 256);
  v40 = v26;
  v37 = 0;
  v12 = HUBDESC_InternalValidateStringDescriptor((int)a1 + 1732, v26, (unsigned int)&v37, v9, v8, (__int64)v28);
  if ( !v12 )
    goto LABEL_13;
  v13 = *(unsigned __int8 *)(a1 + 1732);
  v14 = 0;
  v38 = v13;
  v39 = v13 - 2;
  v15 = (v13 - 2) >> 1;
  if ( !v15 )
    goto LABEL_15;
  v16 = (unsigned __int16 *)(a1 + 1734);
  v10 = 0;
  do
  {
    v11 = *v16;
    if ( !(_WORD)v11 )
      break;
    if ( (unsigned __int16)(v11 - 32) > 0x5Fu || (_DWORD)v11 == 44 )
    {
      v12 = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v25) = *v16;
        WPP_RECORDER_SF_d(v27, 2u, 5u, 0x11Au, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v25);
      }
      HUBMISC_LogDescriptorValidationErrorForDevice(a1, 132LL);
      v10 = 0;
    }
    ++v14;
    ++v16;
  }
  while ( v14 < v15 );
  v13 = v38;
  if ( v12 )
  {
LABEL_15:
    v17 = *(void **)(a1 + 2152);
    if ( v17 )
      ExFreePoolWithTag(v17, 0x64334855u);
    v18 = v40 + 12;
    if ( !_bittest((const signed __int32 *)(a1 + 1636), 0xBu) )
      v18 = v26;
    v19 = v18;
    Pool2 = ExAllocatePool2(64LL, v18, 1681082453LL);
    *(_QWORD *)(a1 + 2152) = Pool2;
    v11 = Pool2;
    if ( !Pool2 )
      goto LABEL_28;
    v21 = *(_DWORD *)(a1 + 1632);
    *(_DWORD *)(a1 + 2148) = v19;
    if ( (v21 & 2) != 0 )
    {
      if ( *(_WORD *)(a1 + 1990) < 0x300u )
      {
        *(_QWORD *)v11 = *(_QWORD *)L"MSFT20";
        v22 = *(_DWORD *)L"20";
LABEL_25:
        *(_DWORD *)(v11 + 8) = v22;
        v11 += 12LL;
        goto LABEL_26;
      }
    }
    else if ( !_bittest((const signed __int32 *)(a1 + 1636), 0xBu) )
    {
LABEL_26:
      memmove((void *)v11, (const void *)(a1 + 1734), v13 - 2LL);
      _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 0x40u);
      return 4077;
    }
    *(_QWORD *)v11 = *(_QWORD *)L"MSFT30";
    v22 = *(_DWORD *)L"30";
    goto LABEL_25;
  }
  LODWORD(v8) = v27;
LABEL_13:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_(v8, v10, 5, 283, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
  }
  *(_DWORD *)(a1 + 2432) = 1073807384;
LABEL_28:
  v23 = 4065;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      v11,
      &USBHUB3_ETW_EVENT_INVALID_SERIAL_NUMBER_STRING_DESCRIPTOR,
      (const GUID *)(a1 + 1516),
      *(_QWORD *)(a1 + 24));
  return v23;
}
