/*
 * XREFs of ?GetEndpointPropertyStore@CAPOEndpointNotificationsHandler@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x14003F5C4
 * Callers:
 *     ?OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z @ 0x1400182CC (-OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query_to@UIPropertyStore@@@?$com_ptr_t@UIPropertyStore@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIPropertyStore@@@Z @ 0x14003EFBC (--$query_to@UIPropertyStore@@@-$com_ptr_t@UIPropertyStore@@Uerr_returncode_policy@wil@@@wil@@QEB.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOEndpointNotificationsHandler::GetEndpointPropertyStore(
        CAPOEndpointNotificationsHandler *this,
        struct IPropertyStore **a2)
{
  __int64 *v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (__int64 *)((char *)this + 168);
  if ( *((_QWORD *)this + 21)
    || (v7 = (__int64 *)*((_QWORD *)this + 5),
        v8 = *v7,
        *v3 = 0LL,
        v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v8 + 32))(v7, 0LL, v3),
        v10 = v9,
        v9 >= 0) )
  {
    v4 = wil::com_ptr_t<IPropertyStore,wil::err_returncode_policy>::query_to<IPropertyStore>(v3, a2);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4F,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
}
