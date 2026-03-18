/*
 * XREFs of KiOutSwapKernelStacks @ 0x140268FB8
 * Callers:
 *     KeSwapProcessOrStack @ 0x1405C4890 (KeSwapProcessOrStack.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     KeSwappablePageDereference @ 0x140268ED0 (KeSwappablePageDereference.c)
 *     MmOutPageKernelStack @ 0x14026962C (MmOutPageKernelStack.c)
 *     KiWaitForContextSwap @ 0x140269978 (KiWaitForContextSwap.c)
 *     KiDecrementProcessStackCount @ 0x1402699D0 (KiDecrementProcessStackCount.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall KiOutSwapKernelStacks(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // r14d
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v5; // edi
  _QWORD *v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // r8
  _QWORD *v12; // r14
  _QWORD *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rcx
  _QWORD *v16; // r8
  _OWORD v17[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+40h] [rbp-18h]

  memset(v17, 0, sizeof(v17));
  v1 = 0LL;
  v2 = MEMORY[0xFFFFF78000000320] - KiStackProtectTime;
  v18 = 0LL;
  v3 = KiProcessorBlock[KiLastProcessor];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 33744), 0LL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v5);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(v3 + 33744) );
  }
  v6 = *(_QWORD **)(v3 + 33728);
  while ( 1 )
  {
    v7 = v6;
    if ( v6 == (_QWORD *)(v3 + 33728) )
      break;
    if ( (unsigned int)v1 >= 5 )
      break;
    v8 = (__int64)(v6 - 27);
    v6 = (_QWORD *)*v6;
    if ( v2 < *(_DWORD *)(v8 + 436) )
      break;
    if ( *(char *)(v8 + 195) >= 25 )
    {
      v16 = (_QWORD *)v7[1];
      if ( (_QWORD *)v6[1] != v7 || (_QWORD *)*v16 != v7 )
        goto LABEL_14;
      *v16 = v6;
      v6[1] = v16;
    }
    else
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v8 + 120), 0x11u);
      v9 = v8;
      if ( _interlockedbittestandset((volatile signed __int32 *)(v8 + 120), 0x14u) )
        v9 = v8 | 1;
      *((_QWORD *)v17 + v1) = v9;
      v1 = (unsigned int)(v1 + 1);
      v10 = *v7;
      v11 = (_QWORD *)v7[1];
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v11 != v7 )
LABEL_14:
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
    }
    *(_QWORD *)(v8 + 712) = 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 33744), 0LL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
  }
  __writecr8(CurrentIrql);
  ++KiLastProcessor;
  if ( KiLastProcessor == KeQueryActiveProcessorCountEx(0xFFFFu) )
    KiLastProcessor = 0;
  if ( (_DWORD)v1 )
  {
    v12 = (_QWORD *)v17 + v1;
    do
    {
      --v12;
      LODWORD(v1) = v1 - 1;
      v13 = (_QWORD *)(*v12 & 0xFFFFFFFFFFFFFFFEuLL);
      v14 = *v12 & 1LL;
      if ( !v14 )
        v13 = (_QWORD *)*v12;
      KiWaitForContextSwap(v13);
      if ( (unsigned int)v14 != 1 )
        KiDecrementProcessStackCount(v13[23]);
      MmOutPageKernelStack(v13);
      v15 = v13[141];
      v13[100] = 0LL;
      if ( v15 )
        KeSwappablePageDereference(v15);
    }
    while ( (_DWORD)v1 );
  }
}
