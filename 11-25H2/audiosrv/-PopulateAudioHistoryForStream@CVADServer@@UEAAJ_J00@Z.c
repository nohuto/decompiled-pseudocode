/*
 * XREFs of ?PopulateAudioHistoryForStream@CVADServer@@UEAAJ_J00@Z @ 0x180106D20
 * Callers:
 *     AudioServerPopulateAudioHistoryForStream @ 0x18010ACA0 (AudioServerPopulateAudioHistoryForStream.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$out_param_t@V?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1801056E0 (--1-$out_param_t@V-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVADServer::PopulateAudioHistoryForStream(
        struct _RTL_CRITICAL_SECTION *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  bool v9; // zf
  unsigned int v10; // ebx
  __int64 v11; // rdx
  char *OwningThread; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // eax
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 *v20; // [rsp+48h] [rbp-18h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h] BYREF
  char v22; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v24; // [rsp+80h] [rbp+20h] BYREF

  v4 = this + 5;
  EnterCriticalSection(this + 5);
  v9 = LODWORD(this[4].DebugInfo) == 0;
  v19 = v4;
  if ( v9 )
  {
    v10 = -2004287487;
    v11 = 2218LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v10);
    goto LABEL_14;
  }
  OwningThread = (char *)this[4].OwningThread;
  if ( !OwningThread )
  {
    v10 = -2004287487;
    v11 = 2219LL;
    goto LABEL_7;
  }
  if ( !*(_QWORD *)&this[10].LockCount )
  {
    v10 = -2147024809;
    v11 = 2221LL;
    goto LABEL_7;
  }
  v24 = 0LL;
  v13 = (__int64 *)(OwningThread + 8);
  v14 = *v13;
  v21 = 0LL;
  v20 = &v24;
  v22 = 1;
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v14 + 128))(v13, &v21);
  wil::details::out_param_t<wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>>::~out_param_t<wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>>((__int64)&v20);
  if ( (v10 & 0x80000000) == 0 )
  {
    v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, bool))(*(_QWORD *)v24 + 80LL))(
            v24,
            ((__int64)this[4].OwningThread + 8) & -(__int64)(this[4].OwningThread != 0LL),
            a2,
            a3,
            a4,
            LODWORD(this[13].SpinCount) == 3);
    v10 = v17;
    if ( v17 >= 0 )
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
      v10 = 0;
      goto LABEL_14;
    }
    v15 = (unsigned int)v17;
    v16 = 2228LL;
  }
  else
  {
    v15 = v10;
    v16 = 2225LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)v15);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
LABEL_14:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
  return v10;
}
