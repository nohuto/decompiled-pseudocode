/*
 * XREFs of DifIsValidTrackingObject @ 0x14061617C
 * Callers:
 *     DifObjTrkInsertItem @ 0x1406162B0 (DifObjTrkInsertItem.c)
 *     DifObjTrkRemoveItem @ 0x140616780 (DifObjTrkRemoveItem.c)
 * Callees:
 *     DifIsPluginEnabled @ 0x140617D44 (DifIsPluginEnabled.c)
 */

__int64 __fastcall DifIsValidTrackingObject(unsigned int a1, unsigned __int64 a2)
{
  int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // rax
  int *v5; // rax
  int v6; // eax

  if ( a2 < 0xFFFF800000000000uLL )
    return 3221225659LL;
  if ( !(unsigned __int8)DifIsPluginEnabled(a1) )
    return 3221225659LL;
  v4 = DifPluginSettings[v3];
  if ( !v4 )
    return 3221225659LL;
  v5 = *(int **)(v4 + 24);
  if ( !v5 )
    return 3221225659LL;
  v6 = *v5;
  if ( v6 )
  {
    if ( v2 && v6 != v2 )
      return 3221225659LL;
  }
  else if ( !v2 )
  {
    return 3221225659LL;
  }
  if ( !DifObjTrkContext )
    return 3221225659LL;
  return DifObjTrkInitialized == 0 ? 0xC00000BB : 0;
}
