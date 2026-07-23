/*
 * XREFs of VfIsRuleClassEnabled @ 0x140BA9550
 * Callers:
 *     VfIrpTrackingPluginEntry @ 0x1406A5140 (VfIrpTrackingPluginEntry.c)
 *     VerifierInitSystem @ 0x140C3D310 (VerifierInitSystem.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VfIsRuleClassEnabled(unsigned int a1)
{
  int v1; // eax

  if ( a1 >= 0x40 )
    return 0;
  v1 = *((_DWORD *)&VfRuleClasses + ((unsigned __int64)a1 >> 5));
  return _bittest(&v1, a1 & 0x1F);
}
