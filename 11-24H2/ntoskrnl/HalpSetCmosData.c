/*
 * XREFs of HalpSetCmosData @ 0x140419144
 * Callers:
 *     HalWriteBootRegister @ 0x140B52B00 (HalWriteBootRegister.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140419CB4 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140419D98 (HalpAcquireCmosSpinLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpSetCmosData(__int64 a1, unsigned int a2, _BYTE *a3, int a4)
{
  unsigned int v4; // ebp
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8

  v4 = HalpCmosBusParameterTable;
  v7 = a2;
  if ( a2 + a4 - 1 <= HalpCmosBusParameterTable )
    v4 = a2 + a4 - 1;
  HalpAcquireCmosSpinLock();
  for ( ; v7 <= v4; ++a3 )
  {
    LOBYTE(v8) = *a3;
    guard_dispatch_icall_no_overrides(v7++, v8);
  }
  HalpReleaseCmosSpinLock(v9, v8, v10);
  return v7 - a2;
}
