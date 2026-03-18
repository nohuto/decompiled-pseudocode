/*
 * XREFs of HUBDTX_ValidateAndCacheBOSDescriptor @ 0x14002C320
 * Callers:
 *     HUBDSM_ValidatingBOSDescriptor @ 0x1400250C0 (HUBDSM_ValidatingBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400087B4 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBDTX_CacheBillboardInfo @ 0x140029FF4 (HUBDTX_CacheBillboardInfo.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x14003CE94 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x140044580 (UsbDualRoleFeaturesQueryLocalMachine.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memmove @ 0x140045DC0 (memmove.c)
 *     memset @ 0x1400460C0 (memset.c)
 *     HUBWNF_PublishUsbPartnerDualRoleFeatures @ 0x140090674 (HUBWNF_PublishUsbPartnerDualRoleFeatures.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheBOSDescriptor(__int64 a1)
{
  unsigned __int16 *v2; // r14
  __int64 v3; // rax
  int v4; // ecx
  __int64 v5; // rbx
  char v6; // r12
  volatile signed __int32 *v7; // rsi
  int v8; // ecx
  bool v9; // zf
  char v10; // r12
  char v11; // al
  void *v12; // rdx
  _UNKNOWN **v13; // rcx
  unsigned int v14; // ebx
  void *Pool2; // rax
  int v16; // edx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v20; // al
  int v21; // edx
  char v22; // cl
  void *v23; // rax
  int v24; // edx
  unsigned int v25; // ebx
  __int64 v27; // [rsp+70h] [rbp-51h]
  _WORD v28[2]; // [rsp+78h] [rbp-49h] BYREF
  int v29; // [rsp+7Ch] [rbp-45h]
  int v30; // [rsp+80h] [rbp-41h]
  int v31; // [rsp+84h] [rbp-3Dh]
  int v32; // [rsp+88h] [rbp-39h]
  int v33; // [rsp+8Ch] [rbp-35h]
  __int64 (__fastcall *v34)(_QWORD, _QWORD); // [rsp+90h] [rbp-31h]
  void *v35; // [rsp+98h] [rbp-29h]
  __int64 v36; // [rsp+A0h] [rbp-21h]
  _BOOL8 v37; // [rsp+A8h] [rbp-19h]
  _QWORD v38[8]; // [rsp+B8h] [rbp-9h] BYREF
  __int64 v39; // [rsp+128h] [rbp+67h] BYREF

  memset(v38, 0, sizeof(v38));
  v2 = *(unsigned __int16 **)(a1 + 2056);
  LOBYTE(v39) = 0;
  if ( !v2 )
    v2 = (unsigned __int16 *)(a1 + 1732);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_14006C1E8);
  v4 = *(_DWORD *)(a1 + 172);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_BYTE *)(a1 + 2464);
  v31 = 0;
  v29 = v4;
  v7 = (volatile signed __int32 *)(a1 + 1632);
  v8 = *(_DWORD *)(v3 + 4);
  v37 = 0LL;
  v28[1] = 0;
  *(_WORD *)((char *)&v31 + 1) = (v8 & 0x20) != 0;
  v33 = 0;
  HIBYTE(v31) = (v8 & 0x2000) != 0;
  v36 = a1;
  v9 = (*(_DWORD *)(a1 + 1644) & 0x200000) == 0;
  LOBYTE(v31) = (v8 & 0x4000) != 0;
  v10 = v6 & 1;
  v37 = !v9;
  v32 = *(_DWORD *)(v5 + 220);
  v34 = HUBMISC_LogDescriptorValidationErrorForDevice;
  v35 = &HUBMISC_LogDescriptorValidationWarningForDevice;
  v28[0] = *(_WORD *)(a1 + 1990);
  v27 = *(_QWORD *)(v5 + 1432);
  v30 = *(_DWORD *)(*(_QWORD *)a1 + 92LL);
  v11 = HUBDESC_ValidateBOSDescriptorSet(
          a1,
          (int)v2,
          (int)a1 + 1988,
          *(_DWORD *)(a1 + 256),
          (__int64)v28,
          v38,
          a1 + 2192,
          a1 + 2194,
          (__int64)&v39,
          a1 + 2440,
          a1 + 1632,
          a1 + 2712,
          a1 + 2713,
          v27);
  v12 = &WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids;
  v13 = &WPP_RECORDER_INITIALIZED;
  if ( !v11 )
  {
    if ( (*(_DWORD *)(a1 + 1644) & 0x40) == 0 )
    {
      *(_DWORD *)(a1 + 2432) = 1073807378;
LABEL_40:
      v25 = 4065;
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
        McTemplateK0p_EtwWriteTransfer(
          (__int64)v13,
          &USBHUB3_ETW_EVENT_INVALID_BOS_DESCRIPTOR,
          (const GUID *)(a1 + 1516),
          *(_QWORD *)(a1 + 24));
      return v25;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        (_DWORD)v12,
        5,
        57,
        (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids);
    }
  }
  if ( (_BYTE)v39 )
    _InterlockedOr(v7, 0x100000u);
  if ( v38[2] && !*(_QWORD *)(a1 + 2568) )
  {
    v14 = (*(_DWORD *)(v38[2] + 4LL) & 0x1F) + 1;
    Pool2 = (void *)ExAllocatePool2(64LL, 4LL * v14, 1681082453LL);
    *(_QWORD *)(a1 + 2568) = Pool2;
    if ( !Pool2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          v16,
          5,
          58,
          (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids);
      }
      goto LABEL_40;
    }
    memmove(Pool2, (const void *)(v38[2] + 12LL), 4LL * v14);
    *(_DWORD *)(a1 + 2576) = v14;
  }
  if ( v38[3] )
  {
    _InterlockedOr(v7, 0x10u);
    if ( (*v7 & 8) == 0 )
      *(_OWORD *)(a1 + 2064) = *(_OWORD *)(v38[3] + 4LL);
  }
  if ( v38[4] )
    HUBDTX_CacheBillboardInfo(a1, (unsigned __int8 *)v38[4]);
  if ( v38[7] )
  {
    _InterlockedOr(v7, 0x40000u);
    *(_BYTE *)(a1 + 2673) = *(_BYTE *)(v38[7] + 21LL);
    UsbDualRoleFeaturesQueryLocalMachine(a1 + 2665);
    v17 = v38[7];
    LOBYTE(v18) = 1;
    v19 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 2669) = *(_DWORD *)(v38[7] + 22LL);
    HUBWNF_PublishUsbPartnerDualRoleFeatures(*(_QWORD *)(v19 + 1416), v18, *(unsigned int *)(v17 + 22));
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 2016) + 4LL) > 1u && LOBYTE(v38[5]) == 1 )
  {
    v20 = *(_BYTE *)(a1 + 1992);
    if ( !v20 || v20 == -17 && *(_BYTE *)(a1 + 1993) == 2 && *(_BYTE *)(a1 + 1994) == 1 )
      _InterlockedOr(v7, 4u);
  }
  if ( !v10 )
  {
    if ( v38[6] )
    {
      v21 = *(_DWORD *)(a1 + 2464) | 1;
      *(_QWORD *)(a1 + 2480) = *(_QWORD *)v38[6];
      v22 = *(_BYTE *)(a1 + 2487);
      *(_DWORD *)(a1 + 2464) = v21;
      if ( v22 )
      {
        if ( (*(_DWORD *)(a1 + 2468) & 4) == 0 )
        {
          *(_BYTE *)(a1 + 2052) = *(_BYTE *)(a1 + 2486);
          *(_DWORD *)(a1 + 2464) = v21 | 4;
          *(_BYTE *)(a1 + 2472) = v22;
        }
      }
    }
  }
  if ( !*(_QWORD *)(a1 + 2056) )
  {
    v23 = (void *)ExAllocatePool2(64LL, v2[1], 1681082453LL);
    *(_QWORD *)(a1 + 2056) = v23;
    if ( !v23 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v24) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          v24,
          5,
          59,
          (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids);
      }
      goto LABEL_40;
    }
    memmove(v23, v2, v2[1]);
  }
  if ( (*v7 & 0x800) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1640), 0x200u);
  v25 = 4077;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1640), 0x20u);
  return v25;
}
