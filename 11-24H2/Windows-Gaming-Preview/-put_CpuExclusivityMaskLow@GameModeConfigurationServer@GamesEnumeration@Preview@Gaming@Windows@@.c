/*
 * XREFs of ?put_CpuExclusivityMaskLow@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAU?$IReference@H@Foundation@5@@Z @ 0x1800390B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008BC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV?$ComPtr@U?$IReference@H@Foundation@Windows@@@WRL@Microsoft@@H@Z @ 0x180037C80 (-_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::put_CpuExclusivityMaskLow(
        __int64 a1,
        __int64 a2)
{
  DWORD ActiveProcessorCount; // ebx
  signed int LastError; // eax
  unsigned int v6; // ebx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // esi
  int NullableInt; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  signed int v17; // [rsp+50h] [rbp+30h] BYREF
  __int64 v18; // [rsp+58h] [rbp+38h] BYREF

  v18 = 0LL;
  ActiveProcessorCount = GetActiveProcessorCount(0);
  if ( !ActiveProcessorCount )
  {
    LastError = GetLastError();
    v6 = LastError;
    if ( LastError > 0 )
      v6 = (unsigned __int16)LastError | 0x80070000;
    if ( (v6 & 0x80000000) != 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x249,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
        (const char *)v6);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    return v6;
  }
  if ( a2 )
  {
    v17 = 0;
    v8 = (*(__int64 (__fastcall **)(__int64, signed int *))(*(_QWORD *)a2 + 48LL))(a2, &v17);
    v10 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x250,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
        (const char *)(unsigned int)v8);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      return v10;
    }
    if ( ActiveProcessorCount < 0x20 )
    {
      v9 = ActiveProcessorCount;
      if ( v17 >> ActiveProcessorCount )
      {
        v6 = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x254,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
          (const char *)0x80070057LL);
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        return v6;
      }
    }
    NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                    v9,
                    &v18,
                    v17);
    v6 = NullableInt;
    if ( NullableInt < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x257,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
        (const char *)(unsigned int)NullableInt);
      v12 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      return v6;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v13 = v18;
  if ( *(_QWORD *)(a1 + 144) != v18 )
  {
    v14 = v18;
    if ( v18 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      v13 = v18;
    }
    v15 = *(_QWORD *)(a1 + 144);
    *(_QWORD *)(a1 + 144) = v14;
    if ( v15 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      v13 = v18;
    }
  }
  if ( a1 != -168 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
    v13 = v18;
  }
  if ( v13 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return 0LL;
}
