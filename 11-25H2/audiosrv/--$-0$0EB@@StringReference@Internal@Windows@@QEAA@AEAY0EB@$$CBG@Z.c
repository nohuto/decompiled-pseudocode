/*
 * XREFs of ??$?0$0EB@@StringReference@Internal@Windows@@QEAA@AEAY0EB@$$CBG@Z @ 0x18010EE0C
 * Callers:
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x180110388 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Windows::Internal::StringReference::StringReference(
        HSTRING *string,
        const unsigned __int16 (*a2)[65])
{
  if ( WindowsCreateStringReference(
         L"Windows.Security.Authorization.AppCapabilityAccess.AppCapability",
         0x40u,
         (HSTRING_HEADER *)(string + 1),
         string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return string;
}
