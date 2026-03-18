/*
 * XREFs of KiOutSwapKernelStacks @ 0x1402D2D70
 * Callers:
 *     KeSwapProcessOrStack @ 0x1405C0540 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiDecrementProcessStackCount @ 0x140228DE0 (KiDecrementProcessStackCount.c)
 *     KiWaitForContextSwap @ 0x140228EEC (KiWaitForContextSwap.c)
 *     MmOutPageKernelStack @ 0x1402D2FE4 (MmOutPageKernelStack.c)
 *     KeSwappablePageDereference @ 0x1402D30F8 (KeSwappablePageDereference.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

ULONG __fastcall KiOutSwapKernelStacks(__int64 a1)
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
  ULONG result; // eax
  _QWORD *v13; // r14
  __int64 *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  _QWORD *v20; // r8
  _OWORD v21[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v22; // [rsp+40h] [rbp-18h]

  memset(v21, 0, sizeof(v21));
  v1 = 0LL;
  v2 = MEMORY[0xFFFFF78000000320] - KiStackProtectTime;
  v22 = 0LL;
  v3 = KiProcessorBlock[KiLastProcessor];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
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
      v20 = (_QWORD *)v7[1];
      if ( (_QWORD *)v6[1] != v7 || (_QWORD *)*v20 != v7 )
        goto LABEL_14;
      *v20 = v6;
      v6[1] = v20;
    }
    else
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v8 + 120), 0x11u);
      v9 = v8;
      if ( _interlockedbittestandset((volatile signed __int32 *)(v8 + 120), 0x14u) )
        v9 = v8 | 1;
      *((_QWORD *)v21 + v1) = v9;
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
  result = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( KiLastProcessor == result )
    KiLastProcessor = 0;
  if ( (_DWORD)v1 )
  {
    v13 = (_QWORD *)v21 + v1;
    do
    {
      --v13;
      LODWORD(v1) = v1 - 1;
      v14 = (__int64 *)(*v13 & 0xFFFFFFFFFFFFFFFEuLL);
      v15 = *v13 & 1LL;
      if ( !v15 )
        v14 = (__int64 *)*v13;
      KiWaitForContextSwap((__int64)v14);
      if ( (unsigned int)v15 != 1 )
        KiDecrementProcessStackCount(v14[23]);
      result = MmOutPageKernelStack(v14);
      v19 = v14[141];
      v14[100] = 0LL;
      if ( v19 )
        result = KeSwappablePageDereference(v19, v16, v17, v18, *(_QWORD *)&v21[0]);
    }
    while ( (_DWORD)v1 );
  }
  return result;
}
