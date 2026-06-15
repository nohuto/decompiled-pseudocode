/*
 * XREFs of ?GetPropertyStore@CAudioSystemEffectsPropertyChangeNotificationsHandler@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0008_0002@@PEAPEAUIPropertyStore@@@Z @ 0x140008C40
 * Callers:
 *     ?OnPropertyChanged@CAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0008_0002@@U_tagpropertykey@@@Z @ 0x1400081C0 (-OnPropertyChanged@CAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query_to@UIPropertyStore@@@?$com_ptr_t@UIPropertyStore@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIPropertyStore@@@Z @ 0x14003EFBC (--$query_to@UIPropertyStore@@@-$com_ptr_t@UIPropertyStore@@Uerr_returncode_policy@wil@@@wil@@QEB.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSystemEffectsPropertyChangeNotificationsHandler::GetPropertyStore(
        _QWORD *a1,
        int a2,
        __int64 a3)
{
  int v4; // edx
  _QWORD *v5; // rbx
  int v6; // ebx
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  _QWORD *v10; // rbx
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // esi
  __int64 v14; // rdx
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 *v17; // rcx
  __int64 v18; // rax
  int v19; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v8 = a1 + 19;
    if ( !a1[19] )
    {
      v17 = (__int64 *)a1[18];
      v18 = *v17;
      *v8 = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD *))(v18 + 24))(v17, 0LL, v8);
      if ( v13 < 0 )
      {
        v14 = 86LL;
        goto LABEL_17;
      }
    }
    v6 = wil::com_ptr_t<IPropertyStore,wil::err_returncode_policy>::query_to<IPropertyStore>(v8, a3);
    if ( v6 < 0 )
    {
      v9 = 88LL;
      goto LABEL_14;
    }
    return 0LL;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v10 = a1 + 20;
    if ( !a1[20] )
    {
      v15 = (__int64 *)a1[18];
      v16 = *v15;
      *v10 = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD *))(v16 + 32))(v15, 2LL, v10);
      if ( v13 < 0 )
      {
        v14 = 94LL;
        goto LABEL_17;
      }
    }
    v6 = wil::com_ptr_t<IPropertyStore,wil::err_returncode_policy>::query_to<IPropertyStore>(v10, a3);
    if ( v6 < 0 )
    {
      v9 = 96LL;
      goto LABEL_14;
    }
    return 0LL;
  }
  if ( v4 != 1 )
    return 0LL;
  v5 = a1 + 21;
  if ( a1[21]
    || (v11 = (__int64 *)a1[18],
        v12 = *v11,
        *v5 = 0LL,
        v13 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD *))(v12 + 40))(v11, 2LL, v5),
        v13 >= 0) )
  {
    v6 = wil::com_ptr_t<IPropertyStore,wil::err_returncode_policy>::query_to<IPropertyStore>(v5, a3);
    if ( v6 >= 0 )
      return 0LL;
    v9 = 104LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
      (const char *)(unsigned int)v6,
      v19);
    return (unsigned int)v6;
  }
  v14 = 102LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
    (const char *)(unsigned int)v13,
    v19);
  return (unsigned int)v13;
}
