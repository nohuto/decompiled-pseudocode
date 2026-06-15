/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEndpointVolumeInternalCallback@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEndpointVolumeInternalCallback@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x140045950
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEndpointVolumeInternalCallback@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140058770 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEndp.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x14002CD60 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x14005833C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEndpointVolumeInternalCallback>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // r9
  __int64 v4; // r9
  __int64 v5; // r10
  int CanCastTo; // ebx

  v3 = a2;
  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_8;
  }
  if ( *a2 != -1350114592 )
    goto LABEL_3;
  a2 = (_DWORD *)*(unsigned int *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
  if ( v3[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2 )
    goto LABEL_3;
  if ( *((_QWORD *)v3 + 1) == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
  {
LABEL_8:
    *a3 = a1;
    (*(void (__fastcall **)(__int64, _DWORD *, _QWORD *, _DWORD *))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, v3);
    return 0LL;
  }
  if ( v3[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && *((_QWORD *)v3 + 1) == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
  {
    *a3 = a1;
  }
  else
  {
LABEL_3:
    if ( !InlineIsEqualGUID((const struct _GUID *)v3, &GUID_b46be134_9ede_4863_85c3_0df45cb0a1b1) )
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>::CanCastTo(
                    v5 + 8,
                    v4);
      if ( CanCastTo < 0 )
        return (unsigned int)CanCastTo;
      goto LABEL_15;
    }
    *a3 = v5;
  }
  CanCastTo = 0;
LABEL_15:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)CanCastTo;
}
