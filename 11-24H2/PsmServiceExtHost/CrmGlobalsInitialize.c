/*
 * XREFs of CrmGlobalsInitialize @ 0x18007889C
 * Callers:
 *     PsmCrmCleanup @ 0x1800778B0 (PsmCrmCleanup.c)
 *     PsmCrmStart @ 0x1800778D0 (PsmCrmStart.c)
 * Callees:
 *     CempLockInitialize @ 0x180040B9C (CempLockInitialize.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 */

__int64 CrmGlobalsInitialize()
{
  __int64 result; // rax

  memset_0(&CrmGlobals, 0, 0x3B0uLL);
  CempLockInitialize((__int64)&unk_1800EA9C0);
  xmmword_1800EA9D0 = 0LL;
  CempLockInitialize((__int64)&CrmGlobals);
  CempLockInitialize((__int64)&unk_1800EA9E0);
  xmmword_1800EA9F0 = 0LL;
  CempLockInitialize((__int64)&unk_1800EAA90);
  CempLockInitialize((__int64)&unk_1800EAA00);
  unk_1800EAA28 = 0LL;
  qword_1800EAA58 = 0LL;
  xmmword_1800EAA38 = 0LL;
  xmmword_1800EAA48 = 0LL;
  CempLockInitialize((__int64)&unk_1800EAA28);
  result = 0LL;
  xmmword_1800EAA48 = 0LL;
  qword_1800EAA58 = 0LL;
  return result;
}
