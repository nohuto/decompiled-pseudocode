/*
 * XREFs of ?GetMulticastProviders@CMulticastSessionManager@@QEAAJAEAV?$unique_ptr@$$BY0A@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x1800FD00C
 * Callers:
 *     s_GetMulticastProviders @ 0x1800FDBB0 (s_GetMulticastProviders.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     MIDL_user_allocate @ 0x180042530 (MIDL_user_allocate.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMulticastSessionManager::GetMulticastProviders(__int64 a1, void **a2, _DWORD *a3)
{
  __int64 v6; // rcx
  _QWORD *i; // rax
  void *v8; // rax
  void *v9; // rcx
  __int64 **j; // rbx
  _BYTE v12[16]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = 0LL;
  for ( i = *(_QWORD **)(a1 + 24); i; i = (_QWORD *)*i )
    ++v6;
  v8 = MIDL_user_allocate(16 * v6);
  v9 = *a2;
  *a2 = v8;
  if ( v9 )
    operator delete(v9);
  if ( *a2 )
  {
    *a3 = 0;
    for ( j = *(__int64 ***)(a1 + 24); j; j = (__int64 **)*j )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*j[1] + 24))(j[1]) )
        *((_OWORD *)*a2 + (unsigned int)(*a3)++) = *(_OWORD *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*j[1] + 32))(
                                                                j[1],
                                                                v12);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x130,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
