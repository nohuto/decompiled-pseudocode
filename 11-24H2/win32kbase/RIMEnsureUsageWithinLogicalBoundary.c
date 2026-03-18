/*
 * XREFs of RIMEnsureUsageWithinLogicalBoundary @ 0x1400E76A4
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1400AE898 (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     <none>
 */

int *__fastcall RIMEnsureUsageWithinLogicalBoundary(__int64 a1)
{
  int v1; // r8d
  int *result; // rax
  int v4; // edx
  int v5; // edx
  int v6; // ecx
  int v7; // edx

  v1 = *(_DWORD *)(a1 + 32);
  result = (int *)(a1 + 52);
  if ( v1 < 0 )
  {
    v4 = 1 << (*(_WORD *)(a1 + 56) - 1);
    if ( (v4 & *result) != 0 )
      v5 = *result | -v4;
    else
      v5 = *result;
    *result = v5;
  }
  v6 = *result;
  if ( *result < v1 )
  {
    *result = v1;
    v6 = v1;
  }
  v7 = *(_DWORD *)(a1 + 36);
  if ( v6 > v7 )
    *result = v7;
  return result;
}
