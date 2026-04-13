/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180040C68
 * Callers:
 *     ??$MakeAndInitialize@VContentManagementBrokerServer@ContentManagement@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x180041B9C (--$MakeAndInitialize@VContentManagementBrokerServer@ContentManagement@@UIInspectable@@$$V@Detail.c)
 *     ?QueryInterface@ContentManagementBrokerServer@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044B20 (-QueryInterface@ContentManagementBrokerServer@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002D914 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     InlineIsEqualGUID @ 0x180033DB8 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>>(
        __int64 a1,
        struct _GUID *a2,
        _QWORD *a3)
{
  _DWORD *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rdx
  _DWORD *v8; // rcx
  void **v9; // r8
  __int64 v10; // r9
  int CanCastTo; // ebx
  _DWORD *v12; // rcx
  __int64 v13; // r9
  int v14; // r10d

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    && !InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    if ( InlineIsEqualGUID(v8, v7) )
    {
LABEL_4:
      *v9 = (void *)v10;
      CanCastTo = 0;
      goto LABEL_11;
    }
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v10 + 8), a2, v9);
    if ( CanCastTo == -2147467262 )
    {
      if ( InlineIsEqualGUID(a2, &GUID_00000038_0000_0000_c000_000000000046) )
        goto LABEL_4;
      if ( InlineIsEqualGUID(v12, &GUID_44431c59_c5ec_4253_94f7_27563a8a242f) )
      {
        *v9 = (void *)(v13 + 8);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = v14;
      }
    }
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
LABEL_11:
    (*(void (__fastcall **)(void *))(*(_QWORD *)*v9 + 8LL))(*v9);
    return (unsigned int)CanCastTo;
  }
  *v5 = v6;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  return 0LL;
}
