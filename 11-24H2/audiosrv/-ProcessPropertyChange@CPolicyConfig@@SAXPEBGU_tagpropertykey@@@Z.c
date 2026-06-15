/*
 * XREFs of ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x180010BFC
 * Callers:
 *     ?ProcessOnPropertyChanged@CAudioSrv@@AEAAXPEBGU_tagpropertykey@@@Z @ 0x18004C1BC (-ProcessOnPropertyChanged@CAudioSrv@@AEAAXPEBGU_tagpropertykey@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011640 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetCurrentEffectPack@CEndpointCharacteristics@@QEAAAEAV?$shared_ptr@VEffectPack@@@std@@XZ @ 0x1800117BC (-GetCurrentEffectPack@CEndpointCharacteristics@@QEAAAEAV-$shared_ptr@VEffectPack@@@std@@XZ.c)
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18001180C (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY05_NK@Z @ 0x18006B7BC (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY05_NK@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x180105EE4 (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CPolicyConfig::ProcessPropertyChange(const unsigned __int16 *a1, struct _tagpropertykey *a2)
{
  _QWORD *CurrentEffectPack; // rax
  __int64 v5; // rcx
  std::_Ref_count_base *v6; // rbx
  __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rdx
  int v10; // [rsp+30h] [rbp-40h] BYREF
  int v11; // [rsp+34h] [rbp-3Ch] BYREF
  CEndpointCharacteristics *v12; // [rsp+38h] [rbp-38h]
  _QWORD v13[3]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+58h] [rbp-18h] BYREF
  int v15; // [rsp+60h] [rbp-10h]

  v13[0] = 0LL;
  v10 = 0;
  if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, const unsigned __int16 *, _QWORD *))g_DeviceEnumerator->lpVtbl->GetDevice)(
         g_DeviceEnumerator,
         a1,
         v13) >= 0
    && (*(int (__fastcall **)(_QWORD, int *))(*(_QWORD *)v13[0] + 48LL))(v13[0], &v10) >= 0
    && v10 == 1 )
  {
    v12 = 0LL;
    if ( (*(int (__fastcall **)(PVOID, const unsigned __int16 *, __int64))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                         + 24LL))(
           g_pEndpointCharacteristicsCache,
           a1,
           1LL) >= 0 )
    {
      CurrentEffectPack = (_QWORD *)CEndpointCharacteristics::GetCurrentEffectPack(v12);
      v5 = CurrentEffectPack[1];
      if ( v5 )
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v13[1] = *CurrentEffectPack;
      v6 = (std::_Ref_count_base *)CurrentEffectPack[1];
      v13[2] = v6;
      v11 = 0;
      CEndpointCharacteristics::ProcessPropertyChange(v12, a2, &v11);
      if ( v11 )
        CPolicyConfig::DisconnectHelper(a1);
      if ( v6 )
        std::_Ref_count_base::_Decref(v6);
    }
    if ( v12 )
      (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v7 = PKEY_AudioEndpoint_AvoidSelection - *(_QWORD *)&a2->fmtid.Data1;
  if ( PKEY_AudioEndpoint_AvoidSelection == *(_QWORD *)&a2->fmtid.Data1 )
    v7 = 0xEDD0A9ABD90AC8BAuLL - _mm_srli_si128((__m128i)a2->fmtid, 8).m128i_u64[0];
  if ( !v7 && a2->pid == 1 )
  {
    v14 = 0LL;
    v15 = 0;
    v8 = &v14;
    v9 = 2LL;
    do
    {
      *(_WORD *)v8 = 257;
      *((_BYTE *)v8 + 2) = 1;
      v8 = (__int64 *)((char *)v8 + 6);
      --v9;
    }
    while ( v9 );
    DynamicAudioEndpointManager::RefreshPublishedDefaults(g_DynamicAudioEndpointManager, (bool (*const)[6])&v14, 0);
  }
  if ( v13[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
}
