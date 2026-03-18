/*
 * XREFs of ??1SEMOBJEX@@QEAA@XZ @ 0x1C0134E44
 * Callers:
 *     GreDrvDisconnect @ 0x1C0134D74 (GreDrvDisconnect.c)
 *     GreDrvReconnect @ 0x1C02DC394 (GreDrvReconnect.c)
 *     bDrvDisconnect @ 0x1C02DC760 (bDrvDisconnect.c)
 *     bDrvDisplayIOCtl @ 0x1C02DC918 (bDrvDisplayIOCtl.c)
 *     bDrvReconnect @ 0x1C02DCAC4 (bDrvReconnect.c)
 *     bDrvShadowConnect @ 0x1C02DCCC4 (bDrvShadowConnect.c)
 *     bDrvShadowDisconnect @ 0x1C02DCE9C (bDrvShadowDisconnect.c)
 *     vDrvInvalidateRect @ 0x1C02DD074 (vDrvInvalidateRect.c)
 * Callees:
 *     <none>
 */

void __fastcall SEMOBJEX::~SEMOBJEX(SEMOBJEX *this)
{
  if ( *((_QWORD *)this + 7) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem8");
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 7));
  }
  if ( *((_QWORD *)this + 6) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem7");
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 6));
  }
  if ( *((_QWORD *)this + 5) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem6");
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 5));
  }
  if ( *((_QWORD *)this + 4) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem5");
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 4));
  }
  if ( *((_QWORD *)this + 3) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem4");
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 3));
  }
  if ( *((_QWORD *)this + 2) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem3");
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
  }
  if ( *((_QWORD *)this + 1) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem2");
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem1");
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
  }
}
