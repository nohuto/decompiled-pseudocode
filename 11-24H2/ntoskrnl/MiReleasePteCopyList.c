/*
 * XREFs of MiReleasePteCopyList @ 0x1404A6F48
 * Callers:
 *     MiCopyPagesIntoEnclave @ 0x1408DA288 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 */

unsigned __int64 __fastcall MiReleasePteCopyList(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
    return MiReleasePtes((__int64)&qword_140E37568, *(_QWORD **)(a1 + 16), v1);
  return result;
}
