/*
 * XREFs of ?v_Initialize@CImmersiveWindowFactory@@EEAAJPEAUIImmersiveMonitor@@PEBUtagRECT@@@Z @ 0x1806C7C80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x180013A18 (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveWindowFactory::v_Initialize(
        CImmersiveWindowFactory *this,
        IUnknown *a2,
        enum ORIENTATION_PREFERENCE *a3)
{
  HRESULT v3; // ebx
  void *ppvOut; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  if ( a3 )
  {
    *(_OWORD *)((char *)this + 116) = *(_OWORD *)a3;
LABEL_7:
    *((_BYTE *)this + 144) = (int)CallerIdentity::GetManifestedOrientationPreference(
                                    *((LPCWSTR *)this + 17),
                                    (unsigned __int16 *)this + 74,
                                    a3) >= 0;
    return (unsigned int)v3;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
  v3 = IUnknown_QueryService(a2, &stru_1807D5268, &GUID_53b23e1b_25e2_4886_9fb6_744b8f15571c, &ppvOut);
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(void *, IUnknown *, _QWORD, _QWORD, char *))(*(_QWORD *)ppvOut + 40LL))(
           ppvOut,
           a2,
           *((_QWORD *)this + 17),
           0LL,
           (char *)this + 116);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
  if ( v3 >= 0 )
    goto LABEL_7;
  return (unsigned int)v3;
}
