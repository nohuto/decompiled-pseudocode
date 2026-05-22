/*
 * XREFs of ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJV?$optional@W4GameInputGamepadButtons@@@std@@0@Z @ 0x180179810
 * Callers:
 *     ?SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@@Z @ 0x18017BA20 (-SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV-$vector@W4GameInputGamepadButtons@@V-$alloc.c)
 *     ?SendGameControllerAsPointerMappings@ControllerProcessor@@AEAAJXZ @ 0x18017BCF8 (-SendGameControllerAsPointerMappings@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?BuildMouseInputInfo@ControllerProcessor@@AEAA?AURawMouseInputInfo@@K@Z @ 0x180179A0C (-BuildMouseInputInfo@ControllerProcessor@@AEAA-AURawMouseInputInfo@@K@Z.c)
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z @ 0x18017BF60 (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_MenuFix@@@details@wil@@QEAA_NXZ @ 0x18017D9B0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_Me.c)
 */

__int64 __fastcall ControllerProcessor::BuildAndSendMouseInputInfo(ControllerProcessor *this, __int64 a2, __int64 a3)
{
  int v3; // edi
  int v4; // ebx
  unsigned __int16 v6; // bp
  unsigned int v7; // r8d
  _DWORD *v8; // rdx
  int v9; // r10d
  unsigned int v10; // r9d
  __int64 v11; // rcx
  _DWORD *v12; // rax
  int v13; // eax
  unsigned int v14; // r12d
  _DWORD *v15; // r15
  int v16; // ecx
  int v17; // eax
  int v18; // r9d
  unsigned int v19; // edx
  __int64 v20; // rcx
  _DWORD *v21; // rax
  int v22; // eax
  int v23; // eax
  int v25[136]; // [rsp+20h] [rbp-268h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]
  char v27; // [rsp+29Ch] [rbp+14h]
  char v28; // [rsp+2A4h] [rbp+1Ch]

  v28 = BYTE4(a3);
  v27 = BYTE4(a2);
  v3 = a3;
  v4 = a2;
  v6 = 0;
  if ( !*((_BYTE *)this + 276) )
  {
    v14 = 0;
    v15 = &unk_180208CDC;
    while ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_MenuFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_MenuFix>::GetImpl'::`2'::impl) )
    {
      v16 = v4;
      if ( !v27 )
        v16 = *((_DWORD *)this + 61);
      if ( !v28 )
        goto LABEL_21;
      v17 = v3;
LABEL_22:
      v18 = v17 & *(v15 - 1);
      if ( (v18 != 0) != ((v16 & *(v15 - 1)) != 0) )
      {
        v19 = 0;
        v20 = 0LL;
        v21 = &unk_180208C88;
        while ( *v15 != *v21 )
        {
          ++v19;
          ++v20;
          v21 += 3;
          if ( v19 >= 5 )
            goto LABEL_31;
        }
        *((_DWORD *)this + v20 + 1881) = v18 != 0;
        if ( v18 )
          v22 = *((_DWORD *)&unk_180208C88 + 3 * v20 + 2);
        else
          v22 = *((_DWORD *)&unk_180208C88 + 3 * v20 + 1);
        v6 |= v22;
      }
LABEL_31:
      ++v14;
      v15 += 2;
      if ( v14 >= 2 )
        goto LABEL_32;
    }
    v16 = *((_DWORD *)this + 61);
LABEL_21:
    v17 = *((_DWORD *)this + 45);
    goto LABEL_22;
  }
  v7 = 0;
  v8 = &unk_180208CCC;
  do
  {
    v9 = *((_DWORD *)this + 52) & *(v8 - 1);
    if ( (v9 != 0) != ((*(v8 - 1) & *((_DWORD *)this + 68)) != 0) )
    {
      v10 = 0;
      v11 = 0LL;
      v12 = &unk_180208C88;
      while ( *v8 != *v12 )
      {
        ++v10;
        ++v11;
        v12 += 3;
        if ( v10 >= 5 )
          goto LABEL_12;
      }
      *((_DWORD *)this + v11 + 1881) = v9 != 0;
      if ( v9 )
        v13 = *((_DWORD *)&unk_180208C88 + 3 * v11 + 2);
      else
        v13 = *((_DWORD *)&unk_180208C88 + 3 * v11 + 1);
      v6 |= v13;
    }
LABEL_12:
    ++v7;
    v8 += 2;
  }
  while ( v7 < 2 );
LABEL_32:
  if ( v6 )
  {
    ControllerProcessor::BuildMouseInputInfo(this, v25, v6);
    v23 = ControllerProcessor::SendMouseInputInfo(this, (struct RawMouseInputInfo *)v25);
    if ( v23 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x4E2,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v23,
        v25[0]);
  }
  return 0LL;
}
