/*
 * XREFs of MiTryUnlinkNodeLargePages @ 0x1406855D0
 * Callers:
 *     MiGetFastLargePages @ 0x14026499C (MiGetFastLargePages.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiGetPfnChannel @ 0x1402242D0 (MiGetPfnChannel.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14024E130 (MiUnlinkFreeOrZeroedPage.c)
 *     MiSnapPageMoveInProgress @ 0x1402647F0 (MiSnapPageMoveInProgress.c)
 *     MiWaitForPageMoveComplete @ 0x14026481C (MiWaitForPageMoveComplete.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiConvertBaseLargePage @ 0x14044E488 (MiConvertBaseLargePage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 MiTryUnlinkNodeLargePages(__int64 a1, ULONG_PTR a2, int a3, __int64 a4, ...)
{
  __int64 v5; // r14
  ULONG_PTR v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 CurrentIrql; // bp
  __int64 v14; // r13
  _QWORD *v15; // rbp
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int8 v19; // cl
  _QWORD *v21; // [rsp+20h] [rbp-78h]
  __int64 v22; // [rsp+28h] [rbp-70h]
  char v23; // [rsp+30h] [rbp-68h]
  __int64 v24; // [rsp+38h] [rbp-60h]
  __int64 v25; // [rsp+40h] [rbp-58h]
  __int64 v26; // [rsp+48h] [rbp-50h]
  char PfnChannel; // [rsp+A8h] [rbp+10h]
  __int64 v31; // [rsp+C0h] [rbp+28h] BYREF
  va_list va; // [rsp+C0h] [rbp+28h]
  va_list va1; // [rsp+C8h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v31 = va_arg(va1, _QWORD);
  v5 = 0LL;
  v21 = 0LL;
  v7 = a2;
  v22 = MiPageSizes[a3];
  v8 = (unsigned int)MiPageToNode(a2);
  v9 = 48 * v7 - 0x220000000000LL;
  PfnChannel = MiGetPfnChannel(v9);
  v26 = *(_QWORD *)(a1 + 16) + 57216 * v8;
  v10 = MiSnapPageMoveInProgress(v26, 1);
  if ( (_DWORD)v31 )
  {
    CurrentIrql = 17;
    v23 = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v23 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  }
  if ( a4 )
  {
    v14 = 48 * v22;
    v15 = (_QWORD *)(48 * v7 - 0x21FFFFFFFFD8LL);
    v16 = a4;
    do
    {
      v25 = v5;
      v24 = v5;
      if ( v7 > qword_140E2DD20 || ((*v15 >> 54) & 1) == 0 )
        break;
      LODWORD(v31) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx((unsigned int *)va);
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      if ( (*(_BYTE *)(v9 + 34) & 7u) <= 1
        && (unsigned int)MiGetPfnPageSizeIndex(v9) == a3
        && *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) == a1
        && (unsigned int)MiPageToNode(v7) == (_DWORD)v8
        && MiGetPfnChannel(v9) == PfnChannel )
      {
        MiUnlinkFreeOrZeroedPage(v7, 0LL, 0);
        MiConvertBaseLargePage(v9, 1);
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        *(_QWORD *)v9 = 0LL;
        if ( v5 )
          *v21 = v9;
        v7 += v22;
        --v16;
        v21 = (_QWORD *)v9;
        v15 = (_QWORD *)((char *)v15 + v14);
        v9 += v14;
        v5 = v17;
        if ( v24 )
          v5 = v25;
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v5 )
          break;
        v18 = MiWaitForPageMoveComplete(v26, 1LL, v11, v12);
        if ( ((v18 ^ v10) & 0xFFFFFFFFFFFF0000uLL) == 0 )
          break;
        v10 = v18;
        v19 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v19, 2);
      }
    }
    while ( v16 );
    CurrentIrql = v23;
  }
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v5;
}
