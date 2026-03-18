/*
 * XREFs of ?GetChange@CEffectPropertyChangeNotification@@UEBAPEAUIEffectInstance@Composition@UI@Windows@@PEAI@Z @ 0x180218990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct Windows::UI::Composition::IEffectInstance *__fastcall CEffectPropertyChangeNotification::GetChange(
        CEffectPropertyChangeNotification *this,
        unsigned int *a2)
{
  *a2 = *((_DWORD *)this + 4);
  return (struct Windows::UI::Composition::IEffectInstance *)*((_QWORD *)this + 1);
}
