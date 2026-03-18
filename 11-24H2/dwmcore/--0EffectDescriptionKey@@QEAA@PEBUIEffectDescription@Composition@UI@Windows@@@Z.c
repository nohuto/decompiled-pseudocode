/*
 * XREFs of ??0EffectDescriptionKey@@QEAA@PEBUIEffectDescription@Composition@UI@Windows@@@Z @ 0x180210BF8
 * Callers:
 *     ??1CEffectCompilationTask@@QEAA@XZ @ 0x180273D28 (--1CEffectCompilationTask@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

EffectDescriptionKey *__fastcall EffectDescriptionKey::EffectDescriptionKey(
        EffectDescriptionKey *this,
        const struct Windows::UI::Composition::IEffectDescription *a2)
{
  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)a2 + 104LL))(a2);
  return this;
}
