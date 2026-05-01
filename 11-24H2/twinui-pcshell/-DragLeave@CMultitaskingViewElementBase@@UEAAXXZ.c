/*
 * XREFs of ?DragLeave@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1804C3900
 * Callers:
 *     <none>
 * Callees:
 *     ??1PointerTracking@CMultitaskingViewElementBase@@QEAA@XZ @ 0x1804B76C4 (--1PointerTracking@CMultitaskingViewElementBase@@QEAA@XZ.c)
 *     ??4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@$$QEAU01@@Z @ 0x1804C3460 (--4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMultitaskingViewElementBase::DragLeave(CMultitaskingViewElementBase *this)
{
  __int64 v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-58h] BYREF
  int v4; // [rsp+30h] [rbp-48h]
  int v5; // [rsp+34h] [rbp-44h]
  int v6; // [rsp+38h] [rbp-40h]
  int v7; // [rsp+3Ch] [rbp-3Ch]
  __int128 v8; // [rsp+40h] [rbp-38h]
  __int128 v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v2 = *((_QWORD *)this + 17);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 464LL))(v2);
  v7 = 0;
  v11 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v10 = 0;
  v3 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  CMultitaskingViewElementBase::PointerTracking::operator=((__int64)this + 96, (__int64)&v3);
  CMultitaskingViewElementBase::PointerTracking::~PointerTracking((CMultitaskingViewElementBase::PointerTracking *)&v3);
  (*(void (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 624LL))(this);
}
