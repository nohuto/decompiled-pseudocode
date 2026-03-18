/*
 * XREFs of ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00ACC98
 * Callers:
 *     ?DxgkEngProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00ACC80 (-DxgkEngProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z @ 0x1C00ACE38 (-DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z.c)
 *     DrvSetMonitorsDimState @ 0x1C00BAE20 (DrvSetMonitorsDimState.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C0136AC0 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C016141C (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     GreIsInLowBox @ 0x1C016CB60 (GreIsInLowBox.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC58 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD0C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E25C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E628 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5AC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA4C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DrvProcessWin32kEscape(struct _D3DKMT_ESCAPE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _D3DKMT_ESCAPE *v4; // r14
  int v5; // esi
  __int64 Pool2; // rdi
  UINT *p_PrivateDriverDataSize; // r12
  unsigned __int64 PrivateDriverDataSize; // rax
  NSInstrumentation::CLeakTrackingAllocator *v9; // r14
  unsigned __int64 v10; // rdi
  int v11; // eax
  size_t v12; // r8
  char *pPrivateDriverData; // rdx
  __int64 Type; // rdx
  int CurrentDpiInfoFromHDC; // eax
  _QWORD *v17; // rax
  unsigned int v18; // edx
  __int64 v19; // r10
  char v20; // r13
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 DxgkWin32kInterface; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  struct tagTHREADINFO *v31; // rax
  __int64 v32; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v34; // rax
  char v35; // al
  __int64 *v36; // rsi
  unsigned int v37; // edx
  unsigned int v38; // r8d
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  size_t v43; // r8
  char *v44; // rcx
  _QWORD v45[2]; // [rsp+30h] [rbp-138h] BYREF
  __int64 v46; // [rsp+40h] [rbp-128h]
  __int64 v47; // [rsp+48h] [rbp-120h] BYREF
  unsigned __int64 v48; // [rsp+50h] [rbp-118h] BYREF
  _QWORD v49[2]; // [rsp+60h] [rbp-108h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-F8h] BYREF
  struct _UNICODE_STRING v51; // [rsp+80h] [rbp-E8h] BYREF
  PVOID BackTrace[27]; // [rsp+90h] [rbp-D8h] BYREF
  struct _D3DKMT_ESCAPE *v53; // [rsp+170h] [rbp+8h] BYREF
  unsigned int v54; // [rsp+178h] [rbp+10h] BYREF
  __int64 v55; // [rsp+180h] [rbp+18h]
  unsigned __int64 v56; // [rsp+188h] [rbp+20h] BYREF

  v53 = a1;
  v4 = a1;
  v5 = 0;
  Pool2 = 0LL;
  v46 = 0LL;
  p_PrivateDriverDataSize = &a1->PrivateDriverDataSize;
  v45[0] = &a1->PrivateDriverDataSize;
  PrivateDriverDataSize = a1->PrivateDriverDataSize;
  if ( !(_DWORD)PrivateDriverDataSize )
    goto LABEL_10;
  v54 = 1886221383;
  v47 = 260LL;
  v9 = gpLeakTrackingAllocator;
  v10 = (unsigned int)PrivateDriverDataSize;
  v48 = PrivateDriverDataSize;
  v11 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, (unsigned int)v10, 1886221383LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v9 + 14);
    goto LABEL_5;
  }
  if ( v11 != 1 )
  {
    if ( v11 == 2 )
    {
      v56 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x706D7447u, &v56) )
      {
        v49[0] = &v47;
        v49[1] = &v54;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v9,
                  (__int64)v49,
                  &v48);
        goto LABEL_5;
      }
      v20 = 0;
      if ( v10 < 0x1000 || (v10 & 0xFFF) != 0 )
      {
        v20 = 1;
        v10 += 16LL;
        v48 = v10;
      }
      Pool2 = ExAllocatePool2(v19, v10, v18);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v9 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v20 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v9,
                                  Pool2,
                                  v56,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_5;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v9,
                                     Pool2,
                                     v56,
                                     BackTrace) )
        {
          goto LABEL_5;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v9 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    goto LABEL_41;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x706D7447u)
    || v10 + 16 < v10 )
  {
LABEL_41:
    Pool2 = 0LL;
    goto LABEL_5;
  }
  v17 = (_QWORD *)ExAllocatePool2(v47 & 0xFFFFFFFFFFFFFFFDuLL, v10 + 16, v54);
  Pool2 = (__int64)v17;
  if ( !v17
    || (_InterlockedIncrement64((volatile signed __int64 *)v9 + 14),
        *v17 = 1886221383LL,
        Pool2 = (__int64)(v17 + 2),
        v17 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v9 + 1),
      (const void *)0x706D7447);
  }
LABEL_5:
  v55 = Pool2;
  if ( Pool2 )
  {
    v12 = *p_PrivateDriverDataSize;
    v4 = v53;
    pPrivateDriverData = (char *)v53->pPrivateDriverData;
    if ( &pPrivateDriverData[v12] < pPrivateDriverData
      || (unsigned __int64)&pPrivateDriverData[v12] > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove((void *)Pool2, pPrivateDriverData, v12);
    v46 = Pool2;
LABEL_10:
    Type = v4->Type;
    if ( (int)Type > 1030 )
    {
      switch ( (_DWORD)Type )
      {
        case 0x407:
          if ( gbOSTestSigningEnabled
            || (!qword_1C02945B8 ? (v29 = 0) : (v29 = qword_1C02945B8((unsigned int)(Type - 1031))),
                v29
             || (unsigned int)GreIsInLowBox()
             && ((LOBYTE(v53) = 0,
                  DestinationString = 0LL,
                  v51 = 0LL,
                  RtlInitUnicodeString(&DestinationString, L"shellExperienceComposer"),
                  RtlInitUnicodeString(&v51, L"shellDisplayManagement"),
                  (int)RtlCapabilityCheckForSingleSessionSku(0LL, &DestinationString, &v53) >= 0)
              && (_BYTE)v53
              || (int)RtlCapabilityCheckForSingleSessionSku(0LL, &v51, &v53) >= 0 && (_BYTE)v53)) )
          {
            if ( *p_PrivateDriverDataSize != 24 )
            {
              v5 = -1073741811;
              WdLogSingleEntry2(2LL, *p_PrivateDriverDataSize);
              break;
            }
            if ( *(_DWORD *)(Pool2 + 20) < 4u )
            {
              v31 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, Type, a3, a4);
              gptiCurrent = v31;
              if ( v31 )
              {
                *((_DWORD *)v31 + 387) = 1;
                CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v32);
                if ( CurrentProcessWin32Process )
                {
                  v34 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
                  if ( v34 )
                  {
                    if ( (*(_DWORD *)(v34 + 12) & 0x8000) != 0 )
                    {
                      if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
                        || (v35 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
                      {
                        v35 = 0;
                      }
                      if ( v35 )
                      {
                        while ( 1 )
                        {
                          v36 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                          if ( !gpSharedUserCritDeferredUnlockListHead )
                            break;
                          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                          v36[2] = 0LL;
                          if ( !*(_DWORD *)(*v36 + 8) )
                          {
                            LODWORD(v55) = 0x20000;
                            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                          }
                          HMUnlockObject(*v36);
                        }
                      }
                    }
                  }
                }
              }
              v37 = *(_DWORD *)(Pool2 + 20);
              v38 = v37 >> 1;
              LOBYTE(v38) = (v37 & 2) != 0;
              LOBYTE(v37) = v37 & 1;
              xxxDisplayDiagBlackScreenDetected(4, v37, v38, Pool2 + 4, Pool2);
              v5 = 0;
              UserSessionSwitchLeaveCrit(v40, v39, v41, v42);
              break;
            }
            v5 = -1073741811;
            v30 = -1073741811LL;
          }
          else
          {
            v5 = -1073741790;
            v30 = -1073741790LL;
          }
          WdLogSingleEntry1(2LL, v30);
          break;
        case 0x40B:
          v5 = -1073741811;
          if ( *p_PrivateDriverDataSize == 8 )
            v5 = -1073741637;
          break;
        case 0x40C:
          if ( *p_PrivateDriverDataSize >= 0x64 )
          {
            CurrentDpiInfoFromHDC = DrvCollectColorProfileForUser((PSID)Pool2, *p_PrivateDriverDataSize);
LABEL_16:
            v5 = CurrentDpiInfoFromHDC;
            break;
          }
LABEL_55:
          v5 = -1073741811;
          goto LABEL_18;
        default:
          v28 = (unsigned int)(Type - 1037);
          if ( (_DWORD)Type != 1037 )
          {
            if ( (_DWORD)Type == 1038 )
            {
              if ( gbOSTestSigningEnabled )
              {
LABEL_83:
                v5 = -1073741637;
                break;
              }
LABEL_79:
              v5 = -1073741790;
              goto LABEL_18;
            }
            goto LABEL_84;
          }
          if ( !gbOSTestSigningEnabled )
            goto LABEL_79;
          if ( !*p_PrivateDriverDataSize )
            goto LABEL_55;
          v45[0] = 0LL;
          v45[1] = 0LL;
          LOBYTE(v28) = *(_BYTE *)Pool2;
          DrvSetMonitorsDimState(v28, v45);
          v5 = 0;
          break;
      }
LABEL_17:
      if ( v5 >= 0 )
      {
        if ( !Pool2 )
          return (unsigned int)v5;
        v43 = *p_PrivateDriverDataSize;
        v44 = (char *)v4->pPrivateDriverData;
        if ( (unsigned __int64)&v44[v43] > MmUserProbeAddress || &v44[v43] <= v44 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v44, (const void *)Pool2, v43);
      }
LABEL_18:
      if ( Pool2 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
      return (unsigned int)v5;
    }
    switch ( (_DWORD)Type )
    {
      case 0x406:
        if ( *p_PrivateDriverDataSize != 4 )
          goto LABEL_55;
        if ( !gbOSTestSigningEnabled )
          goto LABEL_79;
        if ( (*(_DWORD *)Pool2 & 3) == 2 )
        {
          WdLogSingleEntry1(2LL, Type);
          goto LABEL_55;
        }
        g_OutputDuplicationTestControl = *(_DWORD *)Pool2;
        goto LABEL_17;
      case 0x400:
        if ( *p_PrivateDriverDataSize >= 4 && *p_PrivateDriverDataSize == *(_DWORD *)Pool2 )
        {
          if ( qword_1C0294830 )
          {
            v5 = qword_1C0294830((unsigned int)(Type - 1024));
            CurrentDpiInfoFromHDC = -1073741637;
          }
          else
          {
            CurrentDpiInfoFromHDC = -1073741637;
            v5 = -1073741637;
          }
          if ( v5 < 0 )
            goto LABEL_18;
          if ( qword_1C0294838 )
            CurrentDpiInfoFromHDC = ((__int64 (__fastcall *)(__int64))qword_1C0294838)(Pool2);
          goto LABEL_16;
        }
        goto LABEL_55;
      case 0x401:
        v5 = -1073741637;
        goto LABEL_18;
    }
    v21 = (unsigned int)(Type - 1026);
    if ( (_DWORD)Type == 1026 )
    {
      if ( *p_PrivateDriverDataSize == 104 )
      {
        CurrentDpiInfoFromHDC = DrvGetCurrentDpiInfoFromHDC(*(HDC *)Pool2, (struct _DPI_INFORMATION *const)(Pool2 + 8));
        goto LABEL_16;
      }
      v5 = -1073741811;
    }
    else
    {
      v21 = (unsigned int)(Type - 1027);
      if ( (_DWORD)Type != 1027 )
      {
        if ( (_DWORD)Type != 1028 )
        {
LABEL_84:
          WdLogSingleEntry1(2LL, Type);
LABEL_85:
          v5 = -1073741811;
          goto LABEL_17;
        }
        if ( *p_PrivateDriverDataSize != 6 )
          goto LABEL_55;
        v22 = *(_QWORD *)(SGDGetSessionState(v21) + 24);
        *(_WORD *)Pool2 = *(_WORD *)(v22 + 1248);
        v23 = PsGetCurrentProcessWin32Process(v22);
        if ( v23 )
          v23 &= -(__int64)(*(_QWORD *)v23 != 0LL);
        *(_WORD *)(Pool2 + 2) = *(_WORD *)(v23 + 284);
        *(_WORD *)(Pool2 + 4) = *((_WORD *)gpsi + 3499);
        goto LABEL_17;
      }
    }
    if ( *p_PrivateDriverDataSize < 8 )
      goto LABEL_55;
    if ( *(_DWORD *)Pool2 == 1 )
    {
      if ( *(_QWORD *)(DxDdGetDxgkWin32kInterface(v21, Type) + 536) )
      {
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v25, v24);
        *(_DWORD *)(Pool2 + 4) = (*(unsigned __int8 (**)(void))(DxgkWin32kInterface + 536))() != 0;
        goto LABEL_17;
      }
      goto LABEL_83;
    }
    if ( *(_DWORD *)Pool2 == 2 )
    {
      v27 = *(_QWORD *)(SGDGetSessionState(v21) + 24);
      if ( gbOSTestSigningEnabled )
      {
        *(_DWORD *)(v27 + 1420) = *(_DWORD *)(Pool2 + 4);
        goto LABEL_17;
      }
    }
    goto LABEL_85;
  }
  WdLogSingleEntry1(6LL, *p_PrivateDriverDataSize);
  return 3221225495LL;
}
