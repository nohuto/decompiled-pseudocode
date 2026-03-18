/*
 * XREFs of PipWaitCriticalDevices @ 0x140C113FC
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C0D35C (IopInitializeBootDrivers.c)
 * Callees:
 *     PnpBootDeviceWait @ 0x1405A05F8 (PnpBootDeviceWait.c)
 */

__int64 __fastcall PipWaitCriticalDevices(__int64 a1)
{
  int v1; // edx
  _QWORD *v3; // rcx
  _QWORD *v4; // rdi

  v1 = 0;
  if ( a1 )
  {
    if ( !*(_QWORD *)(a1 + 336) || (v1 = PnpBootDeviceWait(a1, 3), v1 >= 0) )
    {
      v3 = (_QWORD *)(*(_QWORD *)(a1 + 240) + 312LL);
      v4 = (_QWORD *)*v3;
      if ( (_QWORD *)*v3 != v3 )
      {
        do
        {
          if ( (*((_DWORD *)v4 + 6) & 0x80u) != 0 )
          {
            v1 = PnpBootDeviceWait(a1, 4);
            if ( v1 < 0 )
              break;
          }
          v4 = (_QWORD *)*v4;
        }
        while ( v4 != (_QWORD *)(*(_QWORD *)(a1 + 240) + 312LL) );
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v1;
}
