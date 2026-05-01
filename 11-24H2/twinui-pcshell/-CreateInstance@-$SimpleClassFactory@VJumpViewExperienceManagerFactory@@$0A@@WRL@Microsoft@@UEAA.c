/*
 * XREFs of ?CreateInstance@?$SimpleClassFactory@VJumpViewExperienceManagerFactory@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180227F70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VJumpViewExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802A5DC8 (--$MakeAndInitialize@VJumpViewExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleClassFactory<JumpViewExperienceManagerFactory,0>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v6; // ebx
  __int64 v8; // rbx
  unsigned int v9; // edi
  __int64 (__fastcall ***v10)(_QWORD, __int64, _QWORD *); // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    v6 = -2147221232;
    RoOriginateError(2147746064LL, 0LL);
    return (unsigned int)v6;
  }
  v10 = 0LL;
  v6 = Microsoft::WRL::Details::MakeAndInitialize<JumpViewExperienceManagerFactory,IUnknown,>(&v10);
  if ( v6 < 0 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
    return (unsigned int)v6;
  }
  v8 = (__int64)v10;
  v9 = (**v10)(v10, a3, a4);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return v9;
}
