/*
 * XREFs of SmmMapVirtualMemory @ 0x140280204
 * Callers:
 *     ?SysMmMapPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@D_K1IPEAPEAXPEA_K3@Z @ 0x140044958 (-SysMmMapPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@D_K1IPEAPEAXPEA_K3@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall SmmMapVirtualMemory(unsigned __int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5, _QWORD *a6)
{
  if ( a1 > (unsigned __int64)MmHighestUserAddress )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 235;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pBaseAddress <= MmHighestUserAddress",
      235LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *a4 = a1 + a2;
  *a5 = 0LL;
  *a6 = a3;
  return 0LL;
}
