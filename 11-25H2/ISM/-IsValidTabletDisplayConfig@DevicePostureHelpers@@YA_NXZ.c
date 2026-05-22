/*
 * XREFs of ?IsValidTabletDisplayConfig@DevicePostureHelpers@@YA_NXZ @ 0x180112164
 * Callers:
 *     ?CalculateDevicePostureMode@DevicePostureHelpers@@YA?AW4DevicePostureMode@Input@Internal@UI@Windows@@W4DeviceConvertibility@1@@Z @ 0x180111630 (-CalculateDevicePostureMode@DevicePostureHelpers@@YA-AW4DevicePostureMode@Input@Internal@UI@Wind.c)
 * Callees:
 *     ??1?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@QEAA@XZ @ 0x1800997F0 (--1-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@@std@@QEAA@XZ.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801110E0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDI.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801111E4 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDI.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_MODE_INFO@@PEAU1@_KAEAV?$allocator@UDISPLAYCONFIG_MODE_INFO@@@0@@Z @ 0x180111304 (--$_Uninitialized_value_construct_n@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@YAPEAUDIS.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_PATH_INFO@@PEAU1@_KAEAV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@0@@Z @ 0x180111340 (--$_Uninitialized_value_construct_n@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDIS.c)
 *     ??0?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@QEAA@_KAEBV?$allocator@UDISPLAYCONFIG_MODE_INFO@@@1@@Z @ 0x180111468 (--0-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@QEAA@_K.c)
 *     ??0?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAA@_KAEBV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@1@@Z @ 0x180111508 (--0-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAA@_K.c)
 *     ?EvaluateDisplayConfig@Postures@InputTraceLogging@@SAX_N00@Z @ 0x180111918 (-EvaluateDisplayConfig@Postures@InputTraceLogging@@SAX_N00@Z.c)
 *     ?_Tidy@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAXXZ @ 0x180112590 (-_Tidy@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEA.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall DevicePostureHelpers::IsValidTabletDisplayConfig(DevicePostureHelpers *this)
{
  char v1; // bl
  char v2; // di
  char v3; // r15
  __int64 v4; // r8
  __int64 v6; // r8
  unsigned __int64 v7; // rcx
  DISPLAYCONFIG_MODE_INFO *v8; // r8
  unsigned __int64 v9; // rcx
  char v10; // r14
  char v11; // si
  unsigned __int16 *i; // rcx
  DISPLAYCONFIG_PATH_INFO *pathArray; // [rsp+40h] [rbp-38h] BYREF
  char *v14; // [rsp+48h] [rbp-30h]
  __int64 v15; // [rsp+50h] [rbp-28h]
  DISPLAYCONFIG_MODE_INFO *modeInfoArray; // [rsp+58h] [rbp-20h] BYREF
  char *v17; // [rsp+60h] [rbp-18h]
  __int64 v18; // [rsp+68h] [rbp-10h]
  UINT32 numPathArrayElements; // [rsp+B0h] [rbp+38h] BYREF
  UINT32 numModeInfoArrayElements; // [rsp+B8h] [rbp+40h] BYREF
  int pvData; // [rsp+C0h] [rbp+48h] BYREF
  DWORD pcbData; // [rsp+C8h] [rbp+50h] BYREF

  v1 = 0;
  pvData = 0;
  pcbData = 4;
  v2 = 1;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"System\\CurrentControlSet\\Control\\PriorityControl",
         L"CSMIgnoreDisplayConfig",
         0x10u,
         0LL,
         &pvData,
         &pcbData)
    || (v3 = 1, !pvData) )
  {
    v3 = 0;
  }
  numPathArrayElements = 0;
  numModeInfoArrayElements = 0;
  if ( GetDisplayConfigBufferSizes(0x12u, &numPathArrayElements, &numModeInfoArrayElements) )
    return 0;
  std::vector<DISPLAYCONFIG_PATH_INFO>::vector<DISPLAYCONFIG_PATH_INFO>((char **)&pathArray, numPathArrayElements, v4);
  std::vector<DISPLAYCONFIG_MODE_INFO>::vector<DISPLAYCONFIG_MODE_INFO>(
    (char **)&modeInfoArray,
    numModeInfoArrayElements,
    v6);
  if ( !QueryDisplayConfig(0x12u, &numPathArrayElements, pathArray, &numModeInfoArrayElements, modeInfoArray, 0LL) )
  {
    v7 = 0x8E38E38E38E38E39uLL * ((v14 - (char *)pathArray) >> 3);
    if ( numPathArrayElements >= v7 )
    {
      if ( numPathArrayElements > v7 )
      {
        if ( numPathArrayElements <= 0x8E38E38E38E38E39uLL * ((v15 - (__int64)pathArray) >> 3) )
          v14 = std::_Uninitialized_value_construct_n<std::allocator<DISPLAYCONFIG_PATH_INFO>>(
                  v14,
                  numPathArrayElements - v7);
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
    v8 = modeInfoArray;
    v9 = (v17 - (char *)modeInfoArray) >> 6;
    if ( numModeInfoArrayElements >= v9 )
    {
      if ( numModeInfoArrayElements > v9 )
      {
        if ( numModeInfoArrayElements <= (unsigned __int64)((v18 - (__int64)modeInfoArray) >> 6) )
          v17 = std::_Uninitialized_value_construct_n<std::allocator<DISPLAYCONFIG_MODE_INFO>>(
                  v17,
                  numModeInfoArrayElements - v9);
        else
          std::vector<DISPLAYCONFIG_MODE_INFO>::_Resize_reallocate<std::_Value_init_tag>(
            (__int64)&modeInfoArray,
            numModeInfoArrayElements);
        v8 = modeInfoArray;
      }
    }
    else
    {
      v17 = (char *)&modeInfoArray[(unsigned __int64)numModeInfoArrayElements];
    }
    v10 = 0;
    v11 = 0;
    for ( i = (unsigned __int16 *)&pathArray->sourceInfo.1 + 1; i - 7 != (unsigned __int16 *)v14; i += 36 )
    {
      if ( *(_DWORD *)(i + 11) == 0x80000000 || *(_DWORD *)(i + 11) == 11 || *(_DWORD *)(i + 11) == 13 )
        v10 = 1;
      if ( *(_QWORD *)&v8[(unsigned __int64)*i].desktopImageInfo.DesktopImageRegion.top )
      {
        v11 = 1;
        break;
      }
    }
    InputTraceLogging::Postures::EvaluateDisplayConfig(v3, v11, v10);
    if ( !v10 && !v3 || v11 )
      v2 = 0;
    v1 = v2;
  }
  std::vector<DISPLAYCONFIG_MODE_INFO>::_Tidy(&modeInfoArray);
  std::vector<HidChannelValueInfo>::~vector<HidChannelValueInfo>((__int64)&pathArray);
  return v1;
}
