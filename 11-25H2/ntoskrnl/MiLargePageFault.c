/*
 * XREFs of MiLargePageFault @ 0x1403EC554
 * Callers:
 *     MiResolvePageTablePage @ 0x1402AE990 (MiResolvePageTablePage.c)
 *     MiInPagePageTable @ 0x1403EBC5C (MiInPagePageTable.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x140219200 (MiFlushSingleTbEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x14038BC74 (MiInsertLargeTbFlushEntry.c)
 *     MiNoFaultFound @ 0x1403E2AA0 (MiNoFaultFound.c)
 *     MiCheckSystemNxFault @ 0x1403E2CC4 (MiCheckSystemNxFault.c)
 *     MiValidVirtualizationFault @ 0x1403F2F20 (MiValidVirtualizationFault.c)
 *     MiGetVirtualFaultPageInfo @ 0x1403F30B4 (MiGetVirtualFaultPageInfo.c)
 *     MiCanGrantExecute @ 0x1404A3608 (MiCanGrantExecute.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiLargePageFault(_QWORD *a1, unsigned __int64 a2)
{
  int v4; // ebp
  unsigned __int64 v5; // rcx
  signed __int64 v6; // rax
  __int64 v7; // r9
  signed __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  _BYTE *v11; // rsi
  unsigned __int64 *VirtualFaultPageInfo; // r11
  __int64 v13; // rbx
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r10
  __int64 i; // rcx
  __int16 v17; // ax
  __int64 v18; // rax
  _BYTE v20[208]; // [rsp+40h] [rbp-108h] BYREF

  memset_0(v20, 0, 0xC8uLL);
  v4 = 1;
  v5 = (__int64)(a2 << 25) >> 16 << 25 >> 16;
  while ( v5 >= 0xFFFFF68000000000uLL && v5 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v5 = (__int64)(v5 << 25) >> 16;
    ++v4;
  }
  v6 = MI_READ_PTE_LOCK_FREE(a2);
  v7 = a1[2];
  v8 = v6;
  if ( (v7 & 1) != 0 && *(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    return 0LL;
  if ( (*((_DWORD *)a1 + 20) & 0x80u) == 0 )
  {
    if ( (a1[1] & 2) != 0 )
    {
      if ( (v6 & 0x800) == 0 )
        return 3221225477LL;
      if ( (unsigned int)MiNoFaultFound((__int64)a1, (volatile signed __int64 *)a2, *a1, v7, 0, v6) )
      {
        MiInitializeTbFlushList(
          (__int64)v20,
          (__int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
          20,
          0,
          128);
        MiInsertLargeTbFlushEntry((__int64)v20, v4, a2);
        MiFlushTbList((__int64)v20);
      }
    }
    if ( (a1[1] & 0x10) == 0 )
    {
LABEL_25:
      v10 = a1[2];
      if ( (v10 & 1) != 0 )
      {
        v11 = (_BYTE *)(v10 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( *v11 == 5 )
        {
          if ( (unsigned int)MiValidVirtualizationFault(a1, v11, a2) )
          {
            VirtualFaultPageInfo = (unsigned __int64 *)MiGetVirtualFaultPageInfo(v11, *a1);
            v13 = ((unsigned __int64)v8 >> 12) & 0xFFFFFFFFFFLL;
            v15 = v14 >> 12;
            for ( i = 1LL; v4; --v4 )
            {
              v17 = v15;
              v15 >>= 9;
              v18 = i * (v17 & 0x1FF);
              i <<= 9;
              v13 += v18;
            }
            *VirtualFaultPageInfo = v13 ^ (*VirtualFaultPageInfo ^ v13) & 0xFFF0000000000000uLL;
          }
        }
      }
      return 0LL;
    }
    if ( v8 >= 0 )
    {
      if ( !_bittest((const signed __int32 *)a1 + 20, 8u) )
        MiCheckSystemNxFault((__int64)a1, v8, 7u);
      goto LABEL_25;
    }
    if ( (unsigned int)MiCanGrantExecute(KeGetCurrentThread()->ApcState.Process, *a1) )
    {
      v9 = ((unsigned __int64)v8 >> 12) & 0xFFFFFFFFFFLL;
      if ( v9 <= qword_140E2D9A0 && ((*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        v8 &= ~0x8000000000000000uLL;
        if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
          v8 |= 0x20uLL;
        MiWriteValidPteNewProtection(a2, v8);
        if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
          MiFlushSingleTbEntry(*a1, 0, 32);
        goto LABEL_25;
      }
    }
  }
  return 3221225477LL;
}
