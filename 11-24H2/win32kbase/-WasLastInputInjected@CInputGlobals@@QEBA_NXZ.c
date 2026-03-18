/*
 * XREFs of ?WasLastInputInjected@CInputGlobals@@QEBA_NXZ @ 0x14020E970
 * Callers:
 *     <none>
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

bool __fastcall CInputGlobals::WasLastInputInjected(CInputGlobals *this)
{
  char v2; // bl

  W32AcquirePushLockSharedEx(this, 0);
  v2 = *((_BYTE *)this + 140);
  ExReleasePushLockSharedEx(this, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
