/*
 * XREFs of ?GetSimpleTempAppVisualArray@CDragVisual@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x1805422D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x1805440B0 (-_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDragVisual::GetSimpleTempAppVisualArray(CDragVisual *this, struct ITemporaryAppVisualArray **a2)
{
  int v4; // ebx
  struct ITemporaryAppVisualArray *v5; // rbx
  int v7; // [rsp+30h] [rbp+8h] BYREF
  struct ITemporaryAppVisualArray *v8; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v8);
  v4 = CDragVisual::_CreateTempAppVisuals((CDragVisual *)((char *)this - 48), &v8);
  if ( v4 >= 0 )
  {
    v5 = v8;
    v7 = 0;
    (*(void (__fastcall **)(struct ITemporaryAppVisualArray *, int *))(*(_QWORD *)v8 + 24LL))(v8, &v7);
    if ( v7 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v8);
      *a2 = v5;
      v4 = 0;
    }
    else
    {
      v4 = -2147023728;
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v8);
  return (unsigned int)v4;
}
