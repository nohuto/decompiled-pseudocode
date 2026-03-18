/*
 * XREFs of MiInitializeNumaRangesTemporary @ 0x140C3C754
 * Callers:
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void *MiInitializeNumaRangesTemporary()
{
  void *result; // rax

  qword_140E2D8D0 = -1LL;
  guard_dispatch_icall_no_overrides(30LL);
  result = &unk_140E2D8C0;
  qword_140E2D8E0 = &unk_140E2D8C0;
  return result;
}
