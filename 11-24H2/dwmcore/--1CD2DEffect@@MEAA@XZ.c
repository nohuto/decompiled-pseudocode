/*
 * XREFs of ??1CD2DEffect@@MEAA@XZ @ 0x180214AFC
 * Callers:
 *     ??_GCD2DEffect@@MEAAPEAXI@Z @ 0x180214AC0 (--_GCD2DEffect@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x180024308 (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 */

void __fastcall CD2DEffect::~CD2DEffect(CD2DEffect *this)
{
  *(_QWORD *)this = &CD2DEffect::`vftable';
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(*((_QWORD *)this + 9));
  CD2DResource::~CD2DResource(this);
}
