/*
 * XREFs of s_ActivateMulticastSession @ 0x180100CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?ActivateMulticastSession@CMulticastSessionManager@@QEAAJPEAPEBGIAEBU_GUID@@@Z @ 0x1800FFB6C (-ActivateMulticastSession@CMulticastSessionManager@@QEAAJPEAPEBGIAEBU_GUID@@@Z.c)
 */

__int64 __fastcall s_ActivateMulticastSession(
        __int64 a1,
        const unsigned __int16 **a2,
        unsigned int a3,
        const struct _GUID *a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  struct _GUID v10; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v10 = *a4;
  EtwEventActivityIdControl(4LL, &v10);
  v7 = CMulticastSessionManager::ActivateMulticastSession(s_MulticastSessionManager, a2, a3, a4);
  v8 = v7;
  if ( v7 >= 0 )
    v8 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x88,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
      (const char *)(unsigned int)v7);
  EtwEventActivityIdControl(4LL, &v10);
  return v8;
}
