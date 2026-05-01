/*
 * XREFs of ?DetermineNewSnapState@HotkeyHandler@@AEBA?AUSNAP_STATE@1@W4SnapAction@1@W4HotkeyCommand@1@IPEAUIImmersiveMonitor@@PEAUISnappedWindow@@@Z @ 0x1805AD874
 * Callers:
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805AE210 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 * Callees:
 *     ?AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ @ 0x18008B63C (-AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?CanFitColumnLayouts@SnapLayoutHelpers@@YA_NAEBUCRect@Geometry@@H@Z @ 0x1805AA0E0 (-CanFitColumnLayouts@SnapLayoutHelpers@@YA_NAEBUCRect@Geometry@@H@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HotkeyHandler::DetermineNewSnapState(
        SnapLayoutHelpers *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        __int64 *a6)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  bool v9; // al
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  struct Geometry::CRect *v15; // [rsp+20h] [rbp-38h] BYREF
  __int128 v16; // [rsp+28h] [rbp-30h] BYREF

  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  v7 = a4;
  v8 = a3;
  v9 = SnapLayoutHelpers::AreQuadrantsEnabled(a1, (enum _TABLETMODESTATE *)a2);
  v10 = v7 + 4 * v8;
  if ( !v9 )
  {
    v11 = (__int64)*(&HotkeyHandler::MoreSnapZonesHotkeyMaps::TabletMode + v10);
LABEL_9:
    *(_QWORD *)a2 = v11;
    return a2;
  }
  if ( (a5 & 1) == 0 )
  {
    *(_QWORD *)a2 = *(&HotkeyHandler::MoreSnapZonesHotkeyMaps::Default + v10);
    return a2;
  }
  v12 = (__int64)*(&HotkeyHandler::MoreSnapZonesHotkeyMaps::Column + v10);
  v15 = 0LL;
  *(_QWORD *)a2 = v12;
  v13 = *a6;
  v16 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, __int128 *))(v13 + 88))(a6, &v16) >= 0
    && (*(int (__fastcall **)(__int64 *, struct Geometry::CRect **, char *))(*a6 + 112))(a6, &v15, (char *)&v15 + 4) >= 0
    && !SnapLayoutHelpers::CanFitColumnLayouts(
          (SnapLayoutHelpers *)&v16,
          (const struct Geometry::CRect *)(unsigned int)v15)
    && *(_DWORD *)a2 == 10 )
  {
    v11 = qword_1808C7D70[(unsigned int)v7];
    goto LABEL_9;
  }
  return a2;
}
