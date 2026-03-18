/*
 * XREFs of BlackScreenDiagnostics::GetVidPnOwnership @ 0x14000DCE0
 * Callers:
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000DEB8 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 * Callees:
 *     __security_check_cookie @ 0x1400049A0 (__security_check_cookie.c)
 *     ??$_Construct_n@$$V@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAX_K@Z @ 0x14000D2D0 (--$_Construct_n@$$V@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@s.c)
 *     ??$_Construct_n@$$V@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_K@Z @ 0x14000D378 (--$_Construct_n@$$V@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@s.c)
 *     ?_Tidy@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAXXZ @ 0x14000E7AC (-_Tidy@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEA.c)
 *     ?_Tidy@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAXXZ @ 0x14000E7E8 (-_Tidy@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEA.c)
 */

__int64 __fastcall BlackScreenDiagnostics::GetVidPnOwnership(_DWORD *a1)
{
  int DisplayConfigBufferSizes; // ebx
  DISPLAYCONFIG_PATH_INFO *v3; // rdx
  DISPLAYCONFIG_MODE_INFO *v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rsi
  NTSTATUS v7; // eax
  UINT32 numPathArrayElements; // [rsp+38h] [rbp-9h] BYREF
  UINT32 numModeInfoArrayElements; // [rsp+3Ch] [rbp-5h] BYREF
  _DWORD v11[2]; // [rsp+40h] [rbp-1h] BYREF
  DISPLAYCONFIG_PATH_INFO *pathArray[2]; // [rsp+48h] [rbp+7h] BYREF
  __int64 v13; // [rsp+58h] [rbp+17h]
  DISPLAYCONFIG_MODE_INFO *modeInfoArray[2]; // [rsp+60h] [rbp+1Fh] BYREF
  __int64 v15; // [rsp+70h] [rbp+2Fh]
  LUID adapterId; // [rsp+78h] [rbp+37h] BYREF
  int v17; // [rsp+80h] [rbp+3Fh]

  numPathArrayElements = 0;
  numModeInfoArrayElements = 0;
  DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(2u, &numPathArrayElements, &numModeInfoArrayElements);
  if ( DisplayConfigBufferSizes >= 0 )
  {
    if ( !numPathArrayElements )
    {
      *a1 = 4;
      return (unsigned int)DisplayConfigBufferSizes;
    }
    v13 = 0LL;
    *(_OWORD *)pathArray = 0LL;
    std::vector<DISPLAYCONFIG_PATH_INFO>::_Construct_n<>(pathArray, numPathArrayElements);
    v15 = 0LL;
    *(_OWORD *)modeInfoArray = 0LL;
    std::vector<DISPLAYCONFIG_MODE_INFO>::_Construct_n<>(modeInfoArray, numModeInfoArrayElements);
    DisplayConfigBufferSizes = QueryDisplayConfig(
                                 2u,
                                 &numPathArrayElements,
                                 pathArray[0],
                                 &numModeInfoArrayElements,
                                 modeInfoArray[0],
                                 0LL);
    if ( DisplayConfigBufferSizes < 0 )
    {
      *a1 = 5;
      goto LABEL_22;
    }
    v3 = pathArray[0];
    v5 = 0LL;
    v4 = modeInfoArray[0];
    while ( 1 )
    {
      if ( (unsigned int)v5 >= numPathArrayElements )
        goto LABEL_22;
      v6 = v5;
      if ( !*(_QWORD *)&modeInfoArray[0][(unsigned __int64)pathArray[0][v5].sourceInfo.modeInfoIdx].desktopImageInfo.DesktopImageRegion.top )
        break;
      v5 = (unsigned int)(v5 + 1);
    }
    v17 = 0;
    adapterId = pathArray[0][v5].sourceInfo.adapterId;
    v7 = D3DKMTOpenAdapterFromLuid(&adapterId, pathArray[0], modeInfoArray[0]);
    if ( v7 >= 0 )
    {
      v11[0] = v17;
      v11[1] = pathArray[0][v6].sourceInfo.id;
      v7 = D3DKMTCheckVidPnExclusiveOwnership(v11);
      if ( v7 == -1071775738 )
      {
        *a1 = 2;
      }
      else if ( v7 == -1071775732 )
      {
        *a1 = 3;
      }
      else
      {
        if ( v7 )
        {
          *a1 = 7;
LABEL_20:
          DisplayConfigBufferSizes = RtlNtStatusToDosError(v7);
LABEL_22:
          std::vector<DISPLAYCONFIG_MODE_INFO>::_Tidy(modeInfoArray, v3, v4);
          std::vector<DISPLAYCONFIG_PATH_INFO>::_Tidy(pathArray);
          return (unsigned int)DisplayConfigBufferSizes;
        }
        *a1 = 1;
      }
      DisplayConfigBufferSizes = 0;
      goto LABEL_22;
    }
    *a1 = 6;
    goto LABEL_20;
  }
  return (unsigned int)DisplayConfigBufferSizes;
}
