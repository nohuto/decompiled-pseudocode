/*
 * XREFs of ?GetFxPropertyStore@CAPOEndpointNotificationsHandler@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x14003F968
 * Callers:
 *     ?OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z @ 0x1400185CC (-OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query_to@UIPropertyStore@@@?$com_ptr_t@UIPropertyStore@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIPropertyStore@@@Z @ 0x14003F2BC (--$query_to@UIPropertyStore@@@-$com_ptr_t@UIPropertyStore@@Uerr_returncode_policy@wil@@@wil@@QEB.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAPOEndpointNotificationsHandler::GetFxPropertyStore(
        CAPOEndpointNotificationsHandler *this,
        struct IPropertyStore **a2)
{
  __int64 *v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64 *); // rbp
  __int64 v9; // rcx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 *)((char *)this + 176);
  if ( !*((_QWORD *)this + 22) )
  {
    v13 = 0LL;
    v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 5))(
           *((_QWORD *)this + 5),
           &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
           &v13);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 65LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
        (const char *)(unsigned int)v4);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v13);
      return v5;
    }
    v7 = v13;
    v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 40LL);
    v9 = *v3;
    *v3 = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v4 = v8(v7, 0LL, v3);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 66LL;
      goto LABEL_8;
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v13);
  }
  v11 = wil::com_ptr_t<IPropertyStore,wil::err_returncode_policy>::query_to<IPropertyStore>(v3, a2);
  v5 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
      (const char *)(unsigned int)v11);
    return v5;
  }
  return 0LL;
}
