/*
 * XREFs of ?ApplicationChanged@CDropFeedback@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x18053EEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropFeedback::ApplicationChanged(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rcx
  unsigned int i; // esi
  __int64 v10; // rdi
  int (__fastcall *v11)(__int64, _QWORD, GUID *, int (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rbx
  int (__fastcall ***v12)(_QWORD, _QWORD, _QWORD); // rbx
  int (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // rbx
  int (__fastcall *v15)(_QWORD, GUID *, __int64 *); // rdi
  int v17; // [rsp+30h] [rbp-20h] BYREF
  int (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v21; // [rsp+80h] [rbp+30h] BYREF

  v6 = *(_QWORD *)(a1 + 88);
  if ( v6 )
  {
    v21 = 0;
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v6 + 24LL))(v6, &v21);
    for ( i = 0; i < v21; ++i )
    {
      v10 = *(_QWORD *)(a1 + 88);
      v18 = 0LL;
      v19 = 0LL;
      v11 = *(int (__fastcall **)(__int64, _QWORD, GUID *, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v10 + 32LL);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v18);
      if ( v11(v10, i, &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810, &v18) >= 0 )
      {
        v12 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v18;
        v13 = (*v18)[5];
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
        if ( ((int (__fastcall *)(int (__fastcall ***)(_QWORD, _QWORD, _QWORD), __int64 *))v13)(v12, &v19) >= 0 )
        {
          v17 = 0;
          (*(void (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v19 + 104LL))(v19, a2, &v17);
          if ( v17 )
          {
            v14 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v18;
            v20 = 0LL;
            v15 = **v18;
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
            if ( v15(v14, &GUID_2ccdcaf2_ca4f_45b0_940b_d5b78a628060, &v20) >= 0 )
              (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v20 + 24LL))(v20, a2, a3, a4);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v18);
            return 0LL;
          }
        }
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v18);
    }
  }
  return 0LL;
}
