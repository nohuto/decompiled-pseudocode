/*
 * XREFs of HalpSetCmosData @ 0x140425294
 * Callers:
 *     HalWriteBootRegister @ 0x140B50AB0 (HalWriteBootRegister.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140425E04 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140425EE8 (HalpAcquireCmosSpinLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpSetCmosData(__int64 a1, unsigned int a2, _BYTE *a3, int a4)
{
  unsigned int v4; // ebp
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  v4 = HalpCmosBusParameterTable;
  v7 = a2;
  if ( a2 + a4 - 1 <= HalpCmosBusParameterTable )
    v4 = a2 + a4 - 1;
  HalpAcquireCmosSpinLock();
  for ( ; v7 <= v4; ++a3 )
  {
    LOBYTE(v8) = *a3;
    guard_dispatch_icall_no_overrides(v7++, v8, v10, v11);
  }
  HalpReleaseCmosSpinLock(v9, v8, v10);
  return v7 - a2;
}
