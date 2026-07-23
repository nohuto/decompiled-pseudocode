/*
 * XREFs of HalpInitNonBusHandler @ 0x140C0FC40
 * Callers:
 *     HalpPciInitSystem @ 0x140B4F480 (HalpPciInitSystem.c)
 * Callees:
 *     <none>
 */

char (__fastcall *HalpInitNonBusHandler())(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, char a5)
{
  char (__fastcall *result)(__int64, __int64, _QWORD *, _QWORD *, char); // rax

  off_140E00808[0] = (void (__fastcall __noreturn *)())HalpTranslateBusAddress;
  off_140E00810[0] = (void (__fastcall __noreturn *)())xHalAllocatePmcCounterSet;
  result = HalpFindBusAddressTranslation;
  qword_140E00820 = (__int64)HalpFindBusAddressTranslation;
  return result;
}
