/*
 * XREFs of s_GetMulticastCapableChildEndpoints @ 0x180100E40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180021540 (--3@YAXPEAX@Z.c)
 *     ?GetMulticastCapableChildEndpoints@CMulticastSessionManager@@QEAAJAEAV?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x180100210 (-GetMulticastCapableChildEndpoints@CMulticastSessionManager@@QEAAJAEAV-$unique_ptr@$$BY0A@PEAGU-.c)
 */

__int64 __fastcall s_GetMulticastCapableChildEndpoints(__int64 a1, void **a2, _DWORD *a3, const char *a4)
{
  int MulticastCapableChildEndpoints; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+18h] BYREF
  void *v11; // [rsp+48h] [rbp+20h] BYREF

  *a3 = 0;
  v11 = 0LL;
  v10 = 0;
  MulticastCapableChildEndpoints = CMulticastSessionManager::GetMulticastCapableChildEndpoints(
                                     (__int64)s_MulticastSessionManager,
                                     &v11,
                                     &v10,
                                     a4);
  v7 = MulticastCapableChildEndpoints;
  if ( MulticastCapableChildEndpoints >= 0 )
  {
    *a2 = v11;
    *a3 = v10;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
      (const char *)(unsigned int)MulticastCapableChildEndpoints);
    if ( v11 )
      operator delete(v11);
    return v7;
  }
}
