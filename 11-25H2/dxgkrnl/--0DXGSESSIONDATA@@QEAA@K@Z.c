/*
 * XREFs of ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1403E21A8
 * Callers:
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1403E1E58 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1400530AC (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     CreateTokenManagerSessionGlobal @ 0x140053D80 (CreateTokenManagerSessionGlobal.c)
 *     Feature_SavePairedAdapterInRemoteSession__private_IsEnabledDeviceUsageNoInline @ 0x140067DCC (Feature_SavePairedAdapterInRemoteSession__private_IsEnabledDeviceUsageNoInline.c)
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x140078D00 (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ @ 0x1401E00D0 (-Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0OUTPUTDUPL_SESSION_MGR@@QEAA@XZ @ 0x1403F3F40 (--0OUTPUTDUPL_SESSION_MGR@@QEAA@XZ.c)
 */

DXGSESSIONDATA *__fastcall DXGSESSIONDATA::DXGSESSIONDATA(DXGSESSIONDATA *this, unsigned int a2)
{
  CTokenManager **v2; // r12
  char *v3; // r13
  __int64 v5; // r15
  DispBrokerClientHandle **v6; // rcx
  __int64 v7; // r9
  OUTPUTDUPL_SESSION_MGR *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  OUTPUTDUPL_SESSION_MGR *v12; // rax
  OUTPUTDUPL_SESSION_MGR *v13; // rcx
  __int64 v14; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(_DWORD *); // rax
  int v20; // eax
  __int64 v21; // rbx
  __int64 (*v22)(void); // rax
  __int64 (*v23)(void); // rax
  struct DXGPROCESS *v24; // rax
  __int64 v25; // rcx
  void *CurrentProcess; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 ProcessServerSilo; // rax
  char IsHostSilo; // al
  __int64 HostSilo; // rax
  __int64 v33; // rdi
  int v34; // ebx
  struct _KEVENT *v35; // rax
  int v37; // [rsp+50h] [rbp-B0h] BYREF
  int v38; // [rsp+54h] [rbp-ACh] BYREF
  int v39; // [rsp+58h] [rbp-A8h] BYREF
  void *EventHandle; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v41[2]; // [rsp+68h] [rbp-98h] BYREF
  char *v42; // [rsp+70h] [rbp-90h]
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  __int64 v44; // [rsp+90h] [rbp-70h] BYREF
  int v45; // [rsp+98h] [rbp-68h]
  const wchar_t *v46; // [rsp+A0h] [rbp-60h]
  int *v47; // [rsp+A8h] [rbp-58h]
  int v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  int v50; // [rsp+C0h] [rbp-40h]
  __int64 v51; // [rsp+C8h] [rbp-38h]
  int v52; // [rsp+D0h] [rbp-30h]
  __int64 v53; // [rsp+D8h] [rbp-28h]
  __int128 v54; // [rsp+E0h] [rbp-20h]
  __int128 v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+100h] [rbp+0h] BYREF
  int v57; // [rsp+108h] [rbp+8h]
  const wchar_t *v58; // [rsp+110h] [rbp+10h]
  int *v59; // [rsp+118h] [rbp+18h]
  int v60; // [rsp+120h] [rbp+20h]
  __int64 v61; // [rsp+128h] [rbp+28h]
  int v62; // [rsp+130h] [rbp+30h]
  __int64 v63; // [rsp+138h] [rbp+38h]
  int v64; // [rsp+140h] [rbp+40h]
  __int64 v65; // [rsp+148h] [rbp+48h]
  __int128 v66; // [rsp+150h] [rbp+50h]
  __int128 v67; // [rsp+160h] [rbp+60h]
  __int64 v68; // [rsp+170h] [rbp+70h] BYREF
  int v69; // [rsp+178h] [rbp+78h]
  const wchar_t *v70; // [rsp+180h] [rbp+80h]
  int *v71; // [rsp+188h] [rbp+88h]
  int v72; // [rsp+190h] [rbp+90h]
  __int64 v73; // [rsp+198h] [rbp+98h]
  int v74; // [rsp+1A0h] [rbp+A0h]
  __int64 v75; // [rsp+1A8h] [rbp+A8h]
  int v76; // [rsp+1B0h] [rbp+B0h]
  __int64 v77; // [rsp+1B8h] [rbp+B8h]
  __int128 v78; // [rsp+1C0h] [rbp+C0h]
  __int128 v79; // [rsp+1D0h] [rbp+D0h]
  int v80; // [rsp+230h] [rbp+130h] BYREF
  char v81; // [rsp+238h] [rbp+138h] BYREF
  enum _NT_PRODUCT_TYPE ProductType; // [rsp+240h] [rbp+140h] BYREF
  int v83; // [rsp+248h] [rbp+148h] BYREF

  *((_DWORD *)this + 14) = 75;
  *((_QWORD *)this + 3) = 0LL;
  v2 = (CTokenManager **)((char *)this + 18752);
  *((_QWORD *)this + 4) = 0LL;
  v3 = (char *)this + 18792;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = -1;
  *((_DWORD *)this + 4624) = 0;
  *((_WORD *)this + 9250) = 0;
  *((_DWORD *)this + 4660) = 0;
  *((_QWORD *)this + 2331) = 0LL;
  *((_QWORD *)this + 2340) = 0LL;
  *((_QWORD *)this + 2341) = 0LL;
  *((_QWORD *)this + 2345) = 0LL;
  *((_DWORD *)this + 4694) = 4;
  *((_QWORD *)this + 2348) = (char *)this + 18792;
  v5 = a2;
  *(_DWORD *)this = a2;
  *((_QWORD *)this + 5) = 0LL;
  *((_BYTE *)this + 18503) = 0;
  *((_QWORD *)this + 2317) = 0LL;
  *((_QWORD *)this + 2318) = 0LL;
  *((_QWORD *)this + 2319) = 0LL;
  *((_QWORD *)this + 2320) = 0LL;
  *((_DWORD *)this + 4632) = 0;
  *((_DWORD *)this + 4644) = 61;
  *((_DWORD *)this + 4642) = 0;
  *((_DWORD *)this + 4643) = 58;
  *((_QWORD *)this + 2335) = 0LL;
  *((_QWORD *)this + 2336) = 0LL;
  *((_QWORD *)this + 2337) = 0LL;
  *((_DWORD *)this + 4676) = 0;
  *((_DWORD *)this + 4677) = 81;
  *((_DWORD *)this + 4678) = 1;
  *((_QWORD *)this + 2346) = 0LL;
  *((_QWORD *)this + 2366) = 0LL;
  *((_QWORD *)this + 2367) = 0LL;
  *((_QWORD *)this + 2344) = 0LL;
  *((_QWORD *)this + 2368) = 0LL;
  *((_DWORD *)this + 4738) = 0;
  *((_DWORD *)this + 4739) = -1;
  *((_DWORD *)this + 4740) = 69;
  *((_DWORD *)this + 4742) = 0;
  *((_QWORD *)this + 2372) = 0LL;
  *((_QWORD *)this + 2373) = 0LL;
  *((_WORD *)this + 9496) = 0;
  *((_QWORD *)this + 2375) = 0LL;
  *((_QWORD *)this + 2376) = 0LL;
  *((_DWORD *)this + 4754) = 0;
  *((_DWORD *)this + 4755) = 1;
  *((_DWORD *)this + 4756) = -1;
  v6 = (DispBrokerClientHandle **)((char *)this + 19032);
  *v6 = 0LL;
  DispBrokerClientReference::Assign(v6, 0LL);
  *((_QWORD *)this + 2381) = 0LL;
  *((_QWORD *)this + 2382) = 0LL;
  *((_DWORD *)this + 4770) = 1;
  *((_QWORD *)this + 2383) = 0LL;
  *((_DWORD *)this + 4768) = 0;
  *((_DWORD *)this + 4769) = -1;
  *((_QWORD *)this + 2386) = 0LL;
  *((_QWORD *)this + 2387) = 0LL;
  *((_BYTE *)this + 19104) = 0;
  *((_QWORD *)this + 2391) = 0LL;
  *((_QWORD *)this + 2392) = 0LL;
  *((_QWORD *)this + 2393) = 0LL;
  *((_DWORD *)this + 4788) = 0;
  *((_DWORD *)this + 4789) = -1;
  *((_DWORD *)this + 4790) = 1;
  *((_QWORD *)this + 2396) = 0LL;
  *((_DWORD *)this + 4794) = 0;
  *((_DWORD *)this + 4795) = 1;
  *((_QWORD *)this + 2398) = 0LL;
  *((_QWORD *)this + 2400) = 0LL;
  *((_QWORD *)this + 2401) = 0LL;
  *((_QWORD *)this + 2402) = 0LL;
  *((_DWORD *)this + 4806) = 0;
  *((_DWORD *)this + 4807) = -1;
  *((_DWORD *)this + 4808) = 1;
  *((_QWORD *)this + 2408) = 0LL;
  *((_QWORD *)this + 2409) = 0LL;
  *((_DWORD *)this + 4820) = 0;
  *((_DWORD *)this + 4821) = 61;
  *((_DWORD *)this + 4822) = 67;
  ProductType = 0;
  v8 = (OUTPUTDUPL_SESSION_MGR *)operator new(0x208uLL, 0x674D444Fu, 256LL, v7);
  if ( v8 )
    v12 = OUTPUTDUPL_SESSION_MGR::OUTPUTDUPL_SESSION_MGR(v8);
  else
    v12 = 0LL;
  *((_QWORD *)this + 1) = v12;
  if ( v12 && (int)OUTPUTDUPL_SESSION_MGR::Initialize(v12, v9, v10, v11) < 0 )
  {
    v13 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)this + 1);
    if ( v13 )
      OUTPUTDUPL_SESSION_MGR::`scalar deleting destructor'(v13);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 2324) = (char *)this + 18584;
  *((_QWORD *)this + 2323) = (char *)this + 18584;
  *((_QWORD *)this + 2326) = (char *)this + 18600;
  *((_QWORD *)this + 2325) = (char *)this + 18600;
  *((_QWORD *)this + 2328) = (char *)this + 18616;
  *((_QWORD *)this + 2327) = (char *)this + 18616;
  RtlGetNtProductType(&ProductType);
  RtlGetSuiteMask();
  *((_BYTE *)this + 18505) = ProductType != NtProductServer
                          || !g_bSkuSupportMultipleUsers
                          || (v83 = 0,
                              v37 = 0,
                              v38 = 0,
                              DestinationString = 0LL,
                              RtlInitUnicodeString(
                                &DestinationString,
                                L"TerminalServices-RemoteConnectionManager-WVD-Enabled"),
                              (int)ZwQueryLicenseValue(&DestinationString, &v37, &v38, 4LL, &v83) >= 0)
                          && v83 == 4
                          && v37 == 4
                          && v38;
  v80 = 0;
  v44 = 0LL;
  v46 = L"bEnumerateHWBeforeSW";
  v45 = 292;
  v47 = &v80;
  v48 = 0x4000000;
  v49 = 0LL;
  v50 = 0;
  v51 = 0LL;
  v52 = 0;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows NT\\Terminal Services",
              &v44,
              0LL,
              0LL) >= 0 )
    goto LABEL_19;
  v56 = 0LL;
  v57 = 292;
  v58 = L"fUseHardwareGPU";
  v60 = 0x4000000;
  v59 = &v80;
  v61 = 0LL;
  v62 = 0;
  v63 = 0LL;
  v64 = 0;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\\WinStations",
              &v56,
              0LL,
              0LL) >= 0 )
LABEL_19:
    *((_BYTE *)this + 18505) = v80 != 0;
  *(_QWORD *)((char *)this + 18508) = 0LL;
  *((_DWORD *)this + 4629) = 0;
  if ( (unsigned int)Feature_SavePairedAdapterInRemoteSession__private_IsEnabledDeviceUsageNoInline() )
    *((_QWORD *)this + 2315) = 0LL;
  v81 = 0;
  v42 = &v81;
  v41[0] = 3;
  v41[1] = 1;
  Current = DXGPROCESS::GetCurrent(v14);
  if ( Current )
  {
    v17 = *((_QWORD *)Current + 11);
    v18 = v17;
    if ( v17 && (v19 = *(__int64 (__fastcall **)(_DWORD *))(v17 + 368)) != 0LL && (v20 = v19(v41), v20 < 0) )
    {
      v21 = v20;
      WdLogSingleEntry2(2LL, v5, v20);
      WdLogGlobalForLineNumber = 3441;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to get session TTM support in session 0x%I64x (Status = 0x%I64x).",
        v5,
        v21,
        0LL,
        0LL,
        0LL);
      v18 = v17;
      v81 = 0;
      *((_BYTE *)this + 18497) = 0;
    }
    else
    {
      *((_BYTE *)this + 18497) = v81;
      if ( !v17 )
        goto LABEL_33;
    }
    v22 = *(__int64 (**)(void))(v18 + 352);
    if ( v22 )
      *((_QWORD *)this + 2317) = v22();
    v23 = *(__int64 (**)(void))(v18 + 400);
    if ( v23 )
      *((_QWORD *)this + 2318) = v23();
  }
  else
  {
    *((_BYTE *)this + 18497) = v81;
  }
LABEL_33:
  v24 = DXGPROCESS::GetCurrent(v16);
  *((_QWORD *)this + 2333) = v24;
  *((_DWORD *)v24 + 102) |= 1u;
  CurrentProcess = (void *)PsGetCurrentProcess(v25);
  *((_QWORD *)this + 2332) = CurrentProcess;
  ObfReferenceObject(CurrentProcess);
  if ( *((_QWORD *)DXGGLOBAL::GetGlobal() + 38109) )
    CreateTokenManagerSessionGlobal(v2, v27, v28, v29);
  ProcessServerSilo = PsGetProcessServerSilo(*((_QWORD *)this + 2332));
  IsHostSilo = PsIsHostSilo(ProcessServerSilo);
  *((_BYTE *)this + 18502) = IsHostSilo == 0;
  if ( !IsHostSilo )
  {
    v39 = 0;
    v68 = 0LL;
    v70 = L"DisableContainerSessionVersionCheck";
    v71 = &v39;
    v69 = 292;
    v72 = 67108868;
    v73 = 0LL;
    v74 = 0;
    v75 = 0LL;
    v76 = 0;
    v77 = 0LL;
    v78 = 0LL;
    v79 = 0LL;
    HostSilo = PsGetHostSilo();
    v33 = PsAttachSiloToCurrentThread(HostSilo);
    v34 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v68, 0LL, 0LL);
    PsAttachSiloToCurrentThread(v33);
    if ( v34 < 0 || !v39 )
      *((_BYTE *)this + 18503) = 1;
  }
  *((_DWORD *)this + 4684) = 0;
  *((_QWORD *)this + 2343) = 0LL;
  *((_BYTE *)this + 18504) = 1;
  *((_QWORD *)this + 2373) = this;
  EventHandle = 0LL;
  v35 = IoCreateNotificationEvent(0LL, &EventHandle);
  *((_QWORD *)this + 2346) = v35;
  if ( v35 )
  {
    KeSetEvent(v35, 0, 0);
    ObfReferenceObject(*((PVOID *)this + 2346));
    ZwClose(EventHandle);
  }
  else
  {
    WdLogSingleEntry1(6LL, v5);
    WdLogGlobalForLineNumber = 3536;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to create PnP event object for session 0x%I64x.",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  memset(v3, 0, 0x80uLL);
  *((_DWORD *)this + 4814) = 0;
  RtlInitializeBitMap((PRTL_BITMAP)((char *)this + 19240), (PULONG)this + 4814, 2u);
  return this;
}
