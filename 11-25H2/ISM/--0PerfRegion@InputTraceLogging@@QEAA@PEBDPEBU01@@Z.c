/*
 * XREFs of ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x18001A740
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE_const___::_Do_call @ 0x18000CD80 (std--_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_.c)
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180016B70 (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuf.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x180019880 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x180019FE0 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18001F350 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_0c5ce8ae284f99017ef76f49f6fd125b__void__MIT_INPUT_INTEROP_MESSAGE_const___::_Do_call @ 0x18002F4A0 (std--_Func_impl_no_alloc__lambda_0c5ce8ae284f99017ef76f49f6fd125b__void__MIT_INPUT_INTEROP_MESSA.c)
 *     std::_Func_impl_no_alloc__lambda_17650820b92cc5e02da2ea4d610b12cf__void__MIT_INPUT_INTEROP_MESSAGE_const___::_Do_call @ 0x18002F510 (std--_Func_impl_no_alloc__lambda_17650820b92cc5e02da2ea4d610b12cf__void__MIT_INPUT_INTEROP_MESSA.c)
 *     ?ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x18002F580 (-ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_94fff237e78348d233dedf47fc0a83da__void__MIT_MOUSE_INPUT_MESSAGE_const___::_Do_call @ 0x180036810 (std--_Func_impl_no_alloc__lambda_94fff237e78348d233dedf47fc0a83da__void__MIT_MOUSE_INPUT_MESSAGE.c)
 *     std::_Func_impl_no_alloc__lambda_6a5191454e116649e14e82c7628f104b__void_MIT_INPUTSTREAM_ENDED_MESSAGE_const___::_Do_call @ 0x18003C670 (std--_Func_impl_no_alloc__lambda_6a5191454e116649e14e82c7628f104b__void_MIT_INPUTSTREAM_ENDED_ME.c)
 *     _lambda_2b41a082a50d31d24644deaedcc451d5_::operator() @ 0x1800507DC (_lambda_2b41a082a50d31d24644deaedcc451d5_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_1b0efb71d9072eeea077d490cef5cfbb__void__MIT_KEYBOARD_INPUT_MESSAGE_const___::_Do_call @ 0x180050B70 (std--_Func_impl_no_alloc__lambda_1b0efb71d9072eeea077d490cef5cfbb__void__MIT_KEYBOARD_INPUT_MESS.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800631B0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@CAJPEAX0H@Z @ 0x180063460 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@CA.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x180063920 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@CAJPEAX0H@Z @ 0x180067F00 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@CAJPEAX0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@UMIT_INPUTSTREAM_ENDED_MESSAGE@@@@CAJPEAX0H@Z @ 0x18006A6D0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@UMIT_INPUTSTREAM_ENDED_MESSAGE@@@@CAJPEAX0H@.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_BASE_INPUT_OBSERVER_PACKET@@@@CAJPEAX0H@Z @ 0x18006AE60 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_BASE_INPUT_OBSERVER_PACKET@@@@CAJPEAX0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_tagActivationObjectNotification@@@@CAJPEAX0H@Z @ 0x18006F300 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_tagActivationObjectNotification@@@@CAJPEAX.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@CAJPEAX0H@Z @ 0x180075F40 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@CAJ.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@@CAJPEAX0H@Z @ 0x180078140 (-s_OnKernelInputEventStatic@-$KernelInputConnection@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@@CA.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@CAJPEAX0H@Z @ 0x18007A740 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x18007EAD0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@CAJPEAX0H@.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800829F0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     _lambda_ee4fb4173948ca8af83f1cabbba8acb3_::operator() @ 0x1800EE8A8 (_lambda_ee4fb4173948ca8af83f1cabbba8acb3_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_0b43dcba005307e576499f17bf900980__void__MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE_const___::_Do_call @ 0x1800F09A0 (std--_Func_impl_no_alloc__lambda_0b43dcba005307e576499f17bf900980__void__MIT_KEYBOA_ea_1800F09A0.c)
 *     std::_Func_impl_no_alloc__lambda_145caab31ed3cbc704d97efc64b5cbb5__void__MIT_HOTKEY_REGISTRATION_MESSAGE_const___::_Do_call @ 0x1800F0A60 (std--_Func_impl_no_alloc__lambda_145caab31ed3cbc704d97efc64b5cbb5__void__MIT_HOTKEY_ea_1800F0A60.c)
 *     std::_Func_impl_no_alloc__lambda_9505533670deb393e9e7bf932fb2c1e9__void__MIT_ACCESSIBILITY_TIMER_const___::_Do_call @ 0x1800F0B30 (std--_Func_impl_no_alloc__lambda_9505533670deb393e9e7bf932fb2c1e9__void__MIT_ACCESS_ea_1800F0B30.c)
 *     std::_Func_impl_no_alloc__lambda_98aaeec04a7dfe8bb0f5f2f107a502d3__void__MIT_PTP_INTEROP_MESSAGE_const___::_Do_call @ 0x1800F0BA0 (std--_Func_impl_no_alloc__lambda_98aaeec04a7dfe8bb0f5f2f107a502d3__void__MIT_PTP_IN_ea_1800F0BA0.c)
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1800F1270 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@CAJPEAX0H@Z @ 0x1800F1320 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800F13E0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@CA.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_PTP_INTEROP_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800F14A0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_PTP_INTEROP_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800F1560 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@UtagQMSGINPUTREPORT@@@@CAJPEAX0H@Z @ 0x18015D360 (-s_OnKernelInputEventStatic@-$KernelInputConnection@UtagQMSGINPUTREPORT@@@@CAJPEAX0H@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x180001330 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AA20 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

InputTraceLogging::PerfRegion *__fastcall InputTraceLogging::PerfRegion::PerfRegion(
        InputTraceLogging::PerfRegion *this,
        const char *a2,
        const struct InputTraceLogging::PerfRegion *a3)
{
  _OWORD *v3; // rax
  __int128 v5; // xmm0
  const struct _tlgProvider_t *v6; // rax
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r9
  const unsigned __int16 *v10; // [rsp+40h] [rbp+8h] BYREF

  *(_BYTE *)this = 0;
  *((_QWORD *)this + 1) = a2;
  v3 = (_OWORD *)((char *)this + 32);
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  if ( a3 )
  {
    v5 = *((_OWORD *)a3 + 1);
    *((_QWORD *)this + 6) = v3;
    *v3 = v5;
  }
  v6 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v6 > 6u && (*((_BYTE *)v6 + 16) & 1) != 0 && (*((_QWORD *)v6 + 3) & 1LL) == *((_QWORD *)v6 + 3) )
  {
    *(_BYTE *)this = 1;
    EventActivityIdControl(3u, (LPGUID)this + 1);
    v8 = InputTraceLogging::Provider();
    if ( *(_DWORD *)v8 > 6u && (*((_BYTE *)v8 + 16) & 1) != 0 && (*((_QWORD *)v8 + 3) & 1LL) == *((_QWORD *)v8 + 3) )
    {
      v9 = *((_QWORD *)this + 6);
      v10 = (const unsigned __int16 *)*((_QWORD *)this + 1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (__int64)v8,
        (__int64)&unk_180206023,
        (__int64)this + 16,
        v9,
        &v10);
    }
  }
  return this;
}
