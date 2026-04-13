/*
 * XREFs of _lambda_929976d9f769b9ae6bfa1e1f0592e0ca_::operator() @ 0x18004CC48
 * Callers:
 *     ContentManagement::ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___ @ 0x180045C70 (ContentManagement--ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___.c)
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180004780 (-_Xbad_function_call@std@@YAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003D88C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@QEAA@XZ @ 0x18004C3D4 (--1-$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Window.c)
 *     ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x18004DBB4 (-AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z.c)
 *     ?IsHighPriorityEvent@ContentManagement@@YA_NPEBG@Z @ 0x180053568 (-IsHighPriorityEvent@ContentManagement@@YA_NPEBG@Z.c)
 *     ?ResolveEventNotificationHandlerFromType@ContentManagement@@YA?AV?$function@$$A6AJXZ@std@@W4EventNotificationType@1@@Z @ 0x1800567B0 (-ResolveEventNotificationHandlerFromType@ContentManagement@@YA-AV-$function@$$A6AJXZ@std@@W4Even.c)
 *     ?_Tidy@?$_Func_class@_NAEAVPropertySetHelper@Triggers@CreativeFramework@@U_Nil@std@@U45@U45@U45@U45@U45@@std@@IEAAXXZ @ 0x18005B7D0 (-_Tidy@-$_Func_class@_NAEAVPropertySetHelper@Triggers@CreativeFramework@@U_Nil@std@@U45@U45@U45@.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall lambda_929976d9f769b9ae6bfa1e1f0592e0ca_::operator()(__int64 a1, unsigned int a2)
{
  HSTRING *v4; // r15
  unsigned int StringRawBuffer; // edi
  const unsigned __int16 *v6; // rbx
  CreativeFramework::CreativeEventStore *v7; // rax
  int v8; // eax
  ContentManagement *v9; // rax
  const unsigned __int16 *v10; // rdx
  _QWORD *v11; // rdi
  char v12; // bl
  _QWORD *v13; // rcx
  int v14; // eax
  const unsigned __int16 *v16; // [rsp+20h] [rbp-39h]
  int v17; // [rsp+20h] [rbp-39h]
  _BYTE v18[24]; // [rsp+28h] [rbp-31h] BYREF
  __int64 v19; // [rsp+40h] [rbp-19h]
  _QWORD v20[4]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v21[32]; // [rsp+68h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  LODWORD(v16) = 0;
  v4 = *(HSTRING **)(a1 + 16);
  StringRawBuffer = (unsigned int)WindowsGetStringRawBuffer(*v4, 0LL);
  v6 = WindowsGetStringRawBuffer(**(HSTRING **)(a1 + 8), 0LL);
  v7 = (CreativeFramework::CreativeEventStore *)WindowsGetStringRawBuffer(**(HSTRING **)a1, 0LL);
  v8 = CreativeFramework::CreativeEventStore::AddCreativeEventToEventStore(
         v7,
         v6,
         (const unsigned __int16 *)a2,
         StringRawBuffer,
         v16);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x209,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v8,
      v17);
  v9 = (ContentManagement *)WindowsGetStringRawBuffer(*v4, 0LL);
  if ( ContentManagement::IsHighPriorityEvent(v9, v10) )
  {
    v20[0] = &std::_Func_impl<std::_Callable_fun<long (*const)(void),0>,std::allocator<std::_Func_class<long,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,long,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
    v20[1] = ContentManagement::BatterySaverOverrideEventNotificationHandler;
    v20[3] = v20;
    v11 = v20;
    v12 = 1;
  }
  else
  {
    v11 = (_QWORD *)ContentManagement::ResolveEventNotificationHandlerFromType(v21, **(unsigned int **)(a1 + 24));
    v12 = 2;
  }
  v19 = 0LL;
  v13 = (_QWORD *)v11[3];
  if ( v13 )
  {
    if ( v13 == v11 )
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v13 + 8LL))(v13, v18);
      std::_Func_class<bool,CreativeFramework::Triggers::PropertySetHelper &,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Tidy(v11);
    }
    else
    {
      v19 = v11[3];
      v11[3] = 0LL;
    }
  }
  else
  {
    v19 = 0LL;
  }
  if ( (v12 & 2) != 0 )
  {
    v12 &= ~2u;
    std::function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>((__int64)v21);
  }
  if ( (v12 & 1) != 0 )
    std::function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>((__int64)v20);
  if ( !v19 )
    std::_Xbad_function_call();
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x20B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v14);
  std::function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>((__int64)v18);
  return 0LL;
}
