/*
 * XREFs of RtlIsEnclaveFeaturePresent @ 0x1801196C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RtlIsEnclaveFeaturePresent(unsigned int a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(4 * ((unsigned __int64)a1 >> 8) + 0x7FFE036C);
  return _bittest(&v1, a1 & 0x1F);
}
