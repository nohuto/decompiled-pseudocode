/*
 * XREFs of ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x140014FC0
 * Callers:
 *     ?vSynchronizeDriver@@YAXK@Z @ 0x14001366C (-vSynchronizeDriver@@YAXK@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140014E94 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x140014F34 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x14001D230 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400D076C (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _GRETHREAD *__fastcall GreAcquireSemaphore<8,PDEVOBJ>(__int64 a1)
{
  HSEMAPHORE v1; // rbx
  struct _GRETHREAD *result; // rax
  struct _GRETHREAD *v3; // rbx
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  int v6; // r8d
  int v7; // eax

  v1 = *(HSEMAPHORE *)(a1 + 48);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"DevLock", v1, 0LL);
  GreAcquireSemaphoreInternal(v1);
  result = GreGetCurrentThreadCrossSessionCheck();
  v3 = result;
  if ( result )
  {
    v4 = *(_QWORD *)result;
    if ( (*(_QWORD *)result & 0xFFFFFFFFFFFFFF00uLL) != 0 && (v4 & 0x100) == 0 )
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
      if ( v7 > 8 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v5, (unsigned int)v7);
    }
    LOBYTE(v4) = *((_BYTE *)v3 + 16);
    result = (struct _GRETHREAD *)(unsigned int)(v4 + 1);
    *((_BYTE *)v3 + 16) = v4 + 1;
    if ( !(_BYTE)v4 )
      *(_QWORD *)v3 |= 0x100uLL;
  }
  return result;
}
