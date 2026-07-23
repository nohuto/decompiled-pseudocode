/*
 * XREFs of MiLargePageFault @ 0x1404C1204
 * Callers:
 *     MiResolvePageTablePage @ 0x140239FB0 (MiResolvePageTablePage.c)
 *     MiInPagePageTable @ 0x140391778 (MiInPagePageTable.c)
 * Callees:
 *     MiNoFaultFound @ 0x140203670 (MiNoFaultFound.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x14021C25C (MiInsertLargeTbFlushEntry.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     MiValidVirtualizationFault @ 0x14042845C (MiValidVirtualizationFault.c)
 *     MiGetVirtualFaultPageInfo @ 0x1404285F0 (MiGetVirtualFaultPageInfo.c)
 *     MiCheckSystemNxFault @ 0x1404939B0 (MiCheckSystemNxFault.c)
 *     MiCanGrantExecute @ 0x14049E378 (MiCanGrantExecute.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiLargePageFault(__int64 a1, unsigned __int64 a2)
{
  int v4; // ebp
  unsigned __int64 v5; // rcx
  signed __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  signed __int64 v9; // rbx
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  _BYTE *v13; // rsi
  _QWORD *VirtualFaultPageInfo; // r11
  __int64 v15; // rbx
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r10
  __int64 i; // rcx
  __int16 v19; // ax
  __int64 v20; // rax
  _BYTE v22[208]; // [rsp+40h] [rbp-108h] BYREF

  memset_0(v22, 0, 0xC8uLL);
  v4 = 1;
  v5 = (__int64)(a2 << 25) >> 16 << 25 >> 16;
  while ( v5 >= 0xFFFFF68000000000uLL && v5 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v5 = (__int64)(v5 << 25) >> 16;
    ++v4;
  }
  v6 = MI_READ_PTE_LOCK_FREE(a2);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = v6;
  if ( (v8 & 1) != 0 && *(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 8) & 2) != 0 )
    {
      if ( (v6 & 0x800) == 0 )
        return 3221225477LL;
      if ( (unsigned int)MiNoFaultFound(a1, (volatile signed __int64 *)a2, *(_QWORD *)a1, v8, 0, v6) )
      {
        MiInitializeTbFlushList(
          (__int64)v22,
          (__int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
          20,
          0,
          128);
        MiInsertLargeTbFlushEntry((__int64)v22, v4, a2);
        MiFlushTbList((__int64)v22);
      }
    }
    if ( (*(_BYTE *)(a1 + 8) & 0x10) == 0 )
    {
LABEL_25:
      v12 = *(_QWORD *)(a1 + 16);
      if ( (v12 & 1) != 0 )
      {
        v13 = (_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( *v13 == 5 )
        {
          if ( (unsigned int)MiValidVirtualizationFault((_QWORD *)a1, (__int64)v13, a2, v8) )
          {
            VirtualFaultPageInfo = (_QWORD *)MiGetVirtualFaultPageInfo((__int64)v13, *(_QWORD *)a1);
            v15 = ((unsigned __int64)v9 >> 12) & 0xFFFFFFFFFFLL;
            v17 = v16 >> 12;
            for ( i = 1LL; v4; --v4 )
            {
              v19 = v17;
              v17 >>= 9;
              v20 = i * (v19 & 0x1FF);
              i <<= 9;
              v15 += v20;
            }
            *VirtualFaultPageInfo = v15 ^ (*VirtualFaultPageInfo ^ v15) & 0xFFF0000000000000uLL;
          }
        }
      }
      return 0LL;
    }
    if ( v9 >= 0 )
    {
      if ( !_bittest((const signed __int32 *)(a1 + 80), 8u) )
        MiCheckSystemNxFault(a1, v9, 7u);
      goto LABEL_25;
    }
    if ( (unsigned int)MiCanGrantExecute((__int64)KeGetCurrentThread()->ApcState.Process, *(_QWORD *)a1, v7, v8) )
    {
      v11 = ((unsigned __int64)v9 >> 12) & 0xFFFFFFFFFFLL;
      if ( v11 <= qword_140E2DD20 && ((*(_QWORD *)(48 * v11 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        v9 &= ~0x8000000000000000uLL;
        if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
          v9 |= 0x20uLL;
        MiWriteValidPteNewProtection(a2, v9, v10);
        if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
          MiFlushSingleTbEntry(*(_QWORD *)a1, 0, 32);
        goto LABEL_25;
      }
    }
  }
  return 3221225477LL;
}
