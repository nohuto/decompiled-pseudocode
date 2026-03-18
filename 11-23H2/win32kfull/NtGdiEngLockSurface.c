/*
 * XREFs of NtGdiEngLockSurface @ 0x1C02C9C10
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C013D7EC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?LockSurface@UMPDOBJ@@QEAAPEAU_SURFOBJ@@PEAUHSURF__@@@Z @ 0x1C0298938 (-LockSurface@UMPDOBJ@@QEAAPEAU_SURFOBJ@@PEAUHSURF__@@@Z.c)
 */

struct _SURFOBJ *__fastcall NtGdiEngLockSurface(HSURF a1)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct _SURFOBJ *result; // rax
  struct DHPDEV__ *v4; // rcx
  struct _SURFOBJ *v5; // rbx

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = (struct _SURFOBJ *)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v5 = result;
  if ( result )
  {
    ++result[5].sizlBitmap.cy;
    result = UMPDOBJ::LockSurface(v4, a1);
    --v5[5].sizlBitmap.cy;
  }
  return result;
}
