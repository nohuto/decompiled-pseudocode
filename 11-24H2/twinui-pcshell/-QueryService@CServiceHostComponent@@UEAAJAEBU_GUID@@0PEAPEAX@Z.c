/*
 * XREFs of ?QueryService@CServiceHostComponent@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180584540
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CServiceHostComponent::QueryService(
        CServiceHostComponent *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  char *v8; // rdi
  int v9; // ebx
  unsigned __int64 v10; // rbx
  __int64 i; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 (__fastcall ***v14)(_QWORD, const struct _GUID *, void **); // rbx
  __int64 (__fastcall ***v16)(_QWORD, const struct _GUID *, void **); // [rsp+50h] [rbp+8h] BYREF

  v8 = (char *)this - 8;
  v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 1) + 72LL))((char *)this - 8);
  if ( v9 < 0 )
  {
    v10 = 0LL;
    for ( i = 0LL; ; i += 32LL )
    {
      if ( v10 >= *((_QWORD *)this + 3) )
        return (unsigned int)(*(__int64 (__fastcall **)(char *, const struct _GUID *, const struct _GUID *, void **))(*(_QWORD *)v8 + 96LL))(
                               v8,
                               a2,
                               a3,
                               a4);
      v12 = *((_QWORD *)this + 2);
      v13 = *(_QWORD *)&a2->Data1 - *(_QWORD *)(i + v12);
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)(i + v12) )
        v13 = *(_QWORD *)a2->Data4 - *(_QWORD *)(i + v12 + 8);
      if ( !v13 )
        break;
      ++v10;
    }
    v14 = *(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))(32 * v10 + v12 + 16);
    v16 = v14;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
    if ( !v14 )
    {
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)&v16, (__int64)v8);
      v14 = v16;
    }
    v9 = (**v14)(v14, a3, a4);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  }
  return (unsigned int)v9;
}
