/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObjectCacheManager@@UIAudioLogging@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObjectCacheManager@@UIAudioLogging@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x14003B414
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObjectCacheManager@@UIAudioLogging@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004A7B0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_14004A7B0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDeviceGraphObjectCacheManager,IAudioLogging>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return 0LL;
  }
  else
  {
    if ( *a2 == -1746084848
      && a2[1] == *(_DWORD *)&GUID_97ecdc10_b3b5_4dff_8dcc_abd71ac23c33.Data2
      && a2[2] == *(_DWORD *)GUID_97ecdc10_b3b5_4dff_8dcc_abd71ac23c33.Data4
      && a2[3] == *(_DWORD *)&GUID_97ecdc10_b3b5_4dff_8dcc_abd71ac23c33.Data4[4]
      || (a1 += 8LL, *a2 == -1146861636)
      && a2[1] == *(_DWORD *)&GUID_bba447bc_0c11_4b7a_ba32_c5284a54692f.Data2
      && a2[2] == *(_DWORD *)GUID_bba447bc_0c11_4b7a_ba32_c5284a54692f.Data4
      && a2[3] == *(_DWORD *)&GUID_bba447bc_0c11_4b7a_ba32_c5284a54692f.Data4[4] )
    {
      *a3 = a1;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v3;
  }
}
