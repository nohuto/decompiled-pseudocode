/*
 * XREFs of ?QueryInterface@CShellSnapComponent@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180168D60
 * Callers:
 *     ?QueryInterface@CShellSnapComponent@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A0190 (-QueryInterface@CShellSnapComponent@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A01A0 (-QueryInterface@CShellSnapComponent@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A01B0 (-QueryInterface@CShellSnapComponent@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A01C0 (-QueryInterface@CShellSnapComponent@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A01D0 (-QueryInterface@CShellSnapComponent@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A01E0 (-QueryInterface@CShellSnapComponent@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A0200 (-QueryInterface@CShellSnapComponent@@WII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A0220 (-QueryInterface@CShellSnapComponent@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A0240 (-QueryInterface@CShellSnapComponent@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A0260 (-QueryInterface@CShellSnapComponent@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A0280 (-QueryInterface@CShellSnapComponent@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A02A0 (-QueryInterface@CShellSnapComponent@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A02C0 (-QueryInterface@CShellSnapComponent@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CShellSnapComponent@@WMA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805A02E0 (-QueryInterface@CShellSnapComponent@@WMA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UISnapComponent2@WindowSnapping@Shell@Internal@Windows@@UIPriviledgedPositioner@@UIWindowManagementArrangementEvents@@UIImmersiveWindowMessageNotification@@UIImmersiveSettingsCacheNotification@@UIImmersiveShellHookNotification@@UIWindowManagementShowMoveSizeEvents@@UIImmersiveRawInputKeyboardNotification@@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180168F74 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UISnapComponent2@Window.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShellSnapComponent::QueryInterface(CShellSnapComponent *this, const struct _GUID *a2, char **a3)
{
  int CanCastTo; // ebx
  char *v6; // rcx

  *a3 = 0LL;
  if ( *(_QWORD *)&a2->Data1 == __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_10;
  }
  if ( a2->Data1 != -1350114592 || *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2 )
    goto LABEL_11;
  if ( *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
  {
    if ( *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
    {
      goto LABEL_15;
    }
LABEL_11:
    this = (CShellSnapComponent *)((char *)this + 8);
    if ( a2->Data1 == -62389853
      && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
    {
      goto LABEL_15;
    }
    if ( a2->Data1 == -428157847
      && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4] )
    {
      *a3 = (char *)this + 40;
      CanCastTo = 0;
    }
    else
    {
      if ( a2->Data1 == 1834041537
        && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
      {
        *a3 = (char *)this + 48;
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
      this = (CShellSnapComponent *)((char *)this + 104);
      if ( a2->Data1 == 56
        && *(_DWORD *)&a2->Data2 == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
      {
LABEL_15:
        *a3 = (char *)this;
        CanCastTo = 0;
LABEL_16:
        (*(void (__fastcall **)(char *))(*(_QWORD *)*a3 + 8LL))(*a3);
        return (unsigned int)CanCastTo;
      }
      v6 = (char *)this + 8;
      if ( a2->Data1 == 1093201853
        && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab.Data4[4] )
      {
        *a3 = v6;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::WindowSnapping::ISnapComponent2,IPriviledgedPositioner,IWindowManagementArrangementEvents,IImmersiveWindowMessageNotification,IImmersiveSettingsCacheNotification,IImmersiveShellHookNotification,IWindowManagementShowMoveSizeEvents,IImmersiveRawInputKeyboardNotification,IImmersiveMonitorNotification>::CanCastTo(v6 + 8);
      }
    }
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
    goto LABEL_16;
  }
LABEL_10:
  *a3 = (char *)this;
  (*(void (__fastcall **)(CShellSnapComponent *))(*(_QWORD *)this + 8LL))(this);
  return 0;
}
