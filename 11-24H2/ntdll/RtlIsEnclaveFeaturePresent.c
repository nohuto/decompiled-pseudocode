/*
 * XREFs of RtlIsEnclaveFeaturePresent @ 0x1801178F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsEnclaveFeaturePresent(ULONG FeatureMask)
{
  int v1; // eax

  v1 = *(_DWORD *)(4 * ((unsigned __int64)FeatureMask >> 8) + 0x7FFE036C);
  return _bittest(&v1, FeatureMask & 0x1F);
}
