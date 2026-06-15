/*
 * XREFs of ?RuntimeClassInitialize@CMMNotificationDelegator@AudioEffectsWatcher@@QEAAJPEBGPEAX@Z @ 0x1800B3C40
 * Callers:
 *     ??$MakeAndInitialize@VCMMNotificationDelegator@AudioEffectsWatcher@@UIMMNotificationClient@@AEAPEBGPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIMMNotificationClient@@AEAPEBG$$QEAPEAX@Z @ 0x1800A1058 (--$MakeAndInitialize@VCMMNotificationDelegator@AudioEffectsWatcher@@UIMMNotificationClient@@AEAP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18001E6BC (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMem.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x180029154 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A23A4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1800B2F64 (--1-$out_param_t@V-$unique_any_t@V-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioEffectsWatcher::CMMNotificationDelegator::RuntimeClassInitialize(
        AudioEffectsWatcher::CMMNotificationDelegator *this,
        const unsigned __int16 *a2,
        void *a3)
{
  int v5; // ebx
  HANDLE CurrentProcess; // rbx
  HANDLE v8; // rax
  const char *v9; // r9
  void **v10; // [rsp+40h] [rbp-28h] BYREF
  HANDLE TargetHandle; // [rsp+48h] [rbp-20h] BYREF
  char v12; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v10 = (void **)((char *)this + 16);
  TargetHandle = 0LL;
  v12 = 1;
  v5 = _AllocString<CTCoAllocPolicy>((__int64)this, (__int64)a2, a2, &TargetHandle);
  wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(&v10);
  if ( v5 >= 0 )
  {
    v10 = (void **)((char *)this + 24);
    TargetHandle = 0LL;
    v12 = 1;
    CurrentProcess = GetCurrentProcess();
    v8 = GetCurrentProcess();
    LODWORD(CurrentProcess) = DuplicateHandle(v8, a3, CurrentProcess, &TargetHandle, 2u, 0, 0);
    __1__out_param_t_V__unique_any_t_V__event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil___wil___details_wil__QEAA_XZ((__int64)&v10);
    if ( (_DWORD)CurrentProcess )
      return 0LL;
    else
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x138,
               (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
               v9);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x137,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
}
