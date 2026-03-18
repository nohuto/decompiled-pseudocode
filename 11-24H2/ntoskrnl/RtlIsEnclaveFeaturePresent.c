/*
 * XREFs of RtlIsEnclaveFeaturePresent @ 0x14077D080
 * Callers:
 *     NtCreateEnclave @ 0x1407F7960 (NtCreateEnclave.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RtlIsEnclaveFeaturePresent(unsigned int a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(4 * ((unsigned __int64)a1 >> 8) - 0x87FFFFFFC94LL);
  return _bittest(&v1, a1 & 0x1F);
}
