/*
 * XREFs of ??0CMultitaskingViewButtonElement@@QEAA@XZ @ 0x1804BEAAC
 * Callers:
 *     ??0CShrinkButtonElement@@QEAA@XZ @ 0x1804BEAD0 (--0CShrinkButtonElement@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewButtonElement@@UIGlyphButton@@@WRL@Microsoft@@QEAA@XZ @ 0x1804D144C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewButtonElement@@UIGly.c)
 *     ??$MakeAndInitialize@VLightDismissElement@@V1@AEAPEAUILightDismissElementHost@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAVLightDismissElement@@AEAPEAUILightDismissElementHost@@AEAI@Z @ 0x1804DB758 (--$MakeAndInitialize@VLightDismissElement@@V1@AEAPEAUILightDismissElementHost@@AEAI@Details@WRL@.c)
 * Callees:
 *     ??0CMultitaskingViewElementBase@@QEAA@XZ @ 0x1804B7258 (--0CMultitaskingViewElementBase@@QEAA@XZ.c)
 */

CMultitaskingViewButtonElement *__fastcall CMultitaskingViewButtonElement::CMultitaskingViewButtonElement(
        CMultitaskingViewButtonElement *this)
{
  CMultitaskingViewButtonElement *v1; // rcx
  CMultitaskingViewButtonElement *result; // rax

  CMultitaskingViewElementBase::CMultitaskingViewElementBase(this);
  result = v1;
  *(_QWORD *)v1 = &CMultitaskingViewButtonElement::`vftable';
  return result;
}
