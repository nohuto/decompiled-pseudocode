/*
 * XREFs of ??1CD2DInk@@MEAA@XZ @ 0x1802CCDD8
 * Callers:
 *     ??_ECD2DInk@@MEAAPEAXI@Z @ 0x1802CCE10 (--_ECD2DInk@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x180024308 (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 */

void __fastcall CD2DInk::~CD2DInk(CD2DInk *this)
{
  *(_QWORD *)this = &CD2DInk::`vftable';
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(*((_QWORD *)this + 9));
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(*((_QWORD *)this + 10));
  CD2DResource::~CD2DResource(this);
}
