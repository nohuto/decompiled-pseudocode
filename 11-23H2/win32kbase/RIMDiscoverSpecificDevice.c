/*
 * XREFs of RIMDiscoverSpecificDevice @ 0x1C01A35D0
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0071A40 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RimInputTypeToDeviceType @ 0x1C0075110 (RimInputTypeToDeviceType.c)
 *     RIMCreateDev @ 0x1C00C874C (RIMCreateDev.c)
 *     RIMFreeDev @ 0x1C0170F30 (RIMFreeDev.c)
 *     RIMDoOnPnpNotification @ 0x1C0199BB8 (RIMDoOnPnpNotification.c)
 */

__int64 __fastcall RIMDiscoverSpecificDevice(_DWORD *Object, const UNICODE_STRING *a2)
{
  unsigned int v4; // eax
  int v5; // ebx
  __int64 v6; // r8
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  v4 = RimInputTypeToDeviceType(Object[21]);
  v5 = RIMCreateDev(Object, v4, a2, 1, 0, 0LL, (struct _UNICODE_STRING **)&v8);
  if ( v5 >= 0 )
  {
    *(_DWORD *)(v8 + 184) |= 1u;
    v5 = RIMDoOnPnpNotification((__int64)Object, v8, v6);
    if ( v5 < 0 )
      RIMFreeDev((__int64)Object, v8);
  }
  return (unsigned int)v5;
}
