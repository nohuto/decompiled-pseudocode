/*
 * XREFs of RootHub_UcxEvtInterruptTransfer @ 0x1400252D0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1400086E0 (Controller_IsControllerAccessible.c)
 *     Register_ReadSecureMmio @ 0x140009A08 (Register_ReadSecureMmio.c)
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     Controller_SetControllerGone @ 0x14003C470 (Controller_SetControllerGone.c)
 *     Feature_RH1S__private_IsEnabledDeviceUsageNoInline @ 0x1400442B0 (Feature_RH1S__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_SF_sds @ 0x14004577C (WPP_RECORDER_SF_sds.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140059AC0 (memset.c)
 */

__int64 __fastcall RootHub_UcxEvtInterruptTransfer(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int16 v4; // ax
  __int64 v5; // r13
  void *v6; // rdi
  bool v7; // zf
  size_t v8; // rsi
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  int v12; // edx
  unsigned int v13; // r14d
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // esi
  unsigned int v18; // r12d
  unsigned int v19; // esi
  __int64 v20; // rdi
  __int64 v21; // rbp
  char v22; // cl
  unsigned int *v23; // rdi
  unsigned int v24; // ecx
  unsigned int v25; // r8d
  unsigned int *v26; // rcx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned int v31; // eax
  int v33; // r9d
  const char *v34; // [rsp+28h] [rbp-B0h]
  __int64 v35; // [rsp+30h] [rbp-A8h]
  unsigned int v36; // [rsp+40h] [rbp-98h] BYREF
  unsigned int v37; // [rsp+44h] [rbp-94h] BYREF
  unsigned int v38; // [rsp+48h] [rbp-90h] BYREF
  void *v39; // [rsp+50h] [rbp-88h]
  int v40[2]; // [rsp+58h] [rbp-80h]
  __int64 v41; // [rsp+60h] [rbp-78h]
  _OWORD v42[2]; // [rsp+68h] [rbp-70h] BYREF
  __int64 v43; // [rsp+88h] [rbp-50h]

  v41 = a2;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B0B0);
  *(_QWORD *)v40 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 88LL);
  memset(v42, 0, sizeof(v42));
  v43 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v42[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v4 = -1;
  }
  else
  {
    v4 = 40;
  }
  LOWORD(v42[0]) = v4;
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v42);
  v5 = *((_QWORD *)&v42[0] + 1);
  v6 = *(void **)(*((_QWORD *)&v42[0] + 1) + 40LL);
  v7 = *(_BYTE *)(*(_QWORD *)(v3 + 8) + 1001LL) == 0;
  v8 = *(unsigned int *)(*((_QWORD *)&v42[0] + 1) + 36LL);
  v39 = v6;
  if ( !v7 && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v34 = "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c";
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v9, v10, v11);
    }
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v12,
        11,
        189,
        (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids);
    }
    *(_DWORD *)(v5 + 4) = -1073713152;
    v13 = -1073741810;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             v41,
             v13);
  }
  if ( *(_BYTE *)(v3 + 57) )
  {
    v14 = *(_QWORD *)(v3 + 8);
    v7 = (unsigned int)Feature_RH1S__private_IsEnabledDeviceUsageNoInline() == 0;
    v15 = 1;
    if ( v7 && (*(_QWORD *)(v14 + 744) & 0x200000LL) != 0 )
      v15 = 1000;
    if ( !*(_DWORD *)(v14 + 864) && *(_DWORD *)(v14 + 976) != v15 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 3040))(
        WdfDriverGlobals,
        *(_QWORD *)(v14 + 968));
    v6 = v39;
    *(_BYTE *)(v3 + 57) = 0;
  }
  v13 = 0;
  if ( !(_DWORD)v8 )
    goto LABEL_66;
  memset(v6, 0, v8);
  if ( (unsigned int)v8 <= 0x20 )
    v17 = 8 * v8 - 1;
  else
    v17 = 255;
  v18 = *(_DWORD *)(v3 + 16);
  if ( v17 <= v18 )
    v18 = v17;
  v19 = 1;
  if ( !v18 )
  {
LABEL_66:
    *(_DWORD *)(v5 + 4) = 0;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             v41,
             v13);
  }
  while ( 1 )
  {
    v20 = v19 - 1;
    v21 = 120 * v20;
    v22 = *(_BYTE *)(*(_QWORD *)(v3 + 48) + 120 * v20 + 13);
    if ( v22 != 2 )
      break;
    v23 = (unsigned int *)(*(_QWORD *)(v3 + 40) + 16 * v20);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v40 + 8LL) + 1001LL) )
    {
      v36 = 0;
      Register_ReadSecureMmio(*(__int64 *)v40, (__int64)v23, 2, 1u, &v36);
      v24 = v36;
    }
    else
    {
      v24 = *v23;
    }
    if ( v24 == -1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_73;
      v33 = 190;
      goto LABEL_72;
    }
    v25 = v24 & 0xFFBFFFFF;
    if ( (v24 & 0x1E0) != 0x1E0 )
      v25 = v24;
    if ( (v25 & 0x760000) != 0 )
    {
      v16 = (__int64)v39 + ((unsigned __int64)v19 >> 3);
      *(_BYTE *)v16 |= 1 << (v19 & 7);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v35) = v25;
        LODWORD(v34) = v19;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4u,
          0xBu,
          0xBFu,
          (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
          v34,
          v35);
      }
    }
LABEL_65:
    if ( ++v19 > v18 )
      goto LABEL_66;
  }
  if ( v22 != 3 )
    goto LABEL_65;
  v26 = (unsigned int *)(*(_QWORD *)(v3 + 40) + 16 * v20);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v40 + 8LL) + 1001LL) )
  {
    v37 = 0;
    Register_ReadSecureMmio(*(__int64 *)v40, (__int64)v26, 2, 1u, &v37);
    v16 = v37;
  }
  else
  {
    v16 = *v26;
  }
  if ( (_DWORD)v16 != -1 )
  {
    if ( (v16 & 0xFA0000) != 0
      || ((v27 = *(_QWORD *)(v3 + 48), v28 = v16 & 0x1E0, v28 == 320) || v28 == 192 && *(_DWORD *)(v27 + v21 + 108))
      && _InterlockedCompareExchange((volatile signed __int32 *)(v27 + v21 + 100), 0, 1) == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v35) = v16;
        LODWORD(v34) = v19;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4u,
          0xBu,
          0xC1u,
          (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
          v34,
          v35);
      }
      if ( (*(_DWORD *)(120 * v20 + *(_QWORD *)(v3 + 48) + 64) & 2) != 0
        || (_BYTE)KdDebuggerEnabled
        && *(_BYTE *)(v3 + 56)
        && (v29 = *(_QWORD *)(v3 + 8), _bittest64((const signed __int64 *)(v29 + 736), 0x33u))
        && ((v30 = *(_QWORD *)(v29 + 88), v16 = *(_QWORD *)(v30 + 72) + 36LL, !*(_BYTE *)(*(_QWORD *)(v30 + 8) + 1001LL))
          ? (v31 = *(_DWORD *)v16)
          : (v38 = 0, Register_ReadSecureMmio(v30, v16, 2, 1u, &v38), v31 = v38),
            HIBYTE(v31) == v19) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v16,
            11,
            194,
            (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
            v19);
        }
      }
      else
      {
        v16 = (__int64)v39 + ((unsigned __int64)v19 >> 3);
        *(_BYTE *)v16 |= 1 << (v19 & 7);
      }
    }
    goto LABEL_65;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_73;
  v33 = 192;
LABEL_72:
  LOBYTE(v16) = 2;
  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
    v16,
    11,
    v33,
    (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids);
LABEL_73:
  LOBYTE(v16) = 1;
  Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v16);
  *(_DWORD *)(v5 + 4) = -1073713152;
  v13 = -1073741810;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           v41,
           v13);
}
