/*
 * XREFs of Win32UserInitialize @ 0x1C02DBF90
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02DEBC0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ @ 0x1C000F9DC (-LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ.c)
 *     OpenCacheKeyEx @ 0x1C00371E0 (OpenCacheKeyEx.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     IsIMMEnabledSystem @ 0x1C007C5D0 (IsIMMEnabledSystem.c)
 *     ApiSetEditionBaseDriverEntryInitialize @ 0x1C007C604 (ApiSetEditionBaseDriverEntryInitialize.c)
 *     ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1C007E84C (-IsDesktopHeapLoggingOn@@YAHXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     UserAddAtomToAtomTableEx @ 0x1C00AF960 (UserAddAtomToAtomTableEx.c)
 *     Initialize @ 0x1C00C232C (Initialize.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC58 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD0C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E25C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E628 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5AC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA4C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     InitCreateSharedSection @ 0x1C02DCE04 (InitCreateSharedSection.c)
 *     InitKernelHandleTable @ 0x1C02DD024 (InitKernelHandleTable.c)
 *     HMInitHandleTable @ 0x1C02DD0A0 (HMInitHandleTable.c)
 *     InitQEntryLookaside @ 0x1C02DD138 (InitQEntryLookaside.c)
 *     InitSecurity @ 0x1C02DDD6C (InitSecurity.c)
 *     InitCreateUserSubsystem @ 0x1C02DE10C (InitCreateUserSubsystem.c)
 */

__int64 __fastcall Win32UserInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  PDEVICE_OBJECT v4; // rcx
  int v5; // r15d
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edi
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int inited; // edi
  int v17; // eax
  int v18; // eax
  int v19; // edi
  int v20; // eax
  unsigned int v21; // edx
  _DWORD *v22; // rax
  NSInstrumentation::CLeakTrackingAllocator *v23; // rbx
  int v24; // eax
  void *Pool2; // rsi
  PVOID Heap; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v32; // rsi
  int v33; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  __int64 v35; // rcx
  void *v36; // rbx
  void *v37; // rbx
  int v38; // eax
  int v39; // edi
  void *v40; // rbx
  _DWORD *v41; // rbx
  void *v42; // rdi
  _DWORD *v43; // rbx
  void *v44; // rdi
  _DWORD *v45; // rbx
  void *v46; // rdi
  _DWORD *v47; // rbx
  void *v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  void *v54; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v56; // rax
  __int64 *v57; // rbx
  _QWORD *v58; // rax
  unsigned int v59; // r10d
  __int64 v60; // r11
  __int64 v61; // rsi
  _QWORD *v62; // rax
  unsigned int v63; // r10d
  __int64 v64; // r11
  __int64 v65; // [rsp+48h] [rbp-C0h] BYREF
  __int64 DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v68; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v69; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v70; // [rsp+78h] [rbp-90h] BYREF
  __int64 v71; // [rsp+80h] [rbp-88h] BYREF
  __int64 v72; // [rsp+88h] [rbp-80h] BYREF
  __int64 v73; // [rsp+90h] [rbp-78h] BYREF
  PVOID BackTrace[20]; // [rsp+98h] [rbp-70h] BYREF
  PVOID v75[20]; // [rsp+138h] [rbp+30h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+1D8h] [rbp+D0h] BYREF
  int v77; // [rsp+1E4h] [rbp+DCh]
  _BYTE v78[12]; // [rsp+1F0h] [rbp+E8h] BYREF
  int v79; // [rsp+1FCh] [rbp+F4h]
  _BYTE v80[12]; // [rsp+208h] [rbp+100h] BYREF
  int v81; // [rsp+214h] [rbp+10Ch]
  _BYTE v82[12]; // [rsp+220h] [rbp+118h] BYREF
  int v83; // [rsp+22Ch] [rbp+124h]
  _BYTE v84[12]; // [rsp+238h] [rbp+130h] BYREF
  int v85; // [rsp+244h] [rbp+13Ch]
  _BYTE v86[12]; // [rsp+250h] [rbp+148h] BYREF
  int v87; // [rsp+25Ch] [rbp+154h]
  _BYTE v88[12]; // [rsp+268h] [rbp+160h] BYREF
  int v89; // [rsp+274h] [rbp+16Ch]

  v3 = 0;
  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      25,
      (__int64)&WPP_169ed334ae81372bb981068a10849f93_Traceguids);
  if ( qword_1C0295D58 && (int)qword_1C0295D58(v4, a2, a3) >= 0 )
  {
    if ( qword_1C0295D60 )
    {
      v5 = qword_1C0295D60();
      if ( v5 >= 0 )
        goto LABEL_11;
    }
    else
    {
      return (unsigned int)-1073741637;
    }
    return (unsigned int)v5;
  }
LABEL_11:
  result = InitCreateSharedSection(v4, a2, a3);
  if ( (int)result >= 0 )
  {
    result = InitKernelHandleTable();
    if ( (int)result >= 0 )
    {
      result = ApiSetEditionBaseDriverEntryInitialize();
      v10 = result;
      if ( (int)result >= 0 )
      {
        v11 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v7, v8, v9);
        gptiCurrent = v11;
        if ( v11 )
        {
          *((_DWORD *)v11 + 387) = 1;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
          if ( CurrentProcessWin32Process )
          {
            if ( *(_QWORD *)CurrentProcessWin32Process
              && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
              && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
              && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v57 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                             + 2);
                v56 = *v57;
                v57[2] = 0LL;
                if ( !*(_DWORD *)(v56 + 8) )
                {
                  LODWORD(v65) = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
                }
                HMUnlockObject(*v57);
              }
            }
          }
        }
        if ( !(unsigned int)InitSecurity() )
          goto LABEL_229;
        *(_DWORD *)(ExWindowStationObjectType + 108LL) = 240;
        *(_DWORD *)(ExWindowStationObjectType + 104LL) = 0;
        *(_DWORD *)(ExWindowStationObjectType + 92LL) = 983935;
        *(struct _GENERIC_MAPPING *)(ExWindowStationObjectType + 76LL) = WinStaMapping;
        *((_DWORD *)ExDesktopObjectType + 27) = 344;
        *((_DWORD *)ExDesktopObjectType + 26) = 0;
        *((_DWORD *)ExDesktopObjectType + 23) = 983551;
        *(_OWORD *)((char *)ExDesktopObjectType + 76) = DesktopMapping;
        *(_OWORD *)(ExCompositionObjectType + 76LL) = RIMRights;
        *(_DWORD *)(ExCompositionObjectType + 108LL) = 24;
        *(_DWORD *)(ExCompositionObjectType + 104LL) = 0;
        *(_DWORD *)(ExCompositionObjectType + 92LL) = 983043;
        *(_BYTE *)(ExRawInputManagerObjectType + 66LL) |= 0x10u;
        *(_DWORD *)(ExRawInputManagerObjectType + 108LL) = 1120;
        *(_DWORD *)(ExRawInputManagerObjectType + 104LL) = 0;
        *(_DWORD *)(ExRawInputManagerObjectType + 92LL) = 983043;
        *(_OWORD *)(ExRawInputManagerObjectType + 76LL) = RIMRights;
        gpepInit = PsGetCurrentProcess(ExRawInputManagerObjectType, 983043LL, v14);
        inited = InitQEntryLookaside();
        if ( qword_1C0295D68 && (int)qword_1C0295D68() >= 0 )
        {
          if ( qword_1C0295D70 )
            v17 = qword_1C0295D70();
          else
            v17 = -1073741637;
          inited |= v17;
        }
        v18 = UserAtomTableHandle ? 0 : RtlCreateAtomTableEx(37LL, 1LL, &UserAtomTableHandle);
        v19 = v18 | inited;
        v20 = UserLibmgmtAtomTableHandle ? 0 : RtlCreateAtomTableEx(37LL, 1LL, &UserLibmgmtAtomTableHandle);
        v10 = v20 | v19;
        if ( v10 < 0 )
          goto LABEL_229;
        atomUSER32 = UserAddAtomToAtomTableEx(UserAtomTableHandle, (__int64)L"USER32", 1, 2LL);
        gatomFirstPinned = atomUSER32;
        if ( !atomUSER32 || !(unsigned int)InitCreateUserSubsystem() )
          goto LABEL_229;
        if ( qword_1C0295D78 && (int)qword_1C0295D78() >= 0 && qword_1C0295D80 )
          qword_1C0295D80();
        if ( qword_1C0294FF0 && (int)qword_1C0294FF0() >= 0 && (!qword_1C0294FF8 || (int)qword_1C0294FF8() < 0) )
          goto LABEL_229;
        gpsi = RtlAllocateHeap(gpvSharedAlloc, 0, 0x1D50uLL);
        if ( !gpsi )
          goto LABEL_229;
        v21 = 2;
        v13 = 2524LL;
        do
        {
          LODWORD(v14) = 0;
          v15 = v13;
          do
          {
            v14 = (unsigned int)(v14 + 1);
            *(_DWORD *)((char *)gpsi + v15) = -1;
            v15 += 4LL;
          }
          while ( (unsigned int)v14 < 0x1E );
          ++v21;
          v13 += 120LL;
        }
        while ( v21 < 0x12 );
        v22 = gpsi;
        v23 = gpLeakTrackingAllocator;
        v68 = 1885629269;
        v71 = 260LL;
        *((_DWORD *)gpsi + 1282) = 8;
        v22[1283] = 16;
        v24 = *(_DWORD *)v23;
        v65 = 168LL;
        if ( !v24 )
        {
          Pool2 = (void *)ExAllocatePool2(260LL, 168LL, 1885629269LL);
          if ( Pool2 )
            _InterlockedAdd64((volatile signed __int64 *)v23 + 14, 1uLL);
LABEL_44:
          gpDispInfo = Pool2;
          if ( !Pool2 )
            goto LABEL_229;
          goto LABEL_45;
        }
        if ( v24 == 1 )
        {
          if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(v23, 0x70646B55u) )
            goto LABEL_228;
          v58 = (_QWORD *)ExAllocatePool2(v71 & 0xFFFFFFFFFFFFFFFDuLL, 184LL, v68);
          Pool2 = v58;
          if ( !v58
            || (_InterlockedAdd64((volatile signed __int64 *)v23 + 14, 1uLL),
                *v58 = 1885629269LL,
                Pool2 = v58 + 2,
                v58 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v23 + 1),
              0x70646B55uLL);
          }
          goto LABEL_44;
        }
        if ( v24 != 2 )
          goto LABEL_228;
        DestinationString = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
                v23,
                1885629269,
                (unsigned __int64 *)&DestinationString) )
        {
          *(_QWORD *)&DestinationString_8.Length = &v71;
          DestinationString_8.Buffer = (PWSTR)&v68;
          Pool2 = (void *)NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                            (__int64)v23,
                            (__int64)&DestinationString_8,
                            &v65);
          goto LABEL_44;
        }
        v61 = ExAllocatePool2(v60, 184LL, v59);
        if ( !v61 )
          goto LABEL_228;
        _InterlockedAdd64((volatile signed __int64 *)v23 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(v61 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v23,
                 (const void *)v61,
                 DestinationString,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 = (void *)(v61 + 16);
            goto LABEL_44;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v23,
                    v61,
                    DestinationString,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          gpDispInfo = (PVOID)v61;
LABEL_45:
          Heap = RtlAllocateHeap(gpvSharedAlloc, 0, 0x28uLL);
          v13 = (__int64)gpDispInfo;
          *(_QWORD *)gpDispInfo = Heap;
          if ( *(_QWORD *)gpDispInfo )
          {
            if ( (unsigned int)IsDesktopHeapLoggingOn() )
              _InterlockedOr((volatile signed __int32 *)gpsi, 0x100u);
            else
              _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFEFF);
            if ( (_BYTE)NlsMbCodePageTag )
              _InterlockedOr((volatile signed __int32 *)gpsi, 2u);
            else
              _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFFFD);
            if ( (unsigned int)IsIMMEnabledSystem(v28, v27, v29, v30) )
              _InterlockedOr((volatile signed __int32 *)gpsi, 4u);
            else
              _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFFFB);
            v13 = NlsAnsiCodePage;
            LOWORD(v13) = NlsAnsiCodePage - 1255;
            if ( (unsigned __int16)(NlsAnsiCodePage - 1255) <= 1u )
              _InterlockedOr((volatile signed __int32 *)gpsi, 8u);
            else
              _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFFF7);
            v31 = gdwDesktopSectionSize << 10;
            LODWORD(v69) = 1684763477;
            *((_DWORD *)gpsi + 231) = v31;
            v32 = gpLeakTrackingAllocator;
            v72 = 260LL;
            v73 = 256LL;
            v33 = *(_DWORD *)gpLeakTrackingAllocator;
            if ( !*(_DWORD *)gpLeakTrackingAllocator )
            {
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                                 260LL,
                                                                                                 256LL,
                                                                                                 1684763477LL);
              if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
                _InterlockedAdd64((volatile signed __int64 *)v32 + 14, 1uLL);
              goto LABEL_57;
            }
            if ( v33 == 1 )
            {
              if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
                     gpLeakTrackingAllocator,
                     0x646B7355u) )
              {
                v62 = (_QWORD *)ExAllocatePool2(v72 & 0xFFFFFFFFFFFFFFFDuLL, 272LL, (unsigned int)v69);
                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v62;
                if ( !v62
                  || (_InterlockedAdd64((volatile signed __int64 *)v32 + 14, 1uLL),
                      *v62 = 1684763477LL,
                      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v62 + 2),
                      v62 == (_QWORD *)-16LL) )
                {
                  NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                    *((NSInstrumentation::CPointerHashTable **)v32 + 1),
                    0x646B7355uLL);
                }
LABEL_57:
                gpkdiStatic = (PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
                if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
                {
LABEL_58:
                  *(_QWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = &diStatic;
                  if ( qword_1C0295D88 && (int)qword_1C0295D88() >= 0 && qword_1C0295D90 )
                    qword_1C0295D90();
                  if ( qword_1C0295D98 && (int)qword_1C0295D98() >= 0 && qword_1C0295DA0 )
                    qword_1C0295DA0();
                  if ( qword_1C0295DA8 && (int)qword_1C0295DA8() >= 0 && qword_1C0295DB0 )
                    qword_1C0295DB0();
                  if ( !qword_1C0295DB8
                    || (int)qword_1C0295DB8() < 0
                    || qword_1C0295DC0 && (unsigned int)qword_1C0295DC0() )
                  {
                    GroupedFGBoostProp::s_atom = UserAddAtomToAtomTableEx(
                                                   UserAtomTableHandle,
                                                   (__int64)L"AdditionalFGBoostProp",
                                                   1,
                                                   2LL);
                    if ( GroupedFGBoostProp::s_atom
                      && (!qword_1C0295DC8
                       || (int)qword_1C0295DC8() < 0
                       || qword_1C0295DD0 && (unsigned int)qword_1C0295DD0()) )
                    {
                      if ( (unsigned int)HMInitHandleTable() )
                      {
                        gSharedInfo = (__int64)gpsi;
                        LODWORD(DestinationString) = 0;
                        DestinationString_8 = 0LL;
                        v35 = *(_QWORD *)gpDispInfo;
                        dword_1C0290098 = gCallerKernelAbiVersion;
                        LODWORD(v65) = gdwPolicyFlags;
                        qword_1C028FE78 = v35;
                        while ( 1 )
                        {
                          v36 = OpenCacheKeyEx(0LL, 2LL, 131097LL, (int *)&v65);
                          if ( !v36 )
                            break;
                          RtlInitUnicodeString(&DestinationString_8, L"USERProcessHandleQuota");
                          if ( ZwQueryValueKey(
                                 v36,
                                 &DestinationString_8,
                                 KeyValuePartialInformation,
                                 KeyValueInformation,
                                 0x14u,
                                 (PULONG)&DestinationString) >= 0 )
                          {
                            v3 = v77;
                            LODWORD(v65) = 0;
                          }
                          else if ( !(_DWORD)v65 )
                          {
                            v3 = 10000;
                          }
                          ZwClose(v36);
                          if ( !(_DWORD)v65 )
                            goto LABEL_86;
                        }
                        v3 = 10000;
LABEL_86:
                        DestinationString_8 = 0LL;
                        gUserProcessHandleQuota = v3;
                        LODWORD(DestinationString) = 0;
                        LODWORD(v65) = gdwPolicyFlags;
                        do
                        {
                          v37 = OpenCacheKeyEx(0LL, 2LL, 131097LL, (int *)&v65);
                          if ( !v37 )
                          {
                            v3 = 10000;
                            goto LABEL_93;
                          }
                          RtlInitUnicodeString(&DestinationString_8, L"USERPostMessageLimit");
                          if ( ZwQueryValueKey(
                                 v37,
                                 &DestinationString_8,
                                 KeyValuePartialInformation,
                                 v78,
                                 0x14u,
                                 (PULONG)&DestinationString) >= 0 )
                          {
                            v3 = v79;
                            LODWORD(v65) = 0;
                          }
                          else if ( !(_DWORD)v65 )
                          {
                            v3 = 10000;
                          }
                          ZwClose(v37);
                        }
                        while ( (_DWORD)v65 );
                        if ( v3 )
                        {
LABEL_93:
                          v38 = v3;
                          goto LABEL_94;
                        }
                        v38 = -1;
LABEL_94:
                        v39 = gNestedWindowLimit;
                        gUserPostMessageLimit = v38;
                        DestinationString_8 = 0LL;
                        LODWORD(v65) = gdwPolicyFlags;
                        LODWORD(DestinationString) = 0;
                        while ( 1 )
                        {
                          v40 = OpenCacheKeyEx(0LL, 2LL, 131097LL, (int *)&v65);
                          if ( !v40 )
                            break;
                          RtlInitUnicodeString(&DestinationString_8, L"USERNestedWindowLimit");
                          if ( ZwQueryValueKey(
                                 v40,
                                 &DestinationString_8,
                                 KeyValuePartialInformation,
                                 v80,
                                 0x14u,
                                 (PULONG)&DestinationString) >= 0 )
                          {
                            v3 = v81;
                            LODWORD(v65) = 0;
                          }
                          else if ( !(_DWORD)v65 )
                          {
                            v3 = v39;
                          }
                          ZwClose(v40);
                          if ( !(_DWORD)v65 )
                            goto LABEL_100;
                        }
                        v3 = v39;
LABEL_100:
                        if ( (unsigned int)(v3 - 35) <= 0x41 )
                          gNestedWindowLimit = v3;
                        v41 = gpsi;
                        DestinationString_8 = 0LL;
                        LODWORD(DestinationString) = 0;
                        LODWORD(v65) = gdwPolicyFlags;
                        while ( 1 )
                        {
                          v42 = OpenCacheKeyEx(0LL, 40LL, 131097LL, (int *)&v65);
                          if ( !v42 )
                            break;
                          RtlInitUnicodeString(&DestinationString_8, L"Installed");
                          if ( ZwQueryValueKey(
                                 v42,
                                 &DestinationString_8,
                                 KeyValuePartialInformation,
                                 v82,
                                 0x14u,
                                 (PULONG)&DestinationString) >= 0 )
                          {
                            v41[560] = v83;
                            LODWORD(v65) = 0;
                          }
                          else if ( !(_DWORD)v65 )
                          {
                            v41[560] = 0;
                          }
                          ZwClose(v42);
                          if ( !(_DWORD)v65 )
                            goto LABEL_108;
                        }
                        v41[560] = 0;
LABEL_108:
                        v43 = gpsi;
                        DestinationString_8 = 0LL;
                        LODWORD(DestinationString) = 0;
                        LODWORD(v65) = gdwPolicyFlags;
                        while ( 1 )
                        {
                          v44 = OpenCacheKeyEx(0LL, 41LL, 131097LL, (int *)&v65);
                          if ( !v44 )
                            break;
                          RtlInitUnicodeString(&DestinationString_8, L"Installed");
                          if ( ZwQueryValueKey(
                                 v44,
                                 &DestinationString_8,
                                 KeyValuePartialInformation,
                                 v84,
                                 0x14u,
                                 (PULONG)&DestinationString) >= 0 )
                          {
                            v43[561] = v85;
                            LODWORD(v65) = 0;
                          }
                          else if ( !(_DWORD)v65 )
                          {
                            v43[561] = 0;
                          }
                          ZwClose(v44);
                          if ( !(_DWORD)v65 )
                            goto LABEL_114;
                        }
                        v43[561] = 0;
LABEL_114:
                        v45 = gpsi;
                        DestinationString_8 = 0LL;
                        LODWORD(DestinationString) = 0;
                        LODWORD(v65) = gdwPolicyFlags;
                        while ( 1 )
                        {
                          v46 = OpenCacheKeyEx(0LL, 45LL, 131097LL, (int *)&v65);
                          if ( !v46 )
                            break;
                          RtlInitUnicodeString(&DestinationString_8, L"R2BuildNumber");
                          if ( ZwQueryValueKey(
                                 v46,
                                 &DestinationString_8,
                                 KeyValuePartialInformation,
                                 v86,
                                 0x14u,
                                 (PULONG)&DestinationString) >= 0 )
                          {
                            v45[563] = v87;
                            LODWORD(v65) = 0;
                          }
                          else if ( !(_DWORD)v65 )
                          {
                            v45[563] = 0;
                          }
                          ZwClose(v46);
                          if ( !(_DWORD)v65 )
                            goto LABEL_120;
                        }
                        v45[563] = 0;
LABEL_120:
                        v47 = gpsi;
                        DestinationString_8 = 0LL;
                        LODWORD(DestinationString) = 0;
                        LODWORD(v65) = gdwPolicyFlags;
                        while ( 1 )
                        {
                          v48 = OpenCacheKeyEx(0LL, 46LL, 131097LL, (int *)&v65);
                          if ( !v48 )
                            break;
                          RtlInitUnicodeString(&DestinationString_8, L"StarterBuildNumber");
                          if ( ZwQueryValueKey(
                                 v48,
                                 &DestinationString_8,
                                 KeyValuePartialInformation,
                                 v88,
                                 0x14u,
                                 (PULONG)&DestinationString) >= 0 )
                          {
                            v47[562] = v89;
                            LODWORD(v65) = 0;
                          }
                          else if ( !(_DWORD)v65 )
                          {
                            v47[562] = 0;
                          }
                          ZwClose(v48);
                          if ( !(_DWORD)v65 )
                            goto LABEL_126;
                        }
                        v47[562] = 0;
LABEL_126:
                        Initialize();
                        if ( UIPrivelegeIsolation::fEnforce )
                        {
                          if ( qword_1C0295DD8 && (int)qword_1C0295DD8() >= 0 && qword_1C0295DE0 )
                            qword_1C0295DE0();
                          if ( *(_DWORD *)SGDGetUserSessionState(v50, v49, v51, v52) == gServiceSessionId
                            && !gServiceSessionId
                            && qword_1C0295DE8
                            && (int)qword_1C0295DE8() >= 0
                            && qword_1C0295DF0 )
                          {
                            qword_1C0295DF0();
                          }
                        }
                        gdwMDAQThreshold = 5000;
                        gdwMDAQTimeoutDefenseInDepth = 30000;
                        *((_DWORD *)gpsi + 559) &= ~0x20u;
                        if ( qword_1C0295DF8 && (int)qword_1C0295DF8() >= 0 && qword_1C0295E00 )
                          qword_1C0295E00();
                        if ( qword_1C0295E08 && (int)qword_1C0295E08() >= 0 && qword_1C0295E10 )
                          qword_1C0295E10();
                        v53 = ExAllocatePool2(256LL, 24LL, 1146310722LL);
                        v54 = (void *)v53;
                        if ( v53 )
                        {
                          *(_QWORD *)v53 = 0LL;
                          *(_WORD *)(v53 + 8) = 0;
                          *(_QWORD *)(v53 + 16) = -50000000LL;
                          DispBroker::DispBrokerClient::LoadRegistrySettings((DispBroker::DispBrokerClient *)v53);
                          v10 = 0;
                          DispBroker::DispBrokerClient::s_pSessionBroker = v54;
                          if ( !qword_1C02951C8 || (int)qword_1C02951C8() < 0 )
                          {
LABEL_145:
                            if ( !qword_1C0295E38
                              || (int)qword_1C0295E38() < 0
                              || qword_1C0295E40 && (unsigned int)qword_1C0295E40(&gSMWP, 4LL) )
                            {
                              goto LABEL_149;
                            }
                            goto LABEL_229;
                          }
                          if ( qword_1C02951D0 )
                          {
                            v10 = qword_1C02951D0();
                            if ( v10 >= 0 )
                              goto LABEL_145;
                          }
                          else
                          {
                            v10 = -1073741637;
                          }
                        }
                        else
                        {
                          DispBroker::DispBrokerClient::s_pSessionBroker = 0LL;
                          v10 = -1073741801;
                        }
                      }
                    }
                  }
LABEL_229:
                  v31 = (__int64)gpkdiStatic;
                  if ( gpkdiStatic )
                  {
                    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)gpkdiStatic);
                    gpkdiStatic = 0LL;
                  }
                  if ( v10 < 0 )
                    goto LABEL_149;
                }
LABEL_232:
                v10 = -1073741801;
LABEL_149:
                UserSessionSwitchLeaveCrit(v13, v31, v14, v15);
                return (unsigned int)v10;
              }
            }
            else if ( v33 == 2 )
            {
              v70 = 0LL;
              if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1684763477, &v70) )
              {
                *(_QWORD *)&DestinationString_8.Length = &v72;
                DestinationString_8.Buffer = (PWSTR)&v69;
                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                                   (__int64)v32,
                                                                                                   (__int64)&DestinationString_8,
                                                                                                   &v73);
                goto LABEL_57;
              }
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                                 v64,
                                                                                                 272LL,
                                                                                                 v63);
              if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
              {
                _InterlockedAdd64((volatile signed __int64 *)v32 + 16, 1uLL);
                NSInstrumentation::CBackTrace::CBackTrace(v75);
                if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
                   + 16 < 0x1000 )
                {
                  if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                         (__int64)v32,
                         (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                         v70,
                         (struct NSInstrumentation::CBackTrace *)v75) )
                  {
                    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
                    goto LABEL_57;
                  }
                }
                else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                            (__int64)v32,
                            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                            v70,
                            (struct NSInstrumentation::CBackTrace *)v75) )
                {
                  gpkdiStatic = (PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
                  goto LABEL_58;
                }
                _InterlockedAdd64((volatile signed __int64 *)v32 + 17, 1uLL);
                _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
              }
            }
            gpkdiStatic = 0LL;
            goto LABEL_232;
          }
          if ( gpDispInfo )
            NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)gpDispInfo);
LABEL_228:
          gpDispInfo = 0LL;
          goto LABEL_229;
        }
        _InterlockedAdd64((volatile signed __int64 *)v23 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v61);
        goto LABEL_228;
      }
    }
  }
  return result;
}
