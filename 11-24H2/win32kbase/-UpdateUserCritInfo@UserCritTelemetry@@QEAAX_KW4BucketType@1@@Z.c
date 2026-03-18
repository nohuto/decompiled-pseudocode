/*
 * XREFs of ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x140034410
 * Callers:
 *     EtwTraceAcquiredSharedUserCrit @ 0x140033720 (EtwTraceAcquiredSharedUserCrit.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x140033AB0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EtwTraceReleaseUserCrit @ 0x140034270 (EtwTraceReleaseUserCrit.c)
 * Callees:
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall UserCritTelemetry::UpdateUserCritInfo(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 *v5; // rdx
  __int64 v6; // r9
  unsigned int v7; // ecx
  unsigned __int64 v8; // r8
  unsigned __int64 result; // rax
  _QWORD v10[16]; // [rsp+0h] [rbp-98h] BYREF

  v10[0] = 10LL;
  v10[1] = 25LL;
  v10[2] = 50LL;
  v10[3] = 100LL;
  v4 = (unsigned __int64)(1000000 * a2) / gliQpcFreq.QuadPart;
  v10[4] = 250LL;
  v5 = v10;
  v10[5] = 500LL;
  v10[6] = 1000LL;
  v10[7] = 2500LL;
  v10[8] = 5000LL;
  v10[9] = 10000LL;
  v10[10] = 25000LL;
  v10[11] = 50000LL;
  v10[12] = 100000LL;
  v10[13] = 200000LL;
  v10[14] = -1LL;
  v6 = a3;
  v7 = 0;
  v8 = v4;
  while ( v4 > *v5 )
  {
    ++v7;
    ++v5;
    if ( v7 >= 0xF )
      goto LABEL_6;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8 * (v7 + 15 * v6) + 4400));
LABEL_6:
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 8 * v6 + 4760), v4);
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8 * v6 + 4808));
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v6 + 4784), 0LL, 0LL);
  if ( v8 > result )
    _InterlockedExchange64((volatile __int64 *)(a1 + 8 * v6 + 4784), v8);
  return result;
}
