/*
 * XREFs of ?_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042A68
 * Callers:
 *     ?DisconnectObject@CFTMCrossProcBase@@UEAAJK@Z @ 0x180042390 (-DisconnectObject@CFTMCrossProcBase@@UEAAJK@Z.c)
 *     ?GetMarshalSizeMax@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x180042400 (-GetMarshalSizeMax@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z.c)
 *     ?GetUnmarshalClass@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z @ 0x180042570 (-GetUnmarshalClass@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z.c)
 *     ?MarshalInterface@CFTMCrossProcBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x180042680 (-MarshalInterface@CFTMCrossProcBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z.c)
 * Callees:
 *     CoCreateFreeThreadedMarshaler_0 @ 0x180002F6E (CoCreateFreeThreadedMarshaler_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800069E0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ @ 0x18001EE28 (-InternalAddRef@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?CopyTo@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180027EDC (-CopyTo@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CFTMCrossProcBase::_GetFTM(LPUNKNOWN punkOuter, IUnknown *a2, void **a3)
{
  RTL_SRWLOCK *v3; // rbp
  __int64 *v5; // rsi
  struct IUnknownVtbl *lpVtbl; // rbx
  HRESULT v7; // edi
  LPUNKNOWN v8; // rbx
  LPUNKNOWN v10; // [rsp+50h] [rbp+8h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+58h] [rbp+10h] BYREF

  ppunkMarshal = a2;
  *a3 = 0LL;
  v3 = (RTL_SRWLOCK *)&punkOuter[5];
  AcquireSRWLockShared((PSRWLOCK)&punkOuter[5]);
  v5 = (__int64 *)&punkOuter[6];
  lpVtbl = punkOuter[6].lpVtbl;
  ReleaseSRWLockShared(v3);
  v7 = lpVtbl == 0LL ? 0x80004005 : 0;
  if ( !lpVtbl )
  {
    ppunkMarshal = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppunkMarshal);
    v7 = CoCreateFreeThreadedMarshaler_0(punkOuter, &ppunkMarshal);
    if ( v7 >= 0 )
    {
      AcquireSRWLockExclusive(v3);
      if ( *v5 )
      {
        v7 = 0;
      }
      else
      {
        v8 = ppunkMarshal;
        if ( ppunkMarshal )
        {
          v10 = ppunkMarshal;
          Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef((__int64 *)&v10);
          v10 = (LPUNKNOWN)*v5;
          *v5 = (__int64)v8;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
        }
      }
      ReleaseSRWLockExclusive(v3);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppunkMarshal);
  }
  if ( v7 >= 0 )
    return (unsigned int)Microsoft::WRL::ComPtr<IUnknown>::CopyTo(&punkOuter[6].lpVtbl);
  return (unsigned int)v7;
}
