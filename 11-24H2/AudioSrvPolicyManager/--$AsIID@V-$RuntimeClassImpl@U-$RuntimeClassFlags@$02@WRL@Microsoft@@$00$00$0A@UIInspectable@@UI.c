/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180041C38
 * Callers:
 *     ?LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x18000EE40 (-LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800430F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectab.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800129D0 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable,IPropertyStore>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rdx
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  _DWORD *v12; // rcx
  _QWORD *v13; // r8
  __int64 v14; // r11
  _QWORD *v15; // r8
  __int64 v16; // r11

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    && !InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    if ( InlineIsEqualGUID(v7, v6) )
    {
      *v9 = v10;
    }
    else
    {
      if ( !InlineIsEqualGUID(v8, &GUID_00000038_0000_0000_c000_000000000046) )
      {
        if ( InlineIsEqualGUID(v12, &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99) )
        {
          v10 = v16 + 8;
          *v15 = v16 + 8;
          v11 = 0;
        }
        else
        {
          v11 = -2147467262;
          v10 = 0LL;
        }
        if ( v11 < 0 )
          return (unsigned int)v11;
        goto LABEL_12;
      }
      *v13 = v14;
    }
    v11 = 0;
LABEL_12:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    return (unsigned int)v11;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
