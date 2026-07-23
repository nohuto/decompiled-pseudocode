/*
 * XREFs of EtwpRegistrationCompare @ 0x1800DC710
 * Callers:
 *     EtwpFindRegistration @ 0x18004B080 (EtwpFindRegistration.c)
 * Callees:
 *     memcmp @ 0x180165A90 (memcmp.c)
 */

int __fastcall EtwpRegistrationCompare(__int64 a1, __int64 a2)
{
  int result; // eax
  unsigned __int16 v5; // cx

  result = memcmp(*(const void **)a1, (const void *)(a2 + 32), 0x10uLL);
  if ( !result )
  {
    v5 = *(_WORD *)(a1 + 8);
    if ( v5 > *(_WORD *)(a2 + 84) )
      return -1;
    else
      return v5 < *(_WORD *)(a2 + 84);
  }
  return result;
}
