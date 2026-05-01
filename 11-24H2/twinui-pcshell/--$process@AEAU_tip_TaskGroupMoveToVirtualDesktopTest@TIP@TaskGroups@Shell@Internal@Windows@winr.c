/*
 * XREFs of ??$process@AEAU_tip_TaskGroupMoveToVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@input_archive@tson@@AEAAXAEAU_tip_TaskGroupMoveToVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@Z @ 0x1806B02E8
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_TaskGroupMoveToVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1806B8C60 (-deserialize@-$merged_data@U_tip_TaskGroupMoveToVirtualDesktopTest@TIP@TaskGroups@Shell@Internal.c)
 * Callees:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x180183220 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x180183250 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x180183364 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1806AF494 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@_WU-$char_traits@_W@std@@V-$alloca.c)
 */

void __fastcall tson::input_archive::process<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupMoveToVirtualDesktopTest &>(
        tson::input_archive *this,
        __int64 a2)
{
  __int64 v4; // rdx
  char *v5; // rax
  char v6; // cl
  bool v7; // al

  tson::input_archive::startNode(this);
  *((_BYTE *)this + 24) = 7;
  *((_QWORD *)this + 2) = "groupId";
  tson::load_nothrow(this, a2 + 16);
  *((_BYTE *)this + 24) = 30;
  *((_QWORD *)this + 2) = "isGroupVisibleOnCorrectDesktop";
  if ( !tson::input_archive::search(this) )
  {
    v7 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(this, 10, -2147023267);
  v4 = *(_QWORD *)this;
  v5 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v5 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v6 = *v5;
    *(_QWORD *)(v4 + 8) = v5 + 1;
    v7 = v6 != 0;
LABEL_6:
    *(_BYTE *)(a2 + 48) = v7;
    goto LABEL_7;
  }
  *(_BYTE *)(v4 + 24) = 1;
LABEL_7:
  tson::input_archive::finishNode(this);
}
