/*
 * XREFs of ??$UnRegisterNotifiers@VCKeyframeAnimation@@@CResource@@QEAAXPEAV?$vector@PEAVCKeyframeAnimation@@V?$allocator@PEAVCKeyframeAnimation@@@std@@@std@@@Z @ 0x1801329D4
 * Callers:
 *     ??1?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@MEAA@XZ @ 0x180130C9C (--1-$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@MEAA@XZ.c)
 *     ?SetOrAppendKeyframeAnimations@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@AEAAJAEBV?$span@PEAVCKeyframeAnimation@@$0?0@gsl@@_N@Z @ 0x180131DE4 (-SetOrAppendKeyframeAnimations@-$CAnimationControllerGeneratedT@VCAnimationController@@VCPropert.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

struct CResource **__fastcall CResource::UnRegisterNotifiers<CKeyframeAnimation>(
        CResource *this,
        struct CResource ***a2)
{
  struct CResource **v2; // rsi
  struct CResource **i; // rdi
  struct CResource **result; // rax

  v2 = a2[1];
  for ( i = *a2; i != v2; ++i )
    CResource::UnRegisterNotifierInternal(this, *i);
  result = *a2;
  if ( *a2 != a2[1] )
    a2[1] = result;
  return result;
}
