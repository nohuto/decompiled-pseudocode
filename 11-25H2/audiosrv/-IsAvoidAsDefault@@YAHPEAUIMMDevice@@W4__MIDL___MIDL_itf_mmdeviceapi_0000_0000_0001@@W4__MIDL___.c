/*
 * XREFs of ?IsAvoidAsDefault@@YAHPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x1800539A0
 * Callers:
 *     ?GetDefaultEndpoint@CDefaultDeviceManager@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAV?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@PEAPEAUIMMDevice@@@Z @ 0x18008E680 (-GetDefaultEndpoint@CDefaultDeviceManager@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@.c)
 *     ?SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18008EED0 (-SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall IsAvoidAsDefault(__int64 a1, int a2, int a3)
{
  int v4; // esi
  unsigned int v5; // ebx
  int v6; // ebp
  int v7; // edi
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  v11 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v10 = 0LL;
  v5 = 1;
  if ( a1 )
  {
    v6 = 0;
    if ( a3 != 1 )
      v6 = a3;
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, 0LL, &v11);
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64 *, PROPVARIANT *))(*(_QWORD *)v11 + 40LL))(
             v11,
             &PKEY_AudioEndpoint_AvoidSelection,
             pvar);
      if ( v7 >= 0
        && LOWORD(pvar[0]) == 19
        && (!v6 && ((__int64)pvar[1] & 1) != 0 || v6 == 2 && ((__int64)pvar[1] & 4) != 0)
        && (((__int64)pvar[1] & 0x100) != 0 && !a2 || ((__int64)pvar[1] & 0x200) != 0 && a2 == 1) )
      {
        v4 = 1;
      }
    }
  }
  else
  {
    v7 = -2147024809;
  }
  PropVariantClear(pvar);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v7 < 0 || !v4 )
    return 0;
  return v5;
}
