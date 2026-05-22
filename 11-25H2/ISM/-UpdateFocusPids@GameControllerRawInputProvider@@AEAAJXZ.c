/*
 * XREFs of ?UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ @ 0x1800669F8
 * Callers:
 *     ?OnTargetWithFocusChanged@GameControllerRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x180066880 (-OnTargetWithFocusChanged@GameControllerRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x18007F234 (--0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ??1GameControllerRawInputProvider@@UEAA@XZ @ 0x1800CB198 (--1GameControllerRawInputProvider@@UEAA@XZ.c)
 *     ?OnGamepadInterceptionTargetProcessChanged@GameControllerRawInputProvider@@UEAAXK@Z @ 0x1800CB9B0 (-OnGamepadInterceptionTargetProcessChanged@GameControllerRawInputProvider@@UEAAXK@Z.c)
 *     ?SetGameControllerMpcFocusOverride@@YAXK@Z @ 0x1800CBE48 (-SetGameControllerMpcFocusOverride@@YAXK@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18008CF24 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009BB68 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$GameControllerRawInputProvider_UpdateFocusPids@AEAKAEAKAEAKAEBKAEAKAEAKAEAKAEAK@ISMTracing@@SAXAEAK00AEBK0000@Z @ 0x1800CB0E0 (--$GameControllerRawInputProvider_UpdateFocusPids@AEAKAEAKAEAKAEBKAEAKAEAKAEAKAEAK@ISMTracing@@S.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall GameControllerRawInputProvider::UpdateFocusPids(GameControllerRawInputProvider *this)
{
  unsigned int *v2; // rsi
  unsigned int v3; // edx
  __int64 v4; // rcx
  char *v5; // rcx
  const char *v6; // r9
  unsigned int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  unsigned int v13; // [rsp+80h] [rbp+38h] BYREF
  unsigned int v14; // [rsp+88h] [rbp+40h] BYREF
  unsigned int InBuffer; // [rsp+90h] [rbp+48h] BYREF
  unsigned int v16; // [rsp+98h] [rbp+50h] BYREF

  v2 = (unsigned int *)((char *)this + 160);
  v3 = *((_DWORD *)this + 40);
  if ( !v3 )
  {
    v3 = *((_DWORD *)this + 42);
    if ( !v3 )
    {
      v3 = *((_DWORD *)this + 41);
      if ( !v3 )
        v3 = *((_DWORD *)this + 39);
    }
  }
  InBuffer = v3;
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 64LL))(v4);
  v5 = (char *)*((_QWORD *)this + 10);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && !DeviceIoControl(v5, 0x40001C28u, &InBuffer, 4u, 0LL, 0, 0LL, 0LL) )
  {
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x372,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrol"
                           "lerrawinputprovider.cpp",
             v6);
  }
  v8 = *v2;
  if ( !*v2 )
    v8 = *((_DWORD *)this + 39);
  v14 = v8;
  v9 = RtlPublishWnfStateData(WNF_SHEL_FOCUS_CHANGE, 0LL, &v14, 4LL);
  if ( v9 < 0 )
  {
    v10 = 910LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v10,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrol"
                           "lerrawinputprovider.cpp",
             (const char *)(unsigned int)v9,
             0);
  }
  v11 = *((_DWORD *)this + 42);
  if ( !v11 )
    v11 = *((_DWORD *)this + 41);
  if ( *v2 )
    v11 = 0;
  v13 = v11;
  v16 = *((_DWORD *)this + 43);
  if ( v11 != v16 )
  {
    v9 = RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_FOCUS_INFO, 0LL, &v13, 4LL);
    if ( v9 < 0 )
    {
      v10 = 938LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v10,
               (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontr"
                             "ollerrawinputprovider.cpp",
               (const char *)(unsigned int)v9,
               0);
    }
    *((_DWORD *)this + 43) = v13;
  }
  ISMTracing::GameControllerRawInputProvider_UpdateFocusPids<unsigned long &,unsigned long &,unsigned long &,unsigned long const &,unsigned long &,unsigned long &,unsigned long &,unsigned long &>(
    (unsigned int *)this + 39,
    v2,
    (unsigned int *)this + 41,
    &v16,
    &InBuffer,
    &v14,
    &v13,
    (unsigned int *)this + 42);
  return 0;
}
