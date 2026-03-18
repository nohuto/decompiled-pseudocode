/*
 * XREFs of _SetCancelRotationDelayHintWindow @ 0x140277B78
 * Callers:
 *     NtUserSetCancelRotationDelayHintWindow @ 0x14029CB90 (NtUserSetCancelRotationDelayHintWindow.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1400F5BC0 (IAMThreadAccessGranted.c)
 */

__int64 __fastcall SetCancelRotationDelayHintWindow(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  struct tagTHREADINFO *v4; // rax
  int v5; // eax
  __int64 v6; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 1;
  v4 = PtiCurrent(a1, a2);
  LOBYTE(v5) = IAMThreadAccessGranted(v4);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 24) + 304LL;
    v8[1] = a1;
    v8[0] = v6;
    HMAssignmentLock(v8, 0LL);
  }
  else
  {
    UserSetLastError(5);
    return 0;
  }
  return v3;
}
