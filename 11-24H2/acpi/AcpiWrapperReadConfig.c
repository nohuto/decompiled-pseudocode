/*
 * XREFs of AcpiWrapperReadConfig @ 0x1400348A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AcpiWrapperReadConfig(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, __int64))(PmHalDispatchTable + 48))(a1, a2);
}
