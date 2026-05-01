/*
 * XREFs of ?Drop@CMultitaskingViewElementBase@@UEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C3B70
 * Callers:
 *     <none>
 * Callees:
 *     ??1PointerTracking@CMultitaskingViewElementBase@@QEAA@XZ @ 0x1804B76C4 (--1PointerTracking@CMultitaskingViewElementBase@@QEAA@XZ.c)
 *     ??4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@$$QEAU01@@Z @ 0x1804C3460 (--4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA?AVMultitaskingViewPointerInputArgs@@AEBV2@@Z @ 0x1804C5868 (-_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA-AVMultitaskingViewPointerInputArgs@@AEB.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMultitaskingViewElementBase::Drop(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r15
  __int64 (__fastcall *v7)(__int64, __int64, __int64); // rbx
  __int64 v8; // rax
  unsigned int v9; // ebx
  _BYTE v11[24]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v12; // [rsp+38h] [rbp-48h] BYREF
  int v13; // [rsp+48h] [rbp-38h]
  int v14; // [rsp+4Ch] [rbp-34h]
  int v15; // [rsp+50h] [rbp-30h]
  int v16; // [rsp+54h] [rbp-2Ch]
  __int128 v17; // [rsp+58h] [rbp-28h]
  __int128 v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+78h] [rbp-8h]
  int v20; // [rsp+7Ch] [rbp-4h]

  (*(void (__fastcall **)(_QWORD *))(*a1 + 456LL))(a1);
  v6 = a1[17];
  if ( !v6
    || (v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 472LL),
        v8 = CMultitaskingViewElementBase::_MapArgumentsToChild(a1, v11, a3),
        v9 = v7(v6, a2, v8),
        v9 == -1) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 632LL))(a1, a2, a3);
  }
  v16 = 0;
  v20 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v19 = 0;
  v12 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  CMultitaskingViewElementBase::PointerTracking::operator=((__int64)(a1 + 12), (__int64)&v12);
  CMultitaskingViewElementBase::PointerTracking::~PointerTracking((CMultitaskingViewElementBase::PointerTracking *)&v12);
  return v9;
}
