/*
 * XREFs of ?IsValidTabletDisplayConfig@DevicePostureHelpers@@YA_NXZ @ 0x180113D7C
 * Callers:
 *     ?CalculateDevicePostureMode@DevicePostureHelpers@@YA?AW4DevicePostureMode@Input@Internal@UI@Windows@@W4DeviceConvertibility@1@@Z @ 0x180113540 (-CalculateDevicePostureMode@DevicePostureHelpers@@YA-AW4DevicePostureMode@Input@Internal@UI@Wind.c)
 * Callees:
 *     ??1?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@QEAA@XZ @ 0x180099950 (--1-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@@std@@QEAA@XZ.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180112FF0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDI.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801130F4 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDI.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_MODE_INFO@@PEAU1@_KAEAV?$allocator@UDISPLAYCONFIG_MODE_INFO@@@0@@Z @ 0x180113214 (--$_Uninitialized_value_construct_n@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@YAPEAUDIS.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_PATH_INFO@@PEAU1@_KAEAV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@0@@Z @ 0x180113250 (--$_Uninitialized_value_construct_n@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDIS.c)
 *     ??0?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@QEAA@_KAEBV?$allocator@UDISPLAYCONFIG_MODE_INFO@@@1@@Z @ 0x180113378 (--0-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@QEAA@_K.c)
 *     ??0?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAA@_KAEBV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@1@@Z @ 0x180113418 (--0-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAA@_K.c)
 *     ?EvaluateDisplayConfig@Postures@InputTraceLogging@@SAX_N00@Z @ 0x1801137B8 (-EvaluateDisplayConfig@Postures@InputTraceLogging@@SAX_N00@Z.c)
 *     ?IsIgnoringDisplayConfig@DevicePostureHelpers@@YA_NXZ @ 0x180113D10 (-IsIgnoringDisplayConfig@DevicePostureHelpers@@YA_NXZ.c)
 *     ?_Tidy@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAXXZ @ 0x1801140F4 (-_Tidy@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEA.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall DevicePostureHelpers::IsValidTabletDisplayConfig(DevicePostureHelpers *this)
{
  char IsIgnoringDisplayConfig; // r15
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // r8
  unsigned __int64 v6; // rcx
  DISPLAYCONFIG_MODE_INFO *v7; // r8
  unsigned __int64 v8; // rcx
  char v9; // r14
  char v10; // si
  unsigned __int16 *v11; // rcx
  char v12; // di
  DISPLAYCONFIG_PATH_INFO *pathArray; // [rsp+30h] [rbp-30h] BYREF
  char *v14; // [rsp+38h] [rbp-28h]
  __int64 v15; // [rsp+40h] [rbp-20h]
  DISPLAYCONFIG_MODE_INFO *modeInfoArray; // [rsp+48h] [rbp-18h] BYREF
  char *v17; // [rsp+50h] [rbp-10h]
  __int64 v18; // [rsp+58h] [rbp-8h]
  UINT32 numPathArrayElements; // [rsp+90h] [rbp+30h] BYREF
  UINT32 numModeInfoArrayElements; // [rsp+98h] [rbp+38h] BYREF

  IsIgnoringDisplayConfig = DevicePostureHelpers::IsIgnoringDisplayConfig(this);
  v2 = 0;
  numPathArrayElements = 0;
  numModeInfoArrayElements = 0;
  if ( GetDisplayConfigBufferSizes(0x12u, &numPathArrayElements, &numModeInfoArrayElements) )
    return 0;
  std::vector<DISPLAYCONFIG_PATH_INFO>::vector<DISPLAYCONFIG_PATH_INFO>((char **)&pathArray, numPathArrayElements, v3);
  std::vector<DISPLAYCONFIG_MODE_INFO>::vector<DISPLAYCONFIG_MODE_INFO>(
    (char **)&modeInfoArray,
    numModeInfoArrayElements,
    v5);
  if ( !QueryDisplayConfig(0x12u, &numPathArrayElements, pathArray, &numModeInfoArrayElements, modeInfoArray, 0LL) )
  {
    v6 = 0x8E38E38E38E38E39uLL * ((v14 - (char *)pathArray) >> 3);
    if ( numPathArrayElements >= v6 )
    {
      if ( numPathArrayElements > v6 )
      {
        if ( numPathArrayElements <= 0x8E38E38E38E38E39uLL * ((v15 - (__int64)pathArray) >> 3) )
          v14 = std::_Uninitialized_value_construct_n<std::allocator<DISPLAYCONFIG_PATH_INFO>>(
                  v14,
                  numPathArrayElements - v6);
        else
          std::vector<DISPLAYCONFIG_PATH_INFO>::_Resize_reallocate<std::_Value_init_tag>(
            (__int64)&pathArray,
            numPathArrayElements);
      }
    }
    else
    {
      v14 = (char *)&pathArray[numPathArrayElements];
    }
    v7 = modeInfoArray;
    v8 = (v17 - (char *)modeInfoArray) >> 6;
    if ( numModeInfoArrayElements >= v8 )
    {
      if ( numModeInfoArrayElements > v8 )
      {
        if ( numModeInfoArrayElements <= (unsigned __int64)((v18 - (__int64)modeInfoArray) >> 6) )
          v17 = std::_Uninitialized_value_construct_n<std::allocator<DISPLAYCONFIG_MODE_INFO>>(
                  v17,
                  numModeInfoArrayElements - v8);
        else
          std::vector<DISPLAYCONFIG_MODE_INFO>::_Resize_reallocate<std::_Value_init_tag>(
            (__int64)&modeInfoArray,
            numModeInfoArrayElements);
        v7 = modeInfoArray;
      }
    }
    else
    {
      v17 = (char *)&modeInfoArray[(unsigned __int64)numModeInfoArrayElements];
    }
    v9 = 0;
    v10 = 0;
    v11 = (unsigned __int16 *)&pathArray->sourceInfo.1 + 1;
    v12 = 1;
    while ( v11 - 7 != (unsigned __int16 *)v14 )
    {
      if ( *(_DWORD *)(v11 + 11) == 0x80000000 || *(_DWORD *)(v11 + 11) == 11 || *(_DWORD *)(v11 + 11) == 13 )
        v9 = 1;
      if ( *(_QWORD *)&v7[(unsigned __int64)*v11].desktopImageInfo.DesktopImageRegion.top )
      {
        v10 = 1;
        break;
      }
      v11 += 36;
    }
    InputTraceLogging::Postures::EvaluateDisplayConfig(IsIgnoringDisplayConfig, v10, v9);
    if ( !v9 && !IsIgnoringDisplayConfig || v10 )
      v12 = 0;
    v2 = v12;
  }
  std::vector<DISPLAYCONFIG_MODE_INFO>::_Tidy(&modeInfoArray);
  std::vector<HidChannelValueInfo>::~vector<HidChannelValueInfo>((__int64)&pathArray);
  return v2;
}
