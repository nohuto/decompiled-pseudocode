/*
 * XREFs of MiReleasePteCopyList @ 0x1404A6450
 * Callers:
 *     MiCopyPagesIntoEnclave @ 0x1409CB268 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 */

char __fastcall MiReleasePteCopyList(__int64 a1)
{
  unsigned int v1; // r8d
  char result; // al

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
    return MiReleasePtes((__int64)&qword_140E37328, *(unsigned __int64 **)(a1 + 16), v1);
  return result;
}
