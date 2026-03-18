/*
 * XREFs of MiDereferenceHugeContext @ 0x1404CFC80
 * Callers:
 *     MiUnlockMultipleZeroChunks @ 0x14020FC10 (MiUnlockMultipleZeroChunks.c)
 *     MiGetBackgroundHugePageToZero @ 0x14041C6E0 (MiGetBackgroundHugePageToZero.c)
 *     MiGetUltraHugeAlreadyActive @ 0x14041C8B0 (MiGetUltraHugeAlreadyActive.c)
 *     MiDereferenceAnyActiveHugeContext @ 0x140440A30 (MiDereferenceAnyActiveHugeContext.c)
 * Callees:
 *     MiLockHugePfnInternal @ 0x14020DE6C (MiLockHugePfnInternal.c)
 *     MiRewritePteWithLockBit @ 0x1402110AC (MiRewritePteWithLockBit.c)
 *     MiDeleteUltraThreadContext @ 0x140211630 (MiDeleteUltraThreadContext.c)
 *     MiSafeLockPageAtDpc @ 0x140220D38 (MiSafeLockPageAtDpc.c)
 *     MiStopPageAccessor @ 0x140347A84 (MiStopPageAccessor.c)
 *     MiFreeUltraMapping @ 0x1404F71F4 (MiFreeUltraMapping.c)
 *     MiRemoveFaultNode @ 0x1404F83B4 (MiRemoveFaultNode.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceHugeContext(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 *v8; // rcx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rsi
  __int64 v11; // rdi
  volatile __int64 *v12; // rsi

  v3 = *(_QWORD *)(a1 + 584);
  if ( (*(_DWORD *)(v3 + 572))-- == 1 )
  {
    v6 = v3 + 328;
    v7 = *(_QWORD *)(v3 + 328);
    if ( v7 )
    {
      if ( *(_QWORD *)(v7 + 8) != v6 || (v8 = *(__int64 **)(v3 + 336), *v8 != v6) )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      v9 = *(_QWORD *)(v3 + 24);
      if ( (v9 & 8) != 0 )
      {
        v10 = (v9 >> 12) & 0x3FFFFFFFFFLL;
        v11 = 0LL;
        if ( *(_BYTE *)(v3 + 324) )
        {
          v11 = qword_140E2FD80 + 8 * (v10 & 0x3FFFFF);
          MiLockHugePfnInternal(v11);
        }
        else if ( MiSafeLockPageAtDpc(v10, v7, a3) != 17 )
        {
          v11 = 48 * v10 - 0x220000000000LL;
        }
        v12 = (volatile __int64 *)(((*(_QWORD *)(v3 + 560) >> 27) & 0x1FFFF8LL) - 0x90482600000LL);
        if ( (*(_QWORD *)(v3 + 24) & 1) == 0 )
        {
          MiStopPageAccessor(v11, 0LL, 0LL);
          if ( v12 )
            MiRewritePteWithLockBit(0LL, 0, v12, CLFS_LSN_NULL_EXT);
        }
        if ( *(_BYTE *)(v3 + 324) )
        {
          _InterlockedAnd(
            (volatile signed __int32 *)(qword_140E2FD88 + 4 * ((((v11 - qword_140E2FD80) >> 3) & 0x3FFFFFuLL) >> 5)),
            ~(1 << (((v11 - qword_140E2FD80) >> 3) & 0x1F)));
        }
        else if ( v11 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      MiFreeUltraMapping(*(_QWORD *)(v3 + 560));
      MiDeleteUltraThreadContext(v3 + 432);
    }
    MiRemoveFaultNode(v3, 1LL);
    ExFreePoolWithTag((PVOID)v3, 0);
  }
  *(_QWORD *)(a1 + 584) = 0LL;
}
