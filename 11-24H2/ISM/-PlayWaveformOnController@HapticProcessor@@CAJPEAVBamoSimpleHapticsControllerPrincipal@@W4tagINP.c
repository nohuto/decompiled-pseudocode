/*
 * XREFs of ?PlayWaveformOnController@HapticProcessor@@CAJPEAVBamoSimpleHapticsControllerPrincipal@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@IIAEBUtagINPUT_HAPTIC_SETTINGS@@@Z @ 0x1800C9B14
 * Callers:
 *     ?ProcessHapticNotificationMessage@HapticProcessor@@SAJPEBU_MIT_HAPTIC_NOTIFICATION_MESSAGE@@@Z @ 0x1800C9D04 (-ProcessHapticNotificationMessage@HapticProcessor@@SAJPEBU_MIT_HAPTIC_NOTIFICATION_MESSAGE@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1800C8010 (--0-$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEA.c)
 *     ?FailedToFindWaveformAndFallback@SystemOriginated@Haptics@InputTraceLogging@@SAXKK@Z @ 0x1800C82E8 (-FailedToFindWaveformAndFallback@SystemOriginated@Haptics@InputTraceLogging@@SAXKK@Z.c)
 *     ?GetItemAt@?$ListPrincipalDetails@USimpleHapticsControllerFeedback@@VBamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@3@VBamoList_SimpleHapticsControllerFeedback_Stub@3456@$0A@$00$0A@@Bamo@Microsoft@@QEAAAEBUSimpleHapticsControllerFeedback@@I@Z @ 0x1800C9574 (-GetItemAt@-$ListPrincipalDetails@USimpleHapticsControllerFeedback@@VBamoList_SimpleHapticsContr.c)
 *     ?InvokeSendHapticFeedbackForPlayCount@HapticProcessor@@CAJPEAVBamoSimpleHapticsControllerPrincipal@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@GAEBUtagINPUT_HAPTIC_SETTINGS@@II@Z @ 0x1800C9650 (-InvokeSendHapticFeedbackForPlayCount@HapticProcessor@@CAJPEAVBamoSimpleHapticsControllerPrincip.c)
 *     ?PlayWaveformOnController@SystemOriginated@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@PEBGK@Z @ 0x1800C9C74 (-PlayWaveformOnController@SystemOriginated@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVI.c)
 *     ?WaveformFallback@SystemOriginated@Haptics@InputTraceLogging@@SAXKK@Z @ 0x1800CAB18 (-WaveformFallback@SystemOriginated@Haptics@InputTraceLogging@@SAXKK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HapticProcessor::PlayWaveformOnController(
        struct BamoSimpleHapticsControllerPrincipal *a1,
        enum tagINPUT_MESSAGE_DEVICE_TYPE a2,
        unsigned int a3,
        unsigned int a4,
        const struct tagINPUT_HAPTIC_SETTINGS *a5)
{
  char *v9; // rbx
  const unsigned __int16 *v10; // rax
  void (__fastcall ***v11)(_QWORD); // rax
  _QWORD *v12; // rbx
  __int64 v13; // r12
  unsigned int v14; // esi
  unsigned int v15; // edi
  unsigned __int16 *ItemAt; // rax
  unsigned int v17; // edx
  unsigned int v18; // eax
  unsigned __int16 *v19; // rax
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v25; // [rsp+60h] [rbp+8h] BYREF

  v9 = (char *)a1 + 8;
  v10 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a1 + 1) + 40LL))((char *)a1 + 8);
  InputTraceLogging::Haptics::SystemOriginated::PlayWaveformOnController(a2, v10, a3);
  v11 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v9 + 56LL))(v9);
  wil::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>(
    &v25,
    v11);
  v12 = v25;
  v13 = (__int64)(v25[8] - v25[7]) >> 3;
  v14 = -1;
  v15 = 0;
  if ( (_DWORD)v13 )
  {
    while ( 1 )
    {
      ItemAt = (unsigned __int16 *)Microsoft::Bamo::ListPrincipalDetails<SimpleHapticsControllerFeedback,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Stub,0,1,0>::GetItemAt(
                                     v12,
                                     v15);
      v17 = WORD1(*(_QWORD *)ItemAt);
      if ( v17 == a3 )
        break;
      v18 = v15;
      if ( v17 != a4 )
        v18 = v14;
      v14 = v18;
      if ( ++v15 >= (unsigned int)v13 )
      {
        if ( v18 == -1 )
          goto LABEL_12;
        InputTraceLogging::Haptics::SystemOriginated::WaveformFallback(a3, a4);
        v19 = (unsigned __int16 *)Microsoft::Bamo::ListPrincipalDetails<SimpleHapticsControllerFeedback,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Stub,0,1,0>::GetItemAt(
                                    v12,
                                    v14);
        v20 = HapticProcessor::InvokeSendHapticFeedbackForPlayCount(a1, a2, *v19, a5);
        v21 = v20;
        if ( v20 < 0 )
        {
          v22 = 338LL;
LABEL_9:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v22,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\processor\\lib\\hapticprocessor.cpp",
            (const char *)(unsigned int)v20);
          goto LABEL_14;
        }
        goto LABEL_13;
      }
    }
    v20 = HapticProcessor::InvokeSendHapticFeedbackForPlayCount(a1, a2, *ItemAt, a5);
    v21 = v20;
    if ( v20 < 0 )
    {
      v22 = 316LL;
      goto LABEL_9;
    }
  }
  else
  {
LABEL_12:
    InputTraceLogging::Haptics::SystemOriginated::FailedToFindWaveformAndFallback(a3, a4);
  }
LABEL_13:
  v21 = 0;
LABEL_14:
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v25);
  return v21;
}
