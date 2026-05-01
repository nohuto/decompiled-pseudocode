/*
 * XREFs of ?GetItemForApp@CTempAppVisualArray@@UEAAJPEAUIImmersiveApplication@@AEBU_GUID@@PEAPEAX@Z @ 0x180546C60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Compare@CTempAppVisualFinderByApplication@@QEBAHAEBV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x1805469F8 (-Compare@CTempAppVisualFinderByApplication@@QEBAHAEBV-$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTempAppVisualArray::GetItemForApp(
        CTempAppVisualArray *this,
        struct IImmersiveApplication *a2,
        const struct _GUID *a3,
        void **a4)
{
  unsigned __int64 v7; // r14
  unsigned __int64 i; // rdi
  __int64 v9; // r8
  int v10; // ebx
  int v11; // ebx
  __int64 (__fastcall ***v12)(_QWORD, const struct _GUID *, void **); // rcx
  __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp+40h] BYREF
  struct IImmersiveApplication *v16; // [rsp+78h] [rbp+48h] BYREF
  __int64 v17; // [rsp+88h] [rbp+58h] BYREF

  *a4 = 0LL;
  v14 = 0LL;
  v16 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
  v7 = 0LL;
  for ( i = 0LL; i < *((_QWORD *)this + 3); ++i )
  {
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
    v15 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 2) + 8 * i);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
    v10 = CTempAppVisualFinderByApplication::Compare(&v16, &v15, v9);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
    if ( !v10 )
    {
      v7 = i;
      v11 = 0;
      goto LABEL_7;
    }
  }
  v11 = -2147319765;
LABEL_7:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v14);
  if ( v11 >= 0 )
  {
    v12 = *(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))(*((_QWORD *)this + 2) + 8 * v7);
    return (unsigned int)(**v12)(v12, a3, a4);
  }
  return (unsigned int)v11;
}
