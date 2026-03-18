/*
 * XREFs of ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x140245DF8
 * Callers:
 *     DxgkEscape @ 0x14041D630 (DxgkEscape.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?ZeroUnusedNitsRanges@@YAXPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z @ 0x140246F68 (-ZeroUnusedNitsRanges@@YAXPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z.c)
 *     DpiCallDrvSetBrightness @ 0x1402BE200 (DpiCallDrvSetBrightness.c)
 *     DpiCallDrvSetBacklightOptimizationLevel @ 0x1402BF0C0 (DpiCallDrvSetBacklightOptimizationLevel.c)
 */

__int64 __fastcall DpiBrightnessEscape(struct _DEVICE_OBJECT *a1, struct _D3DKMT_BRIGHTNESS_INFO *a2)
{
  _WORD *DeviceExtension; // rsi
  char *v3; // r10
  char *v4; // rdi
  char *v5; // r9
  D3DKMT_BRIGHTNESS_INFO_TYPE Type; // ecx
  __int16 v8; // ax
  __int64 v9; // r8
  UCHAR v11; // al
  __int32 v12; // ecx
  __int32 v13; // ecx
  __int32 v14; // ecx
  int v15; // ecx
  int v16; // ebx
  __int32 v17; // ecx
  __int32 v18; // ecx
  __int32 v19; // ecx
  int v20; // ecx
  union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *v22; // rdi
  union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *v23; // rdx
  UCHAR *BrightnessLevels; // r9
  union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *p_PossibleLevels; // r8
  __int64 Value; // r8
  union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *v27; // rdi
  __int64 v28; // rdx
  void (__fastcall *v29)(__int64, int *); // rax
  __int64 v30; // rcx
  __int64 v31; // [rsp+30h] [rbp-39h] BYREF
  int v32; // [rsp+38h] [rbp-31h]
  const wchar_t *v33; // [rsp+40h] [rbp-29h]
  int *v34; // [rsp+48h] [rbp-21h]
  int v35; // [rsp+50h] [rbp-19h]
  int *v36; // [rsp+58h] [rbp-11h]
  int v37; // [rsp+60h] [rbp-9h]
  __int64 v38; // [rsp+68h] [rbp-1h]
  int v39; // [rsp+70h] [rbp+7h]
  __int64 v40; // [rsp+78h] [rbp+Fh]
  __int128 v41; // [rsp+80h] [rbp+17h]
  __int128 v42; // [rsp+90h] [rbp+27h]
  int v43; // [rsp+D0h] [rbp+67h] BYREF
  int v44; // [rsp+D8h] [rbp+6Fh] BYREF

  DeviceExtension = a1->DeviceExtension;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  Type = a2->Type;
  v8 = DeviceExtension[2405];
  if ( v8 == 1 )
    v3 = (char *)(DeviceExtension + 2404);
  if ( v8 == 2 )
    v4 = (char *)(DeviceExtension + 2404);
  if ( v8 == 3 )
    v5 = (char *)(DeviceExtension + 2404);
  if ( Type > D3DKMT_BRIGHTNESS_INFO_GET_REDUCTION )
  {
    if ( Type != D3DKMT_BRIGHTNESS_INFO_BEGIN_MANUAL_MODE
      && Type != D3DKMT_BRIGHTNESS_INFO_END_MANUAL_MODE
      && Type != D3DKMT_BRIGHTNESS_INFO_TOGGLE_LOGGING )
    {
      v9 = (unsigned int)(Type - 11);
      if ( Type == D3DKMT_BRIGHTNESS_INFO_GET_NIT_RANGES )
      {
        if ( v5 )
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
    if ( !v4 )
      return 3221225659LL;
LABEL_30:
    if ( Type == D3DKMT_BRIGHTNESS_INFO_TOGGLE_LOGGING )
    {
      v11 = *((_BYTE *)DeviceExtension + 4533) == 0;
      *((_BYTE *)DeviceExtension + 4533) = v11;
      a2->PossibleLevels.LevelCount = v11;
      return 0LL;
    }
LABEL_16:
    v9 = (unsigned int)(Type - 4);
    if ( Type == D3DKMT_BRIGHTNESS_INFO_GET_CAPS )
      goto LABEL_43;
    v9 = (unsigned int)(Type - 11);
    if ( (unsigned int)v9 < 2 || Type == D3DKMT_BRIGHTNESS_INFO_BEGIN_MANUAL_MODE )
      goto LABEL_43;
    goto LABEL_19;
  }
  v9 = (unsigned int)(Type - 1);
  if ( Type != D3DKMT_BRIGHTNESS_INFO_GET_POSSIBLE_LEVELS )
  {
    if ( Type != D3DKMT_BRIGHTNESS_INFO_GET && Type != D3DKMT_BRIGHTNESS_INFO_SET )
    {
      if ( Type == D3DKMT_BRIGHTNESS_INFO_GET_CAPS || Type == D3DKMT_BRIGHTNESS_INFO_SET_OPTIMIZATION )
      {
        if ( v4 || v5 )
          goto LABEL_16;
        return 3221225659LL;
      }
      goto LABEL_29;
    }
LABEL_39:
    if ( !v3 && !v4 && !v5 )
      return 3221225659LL;
    goto LABEL_30;
  }
  if ( !v3 && !v4 )
    return 3221225659LL;
LABEL_19:
  if ( !*((_BYTE *)DeviceExtension + 4532) )
    return 3221226538LL;
LABEL_43:
  if ( Type <= D3DKMT_BRIGHTNESS_INFO_SET_OPTIMIZATION )
  {
    if ( Type == D3DKMT_BRIGHTNESS_INFO_SET_OPTIMIZATION )
    {
      Value = a2->BrightnessCaps.Value;
      if ( (int)Value > 3 )
        return 3221225485LL;
      if ( v5 )
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, _QWORD))v5 + 8))(*((_QWORD *)v5 + 1), a2->ChildUid);
      else
        return (unsigned int)DpiCallDrvSetBacklightOptimizationLevel(a1, v4, Value);
    }
    v17 = Type - 1;
    if ( !v17 )
    {
      BrightnessLevels = a2->PossibleLevels.BrightnessLevels;
      p_PossibleLevels = (union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *)&a2->PossibleLevels;
      if ( v4 )
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, __int64, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *, UCHAR *))v4
                              + 4))(
                               *((_QWORD *)v4 + 1),
                               256LL,
                               p_PossibleLevels,
                               BrightnessLevels);
      else
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, __int64, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *, UCHAR *))v3
                              + 4))(
                               *((_QWORD *)v3 + 1),
                               256LL,
                               p_PossibleLevels,
                               BrightnessLevels);
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      if ( v5 )
      {
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, _QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))v5 + 5))(
                               *((_QWORD *)v5 + 1),
                               a2->ChildUid,
                               &a2->PossibleLevels);
      }
      else
      {
        v23 = (union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *)&a2->PossibleLevels;
        if ( v4 )
          return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *, __int64))v4
                                + 6))(
                                 *((_QWORD *)v4 + 1),
                                 v23,
                                 v9);
        else
          return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *, __int64))v3
                                + 6))(
                                 *((_QWORD *)v3 + 1),
                                 v23,
                                 v9);
      }
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      v22 = (union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *)&a2->PossibleLevels;
      if ( !v5 )
      {
        LOBYTE(a2) = v22->PossibleLevels.LevelCount;
        v16 = DpiCallDrvSetBrightness(a1, a2);
        if ( v16 >= 0 )
          *((_DWORD *)DeviceExtension + 1132) = v22->PossibleLevels.LevelCount;
        return (unsigned int)v16;
      }
      return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, _QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))v5 + 4))(
                             *((_QWORD *)v5 + 1),
                             a2->ChildUid,
                             &a2->PossibleLevels);
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
      if ( v5 )
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, _QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))v5 + 6))(
                               *((_QWORD *)v5 + 1),
                               a2->ChildUid,
                               &a2->PossibleLevels);
      else
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *, __int64))v4 + 7))(
                               *((_QWORD *)v4 + 1),
                               &a2->PossibleLevels,
                               v9);
    }
    if ( v20 == 1 )
      return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *, __int64))v4 + 8))(
                             *((_QWORD *)v4 + 1),
                             &a2->PossibleLevels,
                             v9);
    return (unsigned int)-1073741811;
  }
LABEL_33:
  v12 = Type - 7;
  if ( !v12 )
    return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *, __int64))v4 + 10))(
                           *((_QWORD *)v4 + 1),
                           &a2->PossibleLevels,
                           v9);
  v13 = v12 - 1;
  if ( !v13 )
  {
    v43 = 0;
    v31 = 0LL;
    v33 = L"EnableManualBrightnessMode";
    v32 = 32;
    v34 = &v43;
    v35 = 4;
    v36 = &v43;
    v37 = 4;
    v38 = 0LL;
    v39 = 0;
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v31, 0LL, 0LL);
    *((_BYTE *)DeviceExtension + 4532) = v43 != 0;
    if ( v4 )
      DpiCallDrvSetBacklightOptimizationLevel(a1, v4, 0LL);
    return 0;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    *((_BYTE *)DeviceExtension + 4532) = 0;
    v43 = 0;
    if ( v4 )
    {
      if ( (*((int (__fastcall **)(_QWORD, int *))v4 + 7))(*((_QWORD *)v4 + 1), &v43) >= 0 && (v43 & 1) != 0 )
      {
        v29 = (void (__fastcall *)(__int64, int *))*((_QWORD *)v4 + 8);
        v30 = *((_QWORD *)v4 + 1);
        v44 = 1;
        v29(v30, &v44);
      }
      LOBYTE(v28) = *((_BYTE *)DeviceExtension + 4534);
      DpiCallDrvSetBrightness(a1, v28);
    }
    return 0;
  }
  v15 = v14 - 2;
  if ( !v15 )
  {
    v27 = (union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *)&a2->PossibleLevels;
    v16 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))v5 + 7))(
            *((_QWORD *)v5 + 1),
            a2->ChildUid,
            &a2->PossibleLevels);
    if ( v16 >= 0 )
      ZeroUnusedNitsRanges((struct _DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT *)v27);
    return (unsigned int)v16;
  }
  if ( v15 == 1 )
  {
    v16 = 0;
    if ( v5 )
    {
      a2->BrightnessCaps.Value = 3;
    }
    else if ( v4 )
    {
      a2->BrightnessCaps.Value = 2;
    }
    else if ( v3 )
    {
      a2->BrightnessCaps.Value = 1;
    }
    else
    {
      a2->BrightnessCaps.Value = 0;
      return (unsigned int)-1073741275;
    }
    return (unsigned int)v16;
  }
  return (unsigned int)-1073741811;
}
