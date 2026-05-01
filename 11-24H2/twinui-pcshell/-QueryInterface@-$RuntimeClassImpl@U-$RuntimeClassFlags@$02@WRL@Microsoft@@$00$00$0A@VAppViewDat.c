/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180142240
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806C04D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1806C04D0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806C04E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1806C04E0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@Details@WRL@Microsoft@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806C04F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1806C04F0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@Details@WRL@Microsoft@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806C0510 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1806C0510.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@Details@WRL@Microsoft@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1806C0530 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1806C0530.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180038D10 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DABE0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,AppViewDataSourceAdapterBase,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>::QueryInterface(
        _DWORD *a1,
        _DWORD *a2,
        void **a3)
{
  _DWORD *v3; // r9
  unsigned int v4; // ebx
  int CanCastTo; // edi
  _DWORD *v7; // r9
  void *v8; // r10
  const struct _GUID *v9; // r9
  __int64 v10; // r10

  v3 = a2;
  v4 = 0;
  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_12;
  }
  a2 = (_DWORD *)*(unsigned int *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
  if ( *v3 != -1350114592 )
  {
LABEL_3:
    a1 += 2;
    if ( *v3 != 1920966295
      || v3[1] != *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data2
      || v3[2] != *(_DWORD *)GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4
      || v3[3] != *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4[4] )
    {
      a2 = a1 + 2;
      if ( *v3 == 1260763374
        && v3[1] == *(_DWORD *)&GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data2
        && v3[2] == *(_DWORD *)GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data4
        && v3[3] == *(_DWORD *)&GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data4[4] )
      {
        *a3 = a2;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = -2147467262;
      }
      if ( CanCastTo != -2147467262 )
      {
LABEL_7:
        if ( CanCastTo < 0 )
          return (unsigned int)CanCastTo;
LABEL_19:
        (*(void (__fastcall **)(void *, _DWORD *))(*(_QWORD *)*a3 + 8LL))(*a3, a2);
        return (unsigned int)CanCastTo;
      }
      if ( !InlineIsEqualGUID(v3, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
      {
        if ( InlineIsEqualGUID(v7, &GUID_12faaf23_7a01_4f04_95ca_c33c158afdf1) )
        {
          *a3 = (void *)v10;
          CanCastTo = 0;
        }
        else
        {
          CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v10 + 8), v9, a3);
        }
        goto LABEL_7;
      }
      *a3 = v8;
LABEL_18:
      CanCastTo = 0;
      goto LABEL_19;
    }
LABEL_17:
    *a3 = a1;
    goto LABEL_18;
  }
  if ( v3[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    || *((_QWORD *)v3 + 1) != *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
  {
    if ( *v3 == -1350114592
      && v3[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      && *((_QWORD *)v3 + 1) == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      goto LABEL_17;
    }
    goto LABEL_3;
  }
LABEL_12:
  *a3 = a1;
  (*(void (__fastcall **)(_DWORD *, _DWORD *, void **, _DWORD *))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, v3);
  return v4;
}
