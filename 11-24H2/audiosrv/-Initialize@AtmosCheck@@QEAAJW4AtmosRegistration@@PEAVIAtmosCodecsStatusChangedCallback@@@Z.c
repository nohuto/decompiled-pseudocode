/*
 * XREFs of ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x180150BEC
 * Callers:
 *     ?GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ @ 0x180071164 (-GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ.c)
 * Callees:
 *     ?InitializeCommonSpatialTechInfo@AtmosCheck@@AEAAJXZ @ 0x1800497A0 (-InitializeCommonSpatialTechInfo@AtmosCheck@@AEAAJXZ.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180055024 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180055594 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ?IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x1800556BC (-IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180055788 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ @ 0x180150EE0 (-InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ.c)
 *     ?QueueCompleteInitialization@AtmosCheck@@AEAAJW4AtmosRegistration@@@Z @ 0x180151AD0 (-QueueCompleteInitialization@AtmosCheck@@AEAAJW4AtmosRegistration@@@Z.c)
 *     ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x18015F104 (-UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ.c)
 */

__int64 __fastcall AtmosCheck::Initialize(__int64 a1)
{
  int Instance; // edi
  __int64 v3; // r9
  int UniqueContext; // eax
  HANDLE v6; // rax
  signed int LastError; // eax
  AtmosCheck *v8; // rcx
  __int64 v9; // r9
  const char *v10; // rdx
  void *v11; // rcx
  void *v12; // rcx
  AtmosCheck *v13; // rcx
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+30h] [rbp-28h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+70h] [rbp+18h] BYREF

  *(_QWORD *)(a1 + 184) = 1LL;
  SecurityDescriptor = 0LL;
  Instance = 0;
  *(_BYTE *)(a1 + 864) = 0;
  if ( !*(_BYTE *)(a1 + 96) )
    AtmosCheck::InitializeLicenseMapLegacy((AtmosCheck *)a1);
  if ( AtmosCheck::IsDolbyLicenseCheckEnabledOnCurrentPlatform((AtmosCheck *)a1) && !*(_BYTE *)(a1 + 96) )
  {
    Instance = CoCreateInstance(
                 &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                 0LL,
                 0x17u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 (LPVOID *)(a1 + 224));
    if ( Instance < 0 )
      goto LABEL_24;
    Instance = AtmosCheck::InitializeCommonSpatialTechInfo((AtmosCheck *)a1);
    if ( Instance < 0 )
      goto LABEL_24;
  }
  if ( !AtmosCheck::IsLicenseEvaluationRequired((AtmosCheck *)a1) )
  {
    *(_BYTE *)(a1 + 96) = 1;
    return 0LL;
  }
  if ( *(_BYTE *)(a1 + 96) )
    goto LABEL_23;
  UniqueContext = SHTaskPoolGetUniqueContext();
  *(_BYTE *)(a1 + 100) = 1;
  *(_DWORD *)(a1 + 220) = UniqueContext;
  *(_QWORD *)(a1 + 40) = g_AtmosCheckCallback;
  if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(L"D:(A;;GA;;;WD)(A;;GA;;;AC)", 1u, &SecurityDescriptor, 0LL) )
  {
    *(_QWORD *)&EventAttributes.nLength = 24LL;
    EventAttributes.lpSecurityDescriptor = SecurityDescriptor;
    *(_QWORD *)&EventAttributes.bInheritHandle = 0LL;
    v6 = CreateEventW(&EventAttributes, 1, 0, L"Global\\Client_Atmos_Check_Event");
    *(_QWORD *)(a1 + 104) = v6;
    if ( v6 )
    {
      *(_BYTE *)(a1 + 99) = 0;
      goto LABEL_20;
    }
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v10 = "Error ConvertStringSecurityDescriptorToSecurityDescriptor";
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v10 = "Error creating Global\\Client_Atmos_Check_Event";
  }
  AtmosCheck::Trace(v8, v10, (unsigned int)LastError, v9);
LABEL_20:
  if ( !*(_BYTE *)(a1 + 100) )
  {
    Instance = AtmosCheck::PerformLicenseCheck((AtmosCheck *)a1, 0);
    if ( Instance < 0 )
      goto LABEL_24;
  }
  Instance = AtmosCheck::QueueCompleteInitialization(a1);
LABEL_23:
  if ( Instance < 0 )
  {
LABEL_24:
    *(_BYTE *)(a1 + 96) = 0;
    AtmosCheck::UninitializeAppServiceMode((PVOID)a1);
    v11 = *(void **)(a1 + 112);
    if ( v11 )
    {
      UnregisterWaitEx(v11, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
      *(_QWORD *)(a1 + 112) = 0LL;
    }
    v12 = *(void **)(a1 + 104);
    if ( v12 )
    {
      CloseHandle(v12);
      *(_QWORD *)(a1 + 104) = 0LL;
    }
  }
  v13 = (AtmosCheck *)SecurityDescriptor;
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  AtmosCheck::Trace(v13, "Init result", (unsigned int)Instance, v3);
  return (unsigned int)Instance;
}
