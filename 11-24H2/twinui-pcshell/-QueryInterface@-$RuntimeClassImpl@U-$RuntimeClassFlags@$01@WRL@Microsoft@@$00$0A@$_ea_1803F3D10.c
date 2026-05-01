/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIDiscoverRecentItem@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803F3D10
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIDiscoverRecentItem@@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803F3DA0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1803F3DA0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180038D10 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DABE0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IDiscoverRecentItem>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  void **v3; // r8
  Microsoft::WRL::FtmBase *v4; // r10
  const struct _GUID *v5; // r11
  int CanCastTo; // eax
  _QWORD *v7; // r8
  _DWORD *v8; // r11
  unsigned int v9; // ebx
  __int64 v10; // r10

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v3 = v4;
    (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v4 + 8LL))(v4);
    return 0;
  }
  CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(v4, v5, v3);
  v9 = -2147467262;
  if ( CanCastTo == -2147467262 )
  {
    if ( InlineIsEqualGUID(v8, &GUID_dd910131_9c55_48a4_8fa7_f00d062b10f2) )
    {
      *v7 = v10;
      v9 = 0;
LABEL_6:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
    }
  }
  else
  {
    v9 = CanCastTo;
    if ( CanCastTo >= 0 )
      goto LABEL_6;
  }
  return v9;
}
