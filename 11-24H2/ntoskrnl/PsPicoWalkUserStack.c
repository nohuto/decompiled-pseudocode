/*
 * XREFs of PsPicoWalkUserStack @ 0x140AA1E90
 * Callers:
 *     EtwpTraceStackWalk @ 0x1403DDBA0 (EtwpTraceStackWalk.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     PsGetBaseTrapFrame @ 0x140438650 (PsGetBaseTrapFrame.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PsPicoWalkUserStack(__int64 a1)
{
  _OWORD *BaseTrapFrame; // rcx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r9
  _OWORD *v6; // rax
  __int128 v7; // xmm1
  _BYTE v8[400]; // [rsp+20h] [rbp-1A8h] BYREF

  memset_0(v8, 0, sizeof(v8));
  BaseTrapFrame = (_OWORD *)PsGetBaseTrapFrame((__int64)KeGetCurrentThread(), 0LL);
  result = 0LL;
  if ( (_QWORD)xmmword_140F05A50 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v5 = 3LL;
    v6 = v8;
    do
    {
      *v6 = *BaseTrapFrame;
      v6[1] = BaseTrapFrame[1];
      v6[2] = BaseTrapFrame[2];
      v6[3] = BaseTrapFrame[3];
      v6[4] = BaseTrapFrame[4];
      v6[5] = BaseTrapFrame[5];
      v6[6] = BaseTrapFrame[6];
      v6 += 8;
      v7 = BaseTrapFrame[7];
      BaseTrapFrame += 8;
      *(v6 - 1) = v7;
      --v5;
    }
    while ( v5 );
    *v6 = *BaseTrapFrame;
    KeLeaveGuardedRegion();
    return guard_dispatch_icall_no_overrides(v8, a1);
  }
  return result;
}
