/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x140083108
 * Callers:
 *     xxxProcessHidInput @ 0x14004A660 (xxxProcessHidInput.c)
 *     ?xxxUserBeep@@YAHKK_N@Z @ 0x140216730 (-xxxUserBeep@@YAHKK_N@Z.c)
 *     FreeDesktop @ 0x14023C2F0 (FreeDesktop.c)
 *     UnmapDesktop @ 0x14023C4A0 (UnmapDesktop.c)
 *     EditionIsUsermodeRIMAccessAllowed @ 0x140274B90 (EditionIsUsermodeRIMAccessAllowed.c)
 *     UserSetTimer @ 0x1402DC9AC (UserSetTimer.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1403249A0 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400829D0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this, __int64 a2, __int64 a3)
{
  bool v4; // al

  v4 = IS_USERCRIT_OWNED_EXCLUSIVE((__int64)this, a2, a3);
  *(_BYTE *)this = v4;
  if ( !v4 )
    EnterCrit(1LL, 0LL);
  return this;
}
