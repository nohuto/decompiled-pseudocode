/*
 * XREFs of ?GetPnpDevnodeFromMMDevice@CEndpointCharacteristics@@AEAAJPEAPEAUIMMDevice@@@Z @ 0x18012C6C0
 * Callers:
 *     ?IsEffectPackConfigurationApplicableToEndpoint@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEA_N@Z @ 0x18012CE00 (-IsEffectPackConfigurationApplicableToEndpoint@CEndpointCharacteristics@@AEAAJAEAV-$shared_ptr@$.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetPnpDevnodeFromMMDevice(
        CEndpointCharacteristics *this,
        struct IMMDevice **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_OWORD *)pvar = 0LL;
  v8 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
         *((_QWORD *)this + 9),
         &PKEY_Endpoint_Devnode,
         pvar);
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( LOWORD(pvar[0]) != 31
      || (v3 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, PROPVARIANT, struct IMMDevice **))g_DeviceEnumerator->lpVtbl->GetDevice)(
                 g_DeviceEnumerator,
                 pvar[1],
                 a2),
          v4 = v3,
          v3 >= 0) )
    {
      v4 = 0;
      goto LABEL_8;
    }
    v5 = 218LL;
  }
  else
  {
    v5 = 213LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v3);
LABEL_8:
  PropVariantClear(pvar);
  return v4;
}
