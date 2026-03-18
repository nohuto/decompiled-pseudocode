/*
 * XREFs of SmmValidateParameters_0 @ 0x140044FF4
 * Callers:
 *     ?SysMmMapPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@D_K1IPEAPEAXPEA_K3@Z @ 0x140044958 (-SysMmMapPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@D_K1IPEAPEAXPEA_K3@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

char __fastcall SmmValidateParameters_0(__int64 a1, char a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  int v5; // r10d
  KIRQL CurrentIrql; // al

  v4 = *(_DWORD *)(a1 + 44);
  if ( ((a4 | a3) & 0xFFF) != 0 )
  {
    WdLogSingleEntry2(3LL, a3, a4);
    WdLogGlobalForLineNumber = 567;
    return 0;
  }
  if ( a3 + a4 < a3 )
  {
    WdLogSingleEntry2(3LL, a3, a4);
    WdLogGlobalForLineNumber = 575;
    return 0;
  }
  if ( a3 + a4 > *(_QWORD *)a1 )
  {
    WdLogSingleEntry3(3LL, a3, a4, *(_QWORD *)a1);
    WdLogGlobalForLineNumber = 584;
    return 0;
  }
  if ( a2 == 1 )
  {
    v5 = (v4 >> 1) & 0xF;
    if ( v5 == 5 || v5 == 3 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 596;
      return 0;
    }
  }
  else
  {
    if ( a2 )
    {
      WdLogSingleEntry1(3LL, a2);
      WdLogGlobalForLineNumber = 614;
      return 0;
    }
    v5 = (v4 >> 1) & 0xF;
    if ( v5 == 4 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 607;
      return 0;
    }
  }
  if ( v5 != 1 && (v5 != 2 || a2 != 1) )
  {
    if ( KeGetCurrentIrql() > 2u )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 649;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"KeGetCurrentIrql() <= 2", 649LL, 0LL, 0LL, 0LL, 0LL);
    }
    return 1;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql <= 1u )
    return 1;
  WdLogSingleEntry1(3LL, CurrentIrql);
  WdLogGlobalForLineNumber = 640;
  return 0;
}
