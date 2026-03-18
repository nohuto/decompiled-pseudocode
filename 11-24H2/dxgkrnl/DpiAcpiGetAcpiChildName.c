/*
 * XREFs of DpiAcpiGetAcpiChildName @ 0x140251890
 * Callers:
 *     DpiFdoCreateChildDescriptor @ 0x14023D098 (DpiFdoCreateChildDescriptor.c)
 *     DpEvalAcpiMethod @ 0x14038D8A0 (DpEvalAcpiMethod.c)
 * Callees:
 *     DpiAcpiPrepareAcpiChildNameList @ 0x140251AD4 (DpiAcpiPrepareAcpiChildNameList.c)
 */

__int64 __fastcall DpiAcpiGetAcpiChildName(__int64 a1, int a2)
{
  int v4; // eax
  unsigned int v5; // r8d
  __int64 v6; // rcx

  v4 = DpiAcpiPrepareAcpiChildNameList(a1);
  v5 = 0;
  if ( v4 >= 0 )
  {
    while ( v5 < *(_DWORD *)(a1 + 3416) )
    {
      v6 = *(_QWORD *)(a1 + 3432);
      if ( a2 == *(_DWORD *)(v6 + 16LL * v5) )
        return *(_QWORD *)(v6 + 16LL * v5 + 8);
      ++v5;
    }
  }
  return 0LL;
}
