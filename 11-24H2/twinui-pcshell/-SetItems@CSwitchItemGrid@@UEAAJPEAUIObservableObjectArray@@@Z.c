/*
 * XREFs of ?SetItems@CSwitchItemGrid@@UEAAJPEAUIObservableObjectArray@@@Z @ 0x1804C9600
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister_0 @ 0x1802A4034 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_1802A4034.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChanged__anonymous_namespace_::ObservableObjectArrayEventRegistration_::Register @ 0x1804B5B84 (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArrayChanged__an.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Register @ 0x1804B5C54 (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArr_ea_1804B5C54.c)
 *     ??0BatchLayout@CSwitchItemGrid@@QEAA@PEAV1@@Z @ 0x1804C77C4 (--0BatchLayout@CSwitchItemGrid@@QEAA@PEAV1@@Z.c)
 *     ??1BatchLayout@CSwitchItemGrid@@QEAA@XZ @ 0x1804C7948 (--1BatchLayout@CSwitchItemGrid@@QEAA@XZ.c)
 *     ?_AddElementForObject@CSwitchItemGrid@@AEAAJPEAUIUnknown@@@Z @ 0x1804C98FC (-_AddElementForObject@CSwitchItemGrid@@AEAAJPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CSwitchItemGrid::SetItems(CSwitchItemGrid *this, struct IObservableObjectArray *a2)
{
  CSwitchItemGrid *v4; // rbx
  _QWORD *v5; // r15
  _QWORD *v6; // r12
  int v7; // eax
  unsigned int v8; // edi
  unsigned int i; // r14d
  __int64 (__fastcall *v10)(struct IObservableObjectArray *, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v11; // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  unsigned int v18; // [rsp+80h] [rbp+40h] BYREF
  struct IUnknown *v19; // [rsp+88h] [rbp+48h] BYREF
  char v20; // [rsp+90h] [rbp+50h] BYREF

  v4 = (CSwitchItemGrid *)((char *)this - 208);
  CSwitchItemGrid::BatchLayout::BatchLayout(
    (CSwitchItemGrid::BatchLayout *)&v20,
    (CSwitchItemGrid *)((char *)this - 208));
  (*(void (__fastcall **)(CSwitchItemGrid *))(*(_QWORD *)v4 + 80LL))(v4);
  v5 = (_QWORD *)((char *)this + 680);
  EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister_0((__int64)this + 680);
  v6 = (_QWORD *)((char *)this + 696);
  EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister_0((__int64)this + 696);
  if ( !a2 )
    goto LABEL_15;
  v18 = 0;
  v7 = (*(__int64 (__fastcall **)(struct IObservableObjectArray *, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v18);
  v8 = v7;
  if ( v7 >= 0 )
  {
    for ( i = 0; i < v18; ++i )
    {
      v19 = 0LL;
      v10 = *(__int64 (__fastcall **)(struct IObservableObjectArray *, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
      v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v19);
      v12 = v10(a2, i, &GUID_00000000_0000_0000_c000_000000000046, v11);
      v8 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AA,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
        (*(void (__fastcall **)(CSwitchItemGrid *))(*(_QWORD *)v4 + 80LL))(v4);
        goto LABEL_16;
      }
      v13 = CSwitchItemGrid::_AddElementForObject(v4, v19);
      v8 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AB,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
          (const char *)(unsigned int)v13);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
        (*(void (__fastcall **)(CSwitchItemGrid *))(*(_QWORD *)v4 + 80LL))(v4);
        goto LABEL_16;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
    }
    v14 = EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChanged__anonymous_namespace_::ObservableObjectArrayEventRegistration_::Register(
            v5,
            (__int64)a2);
    v8 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AF,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
        (const char *)(unsigned int)v14);
      (*(void (__fastcall **)(CSwitchItemGrid *))(*(_QWORD *)v4 + 80LL))(v4);
      goto LABEL_16;
    }
    v15 = EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Register(
            v6,
            (__int64)a2);
    v8 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B0,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
        (const char *)(unsigned int)v15);
      (*(void (__fastcall **)(CSwitchItemGrid *))(*(_QWORD *)v4 + 80LL))(v4);
      goto LABEL_16;
    }
LABEL_15:
    v8 = 0;
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x19F,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
    (const char *)(unsigned int)v7);
LABEL_16:
  CSwitchItemGrid::BatchLayout::~BatchLayout((CSwitchItemGrid::BatchLayout *)&v20);
  return v8;
}
