/*
 * XREFs of ?InternalRelease@?$ComPtr@VAppSizeConstraintsCache@@@WRL@Microsoft@@IEAAKXZ @ 0x180187F78
 * Callers:
 *     ?AppSizeConstraintsCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18003BCD4 (-AppSizeConstraintsCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<AppSizeConstraintsCache>::InternalRelease(volatile signed __int32 **a1)
{
  unsigned int v1; // ebx
  volatile signed __int32 *v2; // r8
  signed __int32 v3; // edx
  unsigned __int32 v4; // edi

  v1 = 0;
  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    do
      v3 = *((_DWORD *)v2 + 3);
    while ( v3 != 0x7FFFFFFF && v3 != _InterlockedCompareExchange(v2 + 3, v3 - 1, v3) );
    v4 = v3 - 1;
    if ( v3 == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 40LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    return v4;
  }
  return v1;
}
