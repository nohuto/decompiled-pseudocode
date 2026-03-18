/*
 * XREFs of DXGADAPTER_IsFeatureEnabled @ 0x14006C240
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFeatureEnabled@DXGADAPTER@@QEAA?AU_DXGK_ISFEATUREENABLED_RESULT@@W4_DXGK_FEATURE_ID@@@Z @ 0x140190D18 (-IsFeatureEnabled@DXGADAPTER@@QEAA-AU_DXGK_ISFEATUREENABLED_RESULT@@W4_DXGK_FEATURE_ID@@@Z.c)
 */

__int64 __fastcall DXGADAPTER_IsFeatureEnabled(__int64 a1, unsigned int a2)
{
  char v3; // [rsp+40h] [rbp+18h] BYREF

  return *(unsigned int *)DXGADAPTER::IsFeatureEnabled(a1, &v3, a2);
}
