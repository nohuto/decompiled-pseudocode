/*
 * XREFs of ArbArbiterHandler @ 0x140AAF7B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ArbArbiterHandler(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // edi
  struct _KEVENT *v6; // rcx
  struct _KEVENT *v7; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
  if ( a2 > 5 )
  {
    if ( a2 != 6 && a2 != 7 )
    {
      if ( a2 == 8 )
        goto LABEL_5;
      if ( a2 != 9 )
        goto LABEL_11;
    }
  }
  else
  {
    if ( a2 == 5 )
    {
LABEL_5:
      v5 = -1073741822;
      goto LABEL_17;
    }
    if ( (unsigned int)a2 >= 4 )
    {
      if ( a2 == 4 )
        goto LABEL_5;
LABEL_11:
      v5 = -1073741811;
      goto LABEL_17;
    }
  }
  v5 = guard_dispatch_icall_no_overrides(a1);
  if ( v5 >= 0 )
  {
    if ( (unsigned int)a2 <= 1 )
    {
      v7 = *(struct _KEVENT **)(a1 + 304);
      *(_BYTE *)(a1 + 296) = 1;
      KeResetEvent(v7);
    }
    else if ( (unsigned int)(a2 - 2) <= 1 )
    {
      v6 = *(struct _KEVENT **)(a1 + 304);
      *(_BYTE *)(a1 + 296) = 0;
      KeSetEvent(v6, 0, 0);
    }
  }
LABEL_17:
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
