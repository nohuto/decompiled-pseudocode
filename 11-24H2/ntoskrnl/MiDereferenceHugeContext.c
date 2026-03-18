/*
 * XREFs of MiDereferenceHugeContext @ 0x1404CFD8C
 * Callers:
 *     MiGetBackgroundHugePageToZero @ 0x140209AF0 (MiGetBackgroundHugePageToZero.c)
 *     MiUnlockMultipleZeroChunks @ 0x14020AF10 (MiUnlockMultipleZeroChunks.c)
 *     MiDereferenceAnyActiveHugeContext @ 0x1403C7EE0 (MiDereferenceAnyActiveHugeContext.c)
 *     MiGetUltraHugeAlreadyActive @ 0x1404879F0 (MiGetUltraHugeAlreadyActive.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x14020C870 (MiDeleteUltraThreadContext.c)
 *     MiRewritePteWithLockBit @ 0x14020CBCC (MiRewritePteWithLockBit.c)
 *     MiStopPageAccessor @ 0x14026ADB0 (MiStopPageAccessor.c)
 *     MiSafeLockPageAtDpc @ 0x1403072A0 (MiSafeLockPageAtDpc.c)
 *     MiLockHugePfnInternal @ 0x1403F9BD8 (MiLockHugePfnInternal.c)
 *     MiFreeUltraMapping @ 0x1404F99F4 (MiFreeUltraMapping.c)
 *     MiRemoveFaultNode @ 0x1404FA894 (MiRemoveFaultNode.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceHugeContext(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rsi
  ULONG_PTR v8; // rsi
  __int64 v9; // rdi
  volatile __int64 *v10; // rsi

  v1 = *(_QWORD *)(a1 + 584);
  if ( (*(_DWORD *)(v1 + 572))-- == 1 )
  {
    v4 = v1 + 328;
    v5 = *(_QWORD *)(v1 + 328);
    if ( v5 )
    {
      if ( *(_QWORD *)(v5 + 8) != v4 || (v6 = *(_QWORD **)(v1 + 336), *v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      v7 = *(_QWORD *)(v1 + 24);
      if ( (v7 & 8) != 0 )
      {
        v8 = (v7 >> 12) & 0x3FFFFFFFFFLL;
        v9 = 0LL;
        if ( *(_BYTE *)(v1 + 324) )
        {
          v9 = qword_140E2FFC0 + 8 * (v8 & 0x3FFFFF);
          MiLockHugePfnInternal(v9);
        }
        else if ( MiSafeLockPageAtDpc(v8) != 17 )
        {
          v9 = 48 * v8 - 0x220000000000LL;
        }
        v10 = (volatile __int64 *)(((*(_QWORD *)(v1 + 560) >> 27) & 0x1FFFF8LL) - 0x90482600000LL);
        if ( (*(_QWORD *)(v1 + 24) & 1) == 0 )
        {
          MiStopPageAccessor((__int64 *)v9, 0LL, 0LL);
          if ( v10 )
            MiRewritePteWithLockBit(0LL, 0, v10, CLFS_LSN_NULL_EXT);
        }
        if ( *(_BYTE *)(v1 + 324) )
        {
          _InterlockedAnd(
            (volatile signed __int32 *)(qword_140E2FFC8 + 4 * ((((v9 - qword_140E2FFC0) >> 3) & 0x3FFFFFuLL) >> 5)),
            ~(1 << (((v9 - qword_140E2FFC0) >> 3) & 0x1F)));
        }
        else if ( v9 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      MiFreeUltraMapping(*(_QWORD *)(v1 + 560));
      MiDeleteUltraThreadContext(v1 + 432);
    }
    MiRemoveFaultNode(v1, 1LL);
    ExFreePoolWithTag((PVOID)v1, 0);
  }
  *(_QWORD *)(a1 + 584) = 0LL;
}
