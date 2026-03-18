/*
 * XREFs of CmpLockKcbStackFlusherLocksExclusive @ 0x140668020
 * Callers:
 *     CmSaveKey @ 0x1407CDBFC (CmSaveKey.c)
 * Callees:
 *     CmpGetNextActiveHive @ 0x14090B0EC (CmpGetNextActiveHive.c)
 *     CmpGetKcbAtLayerHeight @ 0x140918910 (CmpGetKcbAtLayerHeight.c)
 *     CmpQuitNextActiveHive @ 0x140A6E614 (CmpQuitNextActiveHive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BB9AB4 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpLockKcbStackFlusherLocksExclusive(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax
  __int64 v4; // rbx
  __int16 i; // dx
  __int16 v6; // dx
  __int64 v7; // rcx

  v2 = *(__int16 *)(a1 + 2) + 1;
  for ( result = CmpGetNextActiveHive(0LL); ; result = CmpGetNextActiveHive(v4) )
  {
    v4 = result;
    if ( !result )
      break;
    for ( i = *(_WORD *)(a1 + 2); i >= 0; i = v6 - 1 )
    {
      v7 = *(_QWORD *)(CmpGetKcbAtLayerHeight(a1) + 32);
      if ( v7 == v4 )
      {
        HvLockHiveFlusherExclusive(v7);
        --v2;
        break;
      }
    }
    if ( !v2 )
      return CmpQuitNextActiveHive(v4);
  }
  return result;
}
