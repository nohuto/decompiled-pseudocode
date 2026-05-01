/*
 * XREFs of ?HandleActivationDeprecated@CImmersiveMode@@UEAAJW4ZBID@@_N@Z @ 0x1800440F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z @ 0x1800452DC (-_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CImmersiveMode::HandleActivationDeprecated(_DWORD *a1, int a2, char a3)
{
  __int64 v6; // r14
  DWORD CurrentThreadId; // edi
  HRESULT ApartmentType; // ebx
  int v9; // edi
  bool v10; // r15
  IUnknown *v11; // rcx
  int v12; // edx
  int v13; // r8d
  int v14; // ecx
  void *v15; // rcx
  _DWORD v17[10]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+40h]
  void *ppvOut; // [rsp+A0h] [rbp+48h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+A8h] [rbp+50h] BYREF
  APTTYPE pAptType; // [rsp+B0h] [rbp+58h] BYREF
  IUnknown *punk; // [rsp+B8h] [rbp+60h] BYREF

  pAptType = APTTYPE_STA;
  v6 = (unsigned __int64)(a1 + 24) & -(__int64)(a1 != (_DWORD *)88);
  if ( !(unsigned __int8)_ShouldCheckApartments(*(unsigned int *)(v6 + 0x2C)) || *(_DWORD *)(v6 + 40) == -3 )
    goto LABEL_13;
  CurrentThreadId = 0;
  pAptType = APTTYPE_STA;
  pAptQualifier = APTTYPEQUALIFIER_NONE;
  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  if ( ApartmentType < 0 )
    goto LABEL_9;
  if ( pAptType == APTTYPE_STA )
  {
LABEL_8:
    CurrentThreadId = GetCurrentThreadId();
    goto LABEL_10;
  }
  if ( pAptType == APTTYPE_MTA )
    goto LABEL_10;
  if ( pAptType != APTTYPE_NA )
  {
    if ( pAptType == APTTYPE_MAINSTA )
      goto LABEL_8;
LABEL_9:
    if ( ApartmentType < 0 )
      goto LABEL_35;
    goto LABEL_10;
  }
  CurrentThreadId = -1;
LABEL_10:
  if ( CurrentThreadId != *(_DWORD *)(v6 + 40) )
    ApartmentType = -2147417842;
LABEL_35:
  if ( ApartmentType >= 0 )
  {
LABEL_13:
    ApartmentType = !TryEnterCriticalSection((LPCRITICAL_SECTION)v6) ? 0x8001010E : 0;
    goto LABEL_14;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0xC8,
    (int)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
    (const char *)(unsigned int)ApartmentType);
LABEL_14:
  v9 = -1;
  if ( a2 == 1 )
  {
    v9 = 0;
  }
  else if ( a2 == 8 || a2 == 10 || a2 == 12 )
  {
    v9 = 1;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  punk = 0LL;
  pAptType = APTTYPE_NA;
  (*(void (__fastcall **)(_DWORD *, GUID *, IUnknown **))(*((_QWORD *)a1 - 7) + 32LL))(
    a1 - 14,
    &GUID_00000000_0000_0000_c000_000000000046,
    &punk);
  v10 = IUnknown_QueryService(
          punk,
          &IID_IImmersiveApplicationManager,
          &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
          &ppvOut) >= 0;
  v11 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v11->lpVtbl->Release)(v11);
  }
  if ( v10 )
  {
    v12 = a1[36];
    v13 = a1[58];
    if ( v9 == -1 || (v14 = v9, !a3) )
      v14 = a1[65];
    v17[0] = a1[65];
    v17[1] = v14;
    v17[2] = v13;
    v17[3] = v12;
    v17[4] = a2;
    (*(void (__fastcall **)(void *, _DWORD *))(*(_QWORD *)ppvOut + 24LL))(ppvOut, v17);
  }
  if ( a3 && v9 != -1 && v9 != a1[65] )
    a1[65] = v9;
  v15 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  if ( ApartmentType >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v6);
  return 0LL;
}
