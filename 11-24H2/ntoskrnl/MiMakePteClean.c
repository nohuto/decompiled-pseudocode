/*
 * XREFs of MiMakePteClean @ 0x1404326A0
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x1404F32E4 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1404F3710 (NtGetWriteWatch.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x14020CBCC (MiRewritePteWithLockBit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageAndSetDirty @ 0x14021D080 (MiLockPageAndSetDirty.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403A4A2C (MiInsertLargeTbFlushEntry.c)
 *     MiCompressTbFlushList @ 0x140432A2C (MiCompressTbFlushList.c)
 *     qsort @ 0x1404FED20 (qsort.c)
 */

void __fastcall MiMakePteClean(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  ULONG_PTR v4; // r15
  int v6; // ebx
  unsigned __int64 v7; // rsi
  int v8; // ebp
  ULONG_PTR v9; // rbx
  __int64 v10; // rbx
  int i; // r10d
  __int64 v12; // r8
  __int64 v13; // r11
  __int64 v14; // rax
  unsigned __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // r8d
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rdx

  v4 = *(_QWORD *)a2 & 0xFFFFFFFFFFFFFFBDuLL;
  v6 = 0;
  v7 = (__int64)(a2 << 25) >> 16;
  if ( v7 < 0xFFFFF68000000000uLL )
    goto LABEL_2;
  do
  {
    if ( v7 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
    ++v6;
    v7 = (__int64)(v7 << 25) >> 16;
  }
  while ( v7 >= 0xFFFFF68000000000uLL );
  if ( v6 )
  {
    MiRewritePteWithLockBit(
      (__int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
      0,
      (volatile __int64 *)a2,
      v4);
    MiInsertLargeTbFlushEntry(a3, v6, a2);
  }
  else
  {
LABEL_2:
    v8 = 0;
    v9 = v4 & 0x80FFFFFFFFFFFFFFuLL | MI_READ_PTE_LOCK_FREE(a2) & 0x7F00000000000000LL;
    if ( MiPteInShadowRange(a2) )
      v8 = MiSanitizeShadowPxe();
    if ( _bittest64(&MiFlags, 0x24u) && (v9 & 0x20) == 0 && a2 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(a2, v9, 128);
    *(_QWORD *)a2 = v9;
    if ( v8 )
      MiWritePteShadow();
    v10 = 1LL;
LABEL_8:
    for ( i = 0; ; i = 1 )
    {
      v12 = *(unsigned int *)(a3 + 28);
      if ( (_DWORD)v12 && (*(_DWORD *)(a3 + 16) & 2) == 0 )
      {
        v13 = (unsigned int)(v12 - 1);
        v14 = *(_QWORD *)(a3 + 8 * v13 + 40);
        if ( (v14 & 0xC00) == 0 )
        {
          v15 = *(_QWORD *)(a3 + 8 * v13 + 40) & 0x3FFLL;
          if ( (*(_QWORD *)(a3 + 8 * v13 + 40) & 0xFFFFFFFFFFFFF000uLL) + ((v15 + 1) << 12) == v7
            && v15 + v10 > v15
            && v15 + v10 <= 0x3FF )
          {
            goto LABEL_25;
          }
        }
        v13 = (unsigned int)(v12 - 1);
        v16 = *(_QWORD *)(a3 + 8 * v13 + 40);
        if ( (v16 & 0xC00) == 0 && (v16 & 0xFFFFFFFFFFFFF000uLL) == (v10 << 12) + v7 )
        {
          v20 = (*(_QWORD *)(a3 + 8 * v13 + 40) & 0x3FFLL) + v10;
          if ( v20 <= 0x3FF && v20 > (*(_QWORD *)(a3 + 8 * v13 + 40) & 0x3FFuLL) )
          {
            v14 = v16 - (v10 << 12);
LABEL_25:
            *(_QWORD *)(a3 + 32) += v10;
            *(_QWORD *)(a3 + 8 * v13 + 40) = (v14 + v10) ^ (v14 ^ (v14 + v10)) & 0xFFFFFFFFFFFFFC00uLL;
            goto LABEL_26;
          }
        }
      }
      if ( (_DWORD)v12 != *(_DWORD *)(a3 + 12) )
        break;
      if ( i )
      {
        if ( !*(_BYTE *)(a3 + 25) )
          *(_BYTE *)(a3 + 25) = 1;
        goto LABEL_26;
      }
      if ( *(_BYTE *)(a3 + 25) )
        goto LABEL_26;
      qsort((void *)(a3 + 40), *(unsigned int *)(a3 + 28), 8uLL, MiTbFlushSort);
      MiCompressTbFlushList(a3);
    }
    while ( v10 )
    {
      v17 = 1024LL;
      if ( (unsigned __int64)(v10 - 1) <= 0x3FF )
        v17 = v10;
      *(_QWORD *)(a3 + 8 * v12 + 40) = v7 & 0xFFFFFFFFFFFFF000uLL | (v17 - 1) & 0x3FF;
      v18 = *(_DWORD *)(a3 + 28);
      *(_QWORD *)(a3 + 32) += v17;
      v12 = (unsigned int)(v18 + 1);
      v7 += v17 << 12;
      *(_DWORD *)(a3 + 28) = v12;
      v10 -= v17;
      if ( v10 && (_DWORD)v12 == *(_DWORD *)(a3 + 12) )
        goto LABEL_8;
    }
  }
LABEL_26:
  v19 = (v4 >> 12) & 0xFFFFFFFFFFLL;
  if ( v19 <= qword_140E2DBE0 && ((*(_QWORD *)(48 * v19 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    MiLockPageAndSetDirty(48 * v19 - 0x220000000000LL, 1LL, v12);
}
