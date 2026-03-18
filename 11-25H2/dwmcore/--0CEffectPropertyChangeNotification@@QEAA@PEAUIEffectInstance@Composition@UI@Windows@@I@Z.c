/*
 * XREFs of ??0CEffectPropertyChangeNotification@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@I@Z @ 0x1801EF0D8
 * Callers:
 *     ?OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801EEF60 (-OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     <none>
 */

CEffectPropertyChangeNotification *__fastcall CEffectPropertyChangeNotification::CEffectPropertyChangeNotification(
        CEffectPropertyChangeNotification *this,
        struct Windows::UI::Composition::IEffectInstance *a2,
        int a3)
{
  CEffectPropertyChangeNotification *result; // rax

  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &CEffectPropertyChangeNotification::`vftable';
  result = this;
  *((_DWORD *)this + 4) = a3;
  return result;
}
