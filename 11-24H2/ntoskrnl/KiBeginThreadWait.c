/*
 * XREFs of KiBeginThreadWait @ 0x1403305F0
 * Callers:
 *     KeWaitForGate @ 0x140271C4C (KeWaitForGate.c)
 *     KeRemovePriQueue @ 0x14032F920 (KeRemovePriQueue.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x1402C6540 (KiDeliverApc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall KiBeginThreadWait(__int64 BugCheckParameter1, char a2, int a3, char a4, char a5)
{
  unsigned __int64 v5; // r15
  __int64 v7; // rbp
  unsigned int v9; // edi
  char v10; // si
  unsigned int v11; // edi
  bool v12; // zf
  __int64 result; // rax
  __int64 CurrentIrql; // rcx
  ULONG_PTR v15; // rcx
  char v16; // al
  char v17; // al
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // r9
  _QWORD *v21; // [rsp+70h] [rbp+8h] BYREF
  int v22; // [rsp+80h] [rbp+18h]

  v22 = a3;
  v5 = *(unsigned __int8 *)(BugCheckParameter1 + 390);
  v7 = a2;
  v21 = 0LL;
  while ( 1 )
  {
    *(_DWORD *)(BugCheckParameter1 + 116) &= ~0x10u;
    *(_BYTE *)(BugCheckParameter1 + 112) = 0;
    *(_BYTE *)(BugCheckParameter1 + 391) = v7;
    if ( a4 )
      *(_DWORD *)(BugCheckParameter1 + 116) |= 0x10u;
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v9);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    if ( !*(_BYTE *)(BugCheckParameter1 + 193) || *(_WORD *)(BugCheckParameter1 + 486) || (_BYTE)v5 )
      break;
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 1LL);
    __writecr8(1uLL);
    KiDeliverApc(0, 0LL, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    *(_BYTE *)(BugCheckParameter1 + 390) = 0;
  }
  v10 = v22;
  if ( a4 )
  {
    if ( *(_BYTE *)(v7 + BugCheckParameter1 + 114) )
    {
      *(_BYTE *)(v7 + BugCheckParameter1 + 114) = 0;
      v11 = 257;
    }
    else if ( !(_BYTE)v7 || *(_QWORD *)(BugCheckParameter1 + 168) == BugCheckParameter1 + 168 )
    {
      if ( *(_BYTE *)(BugCheckParameter1 + 114) )
      {
        *(_BYTE *)(BugCheckParameter1 + 114) = 0;
        v11 = 257;
      }
      else
      {
        v11 = 0;
      }
    }
    else
    {
      *(_BYTE *)(BugCheckParameter1 + 194) |= 2u;
      v11 = 192;
    }
    if ( v11 )
      goto LABEL_15;
LABEL_23:
    *(_BYTE *)(BugCheckParameter1 + 388) = 5;
    *(_BYTE *)(BugCheckParameter1 + 643) = v10;
    *(_DWORD *)(BugCheckParameter1 + 436) = MEMORY[0xFFFFF78000000320];
    result = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
    return result;
  }
  if ( (*(_BYTE *)(BugCheckParameter1 + 194) & 2) == 0 || !(_BYTE)v7 )
    goto LABEL_23;
  v11 = 192;
LABEL_15:
  if ( (a5 & 2) != 0 )
  {
    v15 = *(char *)(BugCheckParameter1 + 795);
    v16 = *(_BYTE *)(v15 + BugCheckParameter1 + 824);
    if ( !v16 )
      KeBugCheckEx(0x157u, BugCheckParameter1, v15, 2uLL, 0LL);
    v17 = v16 - 1;
    *(_BYTE *)(v15 + BugCheckParameter1 + 824) = v17;
    if ( !v17 )
    {
      v18 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v15);
      *(_DWORD *)(BugCheckParameter1 + 856) = v18;
      if ( v18 < 1 << v15 && *(char *)(BugCheckParameter1 + 195) <= 31 )
      {
        v19 = KiComputeThreadPriority(BugCheckParameter1, 0, 0);
        if ( (int)v19 < *(char *)(BugCheckParameter1 + 195) )
          KiSetPriorityThread((_KTHREAD *)BugCheckParameter1, (__int64)&v21, v19, v20);
      }
    }
    *(_BYTE *)(BugCheckParameter1 + 795) = 32;
  }
  v12 = (a5 & 1) == 0;
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  if ( v12 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v5);
    __writecr8(v5);
    return v11;
  }
  else
  {
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v21, v5);
    return v11;
  }
}
