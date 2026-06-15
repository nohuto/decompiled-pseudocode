/*
 * XREFs of ?GetLastSetEffectPack@CEndpointCharacteristics@@AEBAXAEAU_LAST_SET_EFFECTPACK_METADATA@@@Z @ 0x180134A0C
 * Callers:
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x18008D140 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV-$shared_ptr@VEffectPack@@@std@.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800469F0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CEndpointCharacteristics::GetLastSetEffectPack(
        CEndpointCharacteristics *this,
        struct _LAST_SET_EFFECTPACK_METADATA *a2)
{
  _OWORD *v4; // rax
  _DWORD *v5; // rcx
  int v6; // [rsp+30h] [rbp-69h] BYREF
  int v7; // [rsp+34h] [rbp-65h] BYREF
  int v8; // [rsp+38h] [rbp-61h] BYREF
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-59h] BYREF
  _OWORD *v10; // [rsp+50h] [rbp-49h]
  __int64 v11; // [rsp+68h] [rbp-31h]
  _BYTE v12[32]; // [rsp+80h] [rbp-19h] BYREF
  struct _LAST_SET_EFFECTPACK_METADATA *v13; // [rsp+A0h] [rbp+7h]
  __int64 v14; // [rsp+A8h] [rbp+Fh]
  int *v15; // [rsp+B0h] [rbp+17h]
  __int64 v16; // [rsp+B8h] [rbp+1Fh]
  int *v17; // [rsp+C0h] [rbp+27h]
  __int64 v18; // [rsp+C8h] [rbp+2Fh]
  int *v19; // [rsp+D0h] [rbp+37h]
  __int64 v20; // [rsp+D8h] [rbp+3Fh]

  v11 = 0LL;
  *(_OWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 2) = v11;
  *((_DWORD *)a2 + 6) = 0;
  *(_OWORD *)pvar = 0LL;
  v10 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, const struct _tagpropertykey *, PROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
         *((_QWORD *)this + 9),
         &PKEY_AudioEndpoint_LastSetEffectPack,
         pvar) >= 0
    && LOWORD(pvar[0]) == 65
    && LODWORD(pvar[1]) == 28 )
  {
    v4 = v10;
    *(_OWORD *)a2 = *v10;
    *((_QWORD *)a2 + 2) = *((_QWORD *)v4 + 2);
    *((_DWORD *)a2 + 6) = *((_DWORD *)v4 + 6);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 1036);
  if ( *v5 > 5u )
  {
    v6 = *((_DWORD *)a2 + 6);
    v7 = *((_DWORD *)a2 + 5);
    v8 = *((_DWORD *)a2 + 4);
    v19 = &v6;
    v20 = 4LL;
    v17 = &v7;
    v18 = 4LL;
    v15 = &v8;
    v16 = 4LL;
    v13 = a2;
    v14 = 16LL;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)v5, byte_1801AFE9D, 0LL, 0LL, 6, (__int64)v12);
  }
  PropVariantClear(pvar);
}
