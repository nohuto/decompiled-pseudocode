/*
 * XREFs of ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x18001A540
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE_const___::_Do_call @ 0x18000D4E0 (std--_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_.c)
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180017140 (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuf.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x180019E50 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x18001A5B0 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18001F920 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_0c5ce8ae284f99017ef76f49f6fd125b__void__MIT_INPUT_INTEROP_MESSAGE_const___::_Do_call @ 0x18002FA60 (std--_Func_impl_no_alloc__lambda_0c5ce8ae284f99017ef76f49f6fd125b__void__MIT_INPUT_INTEROP_MESSA.c)
 *     std::_Func_impl_no_alloc__lambda_17650820b92cc5e02da2ea4d610b12cf__void__MIT_INPUT_INTEROP_MESSAGE_const___::_Do_call @ 0x18002FAD0 (std--_Func_impl_no_alloc__lambda_17650820b92cc5e02da2ea4d610b12cf__void__MIT_INPUT_INTEROP_MESSA.c)
 *     ?ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x18002FB40 (-ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_94fff237e78348d233dedf47fc0a83da__void__MIT_MOUSE_INPUT_MESSAGE_const___::_Do_call @ 0x1800332A0 (std--_Func_impl_no_alloc__lambda_94fff237e78348d233dedf47fc0a83da__void__MIT_MOUSE_INPUT_MESSAGE.c)
 *     std::_Func_impl_no_alloc__lambda_6a5191454e116649e14e82c7628f104b__void_MIT_INPUTSTREAM_ENDED_MESSAGE_const___::_Do_call @ 0x180039100 (std--_Func_impl_no_alloc__lambda_6a5191454e116649e14e82c7628f104b__void_MIT_INPUTSTREAM_ENDED_ME.c)
 *     std::_Func_impl_no_alloc__lambda_1b0efb71d9072eeea077d490cef5cfbb__void__MIT_KEYBOARD_INPUT_MESSAGE_const___::_Do_call @ 0x18004CE80 (std--_Func_impl_no_alloc__lambda_1b0efb71d9072eeea077d490cef5cfbb__void__MIT_KEYBOARD_INPUT_MESS.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800635F0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800638A0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@CA.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x180063D60 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@CAJPEAX0H@Z @ 0x180067CF0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@CAJPEAX0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@UMIT_INPUTSTREAM_ENDED_MESSAGE@@@@CAJPEAX0H@Z @ 0x18006A520 (-s_OnKernelInputEventStatic@-$KernelInputConnection@UMIT_INPUTSTREAM_ENDED_MESSAGE@@@@CAJPEAX0H@.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_BASE_INPUT_OBSERVER_PACKET@@@@CAJPEAX0H@Z @ 0x18006AC90 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_BASE_INPUT_OBSERVER_PACKET@@@@CAJPEAX0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_tagActivationObjectNotification@@@@CAJPEAX0H@Z @ 0x18006F030 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_tagActivationObjectNotification@@@@CAJPEAX.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@CAJPEAX0H@Z @ 0x180075C80 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@CAJ.c)
 *     std::_Func_impl_no_alloc__lambda_2b41a082a50d31d24644deaedcc451d5__void__MIT_PNP_DEVICE_NOTIFICATION_MESSAGE_const___::_Do_call @ 0x180076730 (std--_Func_impl_no_alloc__lambda_2b41a082a50d31d24644deaedcc451d5__void__MIT_PNP_DEVICE_NOTIFICA.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@@CAJPEAX0H@Z @ 0x180077DE0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@@CA.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@CAJPEAX0H@Z @ 0x18007A230 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x18007E900 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@CAJPEAX0H@.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x180082A10 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     _lambda_ee4fb4173948ca8af83f1cabbba8acb3_::operator() @ 0x1800EFB64 (_lambda_ee4fb4173948ca8af83f1cabbba8acb3_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_0b43dcba005307e576499f17bf900980__void__MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE_const___::_Do_call @ 0x1800F24D0 (std--_Func_impl_no_alloc__lambda_0b43dcba005307e576499f17bf900980__void__MIT_KEYBOA_ea_1800F24D0.c)
 *     std::_Func_impl_no_alloc__lambda_114e43d0f2b3355c45e38d94700236e9__void__MIT_HAPTIC_NOTIFICATION_MESSAGE_const___::_Do_call @ 0x1800F2590 (std--_Func_impl_no_alloc__lambda_114e43d0f2b3355c45e38d94700236e9__void__MIT_HAPTIC_ea_1800F2590.c)
 *     std::_Func_impl_no_alloc__lambda_145caab31ed3cbc704d97efc64b5cbb5__void__MIT_HOTKEY_REGISTRATION_MESSAGE_const___::_Do_call @ 0x1800F25F0 (std--_Func_impl_no_alloc__lambda_145caab31ed3cbc704d97efc64b5cbb5__void__MIT_HOTKEY_ea_1800F25F0.c)
 *     std::_Func_impl_no_alloc__lambda_9505533670deb393e9e7bf932fb2c1e9__void__MIT_ACCESSIBILITY_TIMER_const___::_Do_call @ 0x1800F26C0 (std--_Func_impl_no_alloc__lambda_9505533670deb393e9e7bf932fb2c1e9__void__MIT_ACCESS_ea_1800F26C0.c)
 *     std::_Func_impl_no_alloc__lambda_98aaeec04a7dfe8bb0f5f2f107a502d3__void__MIT_PTP_INTEROP_MESSAGE_const___::_Do_call @ 0x1800F2730 (std--_Func_impl_no_alloc__lambda_98aaeec04a7dfe8bb0f5f2f107a502d3__void__MIT_PTP_IN_ea_1800F2730.c)
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1800F2E80 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@CAJPEAX0H@Z @ 0x1800F2F30 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_HAPTIC_NOTIFICATION_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800F2FF0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_HAPTIC_NOTIFICATION_MESSAGE@@@@CAJPEAX.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800F30B0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@CA.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_PTP_INTEROP_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800F3170 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_PTP_INTEROP_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800F3230 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@UtagQMSGINPUTREPORT@@@@CAJPEAX0H@Z @ 0x18015E190 (-s_OnKernelInputEventStatic@-$KernelInputConnection@UtagQMSGINPUTREPORT@@@@CAJPEAX0H@Z.c)
 *     _Win32kInterop::s_DeviceNotificationsCallback_::_1_::dtor$1 @ 0x1801CF4BC (_Win32kInterop--s_DeviceNotificationsCallback_--_1_--dtor$1.c)
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$0 @ 0x1801CFEBA (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$0.c)
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$5 @ 0x1801CFEDE (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$5.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$0 @ 0x1801D0120 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$0.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$0 @ 0x1801D01C0 (_ContextualProcessorManager--OnHitTest_--_1_--dtor$0.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$7 @ 0x1801D0200 (_ContextualProcessorManager--OnHitTest_--_1_--dtor$7.c)
 *     _KernelInputConnection__MIT_POINTER_INPUT_DOWN_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x1801D2CBB (_KernelInputConnection__MIT_POINTER_INPUT_DOWN_MESSAGE_--s_OnKernelInputEventStatic_--_1_--dtor$.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x180001330 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AFF0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::PerfRegion::~PerfRegion(InputTraceLogging::PerfRegion *this)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r8
  __int64 v4; // r10
  __int64 v5; // r9
  const unsigned __int16 *v6; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_BYTE *)this )
  {
    v2 = InputTraceLogging::Provider();
    if ( *(_DWORD *)v2 > 6u )
    {
      if ( (unsigned __int8)tlgKeywordOn(v2, 1LL, v3) )
      {
        v5 = *((_QWORD *)this + 6);
        v6 = (const unsigned __int16 *)*((_QWORD *)this + 1);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          v4,
          (__int64)&unk_18020F40B,
          (__int64)this + 16,
          v5,
          &v6);
      }
    }
  }
}
