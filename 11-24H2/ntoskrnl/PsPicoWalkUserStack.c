/*
 * XREFs of PsPicoWalkUserStack @ 0x140AA6D94
 * Callers:
 *     EtwpTraceStackWalk @ 0x1403EDBD0 (EtwpTraceStackWalk.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     PsGetBaseTrapFrame @ 0x140441BD0 (PsGetBaseTrapFrame.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall PsPicoWalkUserStack(__int64 a1, unsigned int a2)
{
  _OWORD *BaseTrapFrame; // rcx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // r9
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  __int64 v10; // r9
  _BYTE v11[400]; // [rsp+20h] [rbp-1A8h] BYREF

  memset_0(v11, 0, sizeof(v11));
  BaseTrapFrame = (_OWORD *)PsGetBaseTrapFrame((__int64)KeGetCurrentThread(), 0LL);
  result = 0LL;
  if ( (_QWORD)xmmword_140F05770 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v7 = 3LL;
    v8 = v11;
    do
    {
      *v8 = *BaseTrapFrame;
      v8[1] = BaseTrapFrame[1];
      v8[2] = BaseTrapFrame[2];
      v8[3] = BaseTrapFrame[3];
      v8[4] = BaseTrapFrame[4];
      v8[5] = BaseTrapFrame[5];
      v8[6] = BaseTrapFrame[6];
      v8 += 8;
      v9 = BaseTrapFrame[7];
      BaseTrapFrame += 8;
      *(v8 - 1) = v9;
      --v7;
    }
    while ( v7 );
    *v8 = *BaseTrapFrame;
    KeLeaveGuardedRegion();
    return guard_dispatch_icall_no_overrides(v11, a1, a2, v10);
  }
  return result;
}
