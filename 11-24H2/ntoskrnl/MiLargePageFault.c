/*
 * XREFs of MiLargePageFault @ 0x1403F38B4
 * Callers:
 *     MiResolvePageTablePage @ 0x1402D86D0 (MiResolvePageTablePage.c)
 *     MiInPagePageTable @ 0x1403F2FCC (MiInPagePageTable.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushSingleTbEntry @ 0x14022A7E0 (MiFlushSingleTbEntry.c)
 *     MiNoFaultFound @ 0x140233220 (MiNoFaultFound.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403A4A2C (MiInsertLargeTbFlushEntry.c)
 *     MiValidVirtualizationFault @ 0x1404359DC (MiValidVirtualizationFault.c)
 *     MiGetVirtualFaultPageInfo @ 0x140435B70 (MiGetVirtualFaultPageInfo.c)
 *     MiCheckSystemNxFault @ 0x140499024 (MiCheckSystemNxFault.c)
 *     MiCanGrantExecute @ 0x1404A3418 (MiCanGrantExecute.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiLargePageFault(_QWORD *a1, unsigned __int64 a2)
{
  int v4; // ebp
  unsigned __int64 v5; // rcx
  signed __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  _BYTE *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 *VirtualFaultPageInfo; // r11
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
          (__int64)v22,
          (__int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
          20,
          0,
          128);
        MiInsertLargeTbFlushEntry((__int64)v22, v4, a2);
        MiFlushTbList((__int64)v22);
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
            VirtualFaultPageInfo = (unsigned __int64 *)MiGetVirtualFaultPageInfo(v11, *a1, v12, v13);
            v15 = ((unsigned __int64)v8 >> 12) & 0xFFFFFFFFFFLL;
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
    if ( v8 >= 0 )
    {
      if ( !_bittest((const signed __int32 *)a1 + 20, 8u) )
        MiCheckSystemNxFault(a1, v8, 7LL);
      goto LABEL_25;
    }
    if ( (unsigned int)MiCanGrantExecute(KeGetCurrentThread()->ApcState.Process, *a1) )
    {
      v9 = ((unsigned __int64)v8 >> 12) & 0xFFFFFFFFFFLL;
      if ( v9 <= qword_140E2DBE0 && ((*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
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
