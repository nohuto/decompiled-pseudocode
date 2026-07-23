/*
 * XREFs of _CmCreateDeviceContainerWorker @ 0x140A4CCCC
 * Callers:
 *     _CmCreateDeviceContainer @ 0x140A4CB4C (_CmCreateDeviceContainer.c)
 * Callees:
 *     _CmOpenDeviceContainerRegKey @ 0x1408B3C14 (_CmOpenDeviceContainerRegKey.c)
 *     _CmRaiseCreateEvent @ 0x1409C423C (_CmRaiseCreateEvent.c)
 */

__int64 __fastcall CmCreateDeviceContainerWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5, __int16 a6)
{
  int v8; // ebx
  _DWORD v10[6]; // [rsp+40h] [rbp-18h] BYREF

  v10[0] = 0;
  if ( a6 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v8 = CmOpenDeviceContainerRegKey(a1, a2, a3, a4, a3, 1, a4, v10);
    if ( v8 >= 0 )
    {
      if ( v10[0] == 1 )
      {
        *a5 = 1;
        CmRaiseCreateEvent(a1, a2, 5u);
      }
      else
      {
        *a5 = 0;
      }
    }
  }
  return (unsigned int)v8;
}
