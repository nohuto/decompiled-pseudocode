/*
 * XREFs of ?RemoveAvoidAsDefaultProperty@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180086088
 * Callers:
 *     ?SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18008EED0 (-SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall RemoveAvoidAsDefaultProperty(__int64 a1, int a2, unsigned int a3)
{
  int v5; // ebx
  unsigned int v6; // eax
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-10h]
  __int64 v10; // [rsp+50h] [rbp+10h] BYREF

  v10 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v9 = 0LL;
  if ( a1 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, 2LL, &v10);
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, __int64 *, PROPVARIANT *))(*(_QWORD *)v10 + 40LL))(
             v10,
             &PKEY_AudioEndpoint_AvoidSelection,
             pvar);
      if ( v5 >= 0 && LOWORD(pvar[0]) == 19 )
      {
        v6 = (unsigned int)pvar[1];
        if ( (((__int64)pvar[1] & 0x100) == 0 || a2) && (((__int64)pvar[1] & 0x200) == 0 || a2 != 1) )
          goto LABEL_15;
        if ( a3 <= 1 )
        {
          v6 = (__int64)pvar[1] & 0xFFFFFFFC;
          LODWORD(pvar[1]) &= 0xFFFFFFFC;
        }
        if ( a3 == 2 )
        {
          v6 &= ~4u;
          LODWORD(pvar[1]) = v6;
        }
        if ( (v6 & 7) == 0 )
LABEL_15:
          PropVariantClear(pvar);
        v5 = (*(__int64 (__fastcall **)(__int64, __int64 *, PROPVARIANT *))(*(_QWORD *)v10 + 48LL))(
               v10,
               &PKEY_AudioEndpoint_AvoidSelection,
               pvar);
      }
    }
  }
  else
  {
    v5 = -2147024809;
  }
  PropVariantClear(pvar);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return (unsigned int)v5;
}
