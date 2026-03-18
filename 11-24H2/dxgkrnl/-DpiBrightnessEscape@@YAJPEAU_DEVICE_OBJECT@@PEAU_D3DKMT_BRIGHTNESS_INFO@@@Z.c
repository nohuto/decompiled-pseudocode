/*
 * XREFs of ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x14024CC08
 * Callers:
 *     DxgkEscape @ 0x140419AB0 (DxgkEscape.c)
 * Callees:
 *     Feature_D3DKMT_BacklightOptimizationEDR__private_IsEnabledDeviceUsageNoInline @ 0x140089DD4 (Feature_D3DKMT_BacklightOptimizationEDR__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?ZeroUnusedNitsRanges@@YAXPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z @ 0x14024DD98 (-ZeroUnusedNitsRanges@@YAXPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z.c)
 *     DpiCallDrvSetBrightness @ 0x1402CB5B0 (DpiCallDrvSetBrightness.c)
 *     DpiCallDrvSetBacklightOptimizationLevel @ 0x1402CC6A0 (DpiCallDrvSetBacklightOptimizationLevel.c)
 */

__int64 __fastcall DpiBrightnessEscape(struct _DEVICE_OBJECT *a1, struct _D3DKMT_BRIGHTNESS_INFO *a2)
{
  _WORD *DeviceExtension; // r15
  char *v4; // r10
  char *v5; // rdi
  char *v6; // r14
  __int16 v8; // ax
  D3DKMT_BRIGHTNESS_INFO_TYPE Type; // ecx
  __int64 v10; // rdx
  UCHAR v12; // al
  __int32 v13; // ecx
  __int32 v14; // ecx
  __int32 v15; // ecx
  int v16; // ecx
  int v17; // ebx
  __int32 v18; // ecx
  __int32 v19; // ecx
  __int32 v20; // ecx
  int v21; // ecx
  union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *v23; // rdx
  unsigned int (__fastcall *v24)(_QWORD, _QWORD, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *); // rax
  union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *v25; // rdi
  UCHAR *BrightnessLevels; // r9
  union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *p_PossibleLevels; // r8
  __int64 Value; // r8
  __int64 v29; // rdx
  void (__fastcall *v30)(__int64, int *); // rax
  __int64 v31; // rcx
  __int64 v32; // [rsp+30h] [rbp-39h] BYREF
  int v33; // [rsp+38h] [rbp-31h]
  const wchar_t *v34; // [rsp+40h] [rbp-29h]
  int *v35; // [rsp+48h] [rbp-21h]
  int v36; // [rsp+50h] [rbp-19h]
  int *v37; // [rsp+58h] [rbp-11h]
  int v38; // [rsp+60h] [rbp-9h]
  __int64 v39; // [rsp+68h] [rbp-1h]
  int v40; // [rsp+70h] [rbp+7h]
  __int64 v41; // [rsp+78h] [rbp+Fh]
  __int128 v42; // [rsp+80h] [rbp+17h]
  __int128 v43; // [rsp+90h] [rbp+27h]
  int v44; // [rsp+D0h] [rbp+67h] BYREF
  int v45; // [rsp+D8h] [rbp+6Fh] BYREF

  DeviceExtension = a1->DeviceExtension;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v8 = DeviceExtension[2405];
  if ( v8 == 1 )
    v4 = (char *)(DeviceExtension + 2404);
  Type = a2->Type;
  if ( v8 == 2 )
    v5 = (char *)(DeviceExtension + 2404);
  if ( v8 == 3 )
    v6 = (char *)(DeviceExtension + 2404);
  if ( Type > D3DKMT_BRIGHTNESS_INFO_GET_REDUCTION )
  {
    if ( Type != D3DKMT_BRIGHTNESS_INFO_BEGIN_MANUAL_MODE
      && Type != D3DKMT_BRIGHTNESS_INFO_END_MANUAL_MODE
      && Type != D3DKMT_BRIGHTNESS_INFO_TOGGLE_LOGGING )
    {
      if ( Type == D3DKMT_BRIGHTNESS_INFO_GET_NIT_RANGES )
      {
        if ( v6 )
          goto LABEL_33;
        return 3221225659LL;
      }
      if ( Type != (D3DKMT_BRIGHTNESS_INFO_BEGIN_MANUAL_MODE|D3DKMT_BRIGHTNESS_INFO_GET_CAPS) )
        goto LABEL_29;
    }
    goto LABEL_39;
  }
  if ( Type == D3DKMT_BRIGHTNESS_INFO_GET_REDUCTION )
  {
LABEL_29:
    if ( !v5 )
      return 3221225659LL;
LABEL_30:
    if ( Type == D3DKMT_BRIGHTNESS_INFO_TOGGLE_LOGGING )
    {
      v12 = *((_BYTE *)DeviceExtension + 4533) == 0;
      *((_BYTE *)DeviceExtension + 4533) = v12;
      a2->PossibleLevels.LevelCount = v12;
      return 0LL;
    }
LABEL_16:
    v10 = (unsigned int)(Type - 4);
    if ( Type == D3DKMT_BRIGHTNESS_INFO_GET_CAPS )
      goto LABEL_43;
    v10 = (unsigned int)(Type - 11);
    if ( (unsigned int)v10 < 2 || Type == D3DKMT_BRIGHTNESS_INFO_BEGIN_MANUAL_MODE )
      goto LABEL_43;
    goto LABEL_19;
  }
  v10 = (unsigned int)(Type - 1);
  if ( Type != D3DKMT_BRIGHTNESS_INFO_GET_POSSIBLE_LEVELS )
  {
    if ( Type != D3DKMT_BRIGHTNESS_INFO_GET && Type != D3DKMT_BRIGHTNESS_INFO_SET )
    {
      if ( Type == D3DKMT_BRIGHTNESS_INFO_GET_CAPS || Type == D3DKMT_BRIGHTNESS_INFO_SET_OPTIMIZATION )
      {
        if ( v5 || v6 )
          goto LABEL_16;
        return 3221225659LL;
      }
      goto LABEL_29;
    }
LABEL_39:
    if ( !v4 && !v5 && !v6 )
      return 3221225659LL;
    goto LABEL_30;
  }
  if ( !v4 && !v5 )
    return 3221225659LL;
LABEL_19:
  if ( !*((_BYTE *)DeviceExtension + 4532) )
    return 3221226538LL;
LABEL_43:
  if ( Type <= D3DKMT_BRIGHTNESS_INFO_SET_OPTIMIZATION )
  {
    if ( Type == D3DKMT_BRIGHTNESS_INFO_SET_OPTIMIZATION )
    {
      if ( (unsigned int)Feature_D3DKMT_BacklightOptimizationEDR__private_IsEnabledDeviceUsageNoInline()
        && *(_DWORD *)(*((_QWORD *)DeviceExtension + 5) + 28LL) >= 0x700Au
        && (int)a2->BrightnessCaps.Value > 4 )
      {
        return 3221225485LL;
      }
      Value = a2->BrightnessCaps.Value;
      if ( (int)Value > 3 )
        return 3221225485LL;
      if ( v6 )
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, _QWORD))v6 + 8))(*((_QWORD *)v6 + 1), a2->ChildUid);
      else
        return (unsigned int)DpiCallDrvSetBacklightOptimizationLevel(a1, v5, Value);
    }
    v18 = Type - 1;
    if ( !v18 )
    {
      BrightnessLevels = a2->PossibleLevels.BrightnessLevels;
      p_PossibleLevels = (union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *)&a2->PossibleLevels;
      if ( v5 )
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, __int64, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *, UCHAR *))v5
                              + 4))(
                               *((_QWORD *)v5 + 1),
                               256LL,
                               p_PossibleLevels,
                               BrightnessLevels);
      else
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, __int64, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *, UCHAR *))v4
                              + 4))(
                               *((_QWORD *)v4 + 1),
                               256LL,
                               p_PossibleLevels,
                               BrightnessLevels);
    }
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( !v20 )
      {
        v25 = (union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *)&a2->PossibleLevels;
        if ( !v6 )
        {
          LOBYTE(v10) = v25->PossibleLevels.LevelCount;
          v17 = DpiCallDrvSetBrightness(a1, v10);
          if ( v17 >= 0 )
            *((_DWORD *)DeviceExtension + 1132) = v25->PossibleLevels.LevelCount;
          return (unsigned int)v17;
        }
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, _QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))v6 + 4))(
                               *((_QWORD *)v6 + 1),
                               a2->ChildUid,
                               &a2->PossibleLevels);
      }
      v21 = v20 - 1;
      if ( v21 )
      {
        if ( v21 == 1 )
          return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))v5 + 8))(
                                 *((_QWORD *)v5 + 1),
                                 &a2->PossibleLevels);
        return (unsigned int)-1073741811;
      }
      v23 = (union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *)&a2->PossibleLevels;
      if ( !v6 )
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *))v5
                              + 7))(
                               *((_QWORD *)v5 + 1),
                               v23);
      v24 = (unsigned int (__fastcall *)(_QWORD, _QWORD, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *))*((_QWORD *)v6 + 6);
    }
    else
    {
      v23 = (union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *)&a2->PossibleLevels;
      if ( !v6 )
      {
        if ( v5 )
          return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *))v5
                                + 6))(
                                 *((_QWORD *)v5 + 1),
                                 v23);
        else
          return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *))v4
                                + 6))(
                                 *((_QWORD *)v4 + 1),
                                 v23);
      }
      v24 = (unsigned int (__fastcall *)(_QWORD, _QWORD, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *))*((_QWORD *)v6 + 5);
    }
    return v24(*((_QWORD *)v6 + 1), a2->ChildUid, v23);
  }
LABEL_33:
  v13 = Type - 7;
  if ( !v13 )
    return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))v5 + 10))(
                           *((_QWORD *)v5 + 1),
                           &a2->PossibleLevels);
  v14 = v13 - 1;
  if ( !v14 )
  {
    v44 = 0;
    v32 = 0LL;
    v34 = L"EnableManualBrightnessMode";
    v33 = 32;
    v36 = 4;
    v35 = &v44;
    v38 = 4;
    v37 = &v44;
    v39 = 0LL;
    v40 = 0;
    v41 = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v32, 0LL, 0LL);
    *((_BYTE *)DeviceExtension + 4532) = v44 != 0;
    if ( v5 )
      DpiCallDrvSetBacklightOptimizationLevel(a1, v5, 0LL);
    return 0;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    *((_BYTE *)DeviceExtension + 4532) = 0;
    v44 = 0;
    if ( v5 )
    {
      if ( (*((int (__fastcall **)(_QWORD, int *))v5 + 7))(*((_QWORD *)v5 + 1), &v44) >= 0 && (v44 & 1) != 0 )
      {
        v30 = (void (__fastcall *)(__int64, int *))*((_QWORD *)v5 + 8);
        v31 = *((_QWORD *)v5 + 1);
        v45 = 1;
        v30(v31, &v45);
      }
      LOBYTE(v29) = *((_BYTE *)DeviceExtension + 4534);
      DpiCallDrvSetBrightness(a1, v29);
    }
    return 0;
  }
  v16 = v15 - 2;
  if ( !v16 )
  {
    v17 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))v6 + 7))(
            *((_QWORD *)v6 + 1),
            a2->ChildUid,
            &a2->PossibleLevels);
    if ( v17 >= 0 )
      ZeroUnusedNitsRanges(&a2->NitRanges);
    return (unsigned int)v17;
  }
  if ( v16 == 1 )
  {
    v17 = 0;
    if ( v6 )
    {
      a2->BrightnessCaps.Value = 3;
    }
    else if ( v5 )
    {
      a2->BrightnessCaps.Value = 2;
    }
    else if ( v4 )
    {
      a2->BrightnessCaps.Value = 1;
    }
    else
    {
      a2->BrightnessCaps.Value = 0;
      return (unsigned int)-1073741275;
    }
    return (unsigned int)v17;
  }
  return (unsigned int)-1073741811;
}
