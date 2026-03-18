/*
 * XREFs of ACPIIsFilterDebuggingDevice @ 0x1400C03C8
 * Callers:
 *     ACPIBuildFilter @ 0x140046B74 (ACPIBuildFilter.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIIsFilterDebuggingDevice(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 784) + 48LL) & 0x2000000) != 0;
}
