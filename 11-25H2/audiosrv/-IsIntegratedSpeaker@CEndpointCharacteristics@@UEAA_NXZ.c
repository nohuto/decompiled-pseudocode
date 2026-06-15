/*
 * XREFs of ?IsIntegratedSpeaker@CEndpointCharacteristics@@UEAA_NXZ @ 0x18012D280
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CEndpointCharacteristics::IsIntegratedSpeaker(CEndpointCharacteristics *this)
{
  char *v1; // rbx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  PROPVARIANT v7[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v8; // [rsp+30h] [rbp-40h]
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v10; // [rsp+48h] [rbp-28h]
  __int64 v11; // [rsp+50h] [rbp-20h]
  __int64 v12; // [rsp+58h] [rbp-18h]

  v1 = (char *)this + 8224;
  if ( !*((_BYTE *)this + 8225) )
  {
    v3 = *((_QWORD *)this + 8);
    *v1 = 0;
    v8 = 0LL;
    v10 = 0LL;
    *(_OWORD *)v7 = 0LL;
    *(_OWORD *)pvar = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v3 + 40LL))(
           v3,
           &PKEY_Device_ContainerId,
           v7) >= 0 )
    {
      v12 = -1LL;
      v11 = 0LL;
      if ( LOWORD(v7[0]) == 72 )
      {
        v4 = -*(_QWORD *)v7[1];
        if ( !*(_QWORD *)v7[1] )
          v4 = v12 - *((_QWORD *)v7[1] + 1);
        if ( !v4 )
        {
          v5 = *((_QWORD *)this + 52) - *(_QWORD *)&GUID_dff21ce1_f70f_11d0_b917_00a0c9223196.Data1;
          if ( !v5 )
            v5 = *((_QWORD *)this + 53) - *(_QWORD *)GUID_dff21ce1_f70f_11d0_b917_00a0c9223196.Data4;
          if ( !v5 )
            *v1 = 1;
        }
      }
    }
    *((_BYTE *)this + 8225) = 1;
    PropVariantClear(pvar);
    PropVariantClear(v7);
  }
  return *v1;
}
