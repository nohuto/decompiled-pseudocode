/*
 * XREFs of CalculateDisplayBlankTime @ 0x180229E74
 * Callers:
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAVIOverlaySwapChain@@@Z @ 0x180287F64 (-Initialize@CComputeScribbleScheduler@@AEAAJPEAVIOverlaySwapChain@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18024BE8C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18028759C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDI.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18028769C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDI.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_MODE_INFO@@PEAU1@_KAEAV?$allocator@UDISPLAYCONFIG_MODE_INFO@@@0@@Z @ 0x1802878D4 (--$_Uninitialized_value_construct_n@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@YAPEAUDIS.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_PATH_INFO@@PEAU1@_KAEAV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@0@@Z @ 0x180287910 (--$_Uninitialized_value_construct_n@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDIS.c)
 */

__int64 __fastcall CalculateDisplayBlankTime(__int64 a1, int a2, double *a3)
{
  unsigned int DisplayConfigBufferSizes; // eax
  unsigned int v7; // r8d
  unsigned __int64 v8; // rcx
  DISPLAYCONFIG_MODE_INFO *v9; // r8
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  DISPLAYCONFIG_MODE_INFO *v12; // r8
  UINT32 i; // r9d
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  double v16; // xmm0_8
  UINT64 v17; // rax
  unsigned int v19; // ebx
  unsigned int modeInfoArray; // [rsp+20h] [rbp-50h]
  UINT32 numPathArrayElements; // [rsp+30h] [rbp-40h] BYREF
  DISPLAYCONFIG_MODE_INFO *v22[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v23; // [rsp+48h] [rbp-28h]
  DISPLAYCONFIG_PATH_INFO *pathArray[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v25; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  UINT32 numModeInfoArrayElements; // [rsp+A8h] [rbp+38h] BYREF

  v25 = 0LL;
  v23 = 0LL;
  numPathArrayElements = 0;
  numModeInfoArrayElements = 0;
  *(_OWORD *)pathArray = 0LL;
  *(_OWORD *)v22 = 0LL;
  do
  {
    DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(0x42u, &numPathArrayElements, &numModeInfoArrayElements);
    if ( DisplayConfigBufferSizes )
    {
      v11 = 37LL;
      goto LABEL_36;
    }
    v8 = 0x8E38E38E38E38E39uLL * (((char *)pathArray[1] - (char *)pathArray[0]) >> 3);
    if ( numPathArrayElements >= v8 )
    {
      if ( numPathArrayElements > v8 )
      {
        if ( numPathArrayElements <= 0x8E38E38E38E38E39uLL
                                   * ((signed __int64)(v25 - (unsigned __int64)pathArray[0]) >> 3) )
          pathArray[1] = (DISPLAYCONFIG_PATH_INFO *)std::_Uninitialized_value_construct_n<std::allocator<DISPLAYCONFIG_PATH_INFO>>(
                                                      pathArray[1],
                                                      numPathArrayElements - v8);
        else
          std::vector<DISPLAYCONFIG_PATH_INFO>::_Resize_reallocate<std::_Value_init_tag>(pathArray);
      }
    }
    else
    {
      pathArray[1] = &pathArray[0][numPathArrayElements];
    }
    v9 = v22[0];
    v10 = v22[1] - v22[0];
    if ( numModeInfoArrayElements >= v10 )
    {
      if ( numModeInfoArrayElements > v10 )
      {
        if ( numModeInfoArrayElements <= (unsigned __int64)((signed __int64)(v23 - (unsigned __int64)v22[0]) >> 6) )
          v22[1] = (DISPLAYCONFIG_MODE_INFO *)std::_Uninitialized_value_construct_n<std::allocator<DISPLAYCONFIG_MODE_INFO>>(
                                                v22[1],
                                                numModeInfoArrayElements - v10);
        else
          std::vector<DISPLAYCONFIG_MODE_INFO>::_Resize_reallocate<std::_Value_init_tag>(v22);
        v9 = v22[0];
      }
    }
    else
    {
      v22[1] = &v22[0][(unsigned __int64)numModeInfoArrayElements];
    }
    DisplayConfigBufferSizes = QueryDisplayConfig(
                                 0x42u,
                                 &numPathArrayElements,
                                 pathArray[0],
                                 &numModeInfoArrayElements,
                                 v9,
                                 0LL);
  }
  while ( DisplayConfigBufferSizes == 122 );
  if ( DisplayConfigBufferSizes )
  {
    v11 = 50LL;
LABEL_36:
    v19 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)v11,
            v7,
            (const char *)DisplayConfigBufferSizes,
            modeInfoArray);
    if ( v22[0] )
    {
      std::_Deallocate<16,0>(v22[0], (v23 - (unsigned __int64)v22[0]) & 0xFFFFFFFFFFFFFFC0uLL);
      v23 = 0LL;
      *(_OWORD *)v22 = 0LL;
    }
    if ( pathArray[0] )
      std::_Deallocate<16,0>(
        &pathArray[0]->sourceInfo.adapterId,
        8 * ((signed __int64)(v25 - (unsigned __int64)pathArray[0]) >> 3));
    return v19;
  }
  v12 = v22[0];
  for ( i = 0; ; ++i )
  {
    if ( i >= numModeInfoArrayElements )
    {
      *a3 = 0.001000000047497451;
      goto LABEL_30;
    }
    v14 = (unsigned __int64)i << 6;
    if ( *(DISPLAYCONFIG_MODE_INFO_TYPE *)((char *)&v22[0]->infoType + v14) == DISPLAYCONFIG_MODE_INFO_TYPE_TARGET
      && (*(unsigned int *)((char *)&v22[0]->adapterId.LowPart + v14) | (unsigned __int64)((__int64)(int)HIDWORD(*(unsigned __int64 *)((char *)&v22[0]->adapterId + v14)) << 32)) == a1
      && *(UINT32 *)((char *)&v22[0]->id + v14) == a2 )
    {
      break;
    }
  }
  v15 = *(UINT64 *)((char *)&v22[0]->targetMode.targetVideoSignalInfo.pixelRate + v14);
  if ( v15 < 0 )
  {
    v17 = *(UINT64 *)((_BYTE *)&v22[0]->targetMode.targetVideoSignalInfo.pixelRate + v14) & 1 | (*(UINT64 *)((char *)&v22[0]->targetMode.targetVideoSignalInfo.pixelRate + v14) >> 1);
    v16 = (double)(int)v17 + (double)(int)v17;
  }
  else
  {
    v16 = (double)(int)v15;
  }
  *a3 = (double)(*(UINT32 *)((char *)&v22[0]->targetMode.targetVideoSignalInfo.totalSize.cx + v14)
               * (*(UINT32 *)((char *)&v22[0]->targetMode.targetVideoSignalInfo.totalSize.cy + v14)
                - *(UINT32 *)((char *)&v22[0]->targetMode.targetVideoSignalInfo.activeSize.cy + v14)))
      / v16;
LABEL_30:
  if ( v12 )
  {
    std::_Deallocate<16,0>(v12, (v23 - (_QWORD)v12) & 0xFFFFFFFFFFFFFFC0uLL);
    v23 = 0LL;
    *(_OWORD *)v22 = 0LL;
  }
  if ( pathArray[0] )
    std::_Deallocate<16,0>(
      &pathArray[0]->sourceInfo.adapterId,
      8 * ((signed __int64)(v25 - (unsigned __int64)pathArray[0]) >> 3));
  return 0LL;
}
