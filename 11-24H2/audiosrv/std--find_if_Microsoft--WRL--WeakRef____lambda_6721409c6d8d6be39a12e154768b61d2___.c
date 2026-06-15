/*
 * XREFs of std::find_if_Microsoft::WRL::WeakRef____lambda_6721409c6d8d6be39a12e154768b61d2___ @ 0x180017970
 * Callers:
 *     ?PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ @ 0x180018084 (-PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::find_if_Microsoft::WRL::WeakRef____lambda_6721409c6d8d6be39a12e154768b61d2___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *i; // rbx
  __int64 v4; // rcx
  int v5; // eax
  bool v6; // di
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  for ( i = a1; i != a2; ++i )
  {
    v8 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v8);
    v4 = 0LL;
    v8 = 0LL;
    if ( *i )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(*(_QWORD *)*i + 24LL))(
             *i,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             &v8);
      v4 = v8;
    }
    else
    {
      v5 = 0;
    }
    v6 = v5 < 0 || !v4;
    if ( v4 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    if ( v6 )
      break;
  }
  return i;
}
