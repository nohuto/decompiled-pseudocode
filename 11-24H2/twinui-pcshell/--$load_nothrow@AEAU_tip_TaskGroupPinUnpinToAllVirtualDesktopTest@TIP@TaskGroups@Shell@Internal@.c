/*
 * XREFs of ??$load_nothrow@AEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@tson@@YAXAEAVinput_archive@0@AEAV?$nvp@AEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1806B01E8
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1806B8C90 (-deserialize@-$merged_data@U_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@I.c)
 * Callees:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x180183220 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$process@V?$nvp@AEAW4ThumbnailSource@@@tson@@V?$nvp@AEAW4InputType@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4ThumbnailSource@@@1@$$QEAV?$nvp@AEAW4InputType@@@1@@Z @ 0x18055C034 (--$process@V-$nvp@AEAW4ThumbnailSource@@@tson@@V-$nvp@AEAW4InputType@@@2@@input_archive@tson@@AE.c)
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1806AF494 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@_WU-$char_traits@_W@std@@V-$alloca.c)
 */

void __fastcall tson::load_nothrow<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest &>(
        tson::input_archive *this,
        __int64 a2)
{
  char v2; // r8
  __int64 v4; // rbx
  const char *v5; // [rsp+20h] [rbp-38h] BYREF
  char v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+30h] [rbp-28h]
  const char *v8; // [rsp+38h] [rbp-20h] BYREF
  char v9; // [rsp+40h] [rbp-18h]
  __int64 v10; // [rsp+48h] [rbp-10h]

  v2 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v2;
  v4 = *(_QWORD *)(a2 + 16);
  tson::input_archive::startNode(this);
  v6 = 13;
  v5 = "finalPinState";
  v9 = 9;
  v7 = v4 + 52;
  *((_BYTE *)this + 24) = 7;
  v8 = "operation";
  v10 = v4 + 48;
  *((_QWORD *)this + 2) = "groupId";
  tson::load_nothrow(this, v4 + 16);
  tson::input_archive::process<tson::nvp<enum ThumbnailSource &>,tson::nvp<enum InputType &>>(
    this,
    (__int64)&v8,
    (__int64 *)&v5);
  tson::input_archive::finishNode(this);
}
