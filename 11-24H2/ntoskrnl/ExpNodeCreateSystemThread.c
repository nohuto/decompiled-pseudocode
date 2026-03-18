/*
 * XREFs of ExpNodeCreateSystemThread @ 0x140A2236C
 * Callers:
 *     ExpPartitionCreateSystemThread @ 0x140A21CE4 (ExpPartitionCreateSystemThread.c)
 *     ExpCreateWorkerThread @ 0x140A22278 (ExpCreateWorkerThread.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x1403A8640 (KeQueryNodeActiveAffinity.c)
 *     KeSelectIdealProcessor @ 0x1403B289C (KeSelectIdealProcessor.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PsCreateSystemThreadEx @ 0x140A224A0 (PsCreateSystemThreadEx.c)
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
  struct _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-30h] BYREF

  v9 = *a1;
  Affinity = 0LL;
  KeQueryNodeActiveAffinity(v9, &Affinity, 0LL);
  v12 = (unsigned __int16)KeSelectIdealProcessor((__int64)&Affinity, a8, 0LL, 0);
  return PsCreateSystemThreadEx(a9, 0x1FFFFFLL, 0LL, a4, 0LL, a6, a7, &Affinity, &v12);
}
