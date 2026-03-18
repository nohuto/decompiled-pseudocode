/*
 * XREFs of ??$GreAcquireSemaphore@$0BF@PEAU_SPRITESTATE@@@@YAXPEAU_SPRITESTATE@@@Z @ 0x14032873C
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14004F4C0 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401D399C (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 */

struct _GRETHREAD *__fastcall GreAcquireSemaphore<21,_SPRITESTATE *>(__int64 a1)
{
  HSEMAPHORE v1; // rbx
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *result; // rax
  unsigned __int64 i; // rcx
  struct _GRETHREAD *v5; // rbx
  __int64 v6; // r8
  int v7; // edx
  int v8; // eax

  v1 = *(HSEMAPHORE *)(a1 + 136);
  GlobalLockName = GrepGetGlobalLockName(21);
  EtwTraceGreLockAcquireSemaphoreExclusive(GlobalLockName, v1, 0LL);
  GreAcquireSemaphoreInternal(v1);
  result = GreGetCurrentThreadCrossSessionCheck();
  v5 = result;
  if ( result )
  {
    v6 = *(_QWORD *)result;
    if ( (*(_QWORD *)result & 0xFFFFFFFFFFE00000uLL) != 0 && (*(_QWORD *)result & 0x200000LL) == 0 )
    {
      v7 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v8 = i;
        if ( !_bittest64(&v6, i) )
          v8 = v7;
        v7 = v8;
      }
      if ( v8 > 21 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    LOBYTE(i) = *((_BYTE *)v5 + 29);
    result = (struct _GRETHREAD *)(unsigned int)(i + 1);
    *((_BYTE *)v5 + 29) = i + 1;
    if ( !(_BYTE)i )
      *(_QWORD *)v5 |= 0x200000uLL;
  }
  return result;
}
