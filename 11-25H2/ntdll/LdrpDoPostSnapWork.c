/*
 * XREFs of LdrpDoPostSnapWork @ 0x180020D90
 * Callers:
 *     LdrpSnapModule @ 0x180012B70 (LdrpSnapModule.c)
 * Callees:
 *     LdrpHandleTlsData @ 0x180021A20 (LdrpHandleTlsData.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180022E90 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x18002422C (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     ZwProtectVirtualMemory @ 0x180163C20 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall LdrpDoPostSnapWork(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  PVOID *v4; // rdx
  int v5; // ebx
  NTSTATUS result; // eax
  _QWORD *v8; // rax
  int v9; // eax
  ULONG OldProtect; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  v4 = (PVOID *)(a1 + 112);
  v5 = 0;
  OldProtect = 0;
  if ( !*(_QWORD *)(a1 + 112)
    || (result = ZwProtectVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   v4,
                   (PSIZE_T)(a1 + 120),
                   *(_DWORD *)(a1 + 144),
                   &OldProtect),
        v5 = result,
        result >= 0) )
  {
    v8 = *(_QWORD **)(a1 + 160);
    if ( v8 && *v8 != *(_QWORD *)(a1 + 152) )
      __fastfail(0x13u);
    if ( *(_WORD *)(v3 + 110) || (result = LdrpHandleTlsData(v3), v5 = result, result >= 0) )
    {
      if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression(a1, v4, a3) )
      {
        v9 = LdrpUnsuppressAddressTakenIat(*(PVOID *)(v3 + 48));
        v5 = v9;
        if ( v9 < 0 )
          LdrpLogInternal(
            "minkernel\\ldr\\ldrsnap.c",
            590LL,
            "LdrpDoPostSnapWork",
            0LL,
            "LdrpDoPostSnapWork:Unable to unsuppress the export suppressed functions that are imported in the DLL based a"
            "t 0x%p.Status = 0x%x\n",
            *(const void **)(v3 + 48),
            v9);
      }
      return v5;
    }
  }
  return result;
}
