/*
 * XREFs of DifObjTrkIsExceptionPluginId @ 0x14061641C
 * Callers:
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x140616450 (DifObjTrkQeuryInvokeDeleteRange.c)
 * Callees:
 *     <none>
 */

char __fastcall DifObjTrkIsExceptionPluginId(int a1, __int64 a2, unsigned int a3)
{
  char v3; // r9
  unsigned int i; // r10d

  v3 = 0;
  if ( !a2 || !a3 )
    return 0;
  for ( i = 0; i < a3; ++i )
  {
    if ( *(_DWORD *)(a2 + 4LL * i) == a1 )
      return 1;
  }
  return v3;
}
