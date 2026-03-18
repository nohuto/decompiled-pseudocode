/*
 * XREFs of ??2CRoundedRectangleShape@@SAPEAX_K@Z @ 0x18019DDC0
 * Callers:
 *     ?FlattenToLineSegments@CRoundedRectangleShape@@UEBAJMPEAPEAVCShape@@@Z @ 0x18001CF80 (-FlattenToLineSegments@CRoundedRectangleShape@@UEBAJMPEAPEAVCShape@@@Z.c)
 * Callees:
 *     ?Alloc@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAPEAX_K@Z @ 0x18019DDEC (-Alloc@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

void *__fastcall CRoundedRectangleShape::operator new(__int64 a1, __int64 a2)
{
  void *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = (void *)CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Alloc(a1, a2);
  if ( !result )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  return result;
}
