/*
 * XREFs of MiCreateResidentBasePfnTemplate @ 0x140C5A248
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     MiCopyPfnEntryRaw @ 0x1404386A0 (MiCopyPfnEntryRaw.c)
 */

__int64 __fastcall MiCreateResidentBasePfnTemplate(__int64 a1)
{
  __int64 v1; // r9
  int v2; // eax
  __int64 result; // rax
  unsigned int v4; // [rsp+30h] [rbp+8h]

  MiCopyPfnEntryRaw(a1, qword_140E2FF80);
  *(_QWORD *)(v1 + 24) &= 0xC000000000000000uLL;
  v2 = *(_DWORD *)(v1 + 32);
  LOWORD(v2) = 0;
  *(_DWORD *)(v1 + 32) = v2;
  v4 = *(_DWORD *)(v1 + 32);
  BYTE2(v4) = BYTE2(v4) & 0xF8 | 5;
  result = v4;
  *(_DWORD *)(v1 + 32) = v4;
  return result;
}
