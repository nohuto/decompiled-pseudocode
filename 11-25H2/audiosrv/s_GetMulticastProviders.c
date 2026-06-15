/*
 * XREFs of s_GetMulticastProviders @ 0x1800FDBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMulticastProviders@CMulticastSessionManager@@QEAAJAEAV?$unique_ptr@$$BY0A@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x1800FD00C (-GetMulticastProviders@CMulticastSessionManager@@QEAAJAEAV-$unique_ptr@$$BY0A@U_GUID@@U-$functio.c)
 */

__int64 __fastcall s_GetMulticastProviders(__int64 a1, void **a2, _DWORD *a3)
{
  int MulticastProviders; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+40h] [rbp+18h] BYREF
  void *v10; // [rsp+48h] [rbp+20h] BYREF

  *a3 = 0;
  v10 = 0LL;
  v9 = 0;
  MulticastProviders = CMulticastSessionManager::GetMulticastProviders((__int64)s_MulticastSessionManager, &v10, &v9);
  v6 = MulticastProviders;
  if ( MulticastProviders >= 0 )
  {
    *a2 = v10;
    *a3 = v9;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
      (const char *)(unsigned int)MulticastProviders);
    if ( v10 )
      operator delete(v10);
    return v6;
  }
}
