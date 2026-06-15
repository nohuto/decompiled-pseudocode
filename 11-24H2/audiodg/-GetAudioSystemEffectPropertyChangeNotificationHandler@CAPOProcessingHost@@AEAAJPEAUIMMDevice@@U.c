/*
 * XREFs of ?GetAudioSystemEffectPropertyChangeNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@U_GUID@@PEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x140017188
 * Callers:
 *     ?AddAudioSystemEffectsPropertyStoreNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_SYSTEMEFFECTS_PROPERTY_CHANGE_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x140017090 (-AddAudioSystemEffectsPropertyStoreNotificationClient@CAPOProcessingHost@@AEAAJPEAUAUDIO_SYSTEME.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14001CEE8 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@V1@PEAGAEAU_GUID@@AEAPEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@$$QEAPEAGAEAU_GUID@@AEAPEAUIMMDevice@@@Z @ 0x14003F828 (--$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@V1@PEAGAEAU_GUID@@A.c)
 *     ??$emplace_front@AEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@?$forward_list@V?$com_ptr_t@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x140056600 (--$emplace_front@AEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@-$forward_list@V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAPOProcessingHost::GetAudioSystemEffectPropertyChangeNotificationHandler(
        CAPOProcessingHost *this,
        struct IMMDevice *a2,
        struct _GUID *a3,
        struct CAudioSystemEffectsPropertyChangeNotificationsHandler **a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  struct IMMDeviceVtbl *lpVtbl; // rax
  __int64 (*GetId)(void); // rax
  int v11; // eax
  const char *v12; // r9
  unsigned int v13; // ebx
  _QWORD *i; // rbx
  _QWORD *v15; // rcx
  struct CAudioSystemEffectsPropertyChangeNotificationsHandler *v16; // rcx
  __int64 v17; // rax
  __int64 result; // rax
  int v19; // eax
  unsigned int v20; // ebx
  LPVOID pv; // [rsp+20h] [rbp-48h] BYREF
  struct IMMDevice *v22; // [rsp+28h] [rbp-40h] BYREF
  LPVOID v23; // [rsp+30h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v22 = a2;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  v24 = v8;
  pv = 0LL;
  lpVtbl = a2->lpVtbl;
  pv = 0LL;
  GetId = (__int64 (*)(void))lpVtbl->GetId;
  try
  {
    v11 = GetId();
    v13 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D0,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)(unsigned int)v11);
      if ( v8 )
        LeaveCriticalSection(v8);
      result = v13;
    }
    else
    {
      for ( i = (_QWORD *)*((_QWORD *)this + 36); i; i = (_QWORD *)*i )
      {
        v15 = (_QWORD *)(i[1] + 56LL);
        if ( *(_QWORD *)(i[1] + 80LL) > 7uLL )
          v15 = (_QWORD *)*v15;
        if ( !(unsigned int)_o__wcsicmp(v15, pv) )
        {
          v16 = (struct CAudioSystemEffectsPropertyChangeNotificationsHandler *)i[1];
          v17 = *((_QWORD *)v16 + 5) - *(_QWORD *)&a3->Data1;
          if ( !v17 )
            v17 = *((_QWORD *)v16 + 6) - *(_QWORD *)a3->Data4;
          if ( !v17 )
          {
            if ( v16 )
            {
              *a4 = v16;
              (*(void (__fastcall **)(struct CAudioSystemEffectsPropertyChangeNotificationsHandler *))(*(_QWORD *)v16 + 8LL))(v16);
            }
            else
            {
              *a4 = 0LL;
            }
            break;
          }
        }
      }
      if ( !*a4 )
      {
        v23 = pv;
        v19 = Microsoft::WRL::Details::MakeAndInitialize<CAudioSystemEffectsPropertyChangeNotificationsHandler,CAudioSystemEffectsPropertyChangeNotificationsHandler,unsigned short *,_GUID &,IMMDevice * &>(
                a4,
                &v23,
                a3,
                &v22);
        v20 = v19;
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2DD,
            (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
            (const char *)(unsigned int)v19);
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&pv);
          CSAutoLock<1>::~CSAutoLock<1>(&v24);
          return v20;
        }
        std::forward_list<wil::com_ptr_t<CAudioSystemEffectsPropertyChangeNotificationsHandler,wil::err_returncode_policy>>::emplace_front<CAudioSystemEffectsPropertyChangeNotificationsHandler * &>(
          (char *)this + 288,
          a4);
      }
      if ( pv )
        CoTaskMemFree(pv);
      if ( v8 )
        LeaveCriticalSection(v8);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2E2,
                           (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
                           v12);
  }
  return result;
}
