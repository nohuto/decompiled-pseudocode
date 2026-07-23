/*
 * XREFs of ApiSetSchemaExpander_MigrateSchemaData @ 0x140661850
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x14065FE98 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

void *__fastcall ApiSetSchemaExpander_MigrateSchemaData(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  unsigned int v4; // eax

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 32);
  memmove(
    (void *)(v3 + *(unsigned int *)(v3 + 36) - (unsigned __int64)*(unsigned __int16 *)(v3 + 18)),
    (const void *)(v1 + *(unsigned int *)(v1 + 36) - (unsigned __int64)*(unsigned __int16 *)(v1 + 18)),
    *(unsigned int *)(v1 + 40));
  if ( *(_BYTE *)(a1 + 16) )
  {
    v4 = *(_DWORD *)(v1 + 28);
    if ( v4 )
      memmove(
        (void *)(v3 + *(unsigned int *)(v3 + 24) - (unsigned __int64)*(unsigned __int16 *)(v3 + 18)),
        (const void *)(v1 + *(unsigned int *)(v1 + 24) - (unsigned __int64)*(unsigned __int16 *)(v1 + 18)),
        v4);
  }
  memmove(
    (void *)(v3 + *(unsigned int *)(v3 + 44) - (unsigned __int64)*(unsigned __int16 *)(v3 + 18)),
    (const void *)(v1 + *(unsigned int *)(v1 + 44) - (unsigned __int64)*(unsigned __int16 *)(v1 + 18)),
    20LL * *(unsigned __int16 *)(v1 + 48));
  memmove(
    (void *)(v3 + *(unsigned int *)(v3 + 56) - (unsigned __int64)*(unsigned __int16 *)(v3 + 18)),
    (const void *)(v1 + *(unsigned int *)(v1 + 56) - (unsigned __int64)*(unsigned __int16 *)(v1 + 18)),
    20LL * *(unsigned __int16 *)(v1 + 60));
  memmove(
    (void *)(v3 + *(unsigned int *)(v3 + 68) - (unsigned __int64)*(unsigned __int16 *)(v3 + 18)),
    (const void *)(v1 + *(unsigned int *)(v1 + 68) - (unsigned __int64)*(unsigned __int16 *)(v1 + 18)),
    20LL * *(unsigned __int16 *)(v1 + 72));
  memmove(
    (void *)(v3 + *(unsigned int *)(v3 + 92) - (unsigned __int64)*(unsigned __int16 *)(v3 + 18)),
    (const void *)(v1 + *(unsigned int *)(v1 + 92) - (unsigned __int64)*(unsigned __int16 *)(v1 + 18)),
    20LL * *(unsigned __int16 *)(v1 + 96));
  memmove(
    (void *)(v3 + *(unsigned int *)(v3 + 80) - (unsigned __int64)*(unsigned __int16 *)(v3 + 18)),
    (const void *)(v1 + *(unsigned int *)(v1 + 80) - (unsigned __int64)*(unsigned __int16 *)(v1 + 18)),
    12LL * *(unsigned __int16 *)(v1 + 84));
  return memmove(
           (void *)(v3 + *(unsigned int *)(v3 + 104) - (unsigned __int64)*(unsigned __int16 *)(v3 + 18)),
           (const void *)(v1 + *(unsigned int *)(v1 + 104) - (unsigned __int64)*(unsigned __int16 *)(v1 + 18)),
           *(unsigned int *)(v1 + 108));
}
