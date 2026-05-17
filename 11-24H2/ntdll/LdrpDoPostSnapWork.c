/*
 * XREFs of LdrpDoPostSnapWork @ 0x1800073C0
 * Callers:
 *     LdrpSnapModule @ 0x180056F30 (LdrpSnapModule.c)
 * Callees:
 *     LdrpUnsuppressAddressTakenIat @ 0x1800074AC (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpHandleTlsData @ 0x180008200 (LdrpHandleTlsData.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180009670 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     ZwProtectVirtualMemory @ 0x180162690 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall LdrpDoPostSnapWork(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  int v5; // ebx
  __int64 result; // rax
  _QWORD *v8; // rax
  int v9; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  v4 = a1 + 112;
  v5 = 0;
  v9 = 0;
  if ( !*(_QWORD *)(a1 + 112)
    || (result = ZwProtectVirtualMemory(-1LL, v4, a1 + 120, *(unsigned int *)(a1 + 144), &v9),
        v5 = result,
        (int)result >= 0) )
  {
    v8 = *(_QWORD **)(a1 + 160);
    if ( v8 && *v8 != *(_QWORD *)(a1 + 152) )
      __fastfail(0x13u);
    if ( *(_WORD *)(v3 + 110) || (result = LdrpHandleTlsData(v3), v5 = result, (int)result >= 0) )
    {
      if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression(a1, v4, a3) )
      {
        v5 = LdrpUnsuppressAddressTakenIat(*(_QWORD *)(v3 + 48), 0LL, 0LL);
        if ( v5 < 0 )
          LdrpLogInternal(
            (int)"minkernel\\ldr\\ldrsnap.c",
            590,
            (int)"LdrpDoPostSnapWork",
            0,
            "LdrpDoPostSnapWork:Unable to unsuppress the export suppressed functions that are imported in the DLL based a"
            "t 0x%p.Status = 0x%x\n",
            *(_QWORD *)(v3 + 48));
      }
      return (unsigned int)v5;
    }
  }
  return result;
}
