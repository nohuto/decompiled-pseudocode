/*
 * XREFs of ?SetNeverSetAsDefaultProperty@@YAJPEAUIMMDevice@@H@Z @ 0x180101718
 * Callers:
 *     ?SetEndpointAbilityToBeDefault@CPolicyConfig@@UEAAJPEBGH@Z @ 0x1801014F0 (-SetEndpointAbilityToBeDefault@CPolicyConfig@@UEAAJPEBGH@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SetNeverSetAsDefaultProperty(struct IMMDevice *a1, int a2)
{
  int v3; // ebx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v6 = 0LL;
  if ( a1 )
  {
    v3 = ((__int64 (__fastcall *)(struct IMMDevice *, __int64, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 1LL, &v7);
    if ( v3 >= 0 )
    {
      LOWORD(pvar[0]) = 19;
      if ( a2 )
        LOWORD(pvar[1]) = 7;
      else
        LOWORD(pvar[1]) = 0;
      v3 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v7 + 48LL))(
             v7,
             &PKEY_AudioDevice_NeverSetAsDefaultEndpoint,
             pvar);
    }
  }
  else
  {
    v3 = -2147024809;
  }
  PropVariantClear(pvar);
  if ( v3 < 0 )
    AudSrvTraceLoggingErrorHelper("SetNeverSetAsDefaultProperty", 1609, v3);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v7);
  return (unsigned int)v3;
}
