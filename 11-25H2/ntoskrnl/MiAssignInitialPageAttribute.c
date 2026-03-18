/*
 * XREFs of MiAssignInitialPageAttribute @ 0x14038FFF4
 * Callers:
 *     MiInsertPhysicalPteMapping @ 0x140338440 (MiInsertPhysicalPteMapping.c)
 *     MiMapContiguousMemoryLarge @ 0x14038FD94 (MiMapContiguousMemoryLarge.c)
 *     MiMapMdlCommon @ 0x1404ECDC4 (MiMapMdlCommon.c)
 * Callees:
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiMirrorInSingleProcessorMode @ 0x140390068 (MiMirrorInSingleProcessorMode.c)
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
