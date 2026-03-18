/*
 * XREFs of Interrupter_PrepareInterrupter @ 0x140082980
 * Callers:
 *     Interrupter_PrepareHardware @ 0x14007C5D0 (Interrupter_PrepareHardware.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x140004BB8 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_qDD @ 0x140018934 (WPP_RECORDER_SF_qDD.c)
 *     Debug_FreAssertMsg @ 0x140019AC8 (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     XilRegister_WriteUlong @ 0x14001BA28 (XilRegister_WriteUlong.c)
 *     XilCommonBuffer_AcquireBufferEx @ 0x14001DE44 (XilCommonBuffer_AcquireBufferEx.c)
 *     XilCommonBuffer_ReleaseBuffer @ 0x14001F74C (XilCommonBuffer_ReleaseBuffer.c)
 *     XilCommonBuffer_AcquireBufferFromPhysicalAddress @ 0x14003F740 (XilCommonBuffer_AcquireBufferFromPhysicalAddress.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x140056D58 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     Interrupter_DetermineSegmentSizeAndCount @ 0x14007BF74 (Interrupter_DetermineSegmentSizeAndCount.c)
 */

__int64 __fastcall Interrupter_PrepareInterrupter(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  _QWORD *v3; // rsi
  __int64 v5; // rcx
  int v7; // edx
  void *v8; // r15
  unsigned int v9; // edi
  int v10; // edi
  int v11; // r12d
  int v12; // eax
  __int64 v13; // rax
  unsigned int v14; // edx
  int v15; // r9d
  _QWORD *v16; // rdi
  int v17; // eax
  unsigned int v18; // edx
  _QWORD *v19; // rax
  unsigned int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rcx
  _DWORD *v23; // rdx
  __int64 v24; // rdx
  _QWORD **v25; // rbx
  _QWORD *v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // r8
  _QWORD *v29; // rdx
  __int64 v30; // r9
  __int64 v31; // rcx
  struct _DEVICE_OBJECT *v32; // rax
  __int64 v33; // r9
  int v34; // eax
  __int64 v35; // rcx
  signed __int32 v37[8]; // [rsp+0h] [rbp-79h] BYREF
  __int64 v38; // [rsp+30h] [rbp-49h]
  __int64 v39; // [rsp+38h] [rbp-41h]
  unsigned int v40; // [rsp+40h] [rbp-39h]
  int v41; // [rsp+44h] [rbp-35h]
  __int64 v42; // [rsp+48h] [rbp-31h]
  __int64 v43; // [rsp+50h] [rbp-29h]
  __int128 v44; // [rsp+58h] [rbp-21h] BYREF
  __int128 v45; // [rsp+68h] [rbp-11h]
  char pszDest[16]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v47; // [rsp+88h] [rbp+Fh]

  v3 = (_QWORD *)(a2 + 176);
  v42 = a1;
  *(_QWORD *)(a2 + 184) = a2 + 176;
  *(_QWORD *)(a2 + 176) = a2 + 176;
  v44 = 0LL;
  v47 = 0LL;
  v5 = *(_QWORD *)(a2 + 8);
  v45 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  v7 = *(_DWORD *)(v5 + 1008);
  v8 = *(void **)(v5 + 120);
  v43 = *(_QWORD *)(v5 + 88);
  if ( v7 )
  {
    if ( (unsigned int)(v7 - 1) >= 2 )
    {
      Debug_FreAssertMsg(
        (__int64)"Unexpected DMA Mode",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\interrupter.c",
        816);
      return (unsigned int)-1073741630;
    }
    v10 = 3;
    v11 = 3;
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 64);
    if ( !v12 || !*(_QWORD *)(a1 + 80) || (v11 = 4, *(_DWORD *)(a2 + 32) != v12) )
      v11 = 1;
    v10 = 1;
  }
  *(_DWORD *)(a2 + 112) ^= (*(_DWORD *)(a2 + 112) ^ a3) & 1;
  Interrupter_DetermineSegmentSizeAndCount(a2);
  v13 = XilCommonBuffer_AcquireBufferEx(v8, 16 * *(_DWORD *)(a2 + 124), a2, 0x31746E49u, v10);
  *(_QWORD *)(a2 + 168) = v13;
  if ( !v13 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 28;
      goto LABEL_30;
    }
    goto LABEL_31;
  }
  v40 = 0;
  if ( !*(_DWORD *)(a2 + 124) )
  {
LABEL_26:
    v21 = v43;
    v22 = *(_QWORD *)(v43 + 40) + 32 * (*(unsigned int *)(a2 + 32) + 1LL);
    *(_QWORD *)(a2 + 24) = v22;
    v23 = (_DWORD *)(v22 + 8);
    if ( *(_BYTE *)(v21 + 137) )
    {
      *v23 = 0;
      _InterlockedOr(v37, 0);
    }
    else
    {
      XilRegister_WriteUlong(v21, v23, 0);
    }
    v28 = 0LL;
    v29 = *(_QWORD **)(a2 + 176);
    v30 = *(_QWORD *)(*(_QWORD *)(a2 + 168) + 16LL);
    while ( v3 != v29 )
    {
      v31 = 2LL * (unsigned int)v28;
      v28 = (unsigned int)(v28 + 1);
      *(_QWORD *)(v30 + 8 * v31) = v29[3];
      *(_WORD *)(v30 + 8 * v31 + 8) = *(_WORD *)(a2 + 132);
      v29 = (_QWORD *)*v29;
    }
    if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
    {
      v32 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01033 + 248))(
                                       WdfDriverGlobals,
                                       **(_QWORD **)(a2 + 8),
                                       v28,
                                       v30);
      *(_QWORD *)(a2 + 216) = IoAllocateWorkItem(v32);
      KeInitializeEvent((PRKEVENT)(a2 + 192), NotificationEvent, 1u);
    }
    else
    {
      *(_QWORD *)(a2 + 216) = 0LL;
    }
    v33 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)&v45 = 0LL;
    v34 = *(_DWORD *)(a2 + 32);
    *(_QWORD *)&v44 = 56LL;
    pszDest[0] = 0;
    HIDWORD(v45) = 16;
    BYTE8(v45) = 0;
    v47 = 0x200000002LL;
    *((_QWORD *)&v44 + 1) = 0xC800000400LL;
    RtlStringCchPrintfA(pszDest, 0x10uLL, "%02d INT%02d", *(_DWORD *)(v33 + 176), v34);
    if ( (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v44, a2 + 16) < 0 )
      *(_QWORD *)(a2 + 16) = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 72LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v35 = *(_QWORD *)(a2 + 8);
      LODWORD(v39) = *(_DWORD *)(a2 + 124);
      LODWORD(v38) = *(_DWORD *)(a2 + 120);
      WPP_RECORDER_SF_qDD(
        *(_QWORD *)(v35 + 72),
        4u,
        9u,
        0x1Fu,
        (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
        *(_QWORD *)(a2 + 24),
        v38,
        v39);
    }
    *(_DWORD *)(a2 + 116) = 1;
    return 0;
  }
  while ( 1 )
  {
    if ( v11 == 4 )
    {
      v16 = XilCommonBuffer_AcquireBufferFromPhysicalAddress(
              (__int64)v8,
              *(_QWORD *)(v42 + 80),
              *(_DWORD *)(a2 + 120),
              a2,
              829713993);
      goto LABEL_23;
    }
    v16 = (_QWORD *)XilCommonBuffer_AcquireBufferEx(v8, *(_DWORD *)(a2 + 120), a2, 0x31746E49u, v11);
    if ( !v16 )
      break;
LABEL_24:
    v19 = (_QWORD *)v3[1];
    if ( (_QWORD *)*v19 != v3 )
LABEL_39:
      __fastfail(3u);
    v16[1] = v19;
    *v16 = v3;
    *v19 = v16;
    v20 = v40 + 1;
    v3[1] = v16;
    v40 = v20;
    if ( v20 >= *(_DWORD *)(a2 + 124) )
      goto LABEL_26;
  }
  do
  {
    v17 = *(_DWORD *)(a2 + 120);
    v41 = v17;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a2 + 8) + 72LL),
        v14,
        9,
        29,
        (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
        v17);
    }
    v14 = *(_DWORD *)(a2 + 120);
    if ( v14 <= 0x1000 )
      break;
    v18 = v14 >> 1;
    *(_DWORD *)(a2 + 120) = v18;
    v16 = (_QWORD *)XilCommonBuffer_AcquireBufferEx(v8, v18, a2, 0x31746E49u, v11);
  }
  while ( !v16 );
  v3 = (_QWORD *)(a2 + 176);
  if ( v41 )
    MicrosoftTelemetryAssertTriggeredArgsMsgKM(
      (int)"usbxhci.sys",
      829713993,
      v41,
      (__int64)"Common buffer allocation failure for large buffer (only asserting at the smallest allocation size failure)");
LABEL_23:
  if ( v16 )
    goto LABEL_24;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = 30;
LABEL_30:
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a2 + 8) + 72LL),
      v14,
      9,
      v15,
      (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids);
  }
LABEL_31:
  v9 = -1073741670;
  if ( v8 )
  {
    v24 = *(_QWORD *)(a2 + 168);
    if ( v24 )
    {
      XilCommonBuffer_ReleaseBuffer((__int64)v8, v24);
      *(_QWORD *)(a2 + 168) = 0LL;
    }
    v25 = (_QWORD **)(a2 + 176);
    while ( 1 )
    {
      v26 = *v25;
      if ( *v25 == v25 )
        break;
      if ( (_QWORD **)v26[1] != v25 )
        goto LABEL_39;
      v27 = (_QWORD *)*v26;
      if ( *(_QWORD **)(*v26 + 8LL) != v26 )
        goto LABEL_39;
      *v25 = v27;
      v27[1] = v25;
      XilCommonBuffer_ReleaseBuffer((__int64)v8, (__int64)v26);
    }
  }
  return v9;
}
