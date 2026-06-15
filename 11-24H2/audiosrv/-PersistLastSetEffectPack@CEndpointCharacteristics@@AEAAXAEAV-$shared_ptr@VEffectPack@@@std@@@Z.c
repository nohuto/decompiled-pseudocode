/*
 * XREFs of ?PersistLastSetEffectPack@CEndpointCharacteristics@@AEAAXAEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x180135CBC
 * Callers:
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x18008D140 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV-$shared_ptr@VEffectPack@@@std@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CEndpointCharacteristics::PersistLastSetEffectPack(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  int v4; // ecx
  __int64 v5; // rcx
  int v6; // eax
  __int128 v7; // [rsp+20h] [rbp-40h] BYREF
  __int128 *v8; // [rsp+30h] [rbp-30h]
  __int128 v9; // [rsp+38h] [rbp-28h] BYREF
  int v10; // [rsp+48h] [rbp-18h]
  int v11; // [rsp+4Ch] [rbp-14h]
  int v12; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v9 = 0uLL;
  v3 = *a2;
  v9 = *(_OWORD *)*(_QWORD *)(v3 + 1568);
  v10 = *(_DWORD *)(*(_QWORD *)(v3 + 1568) + 1848LL);
  v4 = *(_DWORD *)(*(_QWORD *)(v3 + 1568) + 1852LL);
  v7 = 0LL;
  LOWORD(v7) = 65;
  v11 = v4;
  v5 = *(_QWORD *)(a1 + 72);
  v8 = &v9;
  v12 = 1;
  DWORD2(v7) = 28;
  v6 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, __int128 *))(*(_QWORD *)v5 + 48LL))(
         v5,
         &PKEY_AudioEndpoint_LastSetEffectPack,
         &v7);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1957LL,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v6);
}
