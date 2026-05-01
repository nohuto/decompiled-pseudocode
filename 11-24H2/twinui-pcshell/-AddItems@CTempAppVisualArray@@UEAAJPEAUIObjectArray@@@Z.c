/*
 * XREFs of ?AddItems@CTempAppVisualArray@@UEAAJPEAUIObjectArray@@@Z @ 0x180546950
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddItem@CTempAppVisualArray@@UEAAJPEAUITemporaryAppVisual@@@Z @ 0x180546790 (-AddItem@CTempAppVisualArray@@UEAAJPEAUITemporaryAppVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTempAppVisualArray::AddItems(CTempAppVisualArray *this, struct IObjectArray *a2)
{
  struct IObjectArrayVtbl *lpVtbl; // rax
  int v5; // ebx
  unsigned int i; // edi
  struct IObjectArrayVtbl *v7; // rax
  HRESULT (__stdcall *GetAt)(IObjectArray *, UINT, const IID *const, void **); // rbx
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF
  struct ITemporaryAppVisual *v11; // [rsp+60h] [rbp+18h] BYREF

  lpVtbl = a2->lpVtbl;
  v5 = 0;
  v10 = 0;
  ((void (__fastcall *)(struct IObjectArray *, unsigned int *))lpVtbl->GetCount)(a2, &v10);
  for ( i = 0; i < v10; ++i )
  {
    if ( v5 < 0 )
      break;
    v7 = a2->lpVtbl;
    v11 = 0LL;
    GetAt = v7->GetAt;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v11);
    v5 = ((__int64 (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, struct ITemporaryAppVisual **))GetAt)(
           a2,
           i,
           &GUID_114ed843_c914_443d_9588_6ffb643e73d0,
           &v11);
    if ( v5 >= 0 )
      v5 = CTempAppVisualArray::AddItem(this, v11);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v11);
  }
  return (unsigned int)v5;
}
