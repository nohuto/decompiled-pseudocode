/*
 * XREFs of ??0EffectDescriptionKey@@QEAA@PEBUIEffectDescription@Composition@UI@Windows@@@Z @ 0x18021C4EC
 * Callers:
 *     ??1CEffectCompilationTask@@QEAA@XZ @ 0x18027E438 (--1CEffectCompilationTask@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

EffectDescriptionKey *__fastcall EffectDescriptionKey::EffectDescriptionKey(
        EffectDescriptionKey *this,
        const struct Windows::UI::Composition::IEffectDescription *a2)
{
  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)a2 + 104LL))(a2);
  return this;
}
