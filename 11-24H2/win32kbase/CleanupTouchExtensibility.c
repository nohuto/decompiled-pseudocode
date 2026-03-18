/*
 * XREFs of CleanupTouchExtensibility @ 0x14019F048
 * Callers:
 *     UserDeactivateMITInputProcessing @ 0x14014B168 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 *     RawInputManagerObjectResolveHandle @ 0x140054EF0 (RawInputManagerObjectResolveHandle.c)
 *     RIMFreePointerDevice @ 0x1401E03EC (RIMFreePointerDevice.c)
 */

__int64 __fastcall CleanupTouchExtensibility(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  PVOID v7; // [rsp+30h] [rbp+8h] BYREF

  result = W32GetUserSessionState(a1);
  if ( *(_QWORD *)(result + 19344) )
  {
    v7 = 0LL;
    UserSessionState = W32GetUserSessionState(v2);
    if ( (int)RawInputManagerObjectResolveHandle(*(char **)(UserSessionState + 19344), 3u, 0, &v7) >= 0 )
    {
      v5 = W32GetUserSessionState(v4);
      v6 = HMValidateHandleNoSecure(*(_QWORD *)(v5 + 19384), 19);
      if ( v6 )
      {
        if ( *(_QWORD *)(v6 + 456) )
          RIMFreePointerDevice(v7);
      }
    }
    result = W32GetUserSessionState(v4);
    *(_QWORD *)(result + 19344) = 0LL;
  }
  return result;
}
