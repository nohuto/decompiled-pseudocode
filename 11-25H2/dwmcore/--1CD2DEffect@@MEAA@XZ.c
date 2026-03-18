/*
 * XREFs of ??1CD2DEffect@@MEAA@XZ @ 0x18022034C
 * Callers:
 *     ??_GCD2DEffect@@MEAAPEAXI@Z @ 0x180220310 (--_GCD2DEffect@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x1800781CC (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 */

void __fastcall CD2DEffect::~CD2DEffect(CD2DEffect *this)
{
  *(_QWORD *)this = &CD2DEffect::`vftable';
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(*((_QWORD *)this + 9));
  CD2DResource::~CD2DResource(this);
}
