/*
 * XREFs of ?ComputeMaxTrackSize@@YA?AUtagSIZE@@UtagRECT@@G@Z @ 0x140075714
 * Callers:
 *     GetMaxTrackSizeForWindow @ 0x1400747AC (GetMaxTrackSizeForWindow.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 */

struct tagSIZE __fastcall ComputeMaxTrackSize(struct tagRECT *a1, unsigned __int16 a2)
{
  unsigned int v2; // edi
  int DpiDependentMetric; // ebx
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h]

  v2 = a2;
  DpiDependentMetric = GetDpiDependentMetric(29, a2);
  LODWORD(v7) = a1->right + 2 * (DpiDependentMetric + GetDpiDependentMetric(14, v2) + 2) - a1->left;
  v5 = GetDpiDependentMetric(29, v2);
  HIDWORD(v7) = a1->bottom + 2 * (GetDpiDependentMetric(15, v2) + v5) + 4 - a1->top;
  return (struct tagSIZE)v7;
}
