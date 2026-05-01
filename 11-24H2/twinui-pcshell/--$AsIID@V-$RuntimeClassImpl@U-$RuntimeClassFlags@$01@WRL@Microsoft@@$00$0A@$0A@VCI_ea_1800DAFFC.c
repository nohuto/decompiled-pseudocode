/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIRemoteLauncherForegroundHandler@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIRemoteLauncherForegroundHandler@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800DAFFC
 * Callers:
 *     ??$MakeAndInitialize@VRemoteLauncherForegroundHandler@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180209A40 (--$MakeAndInitialize@VRemoteLauncherForegroundHandler@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIRemoteLauncherForegroundHandler@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180221010 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180221010.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DABE0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IRemoteLauncherForegroundHandler,Microsoft::WRL::FtmBase>>(
        char *a1,
        __int64 a2,
        void **a3)
{
  char *v3; // r11
  _DWORD *v4; // r10
  _DWORD *v5; // r9
  _DWORD *v6; // rcx
  int CanCastTo; // ebx
  _DWORD *v9; // rbp
  _DWORD *v10; // rsi
  _DWORD *v11; // rdi
  char *v12; // r11

  *a3 = 0LL;
  v3 = a1;
  if ( *(_DWORD *)a2
    || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    v4 = (_DWORD *)(a2 + 4);
    v5 = (_DWORD *)(a2 + 8);
    v6 = (_DWORD *)(a2 + 12);
    if ( *(_DWORD *)a2 == -62389853
      && *v4 == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
      && *v5 == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
      && *v6 == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
    {
      goto LABEL_6;
    }
    if ( *(_DWORD *)a2 == -428157847
      && *v4 == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
      && *v5 == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
      && *v6 == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4] )
    {
      *a3 = v3 + 40;
      v9 = (_DWORD *)(a2 + 12);
      CanCastTo = 0;
      v10 = (_DWORD *)(a2 + 8);
      v11 = (_DWORD *)(a2 + 4);
    }
    else
    {
      v11 = (_DWORD *)(a2 + 4);
      v10 = (_DWORD *)(a2 + 8);
      v9 = (_DWORD *)(a2 + 12);
      if ( *(_DWORD *)a2 == 1834041537
        && *v4 == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
        && *v5 == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
        && *v6 == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
      {
        *a3 = v3 + 48;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = -2147467262;
      }
      if ( CanCastTo == -2147467262 )
        CanCastTo = -2147467262;
    }
    if ( CanCastTo == -2147467262 )
    {
      v3 += 104;
      if ( *(_DWORD *)a2 == -1211751484
        && *v11 == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data2
        && *v10 == *(_DWORD *)GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4
        && *v9 == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4[4] )
      {
LABEL_6:
        *a3 = v3;
        CanCastTo = 0;
LABEL_7:
        (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
        return (unsigned int)CanCastTo;
      }
      v12 = v3 + 8;
      if ( *(_DWORD *)a2 == 1523180079
        && *v4 == *(_DWORD *)&GUID_5ac9e22f_8a57_43c0_bf9a_1e1f5f366e55.Data2
        && *v5 == *(_DWORD *)GUID_5ac9e22f_8a57_43c0_bf9a_1e1f5f366e55.Data4
        && *v6 == *(_DWORD *)&GUID_5ac9e22f_8a57_43c0_bf9a_1e1f5f366e55.Data4[4] )
      {
        *a3 = v12;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(
                      (Microsoft::WRL::FtmBase *)(v12 + 8),
                      (const struct _GUID *)a2,
                      a3);
        if ( CanCastTo == -2147467262 )
          CanCastTo = -2147467262;
      }
    }
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
    goto LABEL_7;
  }
  *a3 = a1;
  (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
