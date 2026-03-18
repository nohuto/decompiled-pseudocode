/*
 * XREFs of ??$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401A23F4
 * Callers:
 *     EngHTBlt @ 0x14000C53C (EngHTBlt.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x140126DA0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?vAcquire@HTSEMOBJ@@QEAAXXZ @ 0x1401A23C8 (-vAcquire@HTSEMOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _GRETHREAD *__fastcall GreAcquireSemaphore<10,>(__int64 *a1)
{
  __int64 v1; // rbx
  struct _GRETHREAD *result; // rax
  struct _GRETHREAD *v3; // rbx
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  int v6; // r8d
  int v7; // eax

  v1 = *a1;
  EtwTraceGreLockAcquireSemaphoreExclusive(L"HT", *a1 + 1352, 0LL);
  GreAcquireSemaphoreInternal((HSEMAPHORE)(v1 + 1352));
  result = GreGetCurrentThreadCrossSessionCheck();
  v3 = result;
  if ( result )
  {
    v4 = *(_QWORD *)result;
    if ( (*(_QWORD *)result & 0xFFFFFFFFFFFFFC00uLL) != 0 && (v4 & 0x400) == 0 )
    {
      v5 = 0LL;
      v6 = 37;
      do
      {
        v7 = v5;
        if ( !_bittest64(&v4, v5) )
          v7 = v6;
        ++v5;
        v6 = v7;
      }
      while ( v5 < 0x40 );
      if ( v7 > 10 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    LOBYTE(v4) = *((_BYTE *)v3 + 18);
    result = (struct _GRETHREAD *)(unsigned int)(v4 + 1);
    *((_BYTE *)v3 + 18) = v4 + 1;
    if ( !(_BYTE)v4 )
      *(_QWORD *)v3 |= 0x400uLL;
  }
  return result;
}
