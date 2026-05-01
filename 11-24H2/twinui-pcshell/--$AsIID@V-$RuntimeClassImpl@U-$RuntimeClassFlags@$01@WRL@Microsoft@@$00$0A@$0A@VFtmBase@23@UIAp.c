/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIApplicationFrameFactory@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIApplicationFrameFactory@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801BF040
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIApplicationFrameFactory@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180226F60 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180226F60.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IApplicationFrameFactory>>(
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
    if ( *a2 == -1796592748
      && a2[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
      && a2[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
      && a2[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4]
      || *a2 == 3
      && a2[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
      && a2[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
      && a2[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4]
      || (a1 += 32LL, *a2 == -658349529)
      && a2[1] == *(_DWORD *)&GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e.Data2
      && a2[2] == *(_DWORD *)GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e.Data4
      && a2[3] == *(_DWORD *)&GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e.Data4[4] )
    {
      *a3 = a1;
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v3;
  }
}
