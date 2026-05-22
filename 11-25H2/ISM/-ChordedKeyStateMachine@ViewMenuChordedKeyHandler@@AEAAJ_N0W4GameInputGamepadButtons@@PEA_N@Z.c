/*
 * XREFs of ?ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GameInputGamepadButtons@@PEA_N@Z @ 0x18017C3A0
 * Callers:
 *     ?HandleChordedKey@ViewMenuChordedKeyHandler@@QEAAJW4GameInputGamepadButtons@@0PEA_N@Z @ 0x18017C7B0 (-HandleChordedKey@ViewMenuChordedKeyHandler@@QEAAJW4GameInputGamepadButtons@@0PEA_N@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBW4GameInputGamepadButtons@@@?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@AEAAPEAW4GameInputGamepadButtons@@QEAW42@AEBW42@@Z @ 0x18017C10C (--$_Emplace_reallocate@AEBW4GameInputGamepadButtons@@@-$vector@W4GameInputGamepadButtons@@V-$all.c)
 *     ?LogGamepadTaskSwitcherState@ControllerProcessorTelemetry@@SAXI_N0@Z @ 0x18017C998 (-LogGamepadTaskSwitcherState@ControllerProcessorTelemetry@@SAXI_N0@Z.c)
 *     ?LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z @ 0x18017CA20 (-LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ViewMenuChordedKeyHandler::ChordedKeyStateMachine(__int64 a1, bool a2, bool a3, int a4, char *a5)
{
  char *v6; // rdi
  unsigned int v8; // edx
  __int64 v10; // rcx
  int v11; // eax
  char v12; // al
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  _BYTE *v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  _BYTE *v24; // rdx
  int v26; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_WORD *)(a1 + 72) = 0;
  v6 = a5;
  v8 = *(_DWORD *)(a1 + 16);
  *a5 = 0;
  switch ( v8 )
  {
    case 1u:
      if ( a2 )
      {
        if ( a3 )
        {
          v22 = *(_QWORD *)(a1 + 24);
          *(_DWORD *)(a1 + 16) = 4;
          *v6 = 1;
          v23 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v22 + 80LL))(v22, 5000000LL, 0LL);
          if ( v23 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x117,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
              (const char *)(unsigned int)v23,
              v26);
        }
        else
        {
          *(_DWORD *)(a1 + 16) = 3;
        }
      }
      else if ( a3 )
      {
        *(_DWORD *)(a1 + 16) = 2;
        v24 = *(_BYTE **)(a1 + 56);
        *v6 = 1;
        LODWORD(a5) = a4;
        if ( v24 == *(_BYTE **)(a1 + 64) )
        {
          std::vector<enum GameInputGamepadButtons>::_Emplace_reallocate<enum GameInputGamepadButtons const &>(
            a1 + 48,
            v24,
            &a5);
        }
        else
        {
          *(_DWORD *)v24 = a4;
          *(_QWORD *)(a1 + 56) += 4LL;
        }
      }
      break;
    case 2u:
      if ( a2 )
      {
        v19 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 16) = 5;
        *v6 = 1;
        v20 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v19 + 80LL))(v19, 5000000LL, 0LL);
        if ( v20 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x140,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
            (const char *)(unsigned int)v20,
            v26);
      }
      else if ( a3 )
      {
        ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(v8);
        *v6 = 0;
        *(_DWORD *)(a1 + 16) = 1;
        *(_WORD *)(a1 + 72) = 1;
      }
      else
      {
        v21 = *(_BYTE **)(a1 + 56);
        *v6 = 1;
        LODWORD(a5) = a4;
        if ( v21 == *(_BYTE **)(a1 + 64) )
        {
          std::vector<enum GameInputGamepadButtons>::_Emplace_reallocate<enum GameInputGamepadButtons const &>(
            a1 + 48,
            v21,
            &a5);
        }
        else
        {
          *(_DWORD *)v21 = a4;
          *(_QWORD *)(a1 + 56) += 4LL;
        }
        *(_DWORD *)(a1 + 16) = 1;
        *(_WORD *)(a1 + 72) = 257;
      }
      break;
    case 3u:
      if ( !a2 )
        goto LABEL_35;
      if ( !a3 )
      {
        ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(v8);
        *v6 = 0;
        goto LABEL_35;
      }
      v17 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 16) = 4;
      *v6 = 1;
      v18 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v17 + 80LL))(v17, 5000000LL, 0LL);
      if ( v18 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x130,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
          (const char *)(unsigned int)v18,
          v26);
      break;
    case 4u:
      if ( a3 )
      {
        if ( a2 )
        {
          ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(v8);
          *v6 = 0;
        }
      }
      else
      {
        *v6 = 1;
      }
      v15 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 16) = 1;
      v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 96LL))(v15);
      if ( v16 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x164,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
          (const char *)(unsigned int)v16,
          v26);
      break;
    case 5u:
      if ( a3 && a2 )
      {
        ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(5u);
        v12 = 0;
      }
      else
      {
        v12 = 1;
      }
      *v6 = v12;
      v13 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 16) = 1;
      *(_WORD *)(a1 + 72) = 1;
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 96LL))(v13);
      if ( v14 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x178,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
          (const char *)(unsigned int)v14,
          v26);
      break;
    case 6u:
      *v6 = 1;
      if ( a2 )
      {
        if ( a3 )
          break;
      }
      else if ( !a3 )
      {
        goto LABEL_35;
      }
      *(_DWORD *)(a1 + 16) = 7;
      break;
    case 7u:
      *v6 = 1;
      if ( a2 || a3 )
        break;
LABEL_35:
      *(_DWORD *)(a1 + 16) = 1;
      break;
    default:
      v10 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 16) = 1;
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 96LL))(v10);
      if ( v11 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x190,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
          (const char *)(unsigned int)v11,
          v26);
      break;
  }
  ControllerProcessorTelemetry::LogGamepadTaskSwitcherState(*(_DWORD *)(a1 + 16), a2, a3);
  return 0LL;
}
