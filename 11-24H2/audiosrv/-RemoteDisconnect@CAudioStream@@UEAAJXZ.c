/*
 * XREFs of ?RemoteDisconnect@CAudioStream@@UEAAJXZ @ 0x1800C91F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180043528 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?wait@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA_NKH@Z @ 0x1800CA98C (-wait@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioStream::RemoteDisconnect(CAudioStream *this)
{
  int v3; // eax
  unsigned int v4; // edi
  void *v5; // rax
  DWORD v6; // edi
  __int64 v7; // rcx
  DWORD v8; // eax
  const char *v9; // rax
  HANDLE Handles; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !(unsigned __int8)_wait___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEBA_NKH_Z(
                           (char *)this + 400,
                           1000LL) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4DB,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 1) + 64LL))((char *)this - 8);
  if ( *((_QWORD *)this + 7) )
  {
    v3 = (*(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 176LL))(this);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E7,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v3);
      return v4;
    }
    v5 = (void *)*((_QWORD *)this + 49);
    v6 = 1;
    v7 = *((_QWORD *)this + 8);
    v11 = 0LL;
    Handles = v5;
    if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 176LL))(v7) )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 176LL))(*((_QWORD *)this + 8));
      v6 = 2;
    }
    v8 = WaitForMultipleObjects(v6, &Handles, 0, 0x3E8u);
    if ( v8 == -1 || v8 == 258 )
    {
      v9 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 72LL))(*((_QWORD *)this + 8));
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x4FA,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)0x80004005LL,
        (__int64)"Application Id: %ws",
        v9);
      return 2147500037LL;
    }
  }
  return 0LL;
}
