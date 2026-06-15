/*
 * XREFs of ?InitializeAPOs@CMeterSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180060C30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x180060D98 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMeterSoftware::InitializeAPOs(
        struct _RTL_CRITICAL_SECTION *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  ULONG_PTR *p_SpinCount; // rdi
  __int64 i; // rsi
  int v10; // eax
  unsigned int v11; // esi
  int v13[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a3 )
  {
    v7 = this + 1;
    EnterCriticalSection(this + 1);
    p_SpinCount = &this->SpinCount;
    *(_QWORD *)v13 = v7;
    ATL::CComPtrBase<IPart>::Release(&this->SpinCount);
    for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
    {
      if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, ULONG_PTR *))a4[i]->lpVtbl->QueryInterface)(
             a4[i],
             &GUID_2b6a07f7_ea05_428b_a730_afb23c032f5c,
             &this->SpinCount) >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(ULONG_PTR, HANDLE *))(*(_QWORD *)*p_SpinCount + 32LL))(
                *p_SpinCount,
                &this->LockSemaphore);
        v11 = v10;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2F4,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\metercontrol.cpp",
            (const char *)(unsigned int)v10);
          if ( v7 )
            LeaveCriticalSection(v7);
          return v11;
        }
        if ( (*(unsigned __int8 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 384LL))(g_PolicyManager) )
          (*(void (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)*p_SpinCount + 40LL))(*p_SpinCount, 1LL);
        break;
      }
    }
    if ( !*p_SpinCount )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x301,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\metercontrol.cpp",
        (const char *)0x8007054FLL);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v13);
      return 2147943759LL;
    }
    if ( v7 )
      LeaveCriticalSection(v7);
  }
  return 0LL;
}
