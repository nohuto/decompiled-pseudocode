/*
 * XREFs of MiDereferenceHugeContext @ 0x1404C8E3C
 * Callers:
 *     MiGetBackgroundHugePageToZero @ 0x1403310D0 (MiGetBackgroundHugePageToZero.c)
 *     MiUnlockMultipleZeroChunks @ 0x140332CF0 (MiUnlockMultipleZeroChunks.c)
 *     MiDereferenceAnyActiveHugeContext @ 0x140413B20 (MiDereferenceAnyActiveHugeContext.c)
 *     MiGetUltraHugeAlreadyActive @ 0x140482A60 (MiGetUltraHugeAlreadyActive.c)
 * Callees:
 *     MiStopPageAccessor @ 0x140220340 (MiStopPageAccessor.c)
 *     MiSafeLockPageAtDpc @ 0x140311180 (MiSafeLockPageAtDpc.c)
 *     MiDeleteUltraThreadContext @ 0x140335BD0 (MiDeleteUltraThreadContext.c)
 *     MiRewritePteWithLockBit @ 0x140335F2C (MiRewritePteWithLockBit.c)
 *     MiLockHugePfnInternal @ 0x1403EFAE4 (MiLockHugePfnInternal.c)
 *     MiFreeUltraMapping @ 0x1404F72D4 (MiFreeUltraMapping.c)
 *     MiRemoveFaultNode @ 0x1404F8174 (MiRemoveFaultNode.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 v10; // r9
  volatile __int64 *v11; // rsi

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
          v9 = qword_140E30100 + 8 * (v8 & 0x3FFFFF);
          MiLockHugePfnInternal(v9);
        }
        else if ( MiSafeLockPageAtDpc(v8) != 17 )
        {
          v9 = 48 * v8 - 0x220000000000LL;
        }
        v11 = (volatile __int64 *)(((*(_QWORD *)(v1 + 560) >> 27) & 0x1FFFF8LL) - 0x90482600000LL);
        if ( (*(_QWORD *)(v1 + 24) & 1) == 0 )
        {
          MiStopPageAccessor((__int64 *)v9, 0LL, 0LL, v10);
          if ( v11 )
            MiRewritePteWithLockBit(0LL, 0, v11, CLFS_LSN_NULL_EXT);
        }
        if ( *(_BYTE *)(v1 + 324) )
        {
          _InterlockedAnd(
            (volatile signed __int32 *)(qword_140E30108 + 4 * ((((v9 - qword_140E30100) >> 3) & 0x3FFFFFuLL) >> 5)),
            ~(1 << (((v9 - qword_140E30100) >> 3) & 0x1F)));
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
