/*
 * XREFs of ??$_Move_backward_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00@Z @ 0x180022E00
 * Callers:
 *     ?AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z @ 0x180023410 (-AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x1800238C0 (-AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall std::_Move_backward_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 v6; // rdx
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  while ( v4 != a1 )
  {
    --v4;
    --a3;
    v6 = 0LL;
    if ( v8 != v4 )
    {
      v6 = *v4;
      *v4 = 0LL;
    }
    v8[0] = *a3;
    *a3 = v6;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v8);
  }
  return a3;
}
