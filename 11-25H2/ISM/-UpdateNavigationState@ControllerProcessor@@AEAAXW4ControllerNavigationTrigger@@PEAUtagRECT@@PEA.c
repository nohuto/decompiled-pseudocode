/*
 * XREFs of ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180039878
 * Callers:
 *     ?DisableNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x1800397C4 (-DisableNavigation@ControllerNavigationManager@@AEAAXXZ.c)
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x1801757C4 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180175CC8 (-SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverr.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x180177F84 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_K_N3@Z @ 0x180179AC4 (-NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_K_N3@Z.c)
 *     ?NavigationResume@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@@Z @ 0x180179C70 (-NavigationResume@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@@Z.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x18017B210 (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x18017ABB0 (-TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x18017AE60 (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x18017B084 (-TurnNavigationOn@ControllerProcessor@@AEAAJXZ.c)
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x18017B4F4 (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 */

void __fastcall ControllerProcessor::UpdateNavigationState(__int64 a1, int a2, struct tagRECT *a3, struct tagPOINT *a4)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // eax
  int updated; // eax
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *(_DWORD *)(a1 + 280);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
          return;
        if ( a2 )
        {
          if ( a2 == 3 )
            *(_DWORD *)(a1 + 280) = 2;
          return;
        }
        v8 = ControllerProcessor::TransitionToEnabled((ControllerProcessor *)a1, a3, a4);
        if ( v8 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x3CA,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v8,
            v19);
LABEL_40:
        *(_DWORD *)(a1 + 280) = 1;
        return;
      }
      if ( a2 )
      {
        if ( a2 != 1 )
          return;
LABEL_13:
        *(_DWORD *)(a1 + 280) = 3;
        return;
      }
      v9 = ControllerProcessor::TransitionToEnabled((ControllerProcessor *)a1, a3, a4);
      if ( v9 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x3B6,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v9,
          v19);
      *(_DWORD *)(a1 + 280) = 0;
      v10 = ControllerProcessor::TurnNavigationOn((ControllerProcessor *)a1);
      if ( v10 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x3B8,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v10,
          v19);
    }
    else if ( a2 )
    {
      v11 = a2 - 2;
      if ( !v11 )
      {
        *(_DWORD *)(a1 + 328) = 0;
        *(_QWORD *)(a1 + 432) = 0LL;
        *(_DWORD *)(a1 + 428) = 0;
        *(_QWORD *)(a1 + 368) = 0LL;
        *(_BYTE *)(a1 + 420) = 0;
        goto LABEL_13;
      }
      if ( v11 == 1 )
      {
        if ( a3 && a4 )
        {
          *(_BYTE *)(a1 + 400) = 1;
          *(struct tagRECT *)(a1 + 384) = *a3;
          v12 = ControllerProcessor::TransitionToEnabled((ControllerProcessor *)a1, (struct tagRECT *)(a1 + 312), a4);
          if ( v12 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x3A1,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\control"
                            "lerprocessor.cpp",
              (const char *)(unsigned int)v12,
              v19);
        }
        else
        {
          *(_BYTE *)(a1 + 400) = 0;
        }
        v13 = ControllerProcessor::TurnNavigationOn((ControllerProcessor *)a1);
        if ( v13 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x3A8,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v13,
            v19);
        *(_DWORD *)(a1 + 280) = 0;
      }
    }
    else
    {
      updated = ControllerProcessor::UpdateNavigationParameters((ControllerProcessor *)a1, a3);
      if ( updated < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x391,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)updated,
          v19);
    }
  }
  else if ( a2 )
  {
    v15 = a2 - 1;
    if ( !v15 )
    {
      v17 = ControllerProcessor::TurnNavigationOff((ControllerProcessor *)a1);
      if ( v17 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x37C,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v17,
          v19);
      goto LABEL_40;
    }
    if ( v15 == 1 )
    {
      v16 = ControllerProcessor::TurnNavigationOff((ControllerProcessor *)a1);
      if ( v16 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x382,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v16,
          v19);
      *(_DWORD *)(a1 + 280) = 2;
      *(_DWORD *)(a1 + 328) = 0;
      *(_QWORD *)(a1 + 432) = 0LL;
      *(_DWORD *)(a1 + 428) = 0;
      *(_QWORD *)(a1 + 368) = 0LL;
      *(_BYTE *)(a1 + 420) = 0;
    }
  }
  else
  {
    v18 = ControllerProcessor::UpdateNavigationParameters((ControllerProcessor *)a1, a3);
    if ( v18 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x377,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v18,
        v19);
  }
}
