/*
 * XREFs of RIMDiscoverSpecificDevice @ 0x1401ED4D0
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x14014F6E0 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RimInputTypeToDeviceType @ 0x14005CF30 (RimInputTypeToDeviceType.c)
 *     RIMDoOnPnpNotification @ 0x1401127D0 (RIMDoOnPnpNotification.c)
 *     RIMCreateDev @ 0x1401D15BC (RIMCreateDev.c)
 *     RIMFreeDev @ 0x1401D1DE0 (RIMFreeDev.c)
 */

__int64 __fastcall RIMDiscoverSpecificDevice(struct RawInputManagerObject *a1, const UNICODE_STRING *a2)
{
  unsigned int v4; // eax
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  v4 = RimInputTypeToDeviceType(*((_DWORD *)a1 + 21));
  v5 = RIMCreateDev(a1, v4, a2, 1, 0, 0LL, &v9);
  if ( v5 >= 0 )
  {
    *(_DWORD *)(v9 + 168) |= 1u;
    v5 = RIMDoOnPnpNotification(a1, v9, v6, v7);
    if ( v5 < 0 )
      RIMFreeDev(a1, (struct RIMDEV *)v9);
  }
  return (unsigned int)v5;
}
