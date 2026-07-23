/*
 * XREFs of HalpGetSetCmosData @ 0x140419644
 * Callers:
 *     HalGetBusDataByOffset @ 0x1403A7A90 (HalGetBusDataByOffset.c)
 *     HalpGetCmosData @ 0x14055014C (HalpGetCmosData.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140419CB4 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140419D98 (HalpAcquireCmosSpinLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpGetSetCmosData(__int64 a1, unsigned int a2, _BYTE *a3, int a4, char a5)
{
  unsigned int v5; // esi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8

  v5 = HalpCmosBusParameterTable;
  v8 = a2;
  if ( a2 + a4 - 1 <= HalpCmosBusParameterTable )
    v5 = a2 + a4 - 1;
  HalpAcquireCmosSpinLock();
  for ( ; v8 <= v5; ++a3 )
  {
    if ( a5 )
    {
      LOBYTE(v9) = *a3;
      guard_dispatch_icall_no_overrides(v8, v9);
    }
    else
    {
      *a3 = guard_dispatch_icall_no_overrides(v8, v9);
    }
    ++v8;
  }
  HalpReleaseCmosSpinLock(v10, v9, v11);
  return v8 - a2;
}
