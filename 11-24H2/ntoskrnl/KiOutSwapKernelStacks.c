/*
 * XREFs of KiOutSwapKernelStacks @ 0x1402600D4
 * Callers:
 *     KeSwapProcessOrStack @ 0x1405C1EB0 (KeSwapProcessOrStack.c)
 * Callees:
 *     MmOutPageKernelStack @ 0x14021EDF0 (MmOutPageKernelStack.c)
 *     KiWaitForContextSwap @ 0x14021EF04 (KiWaitForContextSwap.c)
 *     KiDecrementProcessStackCount @ 0x14021EF60 (KiDecrementProcessStackCount.c)
 *     KeSwappablePageDereference @ 0x140260340 (KeSwappablePageDereference.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

ULONG __fastcall KiOutSwapKernelStacks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned int v5; // r14d
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v8; // rdx
  unsigned int v9; // edi
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // r8
  ULONG result; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // r14
  __int64 *v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rcx
  _QWORD *v24; // r8
  _OWORD v25[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v26; // [rsp+40h] [rbp-18h]

  memset(v25, 0, sizeof(v25));
  v4 = 0LL;
  v5 = MEMORY[0xFFFFF78000000320] - KiStackProtectTime;
  v26 = 0LL;
  v6 = KiProcessorBlock[KiLastProcessor];
  CurrentIrql = KeGetCurrentIrql();
  v8 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 33744), 0LL) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, v8, a3, a4) )
      {
        HvlNotifyLongSpinWait(v9);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(v6 + 33744) );
  }
  v10 = *(_QWORD **)(v6 + 33728);
  while ( 1 )
  {
    v11 = v10;
    if ( v10 == (_QWORD *)(v6 + 33728) )
      break;
    if ( (unsigned int)v4 >= 5 )
      break;
    v12 = (__int64)(v10 - 27);
    v10 = (_QWORD *)*v10;
    if ( v5 < *(_DWORD *)(v12 + 436) )
      break;
    if ( *(char *)(v12 + 195) >= 25 )
    {
      v24 = (_QWORD *)v11[1];
      if ( (_QWORD *)v10[1] != v11 || (_QWORD *)*v24 != v11 )
        goto LABEL_14;
      *v24 = v10;
      v10[1] = v24;
    }
    else
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v12 + 120), 0x11u);
      v13 = v12;
      if ( _interlockedbittestandset((volatile signed __int32 *)(v12 + 120), 0x14u) )
        v13 = v12 | 1;
      *((_QWORD *)v25 + v4) = v13;
      v4 = (unsigned int)(v4 + 1);
      v14 = *v11;
      v15 = (_QWORD *)v11[1];
      if ( *(_QWORD **)(*v11 + 8LL) != v11 || (_QWORD *)*v15 != v11 )
LABEL_14:
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
    }
    *(_QWORD *)(v12 + 712) = 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 33744), 0LL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v11) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
  }
  __writecr8(CurrentIrql);
  ++KiLastProcessor;
  result = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( KiLastProcessor == result )
    KiLastProcessor = 0;
  if ( (_DWORD)v4 )
  {
    v20 = (_QWORD *)v25 + v4;
    do
    {
      --v20;
      LODWORD(v4) = v4 - 1;
      v21 = (__int64 *)(*v20 & 0xFFFFFFFFFFFFFFFEuLL);
      v22 = *v20 & 1LL;
      if ( !v22 )
        v21 = (__int64 *)*v20;
      KiWaitForContextSwap((__int64)v21, v17, v18, v19);
      if ( (unsigned int)v22 != 1 )
        KiDecrementProcessStackCount(v21[23]);
      result = (unsigned int)MmOutPageKernelStack((__int64)v21);
      v23 = v21[141];
      v21[100] = 0LL;
      if ( v23 )
        result = KeSwappablePageDereference(v23, v17, v18, v19, *(_QWORD *)&v25[0]);
    }
    while ( (_DWORD)v4 );
  }
  return result;
}
