/*
 * XREFs of ?GetHandler@TransitionManager@Transitions@Udwm@winrt@@AEAA?AUITransition@234@W4ShellTransitionType@234@@Z @ 0x18004C0D0
 * Callers:
 *     ?SkipAnimationDelays@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004AA5C (-SkipAnimationDelays@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?WindowMaximizeSnapPostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004B154 (-WindowMaximizeSnapPostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?StopRotation@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004BE48 (-StopRotation@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?ForceUpdateScene@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004C010 (-ForceUpdateScene@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?PreTransitionWithNativeWindow@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAVCTopLevelWindow3D@@W4ShellTransitionType@234@@Z @ 0x18004D1B4 (-PreTransitionWithNativeWindow@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAVCTopLevelWindo.c)
 *     ?UpdateRect@TransitionManager@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@4@W4ShellTransitionType@234@@Z @ 0x1800999C0 (-UpdateRect@TransitionManager@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@4@W4Shell.c)
 *     ?WindowMaximizeSnapCancel@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180099F6C (-WindowMaximizeSnapCancel@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?PostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z @ 0x1800E7058 (-PostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z.c)
 *     ?PreTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z @ 0x1800E70D8 (-PreTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z.c)
 *     ?RegisterTransitionBitmap@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAUHWND__@@AEBUtagRECT@@PEAX_K@Z @ 0x1800E7170 (-RegisterTransitionBitmap@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAUHWND__@@AEBUtagRECT.c)
 *     ?UpdateAngle@TransitionManager@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800E73B0 (-UpdateAngle@TransitionManager@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 * Callees:
 *     ??$_Hash_representation@W4ShellTransitionType@Transitions@Udwm@winrt@@@std@@YA_KAEBW4ShellTransitionType@Transitions@Udwm@winrt@@@Z @ 0x18004C158 (--$_Hash_representation@W4ShellTransitionType@Transitions@Udwm@winrt@@@std@@YA_KAEBW4ShellTransi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::Udwm::Transitions::TransitionManager::GetHandler(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // r11d
  _QWORD *v7; // r10
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v14; // [rsp+40h] [rbp+18h] BYREF

  v14 = a3;
  v4 = std::_Hash_representation<enum winrt::Udwm::Transitions::ShellTransitionType>(&v14);
  v8 = v7[3];
  v9 = 2 * (v7[6] & v4);
  v10 = v7[1];
  v11 = *(_QWORD *)(v8 + 8 * v9 + 8);
  if ( v11 == v10 )
  {
LABEL_6:
    v11 = 0LL;
  }
  else
  {
    v5 = *(_QWORD *)(v8 + 8 * v9);
    while ( v6 != *(_DWORD *)(v11 + 16) )
    {
      if ( v11 == v5 )
        goto LABEL_6;
      v11 = *(_QWORD *)(v11 + 8);
    }
  }
  if ( !v11 || v11 == v10 )
  {
    *a2 = 0LL;
  }
  else
  {
    v12 = *(_QWORD *)(v11 + 24);
    *a2 = v12;
    if ( v12 )
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v12 + 8LL))(v12, v10, v5);
  }
  return a2;
}
