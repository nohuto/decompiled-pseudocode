/*
 * XREFs of ?ClearEffectPackPropertyKeyIfApplicable@CEndpointCharacteristics@@AEAAXU_GUID@@AEBU_tagpropertykey@@@Z @ 0x1801331EC
 * Callers:
 *     ?RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x180136580 (-RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x18003F104 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CEndpointCharacteristics::ClearEffectPackPropertyKeyIfApplicable(
        CEndpointCharacteristics *this,
        struct _GUID *a2,
        const struct _tagpropertykey *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  _DWORD *v9; // rcx
  LPCOLESTR lpsz[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11; // [rsp+40h] [rbp-40h]
  LPCOLESTR v12; // [rsp+48h] [rbp-38h] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v14; // [rsp+60h] [rbp-20h]
  GUID pclsid; // [rsp+68h] [rbp-18h] BYREF

  *(_OWORD *)lpsz = 0LL;
  v11 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, const struct _tagpropertykey *, LPCOLESTR *))(**((_QWORD **)this + 9) + 40LL))(
         *((_QWORD *)this + 9),
         a3,
         lpsz) >= 0
    && LOWORD(lpsz[0]) == 31 )
  {
    pclsid = GUID_00000000_0000_0000_0000_000000000000;
    if ( CLSIDFromString(lpsz[1], &pclsid) >= 0 )
    {
      v8 = *(_QWORD *)&pclsid.Data1 - *(_QWORD *)&a2->Data1;
      if ( *(_QWORD *)&pclsid.Data1 == *(_QWORD *)&a2->Data1 )
        v8 = *(_QWORD *)pclsid.Data4 - *(_QWORD *)a2->Data4;
      if ( !v8 )
      {
        v9 = (_DWORD *)*((_QWORD *)this + 1036);
        if ( *v9 > 5u )
        {
          v12 = lpsz[1];
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
            (__int64)v9,
            byte_1801AFFA0,
            v6,
            v7,
            &v12);
        }
        *(_OWORD *)pvar = 0LL;
        v14 = 0LL;
        (*(void (__fastcall **)(_QWORD, const struct _tagpropertykey *, PROPVARIANT *))(**((_QWORD **)this + 9) + 48LL))(
          *((_QWORD *)this + 9),
          a3,
          pvar);
        PropVariantClear(pvar);
      }
    }
  }
  PropVariantClear((PROPVARIANT *)lpsz);
}
