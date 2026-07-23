/*
 * XREFs of LdrpDoPostSnapWork @ 0x180033DC0
 * Callers:
 *     LdrpSnapModule @ 0x18006CB10 (LdrpSnapModule.c)
 * Callees:
 *     LdrpUnsuppressAddressTakenIat @ 0x180033EAC (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpHandleTlsData @ 0x180034C00 (LdrpHandleTlsData.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180036070 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     ZwProtectVirtualMemory @ 0x180160A50 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall LdrpDoPostSnapWork(__int64 a1)
{
  __int64 v1; // rsi
  int v2; // ebx
  NTSTATUS result; // eax
  _QWORD *v5; // rax
  int v6; // eax
  ULONG OldProtect; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v2 = 0;
  OldProtect = 0;
  if ( !*(_QWORD *)(a1 + 112)
    || (result = ZwProtectVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   (PVOID *)(a1 + 112),
                   (PSIZE_T)(a1 + 120),
                   *(_DWORD *)(a1 + 144),
                   &OldProtect),
        v2 = result,
        result >= 0) )
  {
    v5 = *(_QWORD **)(a1 + 160);
    if ( v5 && *v5 != *(_QWORD *)(a1 + 152) )
      __fastfail(0x13u);
    if ( *(_WORD *)(v1 + 110) || (result = LdrpHandleTlsData(v1), v2 = result, result >= 0) )
    {
      if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression() )
      {
        v6 = LdrpUnsuppressAddressTakenIat(*(PVOID *)(v1 + 48));
        v2 = v6;
        if ( v6 < 0 )
          LdrpLogInternal(
            "minkernel\\ldr\\ldrsnap.c",
            590LL,
            "LdrpDoPostSnapWork",
            0LL,
            "LdrpDoPostSnapWork:Unable to unsuppress the export suppressed functions that are imported in the DLL based a"
            "t 0x%p.Status = 0x%x\n",
            *(const void **)(v1 + 48),
            v6);
      }
      return v2;
    }
  }
  return result;
}
