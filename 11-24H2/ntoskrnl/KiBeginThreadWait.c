/*
 * XREFs of KiBeginThreadWait @ 0x140209010
 * Callers:
 *     KeRemovePriQueue @ 0x140208340 (KeRemovePriQueue.c)
 *     KeWaitForGate @ 0x140415DEC (KeWaitForGate.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x14024FA80 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x14031D9B0 (KiDeliverApc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
  __int64 v14; // r8
  ULONG_PTR v15; // rcx
  char v16; // al
  char v17; // al
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF
  int v21; // [rsp+80h] [rbp+18h]

  v21 = a3;
  v5 = *(unsigned __int8 *)(BugCheckParameter1 + 390);
  v7 = a2;
  v8 = BugCheckParameter1;
  v20 = 0LL;
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
    KiDeliverApc(0LL, 0LL, 0LL);
    BugCheckParameter1 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(BugCheckParameter1, 2LL, v14);
    *(_BYTE *)(v8 + 390) = 0;
  }
  v10 = v21;
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
    v15 = *(char *)(v8 + 795);
    v16 = *(_BYTE *)(v15 + v8 + 824);
    if ( !v16 )
      KeBugCheckEx(0x157u, v8, v15, 2uLL, 0LL);
    v17 = v16 - 1;
    *(_BYTE *)(v15 + v8 + 824) = v17;
    if ( !v17 )
    {
      v18 = *(_DWORD *)(v8 + 856) ^ (1 << v15);
      *(_DWORD *)(v8 + 856) = v18;
      if ( v18 < 1 << v15 && *(char *)(v8 + 195) <= 31 )
      {
        v19 = KiComputeThreadPriority(v8, 0LL, 0LL);
        if ( (int)v19 < *(char *)(v8 + 195) )
          KiSetPriorityThread(v8, &v20, v19);
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
    KiProcessDeferredReadyList(KeGetCurrentPrcb());
    return v11;
  }
}
