/*
 * XREFs of ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x140133408
 * Callers:
 *     ?DxgkEngProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1401333F0 (-DxgkEngProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     PALLOCMEM @ 0x14008F85C (PALLOCMEM.c)
 *     DrvSetMonitorsDimState @ 0x1400911C4 (DrvSetMonitorsDimState.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z @ 0x1400EC69C (-DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z.c)
 *     DxgkEngIsDwmProcess @ 0x1400ECBC4 (DxgkEngIsDwmProcess.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1401ABAF0 (xxxDisplayDiagBlackScreenDetected.c)
 *     UserGetSystemDpi @ 0x1401BE9D0 (UserGetSystemDpi.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1401C845C (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     Feature_DispDiagBlackScreen__private_IsEnabledDeviceUsageNoInline @ 0x1401CCA8C (Feature_DispDiagBlackScreen__private_IsEnabledDeviceUsageNoInline.c)
 *     GreIsInLowBox @ 0x1401CE5C0 (GreIsInLowBox.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DrvProcessWin32kEscape(struct _D3DKMT_ESCAPE *a1)
{
  int v2; // edi
  _DWORD *v3; // rsi
  int *p_PrivateDriverDataSize; // r15
  __int64 PrivateDriverDataSize; // rcx
  size_t v7; // r8
  char *pPrivateDriverData; // rdx
  __int64 Type; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 DxgkWin32kInterface; // rax
  __int64 v13; // rcx
  NTSTATUS CurrentDpiInfoFromHDC; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 (*v17)(void); // rax
  __int64 (__fastcall *v18)(_DWORD *); // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  _QWORD *UserSessionState; // rdi
  __int64 v22; // rax
  size_t v23; // r8
  char *v24; // rcx
  __int128 v25; // [rsp+30h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF
  struct _UNICODE_STRING v27; // [rsp+50h] [rbp-38h] BYREF
  struct _D3DKMT_ESCAPE *v28; // [rsp+90h] [rbp+8h] BYREF
  _DWORD *v29; // [rsp+98h] [rbp+10h]
  UINT *v30; // [rsp+A0h] [rbp+18h]

  v28 = a1;
  v2 = 0;
  v3 = 0LL;
  v29 = 0LL;
  p_PrivateDriverDataSize = (int *)&a1->PrivateDriverDataSize;
  v30 = &a1->PrivateDriverDataSize;
  PrivateDriverDataSize = a1->PrivateDriverDataSize;
  if ( (_DWORD)PrivateDriverDataSize )
  {
    v3 = (_DWORD *)PALLOCMEM(PrivateDriverDataSize, 0x706D7447u);
    v29 = v3;
    if ( !v3 )
    {
      WdLogSingleEntry1(6LL, (unsigned int)*p_PrivateDriverDataSize);
      WdLogGlobalForLineNumber = 29186;
      return 3221225495LL;
    }
    v7 = (unsigned int)*p_PrivateDriverDataSize;
    pPrivateDriverData = (char *)a1->pPrivateDriverData;
    if ( &pPrivateDriverData[v7] < pPrivateDriverData || (unsigned __int64)&pPrivateDriverData[v7] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v3, pPrivateDriverData, v7);
  }
  Type = a1->Type;
  if ( (int)Type <= 1030 )
  {
    if ( (_DWORD)Type != 1030 )
    {
      if ( (_DWORD)Type == 1024 )
      {
        if ( (unsigned int)*p_PrivateDriverDataSize < 4 || *p_PrivateDriverDataSize != *v3 )
          goto LABEL_16;
        v16 = *(_QWORD *)(W32GetWin32kBaseApiSetTable((unsigned int)(Type - 1024), Type) + 24);
        v17 = *(__int64 (**)(void))(v16 + 1056);
        if ( v17 )
          v2 = v17();
        else
          v2 = -1073741637;
        if ( v2 < 0 )
          goto LABEL_87;
        v18 = *(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v16, v15) + 24) + 1064LL);
        if ( !v18 )
        {
          v2 = -1073741637;
          goto LABEL_81;
        }
        CurrentDpiInfoFromHDC = v18(v3);
      }
      else
      {
        if ( (_DWORD)Type == 1025 )
        {
          v2 = -1073741637;
          goto LABEL_87;
        }
        v10 = (unsigned int)(Type - 1026);
        if ( (_DWORD)Type != 1026 )
        {
          v10 = (unsigned int)(Type - 1027);
          if ( (_DWORD)Type != 1027 )
          {
            if ( (_DWORD)Type == 1028 )
            {
              if ( *p_PrivateDriverDataSize != 6 )
              {
LABEL_16:
                v2 = -1073741811;
                goto LABEL_87;
              }
              *(_WORD *)v3 = *(_WORD *)(*(_QWORD *)(W32GetSessionState(v10) + 88) + 1080LL);
              UserGetSystemDpi((char *)v3 + 2, v3 + 1);
              goto LABEL_81;
            }
            goto LABEL_51;
          }
          goto LABEL_20;
        }
        if ( *p_PrivateDriverDataSize != 104 )
        {
          v2 = -1073741811;
LABEL_20:
          if ( (unsigned int)*p_PrivateDriverDataSize < 8 )
            goto LABEL_16;
          if ( *v3 != 1 )
          {
            if ( *v3 == 2 )
            {
              v13 = *(_QWORD *)(W32GetSessionState(v10) + 88);
              if ( gbOSTestSigningEnabled )
              {
                *(_DWORD *)(v13 + 1260) = v3[1];
                goto LABEL_81;
              }
            }
            goto LABEL_52;
          }
          if ( *(_QWORD *)(DxDdGetDxgkWin32kInterface(v10) + 536) )
          {
            DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v11);
            v3[1] = (*(unsigned __int8 (**)(void))(DxgkWin32kInterface + 536))() != 0;
            goto LABEL_81;
          }
          goto LABEL_54;
        }
        CurrentDpiInfoFromHDC = DrvGetCurrentDpiInfoFromHDC(*(HDC *)v3, (struct _DPI_INFORMATION *const)(v3 + 2));
      }
LABEL_28:
      v2 = CurrentDpiInfoFromHDC;
      goto LABEL_81;
    }
    if ( *p_PrivateDriverDataSize != 4 )
      goto LABEL_16;
    if ( gbOSTestSigningEnabled )
    {
      if ( (*v3 & 2) != 0 && (*v3 & 1) == 0 )
      {
        WdLogSingleEntry1(2LL, Type);
        WdLogGlobalForLineNumber = 29322;
        goto LABEL_16;
      }
      g_OutputDuplicationTestControl = *v3;
      goto LABEL_81;
    }
    goto LABEL_41;
  }
  v19 = (unsigned int)(Type - 1031);
  if ( (_DWORD)Type != 1031 )
  {
    if ( (_DWORD)Type == 1035 )
    {
      v2 = -1073741811;
      if ( *p_PrivateDriverDataSize == 8 )
        v2 = -1073741637;
      goto LABEL_81;
    }
    if ( (_DWORD)Type == 1036 )
    {
      if ( (unsigned int)*p_PrivateDriverDataSize < 0x64 )
        goto LABEL_16;
      CurrentDpiInfoFromHDC = DrvCollectColorProfileForUser((char *)v3, *p_PrivateDriverDataSize);
      goto LABEL_28;
    }
    v20 = (unsigned int)(Type - 1037);
    if ( (_DWORD)Type == 1037 )
    {
      if ( gbOSTestSigningEnabled )
      {
        if ( !*p_PrivateDriverDataSize )
          goto LABEL_16;
        v25 = 0uLL;
        LOBYTE(v20) = *(_BYTE *)v3;
        DrvSetMonitorsDimState(v20, &v25);
        v2 = 0;
        goto LABEL_81;
      }
    }
    else
    {
      if ( (_DWORD)Type != 1038 )
      {
LABEL_51:
        WdLogSingleEntry1(2LL, Type);
        WdLogGlobalForLineNumber = 29452;
LABEL_52:
        v2 = -1073741811;
        goto LABEL_81;
      }
      if ( gbOSTestSigningEnabled )
      {
LABEL_54:
        v2 = -1073741637;
        goto LABEL_81;
      }
    }
LABEL_41:
    v2 = -1073741790;
    goto LABEL_87;
  }
  if ( !gbOSTestSigningEnabled && !(unsigned int)DxgkEngIsDwmProcess(v19, Type) )
  {
    if ( (unsigned int)GreIsInLowBox() )
    {
      LOBYTE(v28) = 0;
      DestinationString = 0LL;
      v27 = 0LL;
      RtlInitUnicodeString(&DestinationString, L"shellExperienceComposer");
      RtlInitUnicodeString(&v27, L"shellDisplayManagement");
      if ( ((int)RtlCapabilityCheckForSingleSessionSku(0LL, &DestinationString, &v28) < 0 || !(_BYTE)v28)
        && ((int)RtlCapabilityCheckForSingleSessionSku(0LL, &v27, &v28) < 0 || !(_BYTE)v28) )
      {
        v2 = -1073741790;
        WdLogSingleEntry1(2LL, -1073741790LL);
        WdLogGlobalForLineNumber = 29358;
        goto LABEL_81;
      }
    }
    else if ( !(unsigned int)Feature_DispDiagBlackScreen__private_IsEnabledDeviceUsageNoInline() )
    {
      v2 = -1073741790;
      WdLogSingleEntry1(2LL, -1073741790LL);
      WdLogGlobalForLineNumber = 29366;
      goto LABEL_81;
    }
  }
  if ( *p_PrivateDriverDataSize == 24 )
  {
    if ( v3[5] < 4u )
    {
      UserSessionState = (_QWORD *)W32GetUserSessionState(v19);
      v22 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
              UserSessionState,
              1LL,
              0LL,
              _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
      UserSessionState[3] = v22;
      if ( v22 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v22) )
      {
        DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
      }
      xxxDisplayDiagBlackScreenDetected(4u, (__int64)v3);
      v2 = 0;
      UserSessionSwitchLeaveCritWithNonPaged();
    }
    else
    {
      v2 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 29383;
    }
  }
  else
  {
    v2 = -1073741811;
    WdLogSingleEntry2(2LL, (unsigned int)*p_PrivateDriverDataSize, -1073741811LL);
    WdLogGlobalForLineNumber = 29374;
  }
LABEL_81:
  if ( v2 < 0 )
  {
LABEL_87:
    if ( v3 )
      GreDeleteFastMutex((char *)v3);
    return (unsigned int)v2;
  }
  if ( v3 )
  {
    v23 = (unsigned int)*p_PrivateDriverDataSize;
    v24 = (char *)a1->pPrivateDriverData;
    if ( (unsigned __int64)&v24[v23] > MmUserProbeAddress || &v24[v23] <= v24 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v24, v3, v23);
    goto LABEL_87;
  }
  return (unsigned int)v2;
}
