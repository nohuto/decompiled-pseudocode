/*
 * XREFs of ?SetDisplayOnState@CInputGlobals@@QEAAX_N@Z @ 0x14020E8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

void __fastcall CInputGlobals::SetDisplayOnState(CInputGlobals *this, char a2)
{
  W32AcquirePushLockExclusiveEx(this, 0);
  *((_BYTE *)this + 142) = a2;
  W32ReleasePushLockExclusiveEx(this, 0LL);
}
