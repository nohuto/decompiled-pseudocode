/*
 * XREFs of ?ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@System@Windows@@W4GestureOperationState@@@Z @ 0x180058544
 * Callers:
 *     ?SendCurrentGestureEvent@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@@Z @ 0x1800584B4 (-SendCurrentGestureEvent@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@@Z.c)
 * Callees:
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180058360 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-Nt.c)
 *     ?CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ @ 0x180058408 (-CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FeedAnimationDataIfNeeded@GestureHandler@@AEAAX_N@Z @ 0x180058940 (-FeedAnimationDataIfNeeded@GestureHandler@@AEAAX_N@Z.c)
 *     ?MakeCompletedCallback@GestureHandler@@AEAA?AV?$shared_ptr@VGestureHandler@@@std@@W4GestureCompletedReason@@@Z @ 0x180058B68 (-MakeCompletedCallback@GestureHandler@@AEAA-AV-$shared_ptr@VGestureHandler@@@std@@W4GestureCompl.c)
 *     ?GestureInProgress@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x180058C08 (-GestureInProgress@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetRelativePoints@GestureHandler@@AEAA?AV?$tuple@UtagPOINT@@U1@U1@@std@@AEBUGestureClient@1@UtagPOINTF@@@Z @ 0x1800903E0 (-GetRelativePoints@GestureHandler@@AEAA-AV-$tuple@UtagPOINT@@U1@U1@@std@@AEBUGestureClient@1@Uta.c)
 *     ?CASGestureState@GestureHandler@@AEAA?AW4GestureOperationState@@W42@@Z @ 0x180095948 (-CASGestureState@GestureHandler@@AEAA-AW4GestureOperationState@@W42@@Z.c)
 *     ?GestureEnded@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x1801468F0 (-GestureEnded@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Wind.c)
 *     ?GestureStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2I22@Z @ 0x180146A34 (-GestureStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Wi.c)
 *     ?SendAnimationEndedIfNeeded@GestureHandler@@AEAAXXZ @ 0x180146D34 (-SendAnimationEndedIfNeeded@GestureHandler@@AEAAXXZ.c)
 *     ?GetInputType@PointerManipulationHelper@@SA?AW4InputType@Input@Internal@UI@Windows@@W42@@Z @ 0x1801A0970 (-GetInputType@PointerManipulationHelper@@SA-AW4InputType@Input@Internal@UI@Windows@@W42@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GestureHandler::ProcessGesture(__int64 a1, _QWORD *a2, int a3, unsigned int a4)
{
  int v5; // ebx
  int v8; // eax
  int v9; // r9d
  __int64 v11; // rax
  bool v12; // al
  __int64 *v13; // r12
  __int64 v14; // rcx
  void (__fastcall *v15)(__int64, _QWORD, _BYTE *, _BYTE *, std::_Ref_count_base **, _QWORD *, _QWORD, __int64, _QWORD); // rax
  int InputType; // eax
  __int64 v17; // r10
  __int64 v18; // r11
  __int64 v19; // rsi
  void (__fastcall *v20)(__int64, _QWORD, _BYTE *, _BYTE *, std::_Ref_count_base **, _QWORD *, _QWORD, __int64, _QWORD, __int64, __int64, __int64, int); // rdi
  int v21; // r10d
  __int64 v22; // r11
  __int64 *CompletedCallback; // rax
  int v24; // [rsp+28h] [rbp-49h]
  __int64 v25; // [rsp+40h] [rbp-31h]
  __int64 v26; // [rsp+40h] [rbp-31h]
  __int64 v27; // [rsp+50h] [rbp-21h]
  __int64 v28; // [rsp+58h] [rbp-19h]
  std::_Ref_count_base *v29[2]; // [rsp+78h] [rbp+7h] BYREF
  _BYTE v30[8]; // [rsp+88h] [rbp+17h] BYREF
  std::_Ref_count_base *v31; // [rsp+90h] [rbp+1Fh] BYREF
  _BYTE v32[16]; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v5 = a3;
  v8 = GestureHandler::CASGestureState(a1, a4);
  if ( v8 != 3 )
  {
    if ( v8 == 4 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\"
                      "gesturehandler.cpp",
        (const char *)0x80004004LL,
        v24);
      return 2147500036LL;
    }
    v11 = *a2 - *(_QWORD *)(a1 + 152);
    if ( *a2 == *(_QWORD *)(a1 + 152) )
    {
      v11 = a2[1] - *(_QWORD *)(a1 + 160);
      if ( !v11 )
        v11 = a2[2] - *(_QWORD *)(a1 + 168);
    }
    v12 = v11 != 0;
    *(_OWORD *)(a1 + 152) = *(_OWORD *)a2;
    *(_QWORD *)(a1 + 168) = a2[2];
    *(_DWORD *)(a1 + 176) = v5;
    if ( a4 != 2 || v12 )
      GestureHandler::FeedAnimationDataIfNeeded((GestureHandler *)a1, v9 == 3);
    v13 = *(__int64 **)(a1 + 112);
    v29[0] = *(std::_Ref_count_base **)(a1 + 120);
    if ( v13 != (__int64 *)v29[0] )
    {
      while ( 1 )
      {
        GestureHandler::GetRelativePoints(a1, v30, v13, *a2);
        if ( a4 == 1 )
        {
          InputType = PointerManipulationHelper::GetInputType(*(unsigned int *)(a1 + 140));
          InputETW::InputGesture::GestureStarted(
            *(_QWORD *)(a1 + 24),
            *(unsigned int *)(a1 + 136),
            v32,
            v30,
            &v31,
            *(_QWORD *)(a1 + 184),
            v5,
            *(_QWORD *)(a1 + 192),
            InputType,
            v18,
            v17);
          v19 = v13[1];
          v20 = *(void (__fastcall **)(__int64, _QWORD, _BYTE *, _BYTE *, std::_Ref_count_base **, _QWORD *, _QWORD, __int64, _QWORD, __int64, __int64, __int64, int))(*(_QWORD *)(v19 + 8) + 24LL);
          v28 = *v13;
          LODWORD(v27) = PointerManipulationHelper::GetInputType(*(unsigned int *)(a1 + 140));
          v5 = a3;
          LODWORD(v26) = a3;
          v20(
            v19 + 8,
            *(unsigned int *)(a1 + 136),
            v32,
            v30,
            &v31,
            a2,
            *(_QWORD *)(a1 + 184),
            v26,
            *(_QWORD *)(a1 + 192),
            v27,
            v28,
            v22,
            v21);
          goto LABEL_19;
        }
        if ( a4 == 2 )
          break;
        if ( a4 == 3 )
        {
          InputETW::InputGesture::GestureEnded(
            *(_QWORD *)(a1 + 24),
            *(unsigned int *)(a1 + 136),
            v32,
            v30,
            &v31,
            *(_QWORD *)(a1 + 184),
            v5,
            *(_QWORD *)(a1 + 192));
          v14 = v13[1] + 8;
          v15 = *(void (__fastcall **)(__int64, _QWORD, _BYTE *, _BYTE *, std::_Ref_count_base **, _QWORD *, _QWORD, __int64, _QWORD))(*(_QWORD *)v14 + 40LL);
LABEL_15:
          LODWORD(v25) = v5;
          v15(v14, *(unsigned int *)(a1 + 136), v32, v30, &v31, a2, *(_QWORD *)(a1 + 184), v25, *(_QWORD *)(a1 + 192));
        }
LABEL_19:
        v13 += 5;
        if ( v13 == (__int64 *)v29[0] )
          goto LABEL_20;
      }
      InputETW::InputGesture::GestureInProgress(
        *(_QWORD *)(a1 + 24),
        *(unsigned int *)(a1 + 136),
        v32,
        v30,
        &v31,
        *(_QWORD *)(a1 + 184),
        v5,
        *(_QWORD *)(a1 + 192));
      if ( *(_DWORD *)(a1 + 16) == 2 )
        goto LABEL_19;
      v14 = v13[1] + 8;
      v15 = *(void (__fastcall **)(__int64, _QWORD, _BYTE *, _BYTE *, std::_Ref_count_base **, _QWORD *, _QWORD, __int64, _QWORD))(*(_QWORD *)v14 + 32LL);
      goto LABEL_15;
    }
LABEL_20:
    *(_OWORD *)v29 = 0LL;
    if ( a4 == 3 )
    {
      CompletedCallback = (__int64 *)GestureHandler::MakeCompletedCallback(a1, v30, 0LL);
      std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
        v29,
        CompletedCallback);
      if ( v31 )
        std::_Ref_count_base::_Decref(v31);
      if ( !*(_BYTE *)(a1 + 240) || !*(_DWORD *)(a1 + 228) && !*(_DWORD *)(a1 + 232) && !*(_DWORD *)(a1 + 236) )
      {
        GestureHandler::SendAnimationEndedIfNeeded((GestureHandler *)a1);
        if ( !*(_DWORD *)(a1 + 228) && !*(_DWORD *)(a1 + 232) && !*(_DWORD *)(a1 + 236) )
          GestureHandler::CleanupAnimationDataIfNeeded((GestureHandler *)a1);
      }
      *(_DWORD *)(a1 + 136) = 0;
    }
    if ( v29[1] )
      std::_Ref_count_base::_Decref(v29[1]);
  }
  return 0LL;
}
