/*
 * XREFs of ??0CWindowSnapshot@@IEAA@XZ @ 0x180007220
 * Callers:
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x180007130 (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x180026794 (--0CBaseObject@@QEAA@XZ.c)
 */

CWindowSnapshot *__fastcall CWindowSnapshot::CWindowSnapshot(CWindowSnapshot *this)
{
  __int64 v1; // rcx

  CBaseObject::CBaseObject(this);
  *(_DWORD *)(v1 + 72) = 1065353216;
  *(_QWORD *)(v1 + 16) = &CWindowSnapshot::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  *(_QWORD *)v1 = &CWindowSnapshot::`vftable'{for `CBaseObject'};
  *(_QWORD *)(v1 + 24) = 0LL;
  *(_QWORD *)(v1 + 32) = 0LL;
  *(_QWORD *)(v1 + 40) = 0LL;
  *(_QWORD *)(v1 + 48) = 0LL;
  *(_QWORD *)(v1 + 56) = 0LL;
  *(_QWORD *)(v1 + 64) = 0LL;
  *(_QWORD *)(v1 + 80) = 0LL;
  *(_QWORD *)(v1 + 88) = 0LL;
  *(_QWORD *)(v1 + 96) = 0LL;
  return (CWindowSnapshot *)v1;
}
