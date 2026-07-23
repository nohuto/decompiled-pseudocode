/*
 * XREFs of RtlIsEnclaveFeaturePresent @ 0x14077CFB0
 * Callers:
 *     NtCreateEnclave @ 0x1407F80D0 (NtCreateEnclave.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsEnclaveFeaturePresent(ULONG FeatureMask)
{
  int v1; // eax

  v1 = *(_DWORD *)(4 * ((unsigned __int64)FeatureMask >> 8) - 0x87FFFFFFC94LL);
  return _bittest(&v1, FeatureMask & 0x1F);
}
