/*
 * XREFs of ??1CD2DInk@@MEAA@XZ @ 0x1802D6048
 * Callers:
 *     ??_ECD2DInk@@MEAAPEAXI@Z @ 0x1802D6080 (--_ECD2DInk@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x1800781CC (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 */

void __fastcall CD2DInk::~CD2DInk(CD2DInk *this)
{
  *(_QWORD *)this = &CD2DInk::`vftable';
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(*((_QWORD *)this + 9));
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(*((_QWORD *)this + 10));
  CD2DResource::~CD2DResource(this);
}
