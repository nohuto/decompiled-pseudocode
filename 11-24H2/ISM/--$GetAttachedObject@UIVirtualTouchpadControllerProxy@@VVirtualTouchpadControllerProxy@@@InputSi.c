/*
 * XREFs of ??$GetAttachedObject@UIVirtualTouchpadControllerProxy@@VVirtualTouchpadControllerProxy@@@InputSite@@QEAA?AV?$ComPtr@VVirtualTouchpadControllerProxy@@@WRL@Microsoft@@XZ @ 0x180081D64
 * Callers:
 *     ?CheckForVirtualTouchpadFromInputSiteList@DWMInputRouter@@AEAA_NAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@PEAUVPTP_ID@@@Z @ 0x18007D818 (-CheckForVirtualTouchpadFromInputSiteList@DWMInputRouter@@AEAA_NAEBV-$vector@V-$ComPtr@VInputSit.c)
 * Callees:
 *     ??$As@UIVirtualTouchpadControllerProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualTouchpadControllerProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005E32C (--$As@UIVirtualTouchpadControllerProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall InputSite::GetAttachedObject<IVirtualTouchpadControllerProxy,VirtualTouchpadControllerProxy>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v8 = 0LL;
  v4 = *(_QWORD *)(a1 + 488);
  v5 = *(_QWORD *)(a1 + 496);
  if ( v4 != v5 )
  {
    do
    {
      if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IVirtualTouchpadControllerProxy>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v4 + 8),
                  &v8) >= 0 )
        break;
      v4 += 16LL;
    }
    while ( v4 != v5 );
    v3 = v8;
  }
  v6 = (v3 - 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v3 >> 64);
  *a2 = v6;
  if ( v6 )
  {
    (**(void (__fastcall ***)(__int64))(v6 + 16))(v6 + 16);
    v3 = v8;
  }
  if ( v3 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return a2;
}
