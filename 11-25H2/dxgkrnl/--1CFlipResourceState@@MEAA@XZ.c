/*
 * XREFs of ??1CFlipResourceState@@MEAA@XZ @ 0x14005434C
 * Callers:
 *     ??1CContentResourceState@@UEAA@XZ @ 0x140054294 (--1CContentResourceState@@UEAA@XZ.c)
 *     ??_GCPoolBufferResourceState@@UEAAPEAXI@Z @ 0x140054300 (--_GCPoolBufferResourceState@@UEAAPEAXI@Z.c)
 *     ??_ECFlipResourceState@@MEAAPEAXI@Z @ 0x14009D350 (--_ECFlipResourceState@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x14000A0E0 (-Release@CFlipResource@@QEAAKXZ.c)
 */

void __fastcall CFlipResourceState::~CFlipResourceState(CFlipResource **this)
{
  unsigned __int64 v1; // r8
  __int64 v2; // rdx
  _QWORD *v3; // rax

  *this = (CFlipResource *)&CFlipResourceState::`vftable';
  v1 = (unsigned __int64)(this + 1) & -(__int64)(this != 0LL);
  v2 = *(_QWORD *)v1;
  if ( *(_QWORD *)(*(_QWORD *)v1 + 8LL) != v1
    || (v3 = *(_QWORD **)(((unsigned __int64)(this + 1) & -(__int64)(this != 0LL)) + 8), *v3 != v1) )
  {
    __fastfail(3u);
  }
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  CFlipResource::Release(this[3]);
}
