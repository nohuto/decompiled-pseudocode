/*
 * XREFs of ?RuntimeClassInitialize@CAPOWrapperClient@@QEAAJPEBGW4APO_TYPE@@AEBU_GUID@@@Z @ 0x180056D60
 * Callers:
 *     ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x180056B5C (--$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUI.c)
 * Callees:
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18000C640 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x18000C978 (--1CPerfTracker@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x180063228 (-StringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOWrapperClient::RuntimeClassInitialize(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  struct AudioSrvTelemetryProvider *v8; // rax
  __int64 **v9; // rdi
  HRESULT Instance; // eax
  unsigned int v11; // ebx
  struct AudioSrvTelemetryProvider *v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // ebx
  __int128 v18; // [rsp+70h] [rbp-168h] BYREF
  __int128 v19; // [rsp+80h] [rbp-158h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+90h] [rbp-148h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  v19 = 0LL;
  StringCchPrintfA(
    (char *)(a1 + 132),
    0x27uLL,
    "{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
    *(_DWORD *)a4,
    *(unsigned __int16 *)(a4 + 4),
    *(unsigned __int16 *)(a4 + 6),
    *(unsigned __int8 *)(a4 + 8),
    *(unsigned __int8 *)(a4 + 9),
    *(unsigned __int8 *)(a4 + 10),
    *(unsigned __int8 *)(a4 + 11),
    *(unsigned __int8 *)(a4 + 12),
    *(unsigned __int8 *)(a4 + 13),
    *(unsigned __int8 *)(a4 + 14),
    *(unsigned __int8 *)(a4 + 15));
  EtwEventActivityIdControl(1LL, &v19);
  v8 = AudioSrvTelemetryProvider::Instance();
  CPerfTracker::CPerfTracker(
    &PerformanceCount,
    *((const struct _tlgProvider_t **)v8 + 1),
    "SystemEffect_CoCreate",
    (const char *const)(a1 + 132));
  v9 = (__int64 **)(a1 + 88);
  Instance = CoCreateInstance(
               &GUID_3a8b5a92_80b0_48b3_8197_701ecd3261e4,
               0LL,
               0x17u,
               &GUID_67309ffa_1e7c_48f2_b96f_9b25b183ba25,
               (LPVOID *)(a1 + 88));
  v11 = Instance;
  if ( Instance >= 0 )
  {
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    v13 = AudioSrvTelemetryProvider::Instance();
    CPerfTracker::CPerfTracker(
      &PerformanceCount,
      *((const struct _tlgProvider_t **)v13 + 1),
      "SystemEffect_Create",
      (const char *const)(a1 + 132));
    v14 = *v9;
    v15 = **v9;
    v18 = v19;
    v16 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, _QWORD, __int64, __int64))(v15 + 24))(
            v14,
            &v18,
            a2,
            a3,
            a4,
            a1 + 96);
    v17 = v16;
    if ( v16 >= 0 )
    {
      CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2E,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
        (const char *)(unsigned int)v16);
      CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
      return v17;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)(unsigned int)Instance);
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    return v11;
  }
}
