/*
 * XREFs of AVrfCallAPILookupCallback @ 0x1800DE5CC
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180004FF0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpHandleProtectedDelayload @ 0x1800096B0 (LdrpHandleProtectedDelayload.c)
 *     LdrpResolveDelayloadAddress @ 0x1800DE4C0 (LdrpResolveDelayloadAddress.c)
 * Callees:
 *     RtlGuardGrantSuppressedCallAccess @ 0x180003C34 (RtlGuardGrantSuppressedCallAccess.c)
 *     LdrpFindLoadedDllByAddress @ 0x1800104F0 (LdrpFindLoadedDllByAddress.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AVrfCallAPILookupCallback(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 *a5)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // rbx
  int v12; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h] BYREF

  v13 = 0LL;
  v12 = 0;
  v9 = 0LL;
  if ( (int)LdrpFindLoadedDllByAddress(a1, (unsigned __int64 *)&v13, 0LL) < 0 )
  {
    v9 = a1;
  }
  else
  {
    if ( v13 != LdrpNtDllDataTableEntry && (*(_DWORD *)(v13 + 104) & 0x400) == 0 )
      v9 = *(_QWORD *)(v13 + 48);
    LdrpDereferenceModule(v13);
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
      RtlGuardGrantSuppressedCallAccess(a3, 1u, &v12);
  }
  else
  {
    v10 = a3;
  }
  *a5 = v10;
  return 0LL;
}
