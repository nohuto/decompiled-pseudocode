/*
 * XREFs of ?IsUsefulPackage@AtmosCheck@@AEAA_NPEAUIPackage@ApplicationModel@Windows@@@Z @ 0x1800A16E0
 * Callers:
 *     _lambda_c0f79c7db2a352ac037a8b0fb781f475_::operator() @ 0x180147668 (_lambda_c0f79c7db2a352ac037a8b0fb781f475_--operator().c)
 *     _lambda_ddf72429dfe7e6f051e146c766b7831c_::operator() @ 0x1801477A0 (_lambda_ddf72429dfe7e6f051e146c766b7831c_--operator().c)
 *     _lambda_ed93c361bb151993c0858b3e67bfc06f_::operator() @ 0x1801478EC (_lambda_ed93c361bb151993c0858b3e67bfc06f_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall AtmosCheck::IsUsefulPackage(AtmosCheck *this, struct Windows::ApplicationModel::IPackage *a2)
{
  int (__fastcall *v3)(struct Windows::ApplicationModel::IPackage *, GUID *, __int64 *); // rbx
  __int64 v5; // rcx
  struct Windows::ApplicationModel::IPackage *v6; // [rsp+20h] [rbp-10h] BYREF
  AtmosCheck *v7; // [rsp+50h] [rbp+20h] BYREF
  char v8; // [rsp+58h] [rbp+28h] BYREF
  char v9; // [rsp+60h] [rbp+30h] BYREF
  __int64 v10; // [rsp+68h] [rbp+38h] BYREF

  v7 = this;
  v6 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::ApplicationModel::IPackage *))(*(_QWORD *)a2 + 8LL))(a2);
  v10 = 0LL;
  LOBYTE(v7) = 0;
  v8 = 0;
  v9 = 0;
  (*(void (__fastcall **)(struct Windows::ApplicationModel::IPackage *, AtmosCheck **))(*(_QWORD *)a2 + 64LL))(a2, &v7);
  v3 = **(int (__fastcall ***)(struct Windows::ApplicationModel::IPackage *, GUID *, __int64 *))a2;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v10);
  if ( v3(a2, &GUID_a6612fb6_7688_4ace_95fb_359538e7aa01, &v10) >= 0 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 88LL))(v10, &v8);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 80LL))(v10, &v9);
  }
  if ( (_BYTE)v7 || v8 || v9 )
  {
    v5 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    (*(void (__fastcall **)(struct Windows::ApplicationModel::IPackage *))(*(_QWORD *)a2 + 16LL))(a2);
    return 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v10);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v6);
    return 1;
  }
}
