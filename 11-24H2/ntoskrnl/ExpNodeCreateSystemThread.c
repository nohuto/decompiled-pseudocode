/*
 * XREFs of ExpNodeCreateSystemThread @ 0x1408F8B1C
 * Callers:
 *     ExpPartitionCreateSystemThread @ 0x1408F8494 (ExpPartitionCreateSystemThread.c)
 *     ExpCreateWorkerThread @ 0x1408F8A28 (ExpCreateWorkerThread.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x14026FD20 (KeQueryNodeActiveAffinity.c)
 *     KeSelectIdealProcessor @ 0x1403A10AC (KeSelectIdealProcessor.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PsCreateSystemThreadEx @ 0x1408F8C50 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall ExpNodeCreateSystemThread(
        USHORT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _WORD *a8,
        __int64 a9)
{
  USHORT v9; // cx
  int v12; // [rsp+50h] [rbp-38h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-30h] BYREF

  v9 = *a1;
  Affinity = 0LL;
  KeQueryNodeActiveAffinity(v9, &Affinity, 0LL);
  v12 = (unsigned __int16)KeSelectIdealProcessor((__int64)&Affinity, a8, 0LL, 0);
  return PsCreateSystemThreadEx(a9, 0x1FFFFFLL, 0LL, a4, 0LL, a6, a7, &Affinity, &v12);
}
