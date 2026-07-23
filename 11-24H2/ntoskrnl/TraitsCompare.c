/*
 * XREFs of TraitsCompare @ 0x1409E92F4
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x1409F69B4 (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

int __fastcall TraitsCompare(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  _WORD *v3; // rdx

  v2 = *(unsigned __int16 *)(a1 + 28);
  v3 = (_WORD *)(a2 + 28);
  if ( (unsigned __int16)v2 < *v3 )
    return -1;
  if ( (unsigned __int16)v2 <= *v3 )
    return memcmp((const void *)(a1 + 28), v3, v2);
  return 1;
}
