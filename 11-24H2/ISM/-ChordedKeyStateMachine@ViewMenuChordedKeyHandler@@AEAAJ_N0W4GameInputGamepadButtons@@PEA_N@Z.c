/*
 * XREFs of ?ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GameInputGamepadButtons@@PEA_N@Z @ 0x18017DE60
 * Callers:
 *     ?HandleChordedKey@ViewMenuChordedKeyHandler@@QEAAJW4GameInputGamepadButtons@@0PEA_N@Z @ 0x18017E330 (-HandleChordedKey@ViewMenuChordedKeyHandler@@QEAAJW4GameInputGamepadButtons@@0PEA_N@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SuppressSwitcherInjectionOnChordPress@@@details@wil@@QEAA_NXZ @ 0x18017D9EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SuppressSwitcherInjectionOnChordP.c)
 *     ??$_Emplace_reallocate@AEBW4GameInputGamepadButtons@@@?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@AEAAPEAW4GameInputGamepadButtons@@QEAW42@AEBW42@@Z @ 0x18017DBCC (--$_Emplace_reallocate@AEBW4GameInputGamepadButtons@@@-$vector@W4GameInputGamepadButtons@@V-$all.c)
 *     ?LogGamepadTaskSwitcherState@ControllerProcessorTelemetry@@SAXI_N0@Z @ 0x18017E538 (-LogGamepadTaskSwitcherState@ControllerProcessorTelemetry@@SAXI_N0@Z.c)
 *     ?LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z @ 0x18017E5C0 (-LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ViewMenuChordedKeyHandler::ChordedKeyStateMachine(__int64 a1, bool a2, bool a3, int a4, char *a5)
{
  char *v6; // rdi
  unsigned int v8; // edx
  int v10; // eax
  const char *v11; // r9
  char v12; // al
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  _BYTE *v19; // rdx
  int v20; // eax
  _BYTE *v21; // rdx
  int v23; // [rsp+20h] [rbp-8h]
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
          *v6 = 1;
          *(_DWORD *)(a1 + 16) = 4;
          if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuppressSwitcherInjectionOnChordPress>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SuppressSwitcherInjectionOnChordPress>::GetImpl'::`2'::impl) )
          {
            v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 80LL))(
                    *(_QWORD *)(a1 + 24),
                    5000000LL,
                    0LL);
            if ( v20 < 0 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x130,
                (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
                (const char *)(unsigned int)v20,
                v23);
          }
        }
        else
        {
          *(_DWORD *)(a1 + 16) = 3;
        }
      }
      else if ( a3 )
      {
        *(_DWORD *)(a1 + 16) = 2;
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
      }
      goto LABEL_63;
    case 2u:
      if ( a2 )
      {
        *v6 = 1;
        *(_DWORD *)(a1 + 16) = 5;
        if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuppressSwitcherInjectionOnChordPress>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SuppressSwitcherInjectionOnChordPress>::GetImpl'::`2'::impl) )
        {
          v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 80LL))(
                  *(_QWORD *)(a1 + 24),
                  5000000LL,
                  0LL);
          if ( v18 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x16D,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
              (const char *)(unsigned int)v18,
              v23);
          goto LABEL_63;
        }
      }
      else
      {
        if ( !a3 )
        {
          v19 = *(_BYTE **)(a1 + 56);
          *v6 = 1;
          LODWORD(a5) = a4;
          if ( v19 == *(_BYTE **)(a1 + 64) )
          {
            std::vector<enum GameInputGamepadButtons>::_Emplace_reallocate<enum GameInputGamepadButtons const &>(
              a1 + 48,
              v19,
              &a5);
          }
          else
          {
            *(_DWORD *)v19 = a4;
            *(_QWORD *)(a1 + 56) += 4LL;
          }
          *(_DWORD *)(a1 + 16) = 1;
          *(_WORD *)(a1 + 72) = 257;
          goto LABEL_63;
        }
        ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(v8);
        *v6 = 0;
        *(_DWORD *)(a1 + 16) = 1;
      }
LABEL_52:
      *(_WORD *)(a1 + 72) = 1;
      goto LABEL_63;
    case 3u:
      if ( !a2 )
        goto LABEL_41;
      if ( !a3 )
      {
        ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(v8);
        *v6 = 0;
        goto LABEL_41;
      }
      *v6 = 1;
      *(_DWORD *)(a1 + 16) = 4;
      if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuppressSwitcherInjectionOnChordPress>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SuppressSwitcherInjectionOnChordPress>::GetImpl'::`2'::impl) )
      {
        v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 80LL))(
                *(_QWORD *)(a1 + 24),
                5000000LL,
                0LL);
        if ( v17 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x153,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
            (const char *)(unsigned int)v17,
            v23);
        goto LABEL_63;
      }
      goto LABEL_52;
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
      if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuppressSwitcherInjectionOnChordPress>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SuppressSwitcherInjectionOnChordPress>::GetImpl'::`2'::impl) )
      {
        v15 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 16) = 1;
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 96LL))(v15);
        if ( v16 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x19B,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
            (const char *)(unsigned int)v16,
            v23);
        goto LABEL_63;
      }
      *(_DWORD *)(a1 + 16) = 7;
      goto LABEL_52;
  }
  if ( v8 != 5 )
  {
    if ( v8 != 6 )
    {
      if ( v8 != 7 )
      {
        *(_DWORD *)(a1 + 16) = 1;
        if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuppressSwitcherInjectionOnChordPress>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SuppressSwitcherInjectionOnChordPress>::GetImpl'::`2'::impl) )
        {
          v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 96LL))(*(_QWORD *)(a1 + 24));
          if ( v10 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x1D5,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
              (const char *)(unsigned int)v10,
              v23);
        }
        goto LABEL_63;
      }
      *v6 = 1;
      if ( a2 || a3 )
        goto LABEL_63;
LABEL_41:
      *(_DWORD *)(a1 + 16) = 1;
      goto LABEL_63;
    }
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuppressSwitcherInjectionOnChordPress>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SuppressSwitcherInjectionOnChordPress>::GetImpl'::`2'::impl) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1BA,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
        v11);
    *v6 = 1;
    if ( a2 )
    {
      if ( a3 )
        goto LABEL_63;
    }
    else if ( !a3 )
    {
      goto LABEL_41;
    }
LABEL_19:
    *(_DWORD *)(a1 + 16) = 7;
    goto LABEL_63;
  }
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
  *(_WORD *)(a1 + 72) = 1;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuppressSwitcherInjectionOnChordPress>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SuppressSwitcherInjectionOnChordPress>::GetImpl'::`2'::impl) )
    goto LABEL_19;
  v13 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 16) = 1;
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 96LL))(v13);
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1B6,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
      (const char *)(unsigned int)v14,
      v23);
LABEL_63:
  ControllerProcessorTelemetry::LogGamepadTaskSwitcherState(*(_DWORD *)(a1 + 16), a2, a3);
  return 0LL;
}
