/*
 * XREFs of MiSetProbePagesAhead @ 0x140239B00
 * Callers:
 *     MiProbeAndLockPacket @ 0x140237CC0 (MiProbeAndLockPacket.c)
 *     MmStoreProbeAndLockPages @ 0x1402E9990 (MmStoreProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140390AC0 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MiGetPageTablePfnBuddyRaw @ 0x1402FB220 (MiGetPageTablePfnBuddyRaw.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x14041DC14 (MiGetPfnPageSizeIndexUnsynchronized.c)
 */

char __fastcall MiSetProbePagesAhead(__int64 a1)
{
  __int64 PageTablePfnBuddyRaw; // rax
  __int64 v3; // rdx
  __int64 v4; // r11
  unsigned __int64 v5; // r10
  BOOL v6; // r13d
  int v7; // r12d
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r14
  __int64 i; // r15
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  __int64 v15; // r8
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rdi
  unsigned __int64 v20; // rcx
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r9
  __int64 v23; // rcx
  __int64 v24; // rsi
  int v26; // [rsp+60h] [rbp+8h] BYREF
  int v27; // [rsp+68h] [rbp+10h] BYREF

  LOBYTE(PageTablePfnBuddyRaw) = *(_DWORD *)(a1 + 72) & 0xF;
  if ( (_BYTE)PageTablePfnBuddyRaw == 1 )
  {
    v3 = 0xFFFFFFFFFFLL;
    v4 = 0x40000000000000LL;
    PageTablePfnBuddyRaw = (*(_QWORD *)(a1 + 48) >> 12) & 0xFFFFFFFFFFLL;
    v5 = 0xFFFFDE0000000028uLL;
    if ( PageTablePfnBuddyRaw > (unsigned __int64)qword_140E2DD20 )
    {
      v6 = 0;
    }
    else
    {
      PageTablePfnBuddyRaw = *(_QWORD *)(48 * PageTablePfnBuddyRaw - 0x21FFFFFFFFD8LL);
      v6 = (PageTablePfnBuddyRaw & 0x40000000000000LL) != 0;
    }
    v7 = *(_DWORD *)(a1 + 96);
    if ( v7 != 3 )
    {
      v8 = *(_QWORD *)(a1 + 48) & 0xF0F0000000000FFFuLL;
      v9 = *(_QWORD *)(a1 + 24) + 8LL;
      for ( i = 0LL; ; ++i )
      {
        v11 = 0xFFFFF68000000000uLL;
        if ( (v9 & 0xFFF) == 0 || v9 > *(_QWORD *)(a1 + 32) )
          break;
        v12 = *(_QWORD *)v9;
        if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v13 = *(_QWORD *)v9;
          if ( (v12 & 1) != 0 )
          {
            if ( ((v12 & 0x42) == 0 || (v12 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              if ( Process->AddressPolicy != 1 )
              {
                KernelWaitTime = Process[2].KernelWaitTime;
                if ( KernelWaitTime )
                {
                  v23 = *(_QWORD *)(KernelWaitTime + 8 * ((v9 >> 3) & 0x1FF));
                  if ( (v23 & 0x20) != 0 )
                    v13 = v12 | 0x20;
                  v12 = v13 | 0x42;
                  if ( (v23 & 0x42) == 0 )
                    v12 = v13;
                }
              }
            }
            v3 = 0xFFFFFFFFFFLL;
          }
        }
        LOBYTE(PageTablePfnBuddyRaw) = v12;
        if ( (v12 & 0xF0F0000000000FFFuLL) != v8 )
          goto LABEL_22;
        v14 = (v12 >> 12) & 0xFFFFFFFFFFLL;
        if ( v14 <= qword_140E2DD20
          && (v15 = 48 * v14, PageTablePfnBuddyRaw = *(_QWORD *)(v15 + v5), (PageTablePfnBuddyRaw & v4) != 0) )
        {
          if ( !v6 )
            goto LABEL_22;
          v24 = v15 - 0x220000000000LL;
          PageTablePfnBuddyRaw = qword_140E375F8;
          if ( qword_140E375F8 && ((*(_QWORD *)(v24 + 40) >> 60) & 7) == 1 )
          {
            v16 = 0xAAAAAAAAAAAAAAABuLL * (v15 >> 4);
            if ( qword_140E375F8 )
            {
              do
              {
                v17 = *(_QWORD *)(PageTablePfnBuddyRaw + 24);
                if ( v16 < v17 )
                {
                  PageTablePfnBuddyRaw = *(_QWORD *)PageTablePfnBuddyRaw;
                }
                else
                {
                  if ( v16 - v17 < *(_QWORD *)(PageTablePfnBuddyRaw + 32) )
                    goto LABEL_22;
                  PageTablePfnBuddyRaw = *(_QWORD *)(PageTablePfnBuddyRaw + 8);
                }
              }
              while ( PageTablePfnBuddyRaw );
            }
            v3 = 0xFFFFFFFFFFLL;
          }
          v19 = (_QWORD *)(v24 + 40);
          PageTablePfnBuddyRaw = *(_QWORD *)(v24 + 40);
          if ( PageTablePfnBuddyRaw >= 0 )
          {
            if ( (*v19 & 0x10000000000LL) != 0 )
            {
              v26 = 0;
              v27 = 0;
              LODWORD(PageTablePfnBuddyRaw) = MiGetPfnPageSizeIndexUnsynchronized(v24, &v26, &v27);
              if ( (_DWORD)PageTablePfnBuddyRaw == 3 || v26 != 6 )
                goto LABEL_22;
              v5 = 0xFFFFDE0000000028uLL;
              v4 = 0x40000000000000LL;
            }
            else
            {
              v20 = (__int64)(*(_QWORD *)(v24 + 8) << 25) >> 16;
              LOBYTE(PageTablePfnBuddyRaw) = 0;
              if ( v20 >= 0xFFFFF68000000000uLL )
              {
                LOBYTE(PageTablePfnBuddyRaw) = -1;
                if ( v20 <= 0xFFFFF6FFFFFFFFFFuLL )
                {
                  PageTablePfnBuddyRaw = *v19 & 0xFFFFFFFFFFLL;
                  if ( PageTablePfnBuddyRaw != 0x3FFFFFFFFELL )
                  {
                    if ( (*(_DWORD *)(v24 + 32) & 0x200000) == 0
                      || (PageTablePfnBuddyRaw = *(_QWORD *)(v24 + 24),
                          v3 = 0x3FFFFFFFFFFFFFFFLL,
                          (PageTablePfnBuddyRaw & 0x3FFFFFFFFFFFFFFFLL) != 0)
                      || (LODWORD(PageTablePfnBuddyRaw) = *(_DWORD *)(v24 + 32), !(_WORD)PageTablePfnBuddyRaw) )
                    {
                      if ( (*(_DWORD *)(v24 + 32) & 0x80000) == 0 )
                      {
                        PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(v24, v3, 0xFFFFF68000000000uLL);
                        if ( PageTablePfnBuddyRaw != 0x10000000000LL )
                          break;
                      }
                    }
                  }
                }
              }
            }
          }
          if ( !v7 )
          {
            if ( ((*v19 >> 60) & 7) != 1
              && (*(_QWORD *)(v24 + 40) & 0x10000000000LL) == 0
              && *(__int64 *)(v24 + 8) >= 0
              && (PageTablePfnBuddyRaw = *(_QWORD *)(v24 + 8)) != 0
              || (PageTablePfnBuddyRaw = *(_QWORD *)(v24 + 40), PageTablePfnBuddyRaw < 0)
              && (LODWORD(PageTablePfnBuddyRaw) = *(_DWORD *)(a1 + 72), (PageTablePfnBuddyRaw & 0x10) != 0) )
            {
LABEL_22:
              v11 = 0xFFFFF68000000000uLL;
              break;
            }
          }
          v3 = 0xFFFFFFFFFFLL;
        }
        else if ( v6 )
        {
          goto LABEL_22;
        }
        v9 += 8LL;
      }
      if ( i )
      {
        v18 = (__int64)((*(_QWORD *)(a1 + 24) << 25) - (v11 << 25)) >> 16;
        *(_QWORD *)(a1 + 152) = v18;
        *(_QWORD *)(a1 + 168) = -1LL;
        PageTablePfnBuddyRaw = (i << 12) + v18 + 4095;
        *(_DWORD *)(a1 + 72) |= 0x20u;
        *(_QWORD *)(a1 + 160) = PageTablePfnBuddyRaw;
      }
    }
  }
  return PageTablePfnBuddyRaw;
}
