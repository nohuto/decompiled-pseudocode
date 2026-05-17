/*
 * XREFs of AVrfCallAPILookupCallback @ 0x1800DC4EC
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180007BE0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpHandleProtectedDelayload @ 0x180022ED0 (LdrpHandleProtectedDelayload.c)
 *     LdrpResolveDelayloadAddress @ 0x1800DC3E0 (LdrpResolveDelayloadAddress.c)
 * Callees:
 *     RtlGuardGrantSuppressedCallAccess @ 0x180009654 (RtlGuardGrantSuppressedCallAccess.c)
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByAddress @ 0x18004F390 (LdrpFindLoadedDllByAddress.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
