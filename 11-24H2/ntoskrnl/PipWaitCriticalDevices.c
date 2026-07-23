/*
 * XREFs of PipWaitCriticalDevices @ 0x140C2459C
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 * Callees:
 *     PnpBootDeviceWait @ 0x1405A0CA8 (PnpBootDeviceWait.c)
 */

__int64 __fastcall PipWaitCriticalDevices(__int64 a1)
{
  int v1; // edx
  __int64 v3; // r9
  _QWORD *v4; // rcx
  _QWORD *v5; // rdi

  v1 = 0;
  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 336);
    if ( !v3 || (v1 = PnpBootDeviceWait(a1, 3, (__int64)PipCriticalDeviceWaitCallback, v3), v1 >= 0) )
    {
      v4 = (_QWORD *)(*(_QWORD *)(a1 + 240) + 312LL);
      v5 = (_QWORD *)*v4;
      if ( (_QWORD *)*v4 != v4 )
      {
        do
        {
          if ( (*((_DWORD *)v5 + 6) & 0x80u) != 0 )
          {
            v1 = PnpBootDeviceWait(a1, 4, (__int64)PipCriticalDeviceWaitCallback, v5[11]);
            if ( v1 < 0 )
              break;
          }
          v5 = (_QWORD *)*v5;
        }
        while ( v5 != (_QWORD *)(*(_QWORD *)(a1 + 240) + 312LL) );
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v1;
}
