/*
 * XREFs of ?QueryInterface@CPerEndpointVolumeAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800444D0
 * Callers:
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C27B0 (-QueryInterface@CPerEndpointVolumeAudioSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C27C0 (-QueryInterface@CPerEndpointVolumeAudioSession@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C27D0 (-QueryInterface@CPerEndpointVolumeAudioSession@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C27E0 (-QueryInterface@CPerEndpointVolumeAudioSession@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C27F0 (-QueryInterface@CPerEndpointVolumeAudioSession@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPerEndpointVolumeAudioSession@@WDJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C2800 (-QueryInterface@CPerEndpointVolumeAudioSession@@WDJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000D600 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIInspectable@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800449BC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIInspectable@@@Details.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPerEndpointVolumeAudioSession::QueryInterface(
        CPerEndpointVolumeAudioSession *this,
        struct _GUID *a2,
        void **a3)
{
  CPerEndpointVolumeAudioSession *v3; // r9
  __int64 v4; // rax
  char *v6; // rcx
  int CanCastTo; // ebx
  int v9; // eax
  signed __int64 v10; // rax
  signed __int64 v11; // rtt

  v3 = this;
  if ( !a3 )
    return 2147500035LL;
  v4 = *(_QWORD *)&IID_IAudioEndpointVolumeCallback.Data1 - *(_QWORD *)&a2->Data1;
  if ( *(_QWORD *)&IID_IAudioEndpointVolumeCallback.Data1 == *(_QWORD *)&a2->Data1 )
    v4 = *(_QWORD *)IID_IAudioEndpointVolumeCallback.Data4 - *(_QWORD *)a2->Data4;
  if ( v4 )
  {
    *a3 = 0LL;
    if ( *(_QWORD *)&a2->Data1 == __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
    {
      goto LABEL_21;
    }
    if ( a2->Data1 == -1350114592
      && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2 )
    {
      if ( *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
      {
LABEL_21:
        *a3 = this;
        (*(void (__fastcall **)(CPerEndpointVolumeAudioSession *))(*(_QWORD *)this + 8LL))(this);
        return 0;
      }
      if ( *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
      {
        *a3 = this;
        goto LABEL_31;
      }
    }
    if ( a2->Data1 == -29802186 )
    {
      if ( *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_fe394136_900b_469c_bdfc_4321bcd92f34.Data2
        || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_fe394136_900b_469c_bdfc_4321bcd92f34.Data4 )
      {
        goto LABEL_11;
      }
      v9 = *(_DWORD *)&GUID_fe394136_900b_469c_bdfc_4321bcd92f34.Data4[4];
    }
    else
    {
      if ( a2->Data1 != 31342451
        || *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_01de3f73_63e1_4021_a563_2efba2c7fb9b.Data2
        || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_01de3f73_63e1_4021_a563_2efba2c7fb9b.Data4 )
      {
        goto LABEL_11;
      }
      v9 = *(_DWORD *)&GUID_01de3f73_63e1_4021_a563_2efba2c7fb9b.Data4[4];
    }
    if ( *(_DWORD *)&a2->Data4[4] == v9 )
    {
      *a3 = (char *)this + 8;
      goto LABEL_31;
    }
LABEL_11:
    if ( a2->Data1 != 56
      || *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
      || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
      || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
    {
      v6 = (char *)this + 24;
      if ( a2->Data1 == 1845242312
        && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a.Data4[4]
        || (v6 = (char *)v3 + 32, a2->Data1 == 1972882042)
        && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_7597ca7a_c7f8_4aa5_823c_aff9d9aebd8c.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_7597ca7a_c7f8_4aa5_823c_aff9d9aebd8c.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_7597ca7a_c7f8_4aa5_823c_aff9d9aebd8c.Data4[4] )
      {
        *a3 = v6;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>::CanCastTo((char *)v3 + 40);
      }
      if ( CanCastTo < 0 )
        return (unsigned int)CanCastTo;
      goto LABEL_16;
    }
    *a3 = (char *)this + 16;
LABEL_31:
    CanCastTo = 0;
LABEL_16:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)CanCastTo;
  }
  v10 = *((_QWORD *)this + 7);
  while ( v10 >= 0 )
  {
    if ( (_DWORD)v10 != 0x7FFFFFFF )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v10 + 1, v10);
      if ( v11 != v10 )
        continue;
    }
    goto LABEL_57;
  }
  Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v10 + 16), (volatile int *)a2);
LABEL_57:
  *a3 = (void *)(((unsigned __int64)v3 + 920) & -(__int64)(v3 != 0LL));
  return 0LL;
}
