/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCManager@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@UIMPCManagerConnection@6789@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCManager@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@UIMPCManagerConnection@6789@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801601E8
 * Callers:
 *     ??$MakeAndInitialize@VMPCManagerClient@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIMPCManagerClient@MPCManager@Input@Internal@Windows@@@Z @ 0x180160BEC (--$MakeAndInitialize@VMPCManagerClient@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@$$.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCManager@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@UIMPCManagerConnection@6789@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180165210 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCManage.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180053760 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>>(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r10
  const struct _GUID *v6; // rdx
  const struct _GUID *v7; // rcx
  const struct _GUID *v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r10
  int v11; // ebx
  const struct _GUID *v12; // rcx
  const struct _GUID *v13; // rcx
  __int64 v14; // r10
  const struct _GUID *v15; // rcx
  __int64 v16; // r10

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    && !InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    if ( InlineIsEqualGUID(v7, v6) || InlineIsEqualGUID(v8, &GUID_1810dd3a_569b_4d33_8799_d38e79e8aac2) )
    {
      *v9 = v10;
      v11 = 0;
      goto LABEL_14;
    }
    if ( InlineIsEqualGUID(v12, &GUID_00000038_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v13, &GUID_14d766a1_12f3_404c_ae87_c566719dbe22) )
    {
      *v9 = v14;
    }
    else
    {
      if ( !InlineIsEqualGUID(v15, &GUID_27b0ba57_321e_45a0_888d_225457a9cfe5) )
      {
        v11 = -2147467262;
LABEL_13:
        if ( v11 < 0 )
          return (unsigned int)v11;
LABEL_14:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 8LL))(*v9);
        return (unsigned int)v11;
      }
      *v9 = v16 + 8;
    }
    v11 = 0;
    goto LABEL_13;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
