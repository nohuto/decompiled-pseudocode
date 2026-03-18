/*
 * XREFs of ?Initialize@USB4_POWERON_WORK_QUEUE@@QEAAJXZ @ 0x140270E54
 * Callers:
 *     ?_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ @ 0x14026D8D8 (-_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140055B90 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x140060F7C (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@de.c)
 */

__int64 __fastcall USB4_POWERON_WORK_QUEUE::Initialize(USB4_POWERON_WORK_QUEUE *this)
{
  void **v1; // r14
  NTSTATUS v3; // eax
  __int64 v4; // rsi
  const wchar_t *v5; // r9
  void *v7; // rcx
  NTSTATUS v8; // eax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-48h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+8h] BYREF

  v1 = (void **)((char *)this + 96);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (void **)this + 12,
    0LL);
  v3 = ZwCreateEvent(v1, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  v4 = v3;
  if ( v3 < 0 )
  {
    WdLogSingleEntry1(2LL, v3);
    v5 = L"Failed to create event, status 0x%I64";
    WdLogGlobalForLineNumber = 59;
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v5, v4, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v4;
  }
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
    (DxgkCompositionObject **)this + 11,
    0LL);
  v7 = *v1;
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(v7, 2u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  *((_QWORD *)this + 11) = Object;
  v4 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry1(2LL, v8);
    v5 = L"Failed to get event pointer, status 0x%I64";
    WdLogGlobalForLineNumber = 67;
    goto LABEL_3;
  }
  *((_BYTE *)this + 80) = 1;
  return 0LL;
}
