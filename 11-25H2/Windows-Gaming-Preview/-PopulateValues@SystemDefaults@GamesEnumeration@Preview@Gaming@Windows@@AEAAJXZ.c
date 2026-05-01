/*
 * XREFs of ?PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003B9F4
 * Callers:
 *     ?PopulateValuesThreadProc@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003BE30 (-PopulateValuesThreadProc@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@CAXPEAU_TP_CAL.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D00 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180002240 (--2@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000E7B4 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001077C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z @ 0x180014BCC (-JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z.c)
 *     ?GetDefaultGameModeProfile@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@PEAKPEA_K1PEA_N3@Z @ 0x18003B49C (-GetDefaultGameModeProfile@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV-$share.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateValues(
        Windows::Gaming::Preview::GamesEnumeration::SystemDefaults *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // rbx
  void *v6; // rdi
  DWORD ActiveProcessorCount; // r14d
  bool *v8; // r12
  int *v9; // rbx
  int DefaultGameModeProfile; // eax
  int LargestValidResourceRequest; // r14d
  int v12; // eax
  unsigned int v13; // r14d
  bool v14; // zf
  HRESULT v15; // eax
  HSTRING v16; // rbx
  __int64 v17; // rcx
  int ActivationFactory; // eax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, _QWORD, _QWORD *); // r12
  _QWORD *v22; // r14
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  bool v27[8]; // [rsp+50h] [rbp-79h] BYREF
  char v28; // [rsp+58h] [rbp-71h] BYREF
  __int64 v29; // [rsp+60h] [rbp-69h] BYREF
  __int128 v30; // [rsp+68h] [rbp-61h] BYREF
  __int64 v31; // [rsp+78h] [rbp-51h] BYREF
  __int128 v32; // [rsp+80h] [rbp-49h]
  __int64 v33; // [rsp+90h] [rbp-39h]
  char *v34; // [rsp+98h] [rbp-31h]
  char v35; // [rsp+A0h] [rbp-29h]
  _OWORD v36[2]; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v37; // [rsp+C8h] [rbp-1h]
  HSTRING_HEADER hstringHeader; // [rsp+D0h] [rbp+7h] BYREF
  HSTRING string; // [rsp+E8h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v31 = 0LL;
  v32 = 0LL;
  v2 = CreateGameConfigStoreClient(&v31);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x89,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  v28 = 0;
  v5 = v31;
  v33 = v31;
  v34 = &v28;
  v35 = 1;
  v6 = operator new(0x18uLL);
  *(_QWORD *)&v30 = v6;
  *(_OWORD *)v6 = 0LL;
  *((_DWORD *)v6 + 2) = 1;
  *((_DWORD *)v6 + 3) = 1;
  *(_QWORD *)v6 = off_18004A1C0;
  *((_QWORD *)v6 + 2) = v5;
  *(_QWORD *)&v32 = v5;
  *((_QWORD *)&v32 + 1) = v6;
  ActiveProcessorCount = GetActiveProcessorCount(0xFFFFu);
  v27[0] = 0;
  v30 = 0LL;
  _InterlockedAdd((volatile signed __int32 *)v6 + 2, 1u);
  *(_QWORD *)&v30 = v33;
  *((_QWORD *)&v30 + 1) = v6;
  v8 = (bool *)this + 28;
  v9 = (int *)((char *)this + 24);
  DefaultGameModeProfile = Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::GetDefaultGameModeProfile(
                             (__int64)v27,
                             &v30,
                             (int)this + 8,
                             (unsigned int *)this + 4,
                             (unsigned __int64 *)this + 3,
                             (unsigned int *)this + 7,
                             v27);
  if ( DefaultGameModeProfile >= 0 )
  {
    if ( v27[0] )
      goto LABEL_13;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x92,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)(unsigned int)DefaultGameModeProfile);
  }
  *((_DWORD *)this + 2) = 36838932;
  if ( ActiveProcessorCount == 2 )
  {
    *v9 = 0;
  }
  else
  {
    *v8 = 1;
    if ( ActiveProcessorCount == 4 )
    {
      *v9 = 2;
    }
    else
    {
      memset(v36, 0, sizeof(v36));
      v37 = 0LL;
      RmGameModeInitializeResourceRequest(v36);
      LargestValidResourceRequest = RmGameModeGetLargestValidResourceRequest(v36);
      if ( LargestValidResourceRequest >= 0 )
        *v9 = DWORD1(v36[0]);
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB3,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
          (const char *)(LargestValidResourceRequest | 0x10000000u));
    }
  }
LABEL_13:
  WindowsDeleteString(*((HSTRING *)this + 4));
  *((_QWORD *)this + 4) = 0LL;
  v12 = JsonDocumentFromGameConfigValues(
          *((_DWORD *)this + 2),
          *((HSTRING *)this + 2),
          *v9,
          1,
          *v8,
          0,
          0,
          0LL,
          (HSTRING *)this + 4);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC6,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)(unsigned int)v12);
    v14 = _InterlockedExchangeAdd((volatile signed __int32 *)v6 + 2, 0xFFFFFFFF) == 1;
LABEL_15:
    if ( v14 )
    {
      (**(void (__fastcall ***)(void *))v6)(v6);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 8LL))(v6);
    }
    return v13;
  }
  v29 = 0LL;
  string = 0LL;
  v15 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
  if ( v15 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
    JUMPOUT(0x18003BE1DLL);
  }
  v16 = string;
  v17 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  ActivationFactory = RoGetActivationFactory(v16, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v29);
  v13 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCB,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)(unsigned int)ActivationFactory);
    v19 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
LABEL_25:
    v14 = _InterlockedExchangeAdd((volatile signed __int32 *)v6 + 2, 0xFFFFFFFF) == 1;
    goto LABEL_15;
  }
  v20 = v29;
  v21 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v29 + 144LL);
  v22 = (_QWORD *)((char *)this + 40);
  v23 = *((_QWORD *)this + 5);
  if ( v23 )
  {
    *v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  v24 = v21(v20, *((_QWORD *)this + 4), v22);
  v13 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCD,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)(unsigned int)v24);
    v25 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    goto LABEL_25;
  }
  v26 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(void *))v6)(v6);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  return 0LL;
}
