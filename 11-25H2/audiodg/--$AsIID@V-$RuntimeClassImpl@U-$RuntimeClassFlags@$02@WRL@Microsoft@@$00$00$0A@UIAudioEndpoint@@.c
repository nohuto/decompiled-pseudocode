/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEndpoint@@UIAudioEndpointRT@@UIAudioOutputEndpointRT@@UIBridgeSourceEndpointControl@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEndpoint@@UIAudioEndpointRT@@UIAudioOutputEndpointRT@@UIBridgeSourceEndpointControl@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x140057BDC
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEndpoint@@UIAudioEndpointRT@@UIAudioOutputEndpointRT@@UIBridgeSourceEndpointControl@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400589E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1400589E0.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x14002CD60 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEndpoint,IAudioEndpointRT,IAudioOutputEndpointRT,IBridgeSourceEndpointControl>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  const struct _GUID *v5; // rcx
  const struct _GUID *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r10
  int v9; // ebx
  const struct _GUID *v10; // rcx
  const struct _GUID *v11; // rcx
  __int64 v12; // r10
  const struct _GUID *v13; // rcx
  const struct _GUID *v14; // rcx
  __int64 v15; // r10

  v3 = a2;
  v4 = a1;
  *a3 = 0LL;
  if ( (*(_DWORD *)a2
     || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
     || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
     || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4])
    && !InlineIsEqualGUID((const struct _GUID *)a2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    if ( InlineIsEqualGUID(v5, (const struct _GUID *)a2)
      || InlineIsEqualGUID(v6, &GUID_30a99515_1527_4451_af9f_00c5f0234daf) )
    {
      *v7 = v8;
      v9 = 0;
      goto LABEL_18;
    }
    if ( InlineIsEqualGUID(v10, &GUID_00000038_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v11, &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d)
      || InlineIsEqualGUID(v13, &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa) )
    {
      *v7 = v12;
    }
    else
    {
      if ( !InlineIsEqualGUID(v14, &GUID_ed9309d0_76d3_430a_a5b4_6ee21020fca5) )
      {
        v9 = -2147467262;
LABEL_17:
        if ( v9 < 0 )
          return (unsigned int)v9;
LABEL_18:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
        return (unsigned int)v9;
      }
      *v7 = v15 + 8;
    }
    v9 = 0;
    goto LABEL_17;
  }
  *a3 = v4;
  (*(void (__fastcall **)(__int64, __int64, _QWORD *, __int64))(*(_QWORD *)v4 + 8LL))(v4, a2, a3, v3);
  return 0LL;
}
