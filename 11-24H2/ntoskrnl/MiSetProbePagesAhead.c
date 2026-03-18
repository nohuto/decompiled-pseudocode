/*
 * XREFs of MiSetProbePagesAhead @ 0x140284570
 * Callers:
 *     MiProbeAndLockPacket @ 0x140282730 (MiProbeAndLockPacket.c)
 *     MmStoreProbeAndLockPages @ 0x140284E70 (MmStoreProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140286070 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MiGetPageTablePfnBuddyRaw @ 0x140227FA0 (MiGetPageTablePfnBuddyRaw.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x140463848 (MiGetPfnPageSizeIndexUnsynchronized.c)
 */

char __fastcall MiSetProbePagesAhead(__int64 a1)
{
  __int64 PageTablePfnBuddyRaw; // rax
  __int64 v3; // r11
  unsigned __int64 v4; // r10
  BOOL v5; // r13d
  int v6; // r12d
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r14
  __int64 i; // r15
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // r8
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rdi
  unsigned __int64 v19; // rcx
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r9
  __int64 v22; // rcx
  __int64 v23; // rsi
  int v25; // [rsp+60h] [rbp+8h] BYREF
  int v26; // [rsp+68h] [rbp+10h] BYREF

  LOBYTE(PageTablePfnBuddyRaw) = *(_DWORD *)(a1 + 72) & 0xF;
  if ( (_BYTE)PageTablePfnBuddyRaw == 1 )
  {
    v3 = 0x40000000000000LL;
    PageTablePfnBuddyRaw = (*(_QWORD *)(a1 + 48) >> 12) & 0xFFFFFFFFFFLL;
    v4 = 0xFFFFDE0000000028uLL;
    if ( PageTablePfnBuddyRaw > (unsigned __int64)qword_140E2DBE0 )
    {
      v5 = 0;
    }
    else
    {
      PageTablePfnBuddyRaw = *(_QWORD *)(48 * PageTablePfnBuddyRaw - 0x21FFFFFFFFD8LL);
      v5 = (PageTablePfnBuddyRaw & 0x40000000000000LL) != 0;
    }
    v6 = *(_DWORD *)(a1 + 96);
    if ( v6 != 3 )
    {
      v7 = *(_QWORD *)(a1 + 48) & 0xF0F0000000000FFFuLL;
      v8 = *(_QWORD *)(a1 + 24) + 8LL;
      for ( i = 0LL; ; ++i )
      {
        v10 = 0xFFFFF68000000000uLL;
        if ( (v8 & 0xFFF) == 0 || v8 > *(_QWORD *)(a1 + 32) )
          break;
        v11 = *(_QWORD *)v8;
        if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v12 = *(_QWORD *)v8;
          if ( (v11 & 1) != 0 && ((v11 & 0x42) == 0 || (v11 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( Process->AddressPolicy != 1 )
            {
              KernelWaitTime = Process[2].KernelWaitTime;
              if ( KernelWaitTime )
              {
                v22 = *(_QWORD *)(KernelWaitTime + 8 * ((v8 >> 3) & 0x1FF));
                if ( (v22 & 0x20) != 0 )
                  v12 = v11 | 0x20;
                v11 = v12 | 0x42;
                if ( (v22 & 0x42) == 0 )
                  v11 = v12;
              }
            }
          }
        }
        LOBYTE(PageTablePfnBuddyRaw) = v11;
        if ( (v11 & 0xF0F0000000000FFFuLL) != v7 )
          goto LABEL_21;
        v13 = (v11 >> 12) & 0xFFFFFFFFFFLL;
        if ( v13 <= qword_140E2DBE0
          && (v14 = 48 * v13, PageTablePfnBuddyRaw = *(_QWORD *)(v14 + v4), (PageTablePfnBuddyRaw & v3) != 0) )
        {
          if ( !v5 )
            goto LABEL_21;
          v23 = v14 - 0x220000000000LL;
          PageTablePfnBuddyRaw = qword_140E374B8;
          if ( qword_140E374B8 )
          {
            if ( ((*(_QWORD *)(v23 + 40) >> 60) & 7) == 1 )
            {
              v15 = 0xAAAAAAAAAAAAAAABuLL * (v14 >> 4);
              if ( qword_140E374B8 )
              {
                do
                {
                  v16 = *(_QWORD *)(PageTablePfnBuddyRaw + 24);
                  if ( v15 < v16 )
                  {
                    PageTablePfnBuddyRaw = *(_QWORD *)PageTablePfnBuddyRaw;
                  }
                  else
                  {
                    if ( v15 - v16 < *(_QWORD *)(PageTablePfnBuddyRaw + 32) )
                      goto LABEL_21;
                    PageTablePfnBuddyRaw = *(_QWORD *)(PageTablePfnBuddyRaw + 8);
                  }
                }
                while ( PageTablePfnBuddyRaw );
              }
            }
          }
          v18 = (_QWORD *)(v23 + 40);
          PageTablePfnBuddyRaw = *(_QWORD *)(v23 + 40);
          if ( PageTablePfnBuddyRaw >= 0 )
          {
            if ( (*v18 & 0x10000000000LL) != 0 )
            {
              v25 = 0;
              v26 = 0;
              LODWORD(PageTablePfnBuddyRaw) = MiGetPfnPageSizeIndexUnsynchronized(v23, &v25, &v26);
              if ( (_DWORD)PageTablePfnBuddyRaw == 3 || v25 != 6 )
                goto LABEL_21;
              v4 = 0xFFFFDE0000000028uLL;
              v3 = 0x40000000000000LL;
            }
            else
            {
              v19 = (__int64)(*(_QWORD *)(v23 + 8) << 25) >> 16;
              LOBYTE(PageTablePfnBuddyRaw) = 0;
              if ( v19 >= 0xFFFFF68000000000uLL )
              {
                LOBYTE(PageTablePfnBuddyRaw) = -1;
                if ( v19 <= 0xFFFFF6FFFFFFFFFFuLL )
                {
                  PageTablePfnBuddyRaw = *v18 & 0xFFFFFFFFFFLL;
                  if ( PageTablePfnBuddyRaw != 0x3FFFFFFFFELL )
                  {
                    if ( (*(_DWORD *)(v23 + 32) & 0x200000) == 0
                      || (PageTablePfnBuddyRaw = *(_QWORD *)(v23 + 24),
                          (PageTablePfnBuddyRaw & 0x3FFFFFFFFFFFFFFFLL) != 0)
                      || (LODWORD(PageTablePfnBuddyRaw) = *(_DWORD *)(v23 + 32), !(_WORD)PageTablePfnBuddyRaw) )
                    {
                      if ( (*(_DWORD *)(v23 + 32) & 0x80000) == 0 )
                      {
                        PageTablePfnBuddyRaw = (__int64)MiGetPageTablePfnBuddyRaw(v23);
                        if ( PageTablePfnBuddyRaw != 0x10000000000LL )
                          break;
                      }
                    }
                  }
                }
              }
            }
          }
          if ( !v6 )
          {
            if ( ((*v18 >> 60) & 7) != 1
              && (*(_QWORD *)(v23 + 40) & 0x10000000000LL) == 0
              && *(__int64 *)(v23 + 8) >= 0
              && (PageTablePfnBuddyRaw = *(_QWORD *)(v23 + 8)) != 0
              || (PageTablePfnBuddyRaw = *(_QWORD *)(v23 + 40), PageTablePfnBuddyRaw < 0)
              && (LODWORD(PageTablePfnBuddyRaw) = *(_DWORD *)(a1 + 72), (PageTablePfnBuddyRaw & 0x10) != 0) )
            {
LABEL_21:
              v10 = 0xFFFFF68000000000uLL;
              break;
            }
          }
        }
        else if ( v5 )
        {
          goto LABEL_21;
        }
        v8 += 8LL;
      }
      if ( i )
      {
        v17 = (__int64)((*(_QWORD *)(a1 + 24) << 25) - (v10 << 25)) >> 16;
        *(_QWORD *)(a1 + 152) = v17;
        *(_QWORD *)(a1 + 168) = -1LL;
        PageTablePfnBuddyRaw = (i << 12) + v17 + 4095;
        *(_DWORD *)(a1 + 72) |= 0x20u;
        *(_QWORD *)(a1 + 160) = PageTablePfnBuddyRaw;
      }
    }
  }
  return PageTablePfnBuddyRaw;
}
