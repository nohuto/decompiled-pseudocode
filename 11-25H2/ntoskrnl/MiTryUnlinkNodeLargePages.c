/*
 * XREFs of MiTryUnlinkNodeLargePages @ 0x140678C18
 * Callers:
 *     MiGetFastLargePages @ 0x140392454 (MiGetFastLargePages.c)
 * Callees:
 *     MiGetPfnChannel @ 0x140216430 (MiGetPfnChannel.c)
 *     MiGetPfnPageSizeIndex @ 0x140220DD0 (MiGetPfnPageSizeIndex.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140344B60 (MiUnlinkFreeOrZeroedPage.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiWaitForPageMoveComplete @ 0x1403931F4 (MiWaitForPageMoveComplete.c)
 *     MiSnapPageMoveInProgress @ 0x140393280 (MiSnapPageMoveInProgress.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiConvertBaseLargePage @ 0x140464978 (MiConvertBaseLargePage.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 MiTryUnlinkNodeLargePages(__int64 a1, ULONG_PTR a2, int a3, __int64 a4, ...)
{
  __int64 v5; // r14
  ULONG_PTR v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v12; // r13
  _QWORD *v13; // rbp
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int8 v17; // cl
  _QWORD *v19; // [rsp+20h] [rbp-78h]
  __int64 v20; // [rsp+28h] [rbp-70h]
  char v21; // [rsp+30h] [rbp-68h]
  __int64 v22; // [rsp+38h] [rbp-60h]
  __int64 v23; // [rsp+40h] [rbp-58h]
  __int64 v24; // [rsp+48h] [rbp-50h]
  char PfnChannel; // [rsp+A8h] [rbp+10h]
  __int64 v29; // [rsp+C0h] [rbp+28h] BYREF
  va_list va; // [rsp+C0h] [rbp+28h]
  va_list va1; // [rsp+C8h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v29 = va_arg(va1, _QWORD);
  v5 = 0LL;
  v19 = 0LL;
  v7 = a2;
  v20 = MiPageSizes[a3];
  v8 = (unsigned int)MiPageToNode(a2);
  v9 = 48 * v7 - 0x220000000000LL;
  PfnChannel = MiGetPfnChannel(v9);
  v24 = *(_QWORD *)(a1 + 16) + 57216 * v8;
  v10 = MiSnapPageMoveInProgress(v24, 1);
  if ( (_DWORD)v29 )
  {
    CurrentIrql = 17;
    v21 = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v21 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  }
  if ( a4 )
  {
    v12 = 48 * v20;
    v13 = (_QWORD *)(48 * v7 - 0x21FFFFFFFFD8LL);
    v14 = a4;
    do
    {
      v23 = v5;
      v22 = v5;
      if ( v7 > qword_140E2D9A0 || ((*v13 >> 54) & 1) == 0 )
        break;
      LODWORD(v29) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx((__int64 *)va);
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      if ( (*(_BYTE *)(v9 + 34) & 7u) <= 1
        && (unsigned int)MiGetPfnPageSizeIndex(v9) == a3
        && *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) == a1
        && (unsigned int)MiPageToNode(v7) == (_DWORD)v8
        && MiGetPfnChannel(v9) == PfnChannel )
      {
        MiUnlinkFreeOrZeroedPage(v7, 0LL, 0);
        MiConvertBaseLargePage(v9, 1);
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        *(_QWORD *)v9 = 0LL;
        if ( v5 )
          *v19 = v9;
        v7 += v20;
        --v14;
        v19 = (_QWORD *)v9;
        v13 = (_QWORD *)((char *)v13 + v12);
        v9 += v12;
        v5 = v15;
        if ( v22 )
          v5 = v23;
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v5 )
          break;
        v16 = MiWaitForPageMoveComplete(v24, 1);
        if ( ((v16 ^ v10) & 0xFFFFFFFFFFFF0000uLL) == 0 )
          break;
        v10 = v16;
        v17 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v17, 2);
      }
    }
    while ( v14 );
    CurrentIrql = v21;
  }
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v5;
}
