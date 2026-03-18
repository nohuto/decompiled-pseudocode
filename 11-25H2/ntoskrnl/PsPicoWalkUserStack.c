/*
 * XREFs of PsPicoWalkUserStack @ 0x140AA19F0
 * Callers:
 *     EtwpTraceStackWalk @ 0x140309D40 (EtwpTraceStackWalk.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     PsGetBaseTrapFrame @ 0x1404430E0 (PsGetBaseTrapFrame.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 PsPicoWalkUserStack()
{
  _OWORD *BaseTrapFrame; // rcx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r9
  _OWORD *v4; // rax
  __int128 v5; // xmm1
  _BYTE v6[400]; // [rsp+20h] [rbp-1A8h] BYREF

  memset_0(v6, 0, sizeof(v6));
  BaseTrapFrame = (_OWORD *)PsGetBaseTrapFrame((__int64)KeGetCurrentThread(), 0LL);
  result = 0LL;
  if ( (_QWORD)xmmword_140F053B0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v3 = 3LL;
    v4 = v6;
    do
    {
      *v4 = *BaseTrapFrame;
      v4[1] = BaseTrapFrame[1];
      v4[2] = BaseTrapFrame[2];
      v4[3] = BaseTrapFrame[3];
      v4[4] = BaseTrapFrame[4];
      v4[5] = BaseTrapFrame[5];
      v4[6] = BaseTrapFrame[6];
      v4 += 8;
      v5 = BaseTrapFrame[7];
      BaseTrapFrame += 8;
      *(v4 - 1) = v5;
      --v3;
    }
    while ( v3 );
    *v4 = *BaseTrapFrame;
    KeLeaveGuardedRegion();
    return guard_dispatch_icall_no_overrides(v6);
  }
  return result;
}
