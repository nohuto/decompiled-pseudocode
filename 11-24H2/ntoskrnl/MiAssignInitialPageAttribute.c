/*
 * XREFs of MiAssignInitialPageAttribute @ 0x1403A6FA4
 * Callers:
 *     MiMapContiguousMemoryLarge @ 0x1403A6D44 (MiMapContiguousMemoryLarge.c)
 *     MiInsertPhysicalPteMapping @ 0x1403CFC94 (MiInsertPhysicalPteMapping.c)
 *     MiMapMdlCommon @ 0x1404F0304 (MiMapMdlCommon.c)
 * Callees:
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiMirrorInSingleProcessorMode @ 0x1403A7018 (MiMirrorInSingleProcessorMode.c)
 */

__int64 __fastcall MiAssignInitialPageAttribute(__int64 a1, char a2)
{
  __int64 result; // rax
  unsigned __int8 v5; // dl
  unsigned int v6; // [rsp+30h] [rbp+8h]

  result = MiMirrorInSingleProcessorMode();
  if ( (_DWORD)result )
  {
    v5 = 17;
  }
  else
  {
    result = MiLockPageInline(a1);
    v5 = result;
  }
  if ( (HIWORD(*(_DWORD *)(a1 + 32)) & 0xC0) == 0xC0 )
  {
    v6 = *(_DWORD *)(a1 + 32);
    BYTE2(v6) = (a2 << 6) | BYTE2(v6) & 0x3F;
    result = v6;
    *(_DWORD *)(a1 + 32) = v6;
  }
  if ( v5 != 17 )
    return MiUnlockPage(a1, v5);
  return result;
}
