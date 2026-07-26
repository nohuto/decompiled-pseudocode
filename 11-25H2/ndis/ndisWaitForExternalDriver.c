/*
 * XREFs of ndisWaitForExternalDriver @ 0x14015E610
 * Callers:
 *     ?WaitSynchronously@NdisWatchdogState@@QEAAXPEAU_KEVENT@@@Z @ 0x14015E570 (-WaitSynchronously@NdisWatchdogState@@QEAAXPEAU_KEVENT@@@Z.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ndisFindSomeoneToBlame @ 0x14014CE6C (ndisFindSomeoneToBlame.c)
 *     ndisWaitForAllProcessorsIdle @ 0x14015E280 (ndisWaitForAllProcessorsIdle.c)
 */

char __fastcall ndisWaitForExternalDriver(PVOID Object, unsigned int a2, unsigned int a3, unsigned __int64 a4, int a5)
{
  unsigned int v7; // ebx
  NTSTATUS v9; // eax
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-18h] BYREF

  v7 = a2;
  if ( a2 > 0x1388 )
  {
    Timeout.QuadPart = -50000000LL;
    v9 = KeWaitForSingleObject(Object, Executive, 0, 0, &Timeout);
    if ( !v9 )
      return 1;
    if ( v9 != 258 )
      ndisBugCheckEx(0x24uLL, 1uLL, v9, 0LL);
    v7 -= 5000;
  }
  ndisWaitForAllProcessorsIdle();
  Timeout.QuadPart = -10000LL * v7;
  v11 = KeWaitForSingleObject(Object, Executive, 0, 0, &Timeout);
  if ( !v11 )
    return 1;
  if ( v11 != 258 )
    ndisBugCheckEx(0x24uLL, 1uLL, v11, 0LL);
  ndisWaitForAllProcessorsIdle();
  Timeout.QuadPart = 0LL;
  v12 = KeWaitForSingleObject(Object, Executive, 0, 0, &Timeout);
  if ( !v12 )
    return 1;
  if ( v12 != 258 )
    ndisBugCheckEx(0x24uLL, 1uLL, v12, 0LL);
  ndisFindSomeoneToBlame(a3, a4, a5, KeGetCurrentThread());
  return 0;
}
