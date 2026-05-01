/*
 * XREFs of ?DragOver@CMultitaskingViewElementBase@@UEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C3990
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017AE8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800D1014 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??1PointerTracking@CMultitaskingViewElementBase@@QEAA@XZ @ 0x1804B76C4 (--1PointerTracking@CMultitaskingViewElementBase@@QEAA@XZ.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x1804BCC18 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 *     ??4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@AEBU01@@Z @ 0x1804C34C8 (--4PointerTracking@CMultitaskingViewElementBase@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?_HitTestChildren@CMultitaskingViewElementBase@@IEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@AEBUCPoint@Geometry@@@Z @ 0x1804C5728 (-_HitTestChildren@CMultitaskingViewElementBase@@IEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@.c)
 *     ?_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA?AVMultitaskingViewPointerInputArgs@@AEBV2@@Z @ 0x1804C5868 (-_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA-AVMultitaskingViewPointerInputArgs@@AEB.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMultitaskingViewElementBase::DragOver(_QWORD *a1, __int64 a2, __int128 *a3)
{
  unsigned int v6; // edi
  __int64 (__fastcall *v7)(_QWORD *, __int64 *); // r8
  char v8; // al
  int v9; // ecx
  char *v10; // rax
  struct IMultitaskingViewElement *v11; // r8
  struct IUnknown *v12; // rcx
  struct IMultitaskingViewElement *v13; // r14
  unsigned int v14; // eax
  bool v15; // zf
  __int64 (__fastcall *v16)(struct IMultitaskingViewElement *, __int64, __int64); // rbx
  __int64 v17; // rax
  _BYTE v19[32]; // [rsp+28h] [rbp-49h] BYREF
  __int128 v20; // [rsp+48h] [rbp-29h] BYREF
  __int64 v21; // [rsp+58h] [rbp-19h]
  int v22; // [rsp+60h] [rbp-11h]
  struct IMultitaskingViewElement *v23[2]; // [rsp+68h] [rbp-9h] BYREF
  __int128 v24; // [rsp+78h] [rbp+7h]
  int v25; // [rsp+88h] [rbp+17h]
  __int64 v26; // [rsp+D8h] [rbp+67h] BYREF
  __int64 v27; // [rsp+E8h] [rbp+77h] BYREF

  v20 = 0LL;
  v6 = 0;
  v21 = 0LL;
  v22 = 0;
  *(_OWORD *)v23 = 0LL;
  v24 = *a3;
  v25 = *((_DWORD *)a3 + 4);
  v7 = *(__int64 (__fastcall **)(_QWORD *, __int64 *))(*a1 + 112LL);
  v26 = *(_QWORD *)a3;
  v8 = v7(a1, &v26);
  v9 = _mm_cvtsi128_si32((__m128i)0LL);
  if ( v8 )
    v9 = 2;
  LODWORD(v20) = v9;
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)v23, a1 + 16);
  v26 = *(_QWORD *)a3;
  v10 = (char *)CMultitaskingViewElementBase::_HitTestChildren(a1, &v27, &v26);
  Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)&v23[1], v10);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
  v12 = (struct IUnknown *)a1[17];
  v13 = v23[1];
  if ( v12 && !ElementHelpers::IsSameElement(v12, (struct IUnknown *)v23[1], v11) )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)a1[17] + 464LL))(a1[17]);
  v14 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int128 *))(*a1 + 616LL))(a1, a2, a3);
  if ( v13 )
  {
    v15 = v14 == -1;
    if ( v14 != -1 )
      goto LABEL_10;
    v16 = *(__int64 (__fastcall **)(struct IMultitaskingViewElement *, __int64, __int64))(*(_QWORD *)v13 + 456LL);
    v17 = CMultitaskingViewElementBase::_MapArgumentsToChild(a1, v19, a3);
    v14 = v16(v13, a2, v17);
  }
  v15 = v14 == -1;
LABEL_10:
  if ( !v15 )
    v6 = v14;
  CMultitaskingViewElementBase::PointerTracking::operator=((__int64)(a1 + 12), (__int64)&v20);
  CMultitaskingViewElementBase::PointerTracking::~PointerTracking((CMultitaskingViewElementBase::PointerTracking *)&v20);
  return v6;
}
