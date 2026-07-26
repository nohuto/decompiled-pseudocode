/*
 * XREFs of ?ndisVerifierGetRoutineAddress@@YAPEAXPEAU_UNICODE_STRING@@@Z @ 0x1400C5F70
 * Callers:
 *     <none>
 * Callees:
 *     NdisGetRoutineAddress @ 0x1400C6340 (NdisGetRoutineAddress.c)
 */

PVOID __fastcall ndisVerifierGetRoutineAddress(PNDIS_STRING NdisRoutineName)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < 0x19; i = (unsigned int)(i + 1) )
  {
    if ( RtlEqualUnicodeString(NdisRoutineName, (PCUNICODE_STRING)&asc_1400F3590[12 * i], 1u) )
      return *(PVOID *)&asc_1400F3590[12 * i + 8];
  }
  return NdisGetRoutineAddress(NdisRoutineName);
}
