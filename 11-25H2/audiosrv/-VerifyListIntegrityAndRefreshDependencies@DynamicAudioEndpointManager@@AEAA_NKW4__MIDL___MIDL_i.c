/*
 * XREFs of ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@QEAY05_NPEAV?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@@Z @ 0x18011F500
 * Callers:
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY05_N@Z @ 0x1800A3160 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY05_N@Z.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@QEAY05_NPEAV?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@@Z @ 0x18011F500 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NKW4__MIDL___MIDL_i.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x180061210 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?AddHead@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIPolicyRule@@@Z @ 0x18011D1E8 (-AddHead@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAPEAU__PO.c)
 *     ?RemoveHead@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAPEAUIPolicyRule@@XZ @ 0x18011E7D0 (-RemoveHead@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAPEAUI.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@QEAY05_NPEAV?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@@Z @ 0x18011F500 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NKW4__MIDL___MIDL_i.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 *a6)
{
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // rbx
  int v12; // ebp
  _QWORD *i; // rax
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rbx
  _QWORD *v18; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+38h] [rbp-40h] BYREF
  __int64 v20; // [rsp+40h] [rbp-38h]

  if ( a4 > 5 || a3 > 1 )
    return 0;
  v9 = 6LL * (int)a3;
  v10 = v9 + (int)a4;
  v20 = v9;
  v18 = *(_QWORD **)(a1 + 48 * v10 + 24);
  while ( v18 )
  {
    v19 = *ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v9, &v18);
    v11 = v19;
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11) - 2 <= 1 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 64LL))(v11);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 104LL))(v11) && (!v12 || a2 == v12) )
      {
        for ( i = (_QWORD *)*a6; i; i = (_QWORD *)*i )
        {
          if ( i[2] == v11 )
            return 0;
        }
        v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 120LL))(v11);
        v16 = v14;
        v9 = (unsigned int)(v14 - 1);
        if ( (unsigned int)v9 <= 4 )
        {
          ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::AddHead(a6, (__int64)&v19, v15);
          if ( !(unsigned __int8)DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(
                                   a1,
                                   a2,
                                   a3,
                                   v16,
                                   a5,
                                   (__int64)a6) )
            return 0;
          ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveHead((__int64 **)a6);
          if ( *(_BYTE *)(v20 + v16 + a5) )
            *(_BYTE *)(v10 + a5) = 1;
        }
      }
    }
  }
  return 1;
}
