/*
 * XREFs of ExpResourceTimeoutCaptureLiveDump @ 0x14065B110
 * Callers:
 *     <none>
 * Callees:
 *     DbgkWerCaptureLiveKernelDump @ 0x140AA9B20 (DbgkWerCaptureLiveKernelDump.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpResourceTimeoutCaptureLiveDump(_QWORD *P)
{
  DbgkWerCaptureLiveKernelDump(
    (unsigned int)L"ResourceTimeout",
    460,
    P[5],
    P[4],
    *((unsigned int *)P + 12),
    *((unsigned int *)P + 13),
    0LL,
    0LL,
    0);
  ExFreePoolWithTag(P, 0x6F546552u);
}
