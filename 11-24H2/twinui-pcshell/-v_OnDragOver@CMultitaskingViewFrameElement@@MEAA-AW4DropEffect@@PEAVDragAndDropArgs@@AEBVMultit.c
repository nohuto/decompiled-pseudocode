/*
 * XREFs of ?v_OnDragOver@CMultitaskingViewFrameElement@@MEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804CD9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMultitaskingViewFrameElement::v_OnDragOver(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a2 + 16);
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 264) + 48LL))(*(_QWORD *)(a1 + 264), &v5);
  if ( v5 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 32LL))(v5, v3, 0LL, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v5);
  return (unsigned int)!(v2 & 1) - 1;
}
