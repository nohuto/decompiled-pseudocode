/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioSystemEffectsPropertyChangeNotificationClient@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioSystemEffectsPropertyChangeNotificationClient@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1400380A8
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioSystemEffectsPropertyChangeNotificationClient@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004B0E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioSyst.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioSystemEffectsPropertyChangeNotificationClient>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  int v4; // ebx

  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_12;
  }
  if ( *a2 != -1350114592 )
  {
LABEL_3:
    a1 += 8LL;
    if ( *a2 != 537173312
      || a2[1] != *(_DWORD *)&GUID_20049d40_56d5_400e_a2ef_385599feed49.Data2
      || a2[2] != *(_DWORD *)GUID_20049d40_56d5_400e_a2ef_385599feed49.Data4
      || a2[3] != *(_DWORD *)&GUID_20049d40_56d5_400e_a2ef_385599feed49.Data4[4] )
    {
      v3 = a1 + 8;
      if ( *a2 == 56
        && a2[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
        && a2[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
        && a2[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
      {
        *a3 = v3;
        v4 = 0;
      }
      else
      {
        v4 = -2147467262;
      }
      if ( v4 < 0 )
        return (unsigned int)v4;
      goto LABEL_7;
    }
LABEL_16:
    *a3 = a1;
    v4 = 0;
LABEL_7:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v4;
  }
  if ( a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    || a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    || a2[3] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
  {
    if ( *a2 == -1350114592
      && a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
      goto LABEL_16;
    }
    goto LABEL_3;
  }
LABEL_12:
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
