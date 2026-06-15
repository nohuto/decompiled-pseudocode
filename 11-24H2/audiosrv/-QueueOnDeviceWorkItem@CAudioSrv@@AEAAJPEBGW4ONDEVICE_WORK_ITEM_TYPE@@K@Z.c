/*
 * XREFs of ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z @ 0x18004EECC
 * Callers:
 *     ?OnDeviceStateChanged@CAudioSrv@@UEAAJPEBGK@Z @ 0x1800715D0 (-OnDeviceStateChanged@CAudioSrv@@UEAAJPEBGK@Z.c)
 *     ?OnDeviceAdded@CAudioSrv@@UEAAJPEBG@Z @ 0x1800CE620 (-OnDeviceAdded@CAudioSrv@@UEAAJPEBG@Z.c)
 *     ?OnDeviceRemoved@CAudioSrv@@UEAAJPEBG@Z @ 0x1800CE640 (-OnDeviceRemoved@CAudioSrv@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x180016664 (--0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?AddTail@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCOnDeviceWorkItem@@@Z @ 0x18004F10C (-AddTail@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18004F790 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??1?$unique_ptr@V_Facet_base@std@@U?$default_delete@V_Facet_base@std@@@2@@std@@QEAA@XZ @ 0x1800A2690 (--1-$unique_ptr@V_Facet_base@std@@U-$default_delete@V_Facet_base@std@@@2@@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioSrv::QueueOnDeviceWorkItem(__int64 a1, _WORD *a2, int a3, int a4)
{
  __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // r9d
  struct _RTL_CRITICAL_SECTION *v11; // rax
  struct _RTL_CRITICAL_SECTION *v12; // rbx
  struct _RTL_CRITICAL_SECTION *v13; // rax
  struct _RTL_CRITICAL_SECTION *v15; // rdi
  unsigned int v16; // ebx
  ATL::CAtlException *v17; // rbx
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+40h] [rbp-48h] BYREF
  int v19[2]; // [rsp+48h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+50h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+58h] [rbp-30h]
  ATL::CAtlException *v22; // [rsp+60h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  char *v25; // [rsp+A0h] [rbp+18h] BYREF

  v7 = a1;
  v8 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *(_DWORD *)v8 > 4u
    && (*(_BYTE *)(v8 + 16) & 0x20) != 0
    && (*(_QWORD *)(v8 + 24) & 0x20LL) == *(_QWORD *)(v8 + 24) )
  {
    LODWORD(v25) = a4;
    LODWORD(v18) = a3;
    *(_QWORD *)v19 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v8,
      (unsigned int)&unk_1801AAEF1,
      v9,
      v10,
      (__int64)v19,
      (__int64)&v18,
      (__int64)&v25);
  }
  if ( a3 == 1 )
  {
    v11 = (struct _RTL_CRITICAL_SECTION *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    v21 = v11;
    if ( v11 )
    {
      COnDeviceWorkItem::COnDeviceWorkItem(v11, a2, 1);
      v12->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&COnDeviceStateChangedWorkItem::`vftable';
      LODWORD(v12->SpinCount) = a4;
    }
    else
    {
      v12 = 0LL;
    }
  }
  else
  {
    v13 = (struct _RTL_CRITICAL_SECTION *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v21 = v13;
    if ( v13 )
      v12 = (struct _RTL_CRITICAL_SECTION *)COnDeviceWorkItem::COnDeviceWorkItem(v13, a2, a3);
    else
      v12 = 0LL;
  }
  v18 = v12;
  if ( !v12 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6D7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)0x8007000ELL);
    std::unique_ptr<std::_Facet_base>::~unique_ptr<std::_Facet_base>(&v18);
    return 2147942414LL;
  }
  if ( !*(_DWORD *)(*(_QWORD *)&v12->LockCount - 16LL) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6D8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)0x8007000ELL);
    ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *, __int64))v12->DebugInfo->Type)(v12, 1LL);
    return 2147942414LL;
  }
  v15 = (struct _RTL_CRITICAL_SECTION *)(v7 + 112);
  v21 = (struct _RTL_CRITICAL_SECTION *)(v7 + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 112));
  try
  {
    v20 = (struct _RTL_CRITICAL_SECTION *)(v7 + 112);
    *(_QWORD *)v19 = v12;
    ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::AddTail(v7 + 152, v19);
  }
  catch ( ATL::CAtlException *v22 )
  {
    v17 = v22;
    if ( *(_DWORD *)v22 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v25) = *(_DWORD *)v17;
    v16 = (unsigned int)v25;
    if ( (int)v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6DF,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
        (const char *)(unsigned int)v25);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v20);
      std::unique_ptr<std::_Facet_base>::~unique_ptr<std::_Facet_base>(&v18);
      return v16;
    }
    v7 = a1;
    v15 = v21;
  }
  v18 = 0LL;
  if ( v15 )
    LeaveCriticalSection(v15);
  (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 72LL))(
    ThreadPool,
    *(_QWORD *)(v7 + 200));
  return 0LL;
}
