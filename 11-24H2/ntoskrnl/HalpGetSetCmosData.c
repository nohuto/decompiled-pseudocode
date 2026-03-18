/*
 * XREFs of HalpGetSetCmosData @ 0x140425794
 * Callers:
 *     HalGetBusDataByOffset @ 0x140488FB0 (HalGetBusDataByOffset.c)
 *     HalpGetCmosData @ 0x14055280C (HalpGetCmosData.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140425E04 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140425EE8 (HalpAcquireCmosSpinLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpGetSetCmosData(__int64 a1, unsigned int a2, _BYTE *a3, int a4, char a5)
{
  unsigned int v5; // esi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

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
      guard_dispatch_icall_no_overrides(v8, v9, v11, v12);
    }
    else
    {
      *a3 = guard_dispatch_icall_no_overrides(v8, v9, v11, v12);
    }
    ++v8;
  }
  HalpReleaseCmosSpinLock(v10, v9, v11);
  return v8 - a2;
}
