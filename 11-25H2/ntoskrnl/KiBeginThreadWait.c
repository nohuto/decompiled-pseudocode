/*
 * XREFs of KiBeginThreadWait @ 0x1403059F0
 * Callers:
 *     KeRemovePriQueue @ 0x140305410 (KeRemovePriQueue.c)
 *     KeWaitForAlertByThreadId @ 0x140305CB0 (KeWaitForAlertByThreadId.c)
 *     KeWaitForGate @ 0x140418844 (KeWaitForGate.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x140286490 (KiDeliverApc.c)
 *     KiComputeThreadPriority @ 0x1402E7250 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall KiBeginThreadWait(ULONG_PTR BugCheckParameter1, char a2, int a3, char a4, char a5)
{
  unsigned __int64 v5; // r15
  __int64 v7; // rbp
  ULONG_PTR v8; // rbx
  unsigned int v9; // edi
  char v10; // si
  unsigned int v11; // edi
  bool v12; // zf
  __int64 result; // rax
  ULONG_PTR v14; // rcx
  char v15; // al
  char v16; // al
  unsigned int v17; // eax
  int v18; // eax
  _QWORD *v19; // [rsp+70h] [rbp+8h] BYREF
  int v20; // [rsp+80h] [rbp+18h]

  v20 = a3;
  v5 = *(unsigned __int8 *)(BugCheckParameter1 + 390);
  v7 = a2;
  v8 = BugCheckParameter1;
  v19 = 0LL;
  while ( 1 )
  {
    *(_DWORD *)(v8 + 116) &= ~0x10u;
    *(_BYTE *)(v8 + 112) = 0;
    *(_BYTE *)(v8 + 391) = v7;
    if ( a4 )
      *(_DWORD *)(v8 + 116) |= 0x10u;
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 64), 0LL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(BugCheckParameter1) )
        {
          HvlNotifyLongSpinWait(v9);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(v8 + 64) );
    }
    if ( !*(_BYTE *)(v8 + 193) || *(_WORD *)(v8 + 486) || (_BYTE)v5 )
      break;
    *(_QWORD *)(v8 + 64) = 0LL;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 1LL);
    __writecr8(1uLL);
    KiDeliverApc(0, 0LL, 0LL);
    BugCheckParameter1 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(BugCheckParameter1);
    *(_BYTE *)(v8 + 390) = 0;
  }
  v10 = v20;
  if ( a4 )
  {
    if ( *(_BYTE *)(v7 + v8 + 114) )
    {
      *(_BYTE *)(v7 + v8 + 114) = 0;
      v11 = 257;
    }
    else if ( !(_BYTE)v7 || *(_QWORD *)(v8 + 168) == v8 + 168 )
    {
      if ( *(_BYTE *)(v8 + 114) )
      {
        *(_BYTE *)(v8 + 114) = 0;
        v11 = 257;
      }
      else
      {
        v11 = 0;
      }
    }
    else
    {
      *(_BYTE *)(v8 + 194) |= 2u;
      v11 = 192;
    }
    if ( v11 )
      goto LABEL_15;
LABEL_23:
    *(_BYTE *)(v8 + 388) = 5;
    *(_BYTE *)(v8 + 643) = v10;
    *(_DWORD *)(v8 + 436) = MEMORY[0xFFFFF78000000320];
    result = 0LL;
    *(_QWORD *)(v8 + 64) = 0LL;
    return result;
  }
  if ( (*(_BYTE *)(v8 + 194) & 2) == 0 || !(_BYTE)v7 )
    goto LABEL_23;
  v11 = 192;
LABEL_15:
  if ( (a5 & 2) != 0 )
  {
    v14 = *(char *)(v8 + 795);
    v15 = *(_BYTE *)(v14 + v8 + 824);
    if ( !v15 )
      KeBugCheckEx(0x157u, v8, v14, 2uLL, 0LL);
    v16 = v15 - 1;
    *(_BYTE *)(v14 + v8 + 824) = v16;
    if ( !v16 )
    {
      v17 = *(_DWORD *)(v8 + 856) ^ (1 << v14);
      *(_DWORD *)(v8 + 856) = v17;
      if ( v17 < 1 << v14 && *(char *)(v8 + 195) <= 31 )
      {
        v18 = KiComputeThreadPriority(v8, 0);
        if ( v18 < *(char *)(v8 + 195) )
          KiSetPriorityThread((_BYTE *)v8, (__int64)&v19, v18);
      }
    }
    *(_BYTE *)(v8 + 795) = 32;
  }
  v12 = (a5 & 1) == 0;
  *(_QWORD *)(v8 + 64) = 0LL;
  if ( v12 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v5);
    __writecr8(v5);
    return v11;
  }
  else
  {
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v19, v5);
    return v11;
  }
}
