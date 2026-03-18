/*
 * XREFs of xxxSystemParametersInfo @ 0x140173780
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x14013264C (-UserInitialize@@YAJXZ.c)
 *     NtUserSystemParametersInfo @ 0x140171AA0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     ?GetWakeOnDeviceTypes@CInputGlobals@@QEBA?AW4InputType@@XZ @ 0x140069150 (-GetWakeOnDeviceTypes@CInputGlobals@@QEBA-AW4InputType@@XZ.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     FastWriteProfileValue @ 0x14009EEC0 (FastWriteProfileValue.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400A07C0 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1400A22EC (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1400A3A84 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1400B1FE8 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     BroadcastSettingsUpdateToAllContainers @ 0x14013B680 (BroadcastSettingsUpdateToAllContainers.c)
 *     ?SpiGetStickyKeys@@YAHKPEAX@Z @ 0x14013D2D4 (-SpiGetStickyKeys@@YAHKPEAX@Z.c)
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x140142810 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 *     ReadPointerDeviceSettings @ 0x1401479D0 (ReadPointerDeviceSettings.c)
 *     SendCrosshairEnabledStatusChanged @ 0x140147C40 (SendCrosshairEnabledStatusChanged.c)
 *     ?IsSPIActionAllowedForFilteredProcess@@YAHI@Z @ 0x140153D24 (-IsSPIActionAllowedForFilteredProcess@@YAHI@Z.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x14015C3B4 (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x140166620 (_GetPrecisionTouchPadConfiguration.c)
 *     ApiSetEditionCheckDesktopPolicy @ 0x140191454 (ApiSetEditionCheckDesktopPolicy.c)
 *     ApiSetEditionxxxBroadcastSPIChange @ 0x140193854 (ApiSetEditionxxxBroadcastSPIChange.c)
 *     ApiSetEditionxxxSystemParametersInfoWorker @ 0x14019391C (ApiSetEditionxxxSystemParametersInfoWorker.c)
 *     ?SetWakeableInputTypesToRegistry@CInputGlobals@@QEAA_NKK@Z @ 0x140199844 (-SetWakeableInputTypesToRegistry@CInputGlobals@@QEAA_NKK@Z.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x14019AC10 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     EtwTraceSPIBlockedByFiltering @ 0x14019F500 (EtwTraceSPIBlockedByFiltering.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1401B1850 (_SetPrecisionTouchPadConfiguration.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x1401B666C (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     WritePointerDeviceSettings @ 0x1401B6B80 (WritePointerDeviceSettings.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall xxxSystemParametersInfo(unsigned int a1, unsigned int a2, void *a3, unsigned int a4)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // r14d
  unsigned __int8 v12; // r15
  int v13; // r12d
  unsigned __int8 v14; // bl
  __int64 UserSessionState; // rdx
  __int64 v16; // rcx
  int v17; // eax
  char *v18; // rcx
  unsigned int v19; // eax
  const void *v20; // rdx
  int PointerDeviceSettings; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  bool v27; // zf
  unsigned int v28; // eax
  __int64 v29; // rcx
  _OWORD *v30; // rbx
  __int64 v31; // rax
  unsigned int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // rsi
  int v35; // r15d
  int v36; // [rsp+30h] [rbp-48h] BYREF
  void *v37; // [rsp+38h] [rbp-40h] BYREF
  int v38; // [rsp+40h] [rbp-38h]
  unsigned __int16 Data[16]; // [rsp+48h] [rbp-30h] BYREF

  v37 = a3;
  if ( (unsigned __int8)PsIsWin32KFilterEnabled() && !IsSPIActionAllowedForFilteredProcess(a1) )
  {
    EtwTraceSPIBlockedByFiltering(a1);
    if ( (unsigned int)dword_14029AED8 > 5 && tlgKeywordOn((__int64)&dword_14029AED8, 0x400000000000LL) )
    {
      v36 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (__int64)&dword_14029AED8,
        byte_140275ACF,
        v8,
        v9,
        (__int64)&v36);
    }
    return 0LL;
  }
  v36 = 0;
  v11 = 0;
  if ( (a4 & 1) != 0 )
  {
    v12 = 1;
    v13 = 0;
  }
  else
  {
    v12 = 0;
    v13 = 1;
  }
  v14 = v12 ^ 1;
  v38 = a4 & 2;
  UserSessionState = W32GetUserSessionState(v7);
  if ( a1 > 0xB2 )
  {
    if ( a1 > 0x2026 )
    {
      switch ( a1 )
      {
        case 0x2027u:
          goto LABEL_87;
        case 0x2030u:
          goto LABEL_86;
        case 0x2031u:
          goto LABEL_87;
      }
      v28 = a1 - 8242;
      v27 = a1 == 8242;
    }
    else
    {
      switch ( a1 )
      {
        case 0x2026u:
          goto LABEL_86;
        case 0xB3u:
          goto LABEL_76;
        case 0xB4u:
          v14 = 0;
          if ( !(unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline(v16, UserSessionState) )
            return v14;
          v30 = v37;
          v31 = W32GetUserSessionState(v29);
          *(_OWORD *)v37 = *(_OWORD *)(v31 + 18576);
          v30[1] = *(_OWORD *)(v31 + 18592);
          v30[2] = *(_OWORD *)(v31 + 18608);
          *((_QWORD *)v30 + 6) = *(_QWORD *)(v31 + 18624);
          return 1;
        case 0xB5u:
LABEL_76:
          v14 = (unsigned int)WritePointerDeviceSettings(a1, v37, v12) != 0;
          v11 = v14;
          goto LABEL_95;
      }
      v28 = a1 - 8222;
      v27 = a1 == 8222;
    }
    if ( v27 )
      goto LABEL_86;
    v32 = v28 - 1;
    if ( v32 )
    {
      v33 = v32 - 1;
      if ( v33 )
      {
        if ( v33 != 1 )
          return ApiSetEditionxxxSystemParametersInfoWorker(a1, a2, v37, a4);
        goto LABEL_87;
      }
LABEL_86:
      *(_DWORD *)v37 = *(_DWORD *)(W32GetUserSessionState(v16) + 16 * (((a1 - 0x2000) >> 1) + 1 + 4192LL));
      return v14;
    }
LABEL_87:
    v34 = W32GetUserSessionState(v16) + 16 * (((a1 - 0x2000) >> 1) + 1 + 4192LL);
    if ( v12 )
    {
      v14 = (unsigned int)FastWriteProfileValue(
                            0LL,
                            *(unsigned int *)(v34 + 4),
                            *(const WCHAR **)(v34 + 8),
                            4u,
                            &v37,
                            4u) != 0;
      v11 = v14;
    }
    if ( !v14 )
      goto LABEL_95;
    v35 = (int)v37;
    *(_DWORD *)v34 = (_DWORD)v37;
    if ( a1 == 8225 )
    {
      *(_DWORD *)(W32GetUserSessionState(v26) + 332) = v35;
    }
    else if ( a1 == 8245 )
    {
      LOBYTE(v26) = v35 != 0;
      SendCrosshairEnabledStatusChanged(v26);
    }
LABEL_94:
    BroadcastSettingsUpdateToAllContainers(v26);
    goto LABEL_95;
  }
  if ( a1 == 178 )
  {
LABEL_67:
    PointerDeviceSettings = ReadPointerDeviceSettings(a1, v37);
    return PointerDeviceSettings != 0;
  }
  if ( a1 <= 0x68 )
  {
    switch ( a1 )
    {
      case 'h':
        *(_DWORD *)v37 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v16) + 19928) + 4988LL);
        return v14;
      case '2':
        if ( a2 && a2 != 24 )
          return 0LL;
        v18 = (char *)v37;
        if ( !v37 || *(_DWORD *)v37 != 24 )
          return 0LL;
        v19 = 20;
        v20 = (const void *)(UserSessionState + 20524);
        break;
      case '3':
        v17 = SpiSetFilterKeys(a2, (struct tagFILTERKEYS *)v37, v12, v13, &v36);
        goto LABEL_39;
      case '4':
        if ( (a2 & 0xFFFFFFF7) != 0 )
          return 0LL;
        v18 = (char *)v37;
        if ( !v37 || *(_DWORD *)v37 != 8 )
          return 0LL;
        v19 = 4;
        v20 = (const void *)(UserSessionState + 20972);
        break;
      case '5':
        v17 = SpiSetToggleKeys(a2, (unsigned int *)v37, v12, v13, &v36);
        goto LABEL_39;
      case ':':
        PointerDeviceSettings = SpiGetStickyKeys(a2, v37);
        return PointerDeviceSettings != 0;
      case ';':
        v17 = SpiSetStickyKeys(a2, v37, v12, v13, &v36);
        goto LABEL_39;
      case '<':
        if ( a2 && a2 != 12 )
          return 0LL;
        v18 = (char *)v37;
        if ( !v37 || *(_DWORD *)v37 != 12 )
          return 0LL;
        v19 = 8;
        v20 = (const void *)(UserSessionState + 20948);
        break;
      case '=':
        v17 = SpiSetAccessTimeOut(a2, v37, v12, v13, &v36);
LABEL_39:
        v11 = v36;
        v14 = v17 != 0;
        goto LABEL_95;
      default:
        return ApiSetEditionxxxSystemParametersInfoWorker(a1, a2, v37, a4);
    }
    memmove(v18 + 4, v20, v19);
    return 1;
  }
  switch ( a1 )
  {
    case 0x69u:
      if ( (unsigned int)ApiSetEditionCheckDesktopPolicy(v16, UserSessionState) )
      {
        v12 = 0;
        v14 = 0;
      }
      if ( v12 )
      {
        RtlStringCchPrintfW(Data, 16LL, L"%d", a2);
        v25 = -1LL;
        do
          ++v25;
        while ( Data[v25] );
        v14 = (unsigned int)FastWriteProfileValue(0LL, 4LL, (const WCHAR *)0xE, 1u, Data, 2 * (int)v25 + 2) != 0;
        v11 = v14;
      }
      if ( !v14 )
        goto LABEL_95;
      v26 = *(_QWORD *)(W32GetUserSessionState(v24) + 19928);
      *(_DWORD *)(v26 + 4988) = a2;
      goto LABEL_94;
    case 0x92u:
      goto LABEL_67;
    case 0x93u:
      goto LABEL_76;
    case 0xAEu:
      PointerDeviceSettings = GetPrecisionTouchPadConfiguration((unsigned int *)v37);
      return PointerDeviceSettings != 0;
    case 0xAFu:
      v11 = SetPrecisionTouchPadConfiguration(v37, v12);
      if ( v11 )
      {
        v14 = 1;
        PTPTelemetry::PTPConfigUpdateEx(0LL);
      }
      else
      {
        v14 = 0;
      }
LABEL_95:
      if ( v11 && v38 )
        ApiSetEditionxxxBroadcastSPIChange(a1);
      return v14;
    case 0xB0u:
      v23 = W32GetUserSessionState(v16);
      *(_DWORD *)v37 = CInputGlobals::GetWakeOnDeviceTypes(*(_QWORD *)(v23 + 3064));
      break;
    case 0xB1u:
      v22 = W32GetUserSessionState(v16);
      return CInputGlobals::SetWakeableInputTypesToRegistry(*(CInputGlobals **)(v22 + 3064), a2, (unsigned int)v37);
    default:
      return ApiSetEditionxxxSystemParametersInfoWorker(a1, a2, v37, a4);
  }
  return v14;
}
