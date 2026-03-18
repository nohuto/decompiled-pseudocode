/*
 * XREFs of ?NotifySetPointerGraphicDevice@CMouseProcessor@@QEAAXW4SetPointerGraphicsResult@@@Z @ 0x14021DB68
 * Callers:
 *     NotifySetPointerGraphicDevice @ 0x140062E20 (NotifySetPointerGraphicDevice.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseProcessor::NotifySetPointerGraphicDevice(__int64 a1, int a2)
{
  __int64 v4; // rbx
  int v5; // edi
  int v6; // edi

  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2152);
  v4 = a1 + 4024;
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)v4, 0);
  if ( *(_BYTE *)(v4 + 8) )
  {
    v5 = a2 - 1;
    if ( v5 && (v6 = v5 - 1) != 0 )
    {
      if ( v6 == 1 )
        *(_BYTE *)(v4 + 9) = 1;
    }
    else if ( *(_BYTE *)(v4 + 9) )
    {
      *(_BYTE *)(v4 + 9) = 0;
    }
  }
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)v4, 0LL);
}
