/*
 * XREFs of MiAssignInitialPageAttribute @ 0x14026C070
 * Callers:
 *     MiMapContiguousMemoryLarge @ 0x14026BE10 (MiMapContiguousMemoryLarge.c)
 *     MiInsertPhysicalPteMapping @ 0x1403910B8 (MiInsertPhysicalPteMapping.c)
 *     MiMapMdlCommon @ 0x1404EDDA4 (MiMapMdlCommon.c)
 * Callees:
 *     MiMirrorInSingleProcessorMode @ 0x14026C0E4 (MiMirrorInSingleProcessorMode.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 */

__int64 __fastcall MiAssignInitialPageAttribute(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  unsigned int v6; // [rsp+30h] [rbp+8h]

  result = MiMirrorInSingleProcessorMode();
  if ( (_DWORD)result )
  {
    LOBYTE(v5) = 17;
  }
  else
  {
    result = MiLockPageInline(a1);
    LOBYTE(v5) = result;
  }
  if ( (HIWORD(*(_DWORD *)(a1 + 32)) & 0xC0) == 0xC0 )
  {
    v6 = *(_DWORD *)(a1 + 32);
    BYTE2(v6) = (a2 << 6) | BYTE2(v6) & 0x3F;
    result = v6;
    *(_DWORD *)(a1 + 32) = v6;
  }
  if ( (_BYTE)v5 != 17 )
    return MiUnlockPage(a1, v5);
  return result;
}
