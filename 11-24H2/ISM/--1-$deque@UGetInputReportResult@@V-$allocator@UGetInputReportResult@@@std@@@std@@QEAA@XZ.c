/*
 * XREFs of ??1?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@QEAA@XZ @ 0x1800DD138
 * Callers:
 *     ??1DockDeviceCollection@@UEAA@XZ @ 0x1800DD1B0 (--1DockDeviceCollection@@UEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@AEAAXXZ @ 0x1800DDCDC (-_Tidy@-$deque@UGetInputReportResult@@V-$allocator@UGetInputReportResult@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::deque<GetInputReportResult>::~deque<GetInputReportResult>(char **a1)
{
  char *v2; // rcx

  std::deque<GetInputReportResult>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x10);
}
