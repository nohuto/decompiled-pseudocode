/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIWindowingEnvironmentConfig@@UIWindowingEnvironmentConfigInternal@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIWindowingEnvironmentConfig@@UIWindowingEnvironmentConfigInternal@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800DAF1C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIWindowingEnvironmentConfig@@UIWindowingEnvironmentConfigInternal@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18023B250 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18023B250.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180038D10 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DABE0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IWindowingEnvironmentConfig,IWindowingEnvironmentConfigInternal>>(
        Microsoft::WRL::FtmBase *a1,
        __int64 a2,
        void **a3)
{
  _DWORD *v3; // rdx
  __int64 v4; // rcx
  int CanCastTo; // ebx
  _QWORD *v6; // r8
  _DWORD *v7; // r10
  __int64 v8; // r9
  int v9; // r11d

  *a3 = 0LL;
  if ( *(_DWORD *)a2
    || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(a1, (const struct _GUID *)a2, a3);
    if ( CanCastTo == -2147467262 )
    {
      if ( *v3 == 1009958521
        && v3[1] == *(_DWORD *)&GUID_3c32be79_d44b_4c43_b19b_12f70e686f35.Data2
        && v3[2] == *(_DWORD *)GUID_3c32be79_d44b_4c43_b19b_12f70e686f35.Data4
        && v3[3] == *(_DWORD *)&GUID_3c32be79_d44b_4c43_b19b_12f70e686f35.Data4[4] )
      {
        *v6 = v4 + 32;
        CanCastTo = 0;
        goto LABEL_7;
      }
      if ( InlineIsEqualGUID(v7, &GUID_c6144554_2844_43cf_b0ff_9b3c8ad9ba14) )
      {
        *v6 = v8 + 8;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = v9;
      }
    }
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
LABEL_7:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 8LL))(*v6);
    return (unsigned int)CanCastTo;
  }
  *a3 = a1;
  (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
