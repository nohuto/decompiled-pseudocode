/*
 * XREFs of ?IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z @ 0x180167C1C
 * Callers:
 *     ?HandleInputModalityInfoChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@PEAW4ShellRequestType@5Shell@68@@Z @ 0x180082E90 (-HandleInputModalityInfoChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardModalityI.c)
 *     ?HandleAllowInputPanelMdmPolicyUpdated@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180168980 (-HandleAllowInputPanelMdmPolicyUpdated@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequ.c)
 *     ?HandleInputPaneTryHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1804861C0 (-HandleInputPaneTryHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 *     ?HandleInvocationBySystemButton@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1804863A0 (-HandleInvocationBySystemButton@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@.c)
 *     ?HandleOnScreenKeyboardVisibilityChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180486490 (-HandleOnScreenKeyboardVisibilityChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRe.c)
 *     ?HandleShellRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180486520 (-HandleShellRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@S.c)
 *     ?IsPrimaryViewTryShowAllowed@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x1804869C0 (-IsPrimaryViewTryShowAllowed@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ.c)
 *     ?IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAE@Z @ 0x180486A60 (-IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAE@Z.c)
 *     ?VerifyLightDismiss@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAE@Z @ 0x180487FA0 (-VerifyLightDismiss@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAE@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall KeyboardHosting::TabTipAdapterPolicy::IsViewShownInternal(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v5; // r8
  unsigned __int64 i; // r9
  __int64 v7; // rax
  _QWORD *Ptr; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // r8
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // r8
  char v15; // di
  int v16; // [rsp+38h] [rbp+10h]

  v16 = a2;
  v2 = this + 100;
  AcquireSRWLockShared(this + 100);
  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v7 = *((unsigned __int8 *)&v16 + i);
    v5 = 0x100000001B3LL * (v7 ^ v5);
  }
  Ptr = this[93].Ptr;
  v9 = v5 & (__int64)this[98].Ptr;
  v10 = this[95].Ptr;
  v11 = 2 * v9;
  v12 = (_QWORD *)v10[v11 + 1];
  if ( v12 == Ptr )
  {
LABEL_8:
    v12 = 0LL;
  }
  else
  {
    v13 = (_QWORD *)v10[v11];
    while ( a2 != *((_DWORD *)v12 + 4) )
    {
      if ( v12 == v13 )
        goto LABEL_8;
      v12 = (_QWORD *)v12[1];
    }
  }
  if ( !v12 )
    v12 = this[93].Ptr;
  if ( v12 == Ptr )
  {
    if ( v2 )
      ReleaseSRWLockShared(v2);
    return 0;
  }
  else
  {
    v15 = *((_BYTE *)v12 + 20);
    if ( v2 )
      ReleaseSRWLockShared(v2);
    return v15;
  }
}
