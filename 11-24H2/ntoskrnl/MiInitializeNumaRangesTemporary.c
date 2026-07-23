/*
 * XREFs of MiInitializeNumaRangesTemporary @ 0x140C4FBF4
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void *MiInitializeNumaRangesTemporary()
{
  void *result; // rax

  qword_140E2DC50 = -1LL;
  guard_dispatch_icall_no_overrides(30LL, 16LL);
  result = &unk_140E2DC40;
  qword_140E2DC60 = &unk_140E2DC40;
  return result;
}
