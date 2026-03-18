/*
 * XREFs of ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x14019FAB0
 * Callers:
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1400D082C (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     CloseWin32InputRelatedObHandles @ 0x140218A10 (CloseWin32InputRelatedObHandles.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

void __fastcall InputExtensibilityCallout::CloseCoreMsgPort(InputExtensibilityCallout *this)
{
  void *v2; // rcx

  W32AcquirePushLockExclusiveEx((InputExtensibilityCallout *)((char *)this + 8), 0);
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    ZwClose(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  W32ReleasePushLockExclusiveEx((InputExtensibilityCallout *)((char *)this + 8), 0LL);
}
