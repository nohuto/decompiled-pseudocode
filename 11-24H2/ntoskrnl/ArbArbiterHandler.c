/*
 * XREFs of ArbArbiterHandler @ 0x140AB47A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ArbArbiterHandler(__int64 a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // edi
  int v11; // eax
  struct _KEVENT *v12; // rcx
  struct _KEVENT *v13; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
  if ( a2 > 5 )
  {
    if ( a2 != 6 && a2 != 7 )
    {
      if ( a2 == 8 )
        goto LABEL_7;
      if ( a2 != 9 )
        goto LABEL_15;
    }
    goto LABEL_16;
  }
  if ( a2 == 5 )
  {
LABEL_7:
    v10 = -1073741822;
    goto LABEL_22;
  }
  if ( (unsigned int)a2 < 2 )
  {
LABEL_16:
    v11 = guard_dispatch_icall_no_overrides(a1, a3, v8, v9);
    goto LABEL_17;
  }
  if ( a2 != 2 && a2 != 3 )
  {
    if ( a2 == 4 )
      goto LABEL_7;
LABEL_15:
    v10 = -1073741811;
    goto LABEL_22;
  }
  v11 = guard_dispatch_icall_no_overrides(a1, v7, v8, v9);
LABEL_17:
  v10 = v11;
  if ( v11 >= 0 )
  {
    if ( (unsigned int)a2 <= 1 )
    {
      v13 = *(struct _KEVENT **)(a1 + 304);
      *(_BYTE *)(a1 + 296) = 1;
      KeResetEvent(v13);
    }
    else if ( (unsigned int)(a2 - 2) <= 1 )
    {
      v12 = *(struct _KEVENT **)(a1 + 304);
      *(_BYTE *)(a1 + 296) = 0;
      KeSetEvent(v12, 0, 0);
    }
  }
LABEL_22:
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  KeLeaveCriticalRegion();
  return v10;
}
