/*
 * XREFs of ?OnTargetWithFocusChanged@LampArrayRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x180086C50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18005B4E4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180069700 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x18009A258 (-SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LampArrayRawInputProvider::OnTargetWithFocusChanged(
        LampArrayRawInputProvider *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  struct LampArrayEndpoint *v8; // r15
  _DWORD *i; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  struct LampArrayDevice **j; // rbx
  int active; // eax
  unsigned int v14; // esi
  int v15; // [rsp+20h] [rbp-40h]
  int v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h] BYREF
  RTL_SRWLOCK *v18; // [rsp+50h] [rbp-10h] BYREF
  int v19[2]; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int32 v21; // [rsp+A0h] [rbp+40h] BYREF
  __int32 v22; // [rsp+A8h] [rbp+48h] BYREF

  v21 = 0;
  if ( a3 )
  {
    v17 = 0LL;
    v4 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a3)(
           a3,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           &v17);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 361LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        (const char *)(unsigned int)v4,
        v15);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
      return v5;
    }
    v4 = (*(__int64 (__fastcall **)(__int64, __int32 *))(*(_QWORD *)v17 + 32LL))(v17, &v21);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 363LL;
      goto LABEL_6;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  }
  v8 = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)this + 16);
  v18 = (RTL_SRWLOCK *)((char *)this + 128);
  for ( i = (_DWORD *)*((_QWORD *)this + 10); i != (_DWORD *)((char *)this + 80); i = *(_DWORD **)i )
  {
    if ( i[6] == v21 )
    {
      v8 = (struct LampArrayEndpoint *)(i + 4);
      break;
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v18);
  if ( (unsigned int)dword_18024E248 > 5 )
  {
    v22 = v21;
    v16 = *((_DWORD *)this + 12);
    *(_QWORD *)v19 = "FocusChanged";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_18024E248,
      byte_180213429,
      v10,
      v11,
      (const unsigned __int16 **)v19,
      (__int64)&v16,
      (__int64)&v22);
  }
  _InterlockedExchange((volatile __int32 *)this + 12, v21);
  AcquireSRWLockExclusive((PSRWLOCK)this + 18);
  v18 = (RTL_SRWLOCK *)((char *)this + 144);
  for ( j = (struct LampArrayDevice **)*((_QWORD *)this + 7);
        j != (struct LampArrayDevice **)((char *)this + 56);
        j = (struct LampArrayDevice **)*j )
  {
    active = LampArrayRawInputProvider::SetActiveViewClient((LampArrayRawInputProvider *)((char *)this - 16), j[2], v8);
    v14 = active;
    if ( active < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x184,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        (const char *)(unsigned int)active,
        v15);
      goto LABEL_21;
    }
  }
  v14 = 0;
LABEL_21:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v18);
  return v14;
}
