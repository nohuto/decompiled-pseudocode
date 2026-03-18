/*
 * XREFs of RIMIDECreatePointerDeviceInfo @ 0x1401E4F04
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1400C8E60 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     HMValidateSharedHandleNoRip @ 0x140046F28 (HMValidateSharedHandleNoRip.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140053560 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x140053BB0 (RIMGetVirtualDesktopPhysicalSize.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     RIMGetDeviceLocationInfo @ 0x1400A5D6C (RIMGetDeviceLocationInfo.c)
 *     RIMIsRunningOnDesktop @ 0x1400A8A78 (RIMIsRunningOnDesktop.c)
 *     RIMGetDeviceObjectPointer @ 0x1400B1270 (RIMGetDeviceObjectPointer.c)
 *     RIMSetDeviceOutputConfig @ 0x1400C7244 (RIMSetDeviceOutputConfig.c)
 *     RIMGetQDCActivePathsData @ 0x1400C7BC8 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1400C7E10 (RIMFreeQDCActivePathsData.c)
 *     DrvGetWDDMAdapterInfo @ 0x1401079F0 (DrvGetWDDMAdapterInfo.c)
 *     RIMInitializeDeadzone @ 0x140124D60 (RIMInitializeDeadzone.c)
 *     RIMRetrieveLinkCollection @ 0x140129E5C (RIMRetrieveLinkCollection.c)
 *     RIMGetPropertyCount @ 0x14012A434 (RIMGetPropertyCount.c)
 *     RIMIsParallelDevice @ 0x14013B224 (RIMIsParallelDevice.c)
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140152D6C (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     RIMCmFreePointerDeviceContacts @ 0x14019AA40 (RIMCmFreePointerDeviceContacts.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMGetButtonsSupported @ 0x1401DD200 (RIMGetButtonsSupported.c)
 *     RIMPopulatePointerDevice @ 0x1401DDEA4 (RIMPopulatePointerDevice.c)
 *     RIMGetMonitorPhysicalSize @ 0x1401E1980 (RIMGetMonitorPhysicalSize.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1401E1B1C (RIMReadDigitizerToMonitorMappings.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1401E23E4 (rimFindMonitorForDigitizerWithQDCData.c)
 *     ?RIMIDESetPointerDeviceType@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z @ 0x1401E4C6C (-RIMIDESetPointerDeviceType@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z.c)
 *     rimIDECheckConfidenceSupport @ 0x1401E4D24 (rimIDECheckConfidenceSupport.c)
 *     RIMIDECheckScanTimeSupport @ 0x1401E4E40 (RIMIDECheckScanTimeSupport.c)
 *     RIMIDEPopulateExtendedPointerDeviceProperties @ 0x1401E89F8 (RIMIDEPopulateExtendedPointerDeviceProperties.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1401F19DC (RIMCmAllocPointerDeviceContacts.c)
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x14020E1C0 (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall RIMIDECreatePointerDeviceInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int128 v5; // xmm0
  unsigned int v6; // edi
  __int128 v7; // xmm1
  __m128i v9; // xmm6
  PDEVICE_OBJECT v10; // rbx
  __int128 v11; // xmm0
  __int64 v12; // r12
  char *v13; // r13
  __int64 v14; // rcx
  __int64 v15; // rsi
  BOOL v16; // r14d
  char *v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rax
  int v26; // edx
  __int64 v27; // rax
  char v28; // r14
  bool v29; // r12
  __int64 UserSessionState; // rax
  int v31; // r8d
  int v32; // edx
  char v33; // bl
  bool v34; // r14
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  int v38; // r12d
  char v39; // r13
  int v40; // ebx
  __int64 v41; // rax
  unsigned int *v42; // rbx
  __int64 v43; // rcx
  __int64 *v44; // rax
  __int64 v45; // rax
  int v46; // ecx
  __int64 v47; // rax
  __int128 *v48; // rax
  __int64 v49; // rax
  char *v50; // rcx
  char *v51; // rcx
  __int16 v53; // cx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 *v56; // rsi
  __int64 **v57; // rdx
  struct _HIDP_PREPARSED_DATA *v58; // rcx
  ULONG v59; // [rsp+58h] [rbp-B0h] BYREF
  char v60; // [rsp+5Ch] [rbp-ACh]
  __int64 v61; // [rsp+60h] [rbp-A8h] BYREF
  char *v62; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v63; // [rsp+70h] [rbp-98h]
  PDEVICE_OBJECT v64; // [rsp+78h] [rbp-90h] BYREF
  __int64 v65; // [rsp+80h] [rbp-88h] BYREF
  __int64 v66; // [rsp+90h] [rbp-78h]
  PVOID Object; // [rsp+98h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v69; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v70[3]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v71; // [rsp+E8h] [rbp-20h]
  __int128 v72; // [rsp+F8h] [rbp-10h] BYREF

  v5 = *(_OWORD *)(a4 + 56);
  v6 = 0;
  v7 = *(_OWORD *)(a4 + 72);
  v65 = a3;
  v9 = *(__m128i *)(a4 + 40);
  v10 = 0LL;
  v66 = a1;
  v70[1] = v5;
  v11 = *(_OWORD *)(a4 + 88);
  v70[2] = v7;
  v12 = a4;
  v71 = v11;
  v63 = a4;
  v13 = 0LL;
  *(_QWORD *)&v72 = a5;
  v62 = 0LL;
  Object = 0LL;
  v64 = 0LL;
  Handle = 0LL;
  v70[0] = v9;
  v69 = 0LL;
  v15 = Win32AllocPoolZInitImpl(256LL, 0x510uLL, 0x63707352u);
  LODWORD(v61) = _mm_cvtsi128_si32(v9);
  v16 = v15 == 0;
  if ( *(_WORD *)(v12 + 42) == 13 && *(_WORD *)(v12 + 40) == 1 && !RIMIsRunningOnDesktop(v14) )
    goto LABEL_8;
  if ( !v15 )
    goto LABEL_71;
  v17 = *(char **)(a2 + 1328);
  if ( v17 )
  {
    v18 = RawInputManagerDeviceObjectResolveHandle(v17, 3u, 1, (PVOID *)&v62);
    v13 = v62;
    if ( v18 < 0 )
    {
      *(_QWORD *)(a2 + 1328) = 0LL;
LABEL_8:
      v16 = 1;
      goto LABEL_71;
    }
    if ( (int)RIMGetDeviceObjectPointer((struct _UNICODE_STRING *)(v62 + 264), v19, v20, &Handle, &Object, &v64) < 0 )
      goto LABEL_8;
    v10 = v64;
  }
  *(_DWORD *)(v15 + 368) |= 8u;
  *(_QWORD *)(v15 + 928) = v15 + 920;
  *(_QWORD *)(v15 + 920) = v15 + 920;
  RIMIDESetPointerDeviceType((struct tagHID_POINTER_DEVICE_INFO *)v15, (struct tagHIDDESC *)v12);
  rimIDECheckConfidenceSupport(v15, *(struct _HIDP_PREPARSED_DATA **)(v12 + 16));
  v21 = v65;
  if ( !*(_DWORD *)(v65 + 12) )
  {
    v59 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 208);
    v21 = v65;
  }
  v22 = *(_DWORD *)(v21 + 12);
  *(_DWORD *)(v15 + 364) = v22;
  if ( v22 == 3 )
  {
    RIMIDECheckScanTimeSupport(v15, *(struct _HIDP_PREPARSED_DATA **)(v12 + 16));
  }
  else
  {
    *(_DWORD *)(v15 + 368) |= 0x80u;
    *(_DWORD *)(v15 + 896) = -1;
  }
  *(_DWORD *)(v15 + 800) = 500;
  *(_QWORD *)(v15 + 808) = 500 * gliQpcFreq.QuadPart / 0x3E8uLL;
  if ( v13 )
  {
    v23 = *((_QWORD *)v13 + 64);
    if ( v23 )
    {
      *(_WORD *)(v12 + 110) = *(_WORD *)(v23 + 110);
      *(_WORD *)(v12 + 112) = *(_WORD *)(*((_QWORD *)v13 + 64) + 112LL);
      *(_WORD *)(v12 + 114) = *(_WORD *)(*((_QWORD *)v13 + 64) + 114LL);
    }
    if ( v10 )
      RIMGetDeviceLocationInfo((__int64)v10, a2 + 2120);
  }
  v24 = v65;
  *(_DWORD *)(v15 + 776) = *(_DWORD *)(v65 + 96);
  *(_DWORD *)(v15 + 368) = (16 * *(_DWORD *)(a2 + 388)) ^ (*(_DWORD *)(v15 + 368) ^ (16 * *(_DWORD *)(a2 + 388))) & 0xFFFFFFEF;
  *(_QWORD *)(v15 + 952) = *(_QWORD *)(a2 + 376);
  *(_DWORD *)(v15 + 960) = *(_DWORD *)(a2 + 384);
  if ( *(_QWORD *)(a2 + 200) )
  {
    v25 = Win32AllocPoolZInitImpl(256LL, *(unsigned __int16 *)(a2 + 192), 0x6A6E6952u);
    *(_QWORD *)(v15 + 384) = v25;
    if ( v25 )
    {
      *(_WORD *)(v15 + 378) = *(_WORD *)(a2 + 192);
      RtlCopyUnicodeString((PUNICODE_STRING)(v15 + 376), (PCUNICODE_STRING)(a2 + 192));
    }
    else
    {
      v16 = 1;
    }
    v24 = v65;
  }
  v26 = *(_DWORD *)(v15 + 24);
  if ( ((v26 - 3) & 0xFFFFFFFA) == 0 && v26 != 8 )
  {
    *(_DWORD *)(v15 + 816) = *(_DWORD *)(v24 + 116);
    v27 = Win32AllocPoolZInitImpl(256LL, 0x28uLL, 0x6A6E6952u);
    *(_QWORD *)(v15 + 768) = v27;
    if ( !v27 )
    {
LABEL_29:
      v16 = 1;
LABEL_69:
      v12 = v63;
      goto LABEL_70;
    }
    if ( v16 )
      goto LABEL_69;
    v59 = 0;
    if ( (unsigned int)RIMIsParallelDevice(v15, *(struct _HIDP_PREPARSED_DATA **)(v63 + 16), &v59) )
    {
      v12 = v63;
      if ( !(unsigned int)RIMRetrieveLinkCollection(v15, *(struct _HIDP_PREPARSED_DATA **)(v63 + 16), v59) )
      {
        v16 = 1;
        goto LABEL_70;
      }
      if ( (_WORD)v61 == 5 )
      {
        if ( WORD1(v70[0]) != 13 )
        {
          v59 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 306);
        }
        *(_DWORD *)(v15 + 24) = 7;
        ++*(_DWORD *)(v15 + 776);
        *(_DWORD *)(v15 + 964) = 3;
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v28 = 0;
      }
      v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v31) = v29;
        LOBYTE(v32) = v28;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v32,
          v31,
          *(_QWORD *)(UserSessionState + 19392),
          3,
          1,
          10,
          (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids);
      }
      v16 = 0;
      if ( *(_DWORD *)(v15 + 364) == 3 )
        goto LABEL_29;
    }
LABEL_57:
    v38 = *(_DWORD *)(v15 + 368);
    if ( (v38 & 2) == 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v39 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v39 = 0;
      }
      v60 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v40 = *(_DWORD *)(v15 + 24);
        v41 = W32GetUserSessionState(WPP_GLOBAL_Control);
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v39,
          v60,
          *(_QWORD *)(v41 + 19392),
          4u,
          1u,
          0xCu,
          (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids,
          v40,
          -__CFSHR__(v38, 8));
      }
    }
    if ( (int)RIMCmAllocPointerDeviceContacts(v15, 1785620818LL) >= 0 )
    {
      if ( !(unsigned int)RIMPopulatePointerDevice(
                            v66,
                            v15,
                            *(struct _HIDP_PREPARSED_DATA **)(v72 + 32),
                            (unsigned __int16 *)v70) )
        v16 = 1;
    }
    else
    {
      v16 = 1;
    }
    goto LABEL_69;
  }
  v12 = v63;
  if ( !RIMGetPropertyCount(v15, 0, v71, *(struct _HIDP_PREPARSED_DATA **)(v63 + 16)) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v33 = 0;
    }
    v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v35 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v36) = v34;
      LOBYTE(v37) = v33;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v37,
        v36,
        *(_QWORD *)(v35 + 19392),
        2,
        1,
        11,
        (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids);
    }
    v16 = 1;
    goto LABEL_70;
  }
  if ( !v16 )
    goto LABEL_57;
LABEL_70:
  v13 = v62;
LABEL_71:
  v42 = RIMGetQDCActivePathsData((unsigned int *)&v69);
  if ( v16 )
    goto LABEL_94;
  v43 = v65;
  if ( (unsigned int)(*(_DWORD *)(v15 + 24) - 6) <= 1 )
    *(_QWORD *)(v65 + 88) = 0LL;
  v44 = *(__int64 **)(v43 + 88);
  if ( v44 )
    v45 = *v44;
  else
    v45 = 0LL;
  *(_QWORD *)(a2 + 1344) = v45;
  if ( *(_QWORD *)(v43 + 88) )
  {
    *(_DWORD *)(a2 + 1336) = 1;
    *(_DWORD *)(a2 + 1352) = 6;
    DrvGetWDDMAdapterInfo(*(_QWORD *)(*(_QWORD *)(v43 + 88) + 88LL), 1, a2 + 1868, a2 + 1876);
  }
  else
  {
    if ( !v13 )
      goto LABEL_82;
    *(_DWORD *)(a2 + 1336) = 1;
    RIMReadDigitizerToMonitorMappings((const UNICODE_STRING *)(v13 + 72), a2 + 1336);
  }
  rimFindMonitorForDigitizerWithQDCData(a2, (__int64)v42, 0LL);
LABEL_82:
  v46 = *(_DWORD *)(v15 + 364);
  if ( v46 != 3 && ((*(_DWORD *)(v15 + 368) & 8) == 0 || v46 != 2)
    || *(_DWORD *)(v15 + 148) - *(_DWORD *)(v15 + 140) <= 1
    || *(_DWORD *)(v15 + 152) - *(_DWORD *)(v15 + 144) <= 1 )
  {
    if ( *(_DWORD *)(a2 + 1336) )
    {
      v47 = HMValidateSharedHandleNoRip(*(_QWORD *)(a2 + 1344));
      v48 = (__int128 *)RIMGetMonitorPhysicalSize((__int64)&v72, v47);
    }
    else
    {
      v48 = (__int128 *)RIMGetVirtualDesktopPhysicalSize((__int64)&v65);
    }
    v72 = *v48;
    *(_OWORD *)(v15 + 140) = v72;
  }
  RIMSetDeviceOutputConfig((struct RIMDEV *)a2, (struct tagHID_POINTER_DEVICE_INFO *)v15, 0, (__int64)v42);
  RIMIDEPopulateExtendedPointerDeviceProperties(a2, v15);
  if ( (unsigned int)(*(_DWORD *)(v15 + 24) - 5) <= 1 && (unsigned int)RIMInitializeDeadzone(1LL) )
    goto LABEL_93;
  v53 = v61;
  if ( (_WORD)v61 == 5 )
  {
    if ( (int)CPTPProcessorFactory::AddProcessor((struct tagHID_POINTER_DEVICE_INFO *)v15) < 0 )
    {
LABEL_93:
      v16 = 1;
LABEL_94:
      if ( v15 )
      {
        v49 = *(_QWORD *)(v15 + 768);
        if ( v49 )
        {
          v50 = *(char **)(v49 + 24);
          if ( v50 )
            GreDeleteFastMutex(v50);
        }
        RIMCmFreePointerDeviceContacts(v15);
        v51 = *(char **)(v15 + 384);
        if ( v51 )
          GreDeleteFastMutex(v51);
        if ( *(_QWORD *)(v15 + 1064) )
          CPTPProcessorFactory::RemoveProcessor((struct tagHID_POINTER_DEVICE_INFO *)v15);
        GreDeleteFastMutex((char *)v15);
      }
      goto LABEL_103;
    }
    v53 = v61;
  }
  *(_DWORD *)(a2 + 184) |= 0x80u;
  *(_QWORD *)(v15 + 792) = -1LL;
  v54 = v66;
  *(_QWORD *)(v15 + 16) = a2;
  v55 = v54 + 432;
  *(_QWORD *)(a2 + 456) = v15;
  v56 = (__int64 *)(v15 + 920);
  v57 = *(__int64 ***)(v55 + 8);
  if ( *v57 != (__int64 *)v55 )
    __fastfail(3u);
  *v56 = v55;
  v56[1] = (__int64)v57;
  *v57 = v56;
  *(_QWORD *)(v55 + 8) = v56;
  if ( v53 == 5 )
  {
    v58 = *(struct _HIDP_PREPARSED_DATA **)(v12 + 16);
    LODWORD(v64) = 0;
    LODWORD(v61) = 0;
    v59 = 0;
    RIMGetButtonsSupported(v58, &v64, &v61, &v59);
    *(_DWORD *)(a2 + 184) = *(_DWORD *)(a2 + 184) & 0xFFFF8FFF | (((unsigned __int8)v64 & 1 | (2
                                                                                             * (v61 & 1 | (2 * (v59 & 1))))) << 12);
  }
LABEL_103:
  if ( v13 )
    ObfDereferenceObject(v13);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Handle )
    ZwClose(Handle);
  RIMFreeQDCActivePathsData((__int64)v42);
  LOBYTE(v6) = !v16;
  return v6;
}
