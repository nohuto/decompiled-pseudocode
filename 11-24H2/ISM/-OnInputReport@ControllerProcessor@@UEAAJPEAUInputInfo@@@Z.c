/*
 * XREFs of ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18008A190
 * Callers:
 *     <none>
 * Callees:
 *     ?SendGameControllerAsVirtualKeys@ControllerProcessor@@AEAAJXZ @ 0x1800558A0 (-SendGameControllerAsVirtualKeys@ControllerProcessor@@AEAAJXZ.c)
 *     ?OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180060D40 (-OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEA_N@Z @ 0x1800623F4 (-HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEA_N@Z.c)
 *     ?Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x18007A170 (-Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x18007E798 (-Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x1800A7574 (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ?SendGameControllerAsPointerMappings@ControllerProcessor@@AEAAJXZ @ 0x18017BCF8 (-SendGameControllerAsPointerMappings@ControllerProcessor@@AEAAJXZ.c)
 *     ?SendGameControllerAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJXZ @ 0x18017BD44 (-SendGameControllerAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJXZ.c)
 *     ?UpdatePointerTimer@ControllerProcessor@@AEAAJXZ @ 0x18017D038 (-UpdatePointerTimer@ControllerProcessor@@AEAAJXZ.c)
 */

__int64 __fastcall ControllerProcessor::OnInputReport(ControllerProcessor *this, struct InputInfo *a2)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int updated; // eax
  int v13; // eax
  int v14; // eax
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v18; // [rsp+38h] [rbp+10h] BYREF

  if ( (*(_BYTE *)a2 & 0x40) != 0 )
  {
    NonPointerProcessor::OnInputReport(this, a2);
    v4 = *(_OWORD *)((char *)this + 152);
    v5 = *(_OWORD *)((char *)this + 168);
    v18 = 0;
    *(_OWORD *)((char *)this + 216) = v4;
    v6 = *(_OWORD *)((char *)this + 184);
    *(_OWORD *)((char *)this + 232) = v5;
    v7 = *(_OWORD *)((char *)this + 200);
    *(_OWORD *)((char *)this + 248) = v6;
    *(_OWORD *)((char *)this + 264) = v7;
    *((_DWORD *)this + 38) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 39) = *((_DWORD *)a2 + 2);
    *((_QWORD *)this + 20) = *((_QWORD *)a2 + 2);
    *((_QWORD *)this + 21) = *((_QWORD *)a2 + 4);
    *((_DWORD *)this + 44) = *((_DWORD *)a2 + 11);
    *(_OWORD *)((char *)this + 180) = *((_OWORD *)a2 + 3);
    *(_QWORD *)((char *)this + 196) = *((_QWORD *)a2 + 8);
    *((_DWORD *)this + 51) = *((_DWORD *)a2 + 18);
    *((_DWORD *)this + 52) = *((_DWORD *)a2 + 19);
    *((_BYTE *)this + 212) = *((_BYTE *)a2 + 80);
    v8 = ControllerProcessor::HandleTaskSwitcherChordedKey(this, &v18);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2A8,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v8,
        v16);
    if ( !v18 )
    {
      if ( *((_DWORD *)this + 70) )
      {
        ISMStatics::GetGamepadInterceptionHelper();
LABEL_7:
        if ( *((_BYTE *)this + 7800) )
        {
          v9 = ControllerProcessor::SendGameControllerAsVirtualKeys(this);
          if ( v9 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x2BC,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\control"
                            "lerprocessor.cpp",
              (const char *)(unsigned int)v9,
              v16);
        }
        return 0LL;
      }
      if ( *((_QWORD *)ISMStatics::GetGamepadInterceptionHelper() + 2) )
        goto LABEL_7;
      v10 = ControllerProcessor::SendGameControllerAsVirtualKeysForNavigation(this);
      if ( v10 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2C6,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v10,
          v16);
      v11 = ControllerProcessor::SendGameControllerAsPointerMappings(this);
      if ( v11 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2C7,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v11,
          v16);
      if ( *((_DWORD *)this + 82) )
      {
        updated = ControllerProcessor::UpdatePointerTimer(this);
        if ( updated < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x2CF,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)updated,
            v16);
      }
    }
  }
  else if ( (*(_BYTE *)a2 & 4) != 0 )
  {
    v13 = KeyboardInjectionDevice::Inject((ControllerProcessor *)((char *)this + 5952), a2);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2DA,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v13,
        v16);
  }
  else if ( *(char *)a2 < 0 )
  {
    v14 = (unsigned int)InjectionDevice::Inject((ControllerProcessor *)((char *)this + 1272), a2);
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2E2,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v14,
        v16);
  }
  return 0LL;
}
