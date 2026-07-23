/*
 * XREFs of PspWow64SetupUserProcessAddressSpace @ 0x14047FDE4
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x1408DF5FC (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     PspWow64ThunkProcessParameters @ 0x14047FE44 (PspWow64ThunkProcessParameters.c)
 */

__int64 __fastcall PspWow64SetupUserProcessAddressSpace(__int64 a1, __int64 a2)
{
  __int64 *v2; // r8
  __int64 result; // rax
  __int16 v4; // cx
  __int64 v5; // rcx

  v2 = *(__int64 **)(a1 + 784);
  result = 0LL;
  if ( v2 )
  {
    v4 = *(_WORD *)(a1 + 1772);
    if ( v4 == 332 || v4 == 452 )
    {
      v5 = *v2;
      *(_DWORD *)(a2 + 236) = *v2;
      return PspWow64ThunkProcessParameters(v5, *(_QWORD *)(a2 + 216), a2 + 232);
    }
  }
  return result;
}
