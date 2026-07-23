/*
 * XREFs of _CmCreateDeviceWorker @ 0x1409C4188
 * Callers:
 *     _CmCreateDevice @ 0x1409C4008 (_CmCreateDevice.c)
 * Callees:
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     _CmRaiseCreateEvent @ 0x1409C423C (_CmRaiseCreateEvent.c)
 */

__int64 __fastcall CmCreateDeviceWorker(__int64 a1, __int64 a2, int a3, _QWORD *a4, _BYTE *a5, __int16 a6)
{
  int v9; // ebx
  _DWORD v11[6]; // [rsp+40h] [rbp-18h] BYREF

  v11[0] = 0;
  if ( a6 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = CmOpenDeviceRegKey(a1, a2, 16, 0, a3, 1, (__int64)a4, v11);
    if ( v9 >= 0 )
    {
      if ( v11[0] == 1 )
      {
        *a5 = 1;
        CmRaiseCreateEvent(a1, a2, 1LL, *a4);
      }
      else
      {
        *a5 = 0;
      }
    }
  }
  return (unsigned int)v9;
}
