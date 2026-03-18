/*
 * XREFs of ?GetUsb4PowerFlushEvent@USB4_POWERON_WORK_QUEUE@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_KEVENT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x140277E70
 * Callers:
 *     ?MonitorGetUsb4PowerFlushEvent@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_KEVENT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x14026E978 (-MonitorGetUsb4PowerFlushEvent@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_KE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x14002FE7C (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x140034CD4 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14003DDA0 (--1-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@deta.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x140061834 (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@de.c)
 */

DxgkCompositionObject **__fastcall USB4_POWERON_WORK_QUEUE::GetUsb4PowerFlushEvent(
        __int64 a1,
        DxgkCompositionObject **a2)
{
  DxgkCompositionObject *v4; // rdx
  DxgkCompositionObject *v5; // rax
  DxgkCompositionObject *v7; // [rsp+60h] [rbp+8h] BYREF
  char v8; // [rsp+70h] [rbp+18h] BYREF

  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v8, (struct DXGFASTMUTEX *)(a1 + 8));
  if ( *(_BYTE *)(a1 + 80) )
  {
    if ( *(_DWORD *)a1 )
    {
      ObfReferenceObject(*(PVOID *)(a1 + 88));
      v4 = *(DxgkCompositionObject **)(a1 + 88);
      v7 = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
        &v7,
        v4);
      v5 = v7;
      v7 = 0LL;
      *a2 = v5;
      wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>(&v7);
      goto LABEL_6;
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 127;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"USB4_POWERON_WORK_QUEUE not initalized",
      127LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *a2 = 0LL;
LABEL_6:
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v8);
  return a2;
}
