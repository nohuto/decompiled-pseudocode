/*
 * XREFs of ??$GetAttachedObject@UILightDismissClientProxy@@VLightDismissClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VLightDismissClientProxy@@@WRL@Microsoft@@XZ @ 0x18015BE30
 * Callers:
 *     ?GetDismissableClients@LightDismissProcessor@@AEAA?AV?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@PEAUHitTestResult@@@Z @ 0x180057900 (-GetDismissableClients@LightDismissProcessor@@AEAA-AV-$vector@PEAVLightDismissClientProxy@@V-$al.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UILightDismissClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UILightDismissClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005D194 (--$As@UILightDismissClientProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall InputSite::GetAttachedObject<ILightDismissClientProxy,LightDismissClientProxy>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v8 = 0LL;
  v4 = *(_QWORD *)(a1 + 488);
  v5 = *(_QWORD *)(a1 + 496);
  if ( v4 != v5 )
  {
    do
    {
      if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<ILightDismissClientProxy>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v4 + 8),
                  &v8) >= 0 )
        break;
      v4 += 16LL;
    }
    while ( v4 != v5 );
    v3 = v8;
  }
  v6 = (v3 - 8) & -(__int64)(v3 != 0);
  *a2 = v6;
  if ( v6 )
    (**(void (__fastcall ***)(__int64))(v6 + 16))(v6 + 16);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
  return a2;
}
