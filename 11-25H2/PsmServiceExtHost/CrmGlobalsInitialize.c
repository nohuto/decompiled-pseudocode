/*
 * XREFs of CrmGlobalsInitialize @ 0x18007883C
 * Callers:
 *     PsmCrmCleanup @ 0x180077850 (PsmCrmCleanup.c)
 *     PsmCrmStart @ 0x180077870 (PsmCrmStart.c)
 * Callees:
 *     CempLockInitialize @ 0x180040C1C (CempLockInitialize.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 */

__int64 CrmGlobalsInitialize()
{
  __int64 result; // rax

  memset_0(&CrmGlobals, 0, 0x3B0uLL);
  CempLockInitialize((__int64)&unk_1800E9A20);
  xmmword_1800E9A30 = 0LL;
  CempLockInitialize((__int64)&CrmGlobals);
  CempLockInitialize((__int64)&unk_1800E9A40);
  xmmword_1800E9A50 = 0LL;
  CempLockInitialize((__int64)&unk_1800E9AF0);
  CempLockInitialize((__int64)&unk_1800E9A60);
  unk_1800E9A88 = 0LL;
  qword_1800E9AB8 = 0LL;
  xmmword_1800E9A98 = 0LL;
  xmmword_1800E9AA8 = 0LL;
  CempLockInitialize((__int64)&unk_1800E9A88);
  result = 0LL;
  xmmword_1800E9AA8 = 0LL;
  qword_1800E9AB8 = 0LL;
  return result;
}
