/*
 * XREFs of _anonymous_namespace_::ComputeInsightsPanelRect @ 0x1804597B4
 * Callers:
 *     ?SizeViewOnCreation@CInsightsExperienceManager@@AEAAJXZ @ 0x18045A678 (-SizeViewOnCreation@CInsightsExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 */

int *__fastcall anonymous_namespace_::ComputeInsightsPanelRect(int *a1, int a2, int a3, int *a4)
{
  LANGID ThreadUILanguage; // ax
  int v9; // r10d
  int v10; // edx
  int v11; // eax
  int v12; // eax

  ThreadUILanguage = GetThreadUILanguage();
  if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
    v9 = *a4;
  else
    v9 = a4[2] - a2;
  *a1 = v9;
  v10 = a4[3] - a3;
  a1[3] = a4[3];
  v11 = a4[2];
  a1[2] = v9 + a2;
  a1[1] = v10;
  if ( v9 + a2 > v11 )
    a1[2] = v11;
  if ( v9 < *a4 )
    *a1 = *a4;
  v12 = a4[1];
  if ( v10 < v12 )
    a1[1] = v12;
  return a1;
}
