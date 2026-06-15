/*
 * XREFs of ?AttachInputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z @ 0x140027470
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z @ 0x140008FF0 (-ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000ABBC (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEAPEAVCConnectionNode@@@Z @ 0x140027660 (-AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV-$CAtlList@PEAVCConn.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x140039274 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioProcessor::AttachInputEndpointToConnection(
        CAudioProcessor *this,
        __int64 a2,
        unsigned __int64 a3,
        struct IUnknown *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-18h] BYREF
  char v17; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v19; // [rsp+88h] [rbp+38h] BYREF

  if ( !a4 )
  {
    v8 = -2147467261;
    v9 = 2906LL;
    goto LABEL_4;
  }
  if ( ((a3 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v8 = -2147024890;
    v9 = 2907LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)v8);
    return v8;
  }
  if ( ((a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v8 = -2147024890;
    v9 = 2908LL;
    goto LABEL_4;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 88);
  v17 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v11 = CAudioProcessor::ValidateTransactionState(this, a2);
  v8 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB61,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)(unsigned int)v11);
LABEL_18:
    if ( v17 )
      LeaveCriticalSection(lpCriticalSection);
    return v8;
  }
  v19 = 0LL;
  v12 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a4->lpVtbl->QueryInterface)(
          a4,
          &GUID_8026ab61_92b2_43c1_a1df_5c37ebd08d82,
          &v19);
  v8 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB65,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)(unsigned int)v12);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    goto LABEL_18;
  }
  v15 = 0LL;
  v13 = CAudioProcessor::AttachEndpointToConnection(this, a3, a4, (__int64)&v15);
  v8 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB69,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)(unsigned int)v13);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v19);
    ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection);
    return v8;
  }
  v14 = v19;
  v19 = 0LL;
  *(_QWORD *)(v15 + 120) = v14;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
