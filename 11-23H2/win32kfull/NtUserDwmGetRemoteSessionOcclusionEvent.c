/*
 * XREFs of NtUserDwmGetRemoteSessionOcclusionEvent @ 0x1C01356A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C0013298 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

void *NtUserDwmGetRemoteSessionOcclusionEvent()
{
  int v0; // eax
  void *Handle; // [rsp+50h] [rbp+8h] BYREF

  Handle = 0LL;
  if ( (unsigned int)UserUnsafeIsCurrentProcessDwm() )
  {
    v0 = ObOpenObjectByPointer(
           gpRemoteSessionOcclusionEvent,
           0,
           0LL,
           0x1F0003u,
           (POBJECT_TYPE)ExEventObjectType,
           1,
           &Handle);
    if ( v0 < 0 )
      UserSetLastStatus(v0, 1);
  }
  else
  {
    UserSetLastError(5);
  }
  return Handle;
}
