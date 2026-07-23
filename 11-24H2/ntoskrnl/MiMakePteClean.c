/*
 * XREFs of MiMakePteClean @ 0x140200C78
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x1404F0C98 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1404F10C0 (NtGetWriteWatch.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiCompressTbFlushList @ 0x140215218 (MiCompressTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x14021C25C (MiInsertLargeTbFlushEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageAndSetDirty @ 0x140249DD0 (MiLockPageAndSetDirty.c)
 *     MiRewritePteWithLockBit @ 0x140335F2C (MiRewritePteWithLockBit.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 */

__int64 __fastcall MiMakePteClean(ULONG_PTR a1, ULONG_PTR a2, __int64 a3)
{
  unsigned __int64 v4; // r15
  unsigned int v6; // ebx
  unsigned __int64 v7; // rsi
  int v8; // ebp
  ULONG_PTR v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rbx
  int i; // r10d
  __int64 v13; // r8
  __int64 v14; // r11
  __int64 v15; // rax
  unsigned __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // r8d
  __int64 result; // rax
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // rdx
  int v23; // eax
  ULONG_PTR v24; // [rsp+50h] [rbp+8h] BYREF

  v24 = a1;
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
    MiRewritePteWithLockBit(&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink, 0LL, a2, v4);
    MiInsertLargeTbFlushEntry(a3, v6, a2);
  }
  else
  {
LABEL_2:
    v8 = 0;
    v9 = v4 & 0x80FFFFFFFFFFFFFFuLL | MI_READ_PTE_LOCK_FREE(a2, 0xFFFFF6FFFFFFFFFFuLL, a3) & 0x7F00000000000000LL;
    v24 = v9;
    if ( (unsigned int)MiPteInShadowRange(a2) )
    {
      v23 = MiSanitizeShadowPxe(v10, &v24);
      v9 = v24;
      v8 = v23;
    }
    if ( _bittest64(&MiFlags, 0x24u) && (v9 & 0x20) == 0 && a2 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(a2, v9);
    *(_QWORD *)a2 = v9;
    if ( v8 )
      MiWritePteShadow(a2, v9);
    v11 = 1LL;
LABEL_8:
    for ( i = 0; ; i = 1 )
    {
      v13 = *(unsigned int *)(a3 + 28);
      if ( (_DWORD)v13 && (*(_DWORD *)(a3 + 16) & 2) == 0 )
      {
        v14 = (unsigned int)(v13 - 1);
        v15 = *(_QWORD *)(a3 + 8 * v14 + 40);
        if ( (v15 & 0xC00) == 0 )
        {
          v16 = *(_QWORD *)(a3 + 8 * v14 + 40) & 0x3FFLL;
          if ( (*(_QWORD *)(a3 + 8 * v14 + 40) & 0xFFFFFFFFFFFFF000uLL) + ((v16 + 1) << 12) == v7
            && v16 + v11 > v16
            && v16 + v11 <= 0x3FF )
          {
            goto LABEL_25;
          }
        }
        v14 = (unsigned int)(v13 - 1);
        v17 = *(_QWORD *)(a3 + 8 * v14 + 40);
        if ( (v17 & 0xC00) == 0 && (v17 & 0xFFFFFFFFFFFFF000uLL) == (v11 << 12) + v7 )
        {
          v22 = (*(_QWORD *)(a3 + 8 * v14 + 40) & 0x3FFLL) + v11;
          if ( v22 <= 0x3FF && v22 > (*(_QWORD *)(a3 + 8 * v14 + 40) & 0x3FFuLL) )
          {
            v15 = v17 - (v11 << 12);
LABEL_25:
            *(_QWORD *)(a3 + 32) += v11;
            *(_QWORD *)(a3 + 8 * v14 + 40) = (v15 + v11) ^ (v15 ^ (v15 + v11)) & 0xFFFFFFFFFFFFFC00uLL;
            goto LABEL_26;
          }
        }
      }
      if ( (_DWORD)v13 != *(_DWORD *)(a3 + 12) )
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
    while ( v11 )
    {
      v18 = 1024LL;
      if ( (unsigned __int64)(v11 - 1) <= 0x3FF )
        v18 = v11;
      *(_QWORD *)(a3 + 8 * v13 + 40) = v7 & 0xFFFFFFFFFFFFF000uLL | (v18 - 1) & 0x3FF;
      v19 = *(_DWORD *)(a3 + 28);
      *(_QWORD *)(a3 + 32) += v18;
      v13 = (unsigned int)(v19 + 1);
      v7 += v18 << 12;
      *(_DWORD *)(a3 + 28) = v13;
      v11 -= v18;
      if ( v11 && (_DWORD)v13 == *(_DWORD *)(a3 + 12) )
        goto LABEL_8;
    }
  }
LABEL_26:
  result = 0xFFFFFFFFFFLL;
  v21 = (v4 >> 12) & 0xFFFFFFFFFFLL;
  if ( v21 <= qword_140E2DD20 )
  {
    result = *(_QWORD *)(48 * v21 - 0x21FFFFFFFFD8LL) >> 54;
    if ( (*(_QWORD *)(48 * v21 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
      return MiLockPageAndSetDirty(48 * v21 - 0x220000000000LL, 1LL);
  }
  return result;
}
