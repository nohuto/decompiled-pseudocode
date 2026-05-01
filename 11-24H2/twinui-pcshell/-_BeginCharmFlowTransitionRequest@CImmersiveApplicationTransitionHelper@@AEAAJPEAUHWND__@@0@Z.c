/*
 * XREFs of ?_BeginCharmFlowTransitionRequest@CImmersiveApplicationTransitionHelper@@AEAAJPEAUHWND__@@0@Z @ 0x1802F4074
 * Callers:
 *     ?BeginCharmTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJQEBUCHARM_TRANSITION_INFORMATION@@@Z @ 0x1802F3D80 (-BeginCharmTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJQEBUCHARM_TRANSITION_IN.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?SettingsPaneAnimationDwmTransition@@YAXPEAUHWND__@@_N@Z @ 0x1802F3EF0 (-SettingsPaneAnimationDwmTransition@@YAXPEAUHWND__@@_N@Z.c)
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::_BeginCharmFlowTransitionRequest(
        CImmersiveApplicationTransitionHelper *this,
        HWND a2,
        HWND a3)
{
  HWND v3; // rbp
  void *v6; // rdi
  HANDLE v7; // rax
  unsigned int v8; // ebx
  int v9; // esi
  HWND v10; // rcx
  char v11; // dl
  bool v12; // di
  HANDLE PropW; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  struct tagRECT Rect; // [rsp+20h] [rbp-68h] BYREF
  struct tagRECT v18; // [rsp+30h] [rbp-58h] BYREF

  v3 = a3;
  if ( a3 )
  {
    if ( a2 )
    {
      Rect = 0LL;
      GetClientRect(a2, &Rect);
      v18 = 0LL;
      GetClientRect(v3, &v18);
      if ( Rect.right <= v18.right )
      {
        v8 = 70;
        if ( Rect.right < v18.right )
          v8 = 72;
      }
      else
      {
        v8 = 71;
      }
      v9 = DwmpBeginTransitionRequest(v8);
      if ( v9 < 0 )
        return (unsigned int)v9;
      v15 = 805306408LL;
      if ( v8 == 71 )
        v15 = 268435496LL;
      DwmpTransitionWindow(v3, v15);
      v14 = 268435497LL;
      v10 = a2;
    }
    else
    {
      v12 = 0;
      PropW = GetPropW(a3, L"Charm_ActionType_Prop");
      if ( PropW )
        v12 = (_DWORD)PropW == 5;
      v8 = 83;
      v9 = DwmpBeginTransitionRequestWithGUID(83LL, &unk_180792768);
      if ( v9 < 0 )
        return (unsigned int)v9;
      v10 = v3;
      if ( v12 )
      {
        v11 = 0;
        goto LABEL_14;
      }
      v14 = 805306410LL;
    }
    DwmpTransitionWindow(v10, v14);
    DwmFlush();
    goto LABEL_32;
  }
  v6 = &unk_180792778;
  v7 = GetPropW(a2, L"Charm_ActionType_Prop");
  if ( v7 )
  {
    switch ( (_DWORD)v7 )
    {
      case 1:
        v6 = &unk_180792788;
        break;
      case 2:
        v6 = &unk_180792738;
        break;
      case 4:
        v6 = &unk_180792758;
        break;
      case 5:
        v6 = &unk_180792748;
        LOBYTE(v3) = 1;
        break;
    }
  }
  v8 = 82;
  v9 = DwmpBeginTransitionRequestWithGUID(82LL, v6);
  if ( v9 >= 0 )
  {
    v10 = a2;
    if ( !(_BYTE)v3 )
    {
      DwmpTransitionWindow(a2, 270532650LL);
      goto LABEL_32;
    }
    v11 = 1;
LABEL_14:
    SettingsPaneAnimationDwmTransition(v10, v11);
LABEL_32:
    *((_DWORD *)this + 13) = v8;
  }
  return (unsigned int)v9;
}
