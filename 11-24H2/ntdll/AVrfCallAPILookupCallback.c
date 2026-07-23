/*
 * XREFs of AVrfCallAPILookupCallback @ 0x1800D973C
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x1800319F0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpHandleProtectedDelayload @ 0x1800360B0 (LdrpHandleProtectedDelayload.c)
 *     LdrpResolveDelayloadAddress @ 0x1800D9630 (LdrpResolveDelayloadAddress.c)
 * Callees:
 *     LdrpFindLoadedDllByAddress @ 0x18003CEF0 (LdrpFindLoadedDllByAddress.c)
 *     LdrpDereferenceModule @ 0x180047D50 (LdrpDereferenceModule.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x1800E7980 (RtlGuardGrantSuppressedCallAccess.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AVrfCallAPILookupCallback(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 *a5)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // rbx
  int v12; // [rsp+30h] [rbp-18h] BYREF
  PVOID BaseAddress[2]; // [rsp+38h] [rbp-10h] BYREF

  BaseAddress[0] = 0LL;
  v12 = 0;
  v9 = 0LL;
  if ( (int)LdrpFindLoadedDllByAddress(a1, (unsigned __int64 *)BaseAddress, 0LL) < 0 )
  {
    v9 = a1;
  }
  else
  {
    if ( BaseAddress[0] != (PVOID)LdrpNtDllDataTableEntry && (*((_DWORD *)BaseAddress[0] + 26) & 0x400) == 0 )
      v9 = *((_QWORD *)BaseAddress[0] + 6);
    LdrpDereferenceModule((char *)BaseAddress[0]);
  }
  if ( v9 )
  {
    v10 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64, _QWORD))(__ROR8__(
                                                                                  AvrfpAPILookupCallbackRoutine,
                                                                                  64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
            v9,
            a2,
            a3,
            a4);
    if ( v10 != a3 )
      RtlGuardGrantSuppressedCallAccess(a3, 1LL, &v12);
  }
  else
  {
    v10 = a3;
  }
  *a5 = v10;
  return 0LL;
}
