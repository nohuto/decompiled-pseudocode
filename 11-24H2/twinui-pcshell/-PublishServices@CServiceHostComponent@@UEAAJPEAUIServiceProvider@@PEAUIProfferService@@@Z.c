/*
 * XREFs of ?PublishServices@CServiceHostComponent@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180226E60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CServiceHostComponent::PublishServices(
        CServiceHostComponent *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  int v5; // ebx
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  void (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v9; // r8
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v5 = (*(__int64 (__fastcall **)(CServiceHostComponent *, struct IServiceProvider *))(*(_QWORD *)this + 80LL))(
         this,
         a2);
  if ( v5 >= 0 )
  {
    v6 = 0LL;
    v7 = 0LL;
    do
    {
      if ( v6 >= *((_QWORD *)this + 4) )
        break;
      v11 = 0LL;
      v8 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 3) + v7 + 16);
      if ( v8 )
      {
        (**v8)(v8, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &v11);
        v9 = v11;
        if ( v11 )
          continue;
      }
      v12 = (__int64)this + 8;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
      v12 = v11;
      v11 = (__int64)this + 8;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
      v9 = v11;
      v5 = ((__int64 (__fastcall *)(struct IProfferService *, __int64, __int64, __int64))a3->lpVtbl->ProfferService)(
             a3,
             v7 + *((_QWORD *)this + 3),
             v9,
             v7 + *((_QWORD *)this + 3) + 24);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
      ++v6;
      v7 += 32LL;
    }
    while ( v5 >= 0 );
  }
  return (unsigned int)v5;
}
