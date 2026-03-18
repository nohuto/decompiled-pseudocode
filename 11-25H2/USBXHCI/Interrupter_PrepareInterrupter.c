/*
 * XREFs of Interrupter_PrepareInterrupter @ 0x140082C5C
 * Callers:
 *     Interrupter_PrepareHardware @ 0x14007C634 (Interrupter_PrepareHardware.c)
 * Callees:
 *     XilCommonBuffer_ReleaseBuffer @ 0x140003428 (XilCommonBuffer_ReleaseBuffer.c)
 *     XilCommonBuffer_AcquireBufferEx @ 0x140003EB4 (XilCommonBuffer_AcquireBufferEx.c)
 *     XilRegister_WriteUlong @ 0x14000B858 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     RtlStringCchPrintfA @ 0x140011198 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_qDD @ 0x14002064C (WPP_RECORDER_SF_qDD.c)
 *     Feature_UMPERS__private_IsEnabledDeviceUsageNoInline @ 0x14003F574 (Feature_UMPERS__private_IsEnabledDeviceUsageNoInline.c)
 *     XilCommonBuffer_AcquireBufferFromPhysicalAddress @ 0x14003F8C4 (XilCommonBuffer_AcquireBufferFromPhysicalAddress.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x140057938 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     Interrupter_DetermineSegmentSizeAndCount @ 0x14007BFC0 (Interrupter_DetermineSegmentSizeAndCount.c)
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
  _QWORD **v24; // rbx
  _QWORD *v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // r8
  _QWORD *v28; // rdx
  __int64 v29; // r9
  __int64 v30; // rcx
  struct _DEVICE_OBJECT *v31; // rax
  __int64 v32; // r9
  int v33; // eax
  __int64 v34; // rcx
  signed __int32 v36[8]; // [rsp+0h] [rbp-79h] BYREF
  __int64 v37; // [rsp+30h] [rbp-49h]
  __int64 v38; // [rsp+38h] [rbp-41h]
  unsigned int v39; // [rsp+40h] [rbp-39h]
  int v40; // [rsp+44h] [rbp-35h]
  __int64 v41; // [rsp+48h] [rbp-31h]
  __int64 v42; // [rsp+50h] [rbp-29h]
  __int128 v43; // [rsp+58h] [rbp-21h] BYREF
  __int128 v44; // [rsp+68h] [rbp-11h]
  char pszDest[16]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v46; // [rsp+88h] [rbp+Fh]

  v3 = (_QWORD *)(a2 + 176);
  v41 = a1;
  *(_QWORD *)(a2 + 184) = a2 + 176;
  *(_QWORD *)(a2 + 176) = a2 + 176;
  v43 = 0LL;
  v46 = 0LL;
  v5 = *(_QWORD *)(a2 + 8);
  v44 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  v7 = *(_DWORD *)(v5 + 1012);
  v8 = *(void **)(v5 + 120);
  v42 = *(_QWORD *)(v5 + 88);
  if ( v7 )
  {
    if ( (unsigned int)(v7 - 1) >= 2 )
    {
      Debug_FreAssertMsg(
        (__int64)"Unexpected DMA Mode",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\interrupter.c",
        818);
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
      goto LABEL_31;
    }
    goto LABEL_32;
  }
  v39 = 0;
  if ( !*(_DWORD *)(a2 + 124) )
  {
LABEL_27:
    v21 = v42;
    v22 = *(_QWORD *)(v42 + 40) + 32 * (*(unsigned int *)(a2 + 32) + 1LL);
    *(_QWORD *)(a2 + 24) = v22;
    v23 = (_DWORD *)(v22 + 8);
    if ( *(_BYTE *)(v21 + 137) )
    {
      *v23 = 0;
      _InterlockedOr(v36, 0);
    }
    else
    {
      XilRegister_WriteUlong(v21, v23, 0);
    }
    v27 = 0LL;
    v28 = *(_QWORD **)(a2 + 176);
    v29 = *(_QWORD *)(*(_QWORD *)(a2 + 168) + 16LL);
    while ( v3 != v28 )
    {
      v30 = 2LL * (unsigned int)v27;
      v27 = (unsigned int)(v27 + 1);
      *(_QWORD *)(v29 + 8 * v30) = v28[3];
      *(_WORD *)(v29 + 8 * v30 + 8) = *(_WORD *)(a2 + 132);
      v28 = (_QWORD *)*v28;
    }
    if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
    {
      v31 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01033 + 248))(
                                       WdfDriverGlobals,
                                       **(_QWORD **)(a2 + 8),
                                       v27,
                                       v29);
      *(_QWORD *)(a2 + 216) = IoAllocateWorkItem(v31);
      KeInitializeEvent((PRKEVENT)(a2 + 192), NotificationEvent, 1u);
    }
    else
    {
      *(_QWORD *)(a2 + 216) = 0LL;
    }
    v32 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)&v44 = 0LL;
    v33 = *(_DWORD *)(a2 + 32);
    *(_QWORD *)&v43 = 56LL;
    pszDest[0] = 0;
    HIDWORD(v44) = 16;
    BYTE8(v44) = 0;
    v46 = 0x200000002LL;
    *((_QWORD *)&v43 + 1) = 0xC800000400LL;
    RtlStringCchPrintfA(pszDest, 0x10uLL, "%02d INT%02d", *(_DWORD *)(v32 + 176), v33);
    if ( (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v43, a2 + 16) < 0 )
      *(_QWORD *)(a2 + 16) = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 72LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v34 = *(_QWORD *)(a2 + 8);
      LODWORD(v38) = *(_DWORD *)(a2 + 124);
      LODWORD(v37) = *(_DWORD *)(a2 + 120);
      WPP_RECORDER_SF_qDD(
        *(_QWORD *)(v34 + 72),
        4u,
        9u,
        0x1Fu,
        (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids,
        *(_QWORD *)(a2 + 24),
        v37,
        v38);
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
              *(_QWORD *)(v41 + 80),
              *(_DWORD *)(a2 + 120),
              a2,
              829713993);
      goto LABEL_24;
    }
    v16 = (_QWORD *)XilCommonBuffer_AcquireBufferEx(v8, *(_DWORD *)(a2 + 120), a2, 0x31746E49u, v11);
    if ( !(unsigned int)Feature_UMPERS__private_IsEnabledDeviceUsageNoInline() )
      goto LABEL_24;
    if ( !v16 )
      break;
LABEL_25:
    v19 = (_QWORD *)v3[1];
    if ( (_QWORD *)*v19 != v3 )
LABEL_40:
      __fastfail(3u);
    v16[1] = v19;
    *v16 = v3;
    *v19 = v16;
    v20 = v39 + 1;
    v3[1] = v16;
    v39 = v20;
    if ( v20 >= *(_DWORD *)(a2 + 124) )
      goto LABEL_27;
  }
  do
  {
    v17 = *(_DWORD *)(a2 + 120);
    v40 = v17;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a2 + 8) + 72LL),
        v14,
        9,
        29,
        (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids,
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
  if ( v40 )
    MicrosoftTelemetryAssertTriggeredArgsMsgKM(
      (int)"usbxhci.sys",
      829713993,
      v40,
      (__int64)"Common buffer allocation failure for large buffer (only asserting at the smallest allocation size failure)");
LABEL_24:
  if ( v16 )
    goto LABEL_25;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = 30;
LABEL_31:
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a2 + 8) + 72LL),
      v14,
      9,
      v15,
      (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids);
  }
LABEL_32:
  v9 = -1073741670;
  if ( v8 )
  {
    if ( *(_QWORD *)(a2 + 168) )
    {
      XilCommonBuffer_ReleaseBuffer((__int64)v8);
      *(_QWORD *)(a2 + 168) = 0LL;
    }
    v24 = (_QWORD **)(a2 + 176);
    while ( 1 )
    {
      v25 = *v24;
      if ( *v24 == v24 )
        break;
      if ( (_QWORD **)v25[1] != v24 )
        goto LABEL_40;
      v26 = (_QWORD *)*v25;
      if ( *(_QWORD **)(*v25 + 8LL) != v25 )
        goto LABEL_40;
      *v24 = v26;
      v26[1] = v24;
      XilCommonBuffer_ReleaseBuffer((__int64)v8);
    }
  }
  return v9;
}
